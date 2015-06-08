package vc.duvido;

import org.qtproject.qt5.android.bindings.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import android.net.*;
import android.app.*;
import android.content.*;
import android.util.*;
import android.os.*;
import android.provider.*;
import com.facebook.appevents.*;

public class DuvidoActivity extends QtActivity {

    public static final int RESULT_GALLERY = 0;

    private static DuvidoActivity instance;
    public static DuvidoActivity getInstance() {
        return instance;
    }

    public DuvidoActivity() {
        instance = this;
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        switch (requestCode) {
        case RESULT_GALLERY:
            Uri imageUri = data.getData();
            try {
                File photo = File.createTempFile("gallery_photo", null, getCacheDir());
                copyInputStreamToFile(getContentResolver().openInputStream(imageUri), photo);
                onPhotoFetched(photo.getAbsolutePath());
            } catch (Exception e) {
                onPhotoFetched(null);
            }
            break;
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

    public void fetchPhotoFromGallery() {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        startActivityForResult(intent, RESULT_GALLERY);
    }


    public native void onPhotoFetched(String filePath);

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
