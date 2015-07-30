package vc.duvido.gcm;

import android.content.Intent;

import com.google.android.gms.iid.InstanceIDListenerService;

public class TokenListenerService extends InstanceIDListenerService {
    @Override
    public void onTokenRefresh() {
        startService(new Intent(this, RegistrationIntentService.class));
    }
}

