package vc.duvido;

import org.qtproject.qt5.android.bindings.*;
import java.lang.*;
import java.util.*;
import android.app.*;
import android.content.*;
import android.util.*;
import android.os.*;
import com.facebook.appevents.*;

public class DuvidoActivity extends QtActivity {

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
        FacebookBridge.submitActivityResult(requestCode, resultCode, data);
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

}
