package vc.duvido;

import java.lang.*;
import java.util.*;
import com.facebook.*;
import com.facebook.login.*;
import android.app.*;
import android.util.*;
import android.content.*;

public class FacebookBridge {

    public static final int RESULT_WEBLOGIN = 10;

    private static CallbackManager callbackManager;
    private static AccessTokenTracker accessTokenTracker;

    public static void initialize() {
        FacebookSdk.sdkInitialize(DuvidoActivity.getInstance());
        FacebookSdk.setIsDebugEnabled(true);

        accessTokenTracker = new AccessTokenTracker() {
            @Override
            protected void onCurrentAccessTokenChanged(AccessToken oldAccessToken, AccessToken newAccessToken) {
                if (newAccessToken != null)
                    onAccessTokenReceived(newAccessToken.getToken());
            }
        };

        callbackManager = CallbackManager.Factory.create();

        LoginManager.getInstance().registerCallback(callbackManager, new FacebookCallback<LoginResult>() {
           @Override
           public void onSuccess(LoginResult loginResult) {
               onLoginSuccess();
           }

           @Override
           public void onCancel() {
               onLoginCancel();
           }

           @Override
           public void onError(FacebookException e) {
               onLoginError();
           }
       });
    }

    public static void submitActivityResult(int requestCode, int resultCode, Intent data) {
        switch (requestCode) {
        case RESULT_WEBLOGIN:
            if (resultCode == Activity.RESULT_OK) {
                onAccessTokenReceived(data.getStringExtra("token"));
            }
            break;
        default:
            callbackManager.onActivityResult(requestCode, resultCode, data);
        }
    }

    public static void login() {

        if (DuvidoActivity.getInstance().hasFacebookApp()) {
            Log.i("login", "app");
            ArrayList<String> perms = new ArrayList<String>();
            perms.add("user_friends");
            perms.add("public_profile");
            perms.add("user_birthday");
            perms.add("email");
            LoginManager.getInstance().logInWithReadPermissions(DuvidoActivity.getInstance(), perms);
        }
        else {
            Log.i("login", "web");
            DuvidoActivity.getInstance().startWebLogin();
        }
    }

    public native static void onLoginSuccess();
    public native static void onLoginCancel();
    public native static void onLoginError();
    public native static void onAccessTokenReceived(String token);

}
