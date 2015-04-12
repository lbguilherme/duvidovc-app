package vc.duvido;

import org.qtproject.qt5.android.bindings.QtActivity;
import java.lang.*;
import java.util.*;
import android.app.*;
import android.content.*;
import android.util.*;
import android.os.*;

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

}
