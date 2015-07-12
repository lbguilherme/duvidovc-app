package vc.duvido;

import org.qtproject.qt5.android.bindings.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import android.net.*;
import android.app.*;
import android.content.*;
import android.content.pm.*;
import android.util.*;
import android.os.*;
import android.provider.*;
import com.facebook.appevents.*;

public class DuvidoActivity extends QtActivity {

    public static final int RESULT_GALLERY = 0;
    public static final int RESULT_CAMERA = 1;

    private String cameraPhotoPath;

    private static DuvidoActivity instance;
    public static DuvidoActivity getInstance() {
        return instance;
    }

    public DuvidoActivity() {
        instance = this;
    }

    @Override
    public void onCreate(Bundle savedInstanceState) {
        Tracker.initialize(this);
        super.onCreate(savedInstanceState);
    }

    @Override
    protected void onDestroy() {
        Tracker.flush();
        super.onDestroy();
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        switch (requestCode) {
        case RESULT_GALLERY:
            if (resultCode == RESULT_OK) {
                Uri imageUri = data.getData();
                try {
                    File photo = File.createTempFile("gallery", null, getCacheDir());
                    photo.deleteOnExit();
                    copyInputStreamToFile(getContentResolver().openInputStream(imageUri), photo);
                    onPhotoFetched(photo.getAbsolutePath());
                } catch (Exception e) {
                    onPhotoFetched(null);
                }
            } else {
                onPhotoFetched(null);
            }
            break;
        case RESULT_CAMERA:
            if (resultCode == RESULT_OK) {
                 onPhotoFetched(cameraPhotoPath);
             } else {
                 onPhotoFetched(null);
             }
            break;
        default:
            FacebookBridge.submitActivityResult(requestCode, resultCode, data);
        }

    }

    @Override
    protected void onResume() {
        super.onResume();
        AppEventsLogger.activateApp(this);
    }

    @Override
    protected void onPause() {
        super.onPause();
        AppEventsLogger.deactivateApp(this);
    }

    public boolean hasGallery() {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        return intent.resolveActivity(getPackageManager()) != null;
    }

    public boolean hasCamera() {
        Intent intent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        return intent.resolveActivity(getPackageManager()) != null;
    }

    public void fetchPhotoFromGallery() {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        startActivityForResult(intent, RESULT_GALLERY);
    }

    public void fetchPhotoFromCamera() {
        Intent intent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        File dir = new File(Environment.getExternalStorageDirectory()+File.separator+"Pictures"+File.separator+"Duvido");
        dir.mkdirs();
        File photo;
        try {
            photo = File.createTempFile("photo", ".jpg", dir);
        } catch (Exception e) {
            onPhotoFetched(null);
            return;
        }
        cameraPhotoPath = photo.getAbsolutePath();
        intent.putExtra(MediaStore.EXTRA_OUTPUT, Uri.fromFile(photo));
        startActivityForResult(intent, RESULT_CAMERA);
    }

    public native void onPhotoFetched(String filePath);

    public boolean hasFacebookApp() {
        try {
            getPackageManager().getApplicationInfo("com.facebook.katana", 0);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            return false;
        }
    }

    public void startWebLogin() {
        Intent intent = new Intent(this, WebLoginActivity.class);
        startActivityForResult(intent, FacebookBridge.RESULT_WEBLOGIN);
    }

    private void copyInputStreamToFile(InputStream in, File file) throws IOException, FileNotFoundException {
        OutputStream out = new FileOutputStream(file);
        byte[] buf = new byte[4096];
        int len;
        while ((len = in.read(buf)) > 0) {
            out.write(buf, 0, len);
        }
        out.close();
        in.close();
    }
}
