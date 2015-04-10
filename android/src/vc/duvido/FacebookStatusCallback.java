package vc.duvido;

import java.lang.*;
import com.facebook.*;

public class FacebookStatusCallback implements FacebookCallback {

    public native void onSuccess(Object result);
    public native void onCancel();
    public native void onError(FacebookException error);

}
