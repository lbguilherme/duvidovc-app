package vc.duvido;

import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.provider.MediaStore;
import android.telephony.TelephonyManager;

import com.facebook.appevents.AppEventsLogger;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.GooglePlayServicesUtil;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

import vc.duvido.gcm.RegistrationIntentService;

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
            if (resultCode == RESULT_OK) {
                Uri imageUri = data.getData();
                try {
                    File photo;
                    photo = File.createTempFile("gallery", null, getCacheDir());
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

    public void requestGcmToken() {
        startService(new Intent(this, RegistrationIntentService.class));
    }

    public boolean hasGallery() {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        return intent.resolveActivity(getPackageManager()) != null;
    }

    public void fetchPhotoFromGallery() {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        startActivityForResult(intent, RESULT_GALLERY);
    }

    public native void onPhotoFetched(String filePath);

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

    public boolean hasFacebookApp() {
        try {
            getPackageManager().getApplicationInfo("com.facebook.katana", 0);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            return false;
        }
    }

    public boolean hasGooglePlayServices() {
        return GooglePlayServicesUtil.isGooglePlayServicesAvailable(this) == ConnectionResult.SUCCESS;
    }

    public String getPhoneNumber() {
        return ((TelephonyManager)getSystemService(TELEPHONY_SERVICE)).getLine1Number();
    }

    public String getAndroidVersion() {
         String release = Build.VERSION.RELEASE;
         int sdkVersion = Build.VERSION.SDK_INT;
         return sdkVersion + " (" + release +")";
    }

    public String getDeviceName() {
        return Build.DEVICE;
    }

    public String getDeviceBrand() {
        return Build.MANUFACTURER;
    }

    public String getDeviceModel() {
        return Build.MODEL;
    }
}
