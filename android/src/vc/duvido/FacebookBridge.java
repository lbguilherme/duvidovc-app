package vc.duvido;

import android.app.Activity;
import android.content.Intent;

import com.facebook.AccessToken;
import com.facebook.AccessTokenTracker;
import com.facebook.CallbackManager;
import com.facebook.FacebookCallback;
import com.facebook.FacebookException;
import com.facebook.FacebookSdk;
import com.facebook.login.LoginManager;
import com.facebook.login.LoginResult;

import java.util.ArrayList;

public class FacebookBridge {

    public static final int RESULT_WEBLOGIN = 10;

    private static CallbackManager callbackManager;

    public static void initialize() {
        FacebookSdk.sdkInitialize(DuvidoActivity.getInstance());
        FacebookSdk.setIsDebugEnabled(true);

        new AccessTokenTracker() {
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
            ArrayList<String> perms = new ArrayList<String>();
            perms.add("user_friends");
            perms.add("public_profile");
            perms.add("user_birthday");
            perms.add("email");
            LoginManager.getInstance().logInWithReadPermissions(DuvidoActivity.getInstance(), perms);
        }
        else {
            DuvidoActivity.getInstance().startWebLogin();
        }
    }

    public native static void onLoginSuccess();
    public native static void onLoginCancel();
    public native static void onLoginError();
    public native static void onAccessTokenReceived(String token);

}
