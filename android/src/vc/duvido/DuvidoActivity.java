package vc.duvido;

import org.qtproject.qt5.android.bindings.*;
import java.lang.*;
import java.util.*;
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
            onPhotoFetched(data.getData());
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

    public native void onPhotoFetched(Uri uri);

}
