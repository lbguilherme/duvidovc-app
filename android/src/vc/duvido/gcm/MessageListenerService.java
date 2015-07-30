package vc.duvido.gcm;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;

import com.google.android.gms.gcm.GcmListenerService;

import java.util.Random;

import vc.duvido.DuvidoActivity;
import vc.duvido.R;

public class MessageListenerService extends GcmListenerService {
    @Override
    public void onMessageReceived(String from, Bundle data) {
        Intent intent = new Intent(this, DuvidoActivity.class);
        PendingIntent pIntent = PendingIntent.getActivity(this, 0, intent, 0);

        String title = "";
        String body = "";

        if (data.containsKey("mp_message")) { // Mixpanel's notification
            title = "Duvido.vc";
            body = data.getString("mp_message");
        } else if (data.containsKey("type")) { // Standard Duvido.vc server message
            String type = data.getString("type");
            if (type.equals("basic-forward")) {
                title = data.getString("title");
                body = data.getString("body");
            } else {
                // This type is unknown. Likely meant for a more up-to-date app.
                return;
            }
        } else {
            // What message is this?
            return;
        }

        Bitmap duvidoIcon = BitmapFactory.decodeResource(getResources(), R.drawable.icon);
        duvidoIcon = Bitmap.createScaledBitmap(duvidoIcon, 96, 96, false);

        Notification notification = new Notification.Builder(this)
                .setContentTitle(title)
                .setContentText(body)
                .setSmallIcon(R.drawable.notification_white)
                .setLargeIcon(duvidoIcon)
                .setContentIntent(pIntent)
                .setAutoCancel(true)
                .setVibrate(new long[]{0, 200, 100, 400})
                .getNotification();

        NotificationManager notificationManager =
                (NotificationManager)getSystemService(NOTIFICATION_SERVICE);

        notificationManager.notify(new Random().nextInt(), notification);
    }
}
