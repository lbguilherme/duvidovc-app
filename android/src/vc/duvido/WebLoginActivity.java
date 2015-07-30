package vc.duvido;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.view.KeyEvent;
import android.view.Window;
import android.webkit.WebView;
import android.webkit.WebViewClient;

public class WebLoginActivity extends Activity {
    private WebView webView;

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        getWindow().requestFeature(Window.FEATURE_NO_TITLE);
        webView = new WebView(this);
        webView.loadUrl("http://www.facebook.com/dialog/oauth?client_id=1497042670584041&redirect_uri=http://duvido.vc/oauth&response_type=token&scope=user_friends,public_profile,user_birthday,email");
        webView.setWebViewClient(new WebViewClient() {
            @Override
            public boolean shouldOverrideUrlLoading(WebView view, String url) {
                if (url.matches("http://duvido.vc/oauth.*")) {
                    url = url.replace("#access_", "");
                    if (!url.contains("/oauth?token=")) { // User denied
                        finish();
                    }
                    else {
                        String token = url.split("token=")[1].split("&")[0];
                        Intent result = new Intent();
                        result.putExtra("token", token);
                        setResult(RESULT_OK, result);
                        finish();
                    }
                } else if (url.matches("https?://(www|m).facebook.com.*")) {
                    view.loadUrl(url);
                }
                return true;
            }
        });

        this.setContentView(webView);
    }

    @Override
    public boolean onKeyDown(final int keyCode, @NonNull final KeyEvent event) {
        if ((keyCode == KeyEvent.KEYCODE_BACK) && webView.canGoBack()) {
            webView.goBack();
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }
}
