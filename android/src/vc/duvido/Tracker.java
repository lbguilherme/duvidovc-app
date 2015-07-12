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

    static public void identify(String userId) {
        mixpanel.identify(userId);
        mixpanel.getPeople().identify(userId);
    }

    static public void setUserProperty(String property, long value) {
        mixpanel.getPeople().set(property, value);
    }

    static public void setUserProperty(String property, String value) {
        mixpanel.getPeople().set(property, value);
    }

    static public void setUserProperty(String property, double value) {
        mixpanel.getPeople().set(property, value);
    }

    static public void setUserPropertyOnce(String property, long value) {
        mixpanel.getPeople().setOnce(property, value);
    }

    static public void setUserPropertyOnce(String property, String value) {
        mixpanel.getPeople().setOnce(property, value);
    }

    static public void setUserPropertyOnce(String property, double value) {
        mixpanel.getPeople().setOnce(property, value);
    }

    static public void incrementUserProperty(String property, int value) {
        mixpanel.getPeople().increment(property, value);
    }
}
