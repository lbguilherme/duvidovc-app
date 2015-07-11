package vc.duvido;

import android.content.*;
import com.mixpanel.android.mpmetrics.*;
import org.json.*;

public class Tracker {
    public static final String MIXPANEL_TOKEN = "3f5044023c93ed5fbc36b82d66cfc4f8";

    static private MixpanelAPI mixpanel;

    static public void initialize(Context context) {
        mixpanel = MixpanelAPI.getInstance(context, MIXPANEL_TOKEN);
    }

    static public void flush() {
        mixpanel.flush();
    }

    static public void event(String event) {
        mixpanel.track(event);
    }

    static public void event(String event, String jsonParams) {
        try {
            mixpanel.track(event, new JSONObject(jsonParams));
        } catch (JSONException e) {
            mixpanel.track(event);
        }
    }
}

