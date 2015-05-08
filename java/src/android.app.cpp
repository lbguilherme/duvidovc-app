#include "java-core.hpp"
#include <memory>
#include "android.animation.Animator.hpp"
#include "android.app.ActionBar.hpp"
#include "android.app.Activity.hpp"
#include "android.app.ActivityGroup.hpp"
#include "android.app.ActivityManager.hpp"
#include "android.app.AlarmManager.hpp"
#include "android.app.AlertDialog.hpp"
#include "android.app.AliasActivity.hpp"
#include "android.app.Application.hpp"
#include "android.app.ApplicationErrorReport.hpp"
#include "android.app.DatePickerDialog.hpp"
#include "android.app.Dialog.hpp"
#include "android.app.DialogFragment.hpp"
#include "android.app.DownloadManager.hpp"
#include "android.app.ExpandableListActivity.hpp"
#include "android.app.Fragment.hpp"
#include "android.app.FragmentBreadCrumbs.hpp"
#include "android.app.FragmentManager.hpp"
#include "android.app.FragmentTransaction.hpp"
#include "android.app.Instrumentation.hpp"
#include "android.app.IntentService.hpp"
#include "android.app.KeyguardManager.hpp"
#include "android.app.LauncherActivity.hpp"
#include "android.app.ListActivity.hpp"
#include "android.app.ListFragment.hpp"
#include "android.app.LoaderManager.hpp"
#include "android.app.LocalActivityManager.hpp"
#include "android.app.NativeActivity.hpp"
#include "android.app.Notification.hpp"
#include "android.app.NotificationManager.hpp"
#include "android.app.PendingIntent.hpp"
#include "android.app.ProgressDialog.hpp"
#include "android.app.SearchManager.hpp"
#include "android.app.SearchableInfo.hpp"
#include "android.app.Service.hpp"
#include "android.app.TabActivity.hpp"
#include "android.app.TimePickerDialog.hpp"
#include "android.app.UiModeManager.hpp"
#include "android.app.WallpaperInfo.hpp"
#include "android.app.WallpaperManager.hpp"
#include "android.content.ComponentCallbacks.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.DialogInterface.hpp"
#include "android.content.Intent.hpp"
#include "android.content.IntentFilter.hpp"
#include "android.content.IntentSender.hpp"
#include "android.content.Loader.hpp"
#include "android.content.SharedPreferences.hpp"
#include "android.content.pm.ActivityInfo.hpp"
#include "android.content.pm.ConfigurationInfo.hpp"
#include "android.content.pm.PackageManager.hpp"
#include "android.content.pm.ResolveInfo.hpp"
#include "android.content.pm.ServiceInfo.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.database.Cursor.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Debug.hpp"
#include "android.os.Handler.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Message.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.Printer.hpp"
#include "android.view.ActionMode.hpp"
#include "android.view.ContextMenu.hpp"
#include "android.view.InputQueue.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.LayoutInflater.hpp"
#include "android.view.Menu.hpp"
#include "android.view.MenuInflater.hpp"
#include "android.view.MenuItem.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.SurfaceHolder.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.view.Window.hpp"
#include "android.view.WindowManager.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.widget.AdapterView.hpp"
#include "android.widget.Button.hpp"
#include "android.widget.DatePicker.hpp"
#include "android.widget.ExpandableListAdapter.hpp"
#include "android.widget.ExpandableListView.hpp"
#include "android.widget.ListAdapter.hpp"
#include "android.widget.ListView.hpp"
#include "android.widget.RemoteViews.hpp"
#include "android.widget.SpinnerAdapter.hpp"
#include "android.widget.TabHost.hpp"
#include "android.widget.TabWidget.hpp"
#include "android.widget.TimePicker.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Long.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.text.NumberFormat.hpp"
#include "java.util.List.hpp"

jclass android::app::Notification_Builder::_class = nullptr;
jclass android::app::SearchManager::_class = nullptr;
jclass android::app::Fragment::_class = nullptr;
jclass android::app::TabActivity::_class = nullptr;
jclass android::app::WallpaperInfo::_class = nullptr;
jclass android::app::AliasActivity::_class = nullptr;
jclass android::app::SearchableInfo::_class = nullptr;
jclass android::app::Notification::_class = nullptr;
jclass android::app::AlertDialog::_class = nullptr;
jclass android::app::Service::_class = nullptr;
jclass android::app::DownloadManager_Query::_class = nullptr;
jclass android::app::PendingIntent::_class = nullptr;
jclass android::app::UiModeManager::_class = nullptr;
jclass android::app::ActionBar_Tab::_class = nullptr;
jclass android::app::TimePickerDialog::_class = nullptr;
jclass android::app::ActivityManager_RecentTaskInfo::_class = nullptr;
jclass android::app::Dialog::_class = nullptr;
jclass android::app::LoaderManager::_class = nullptr;
jclass android::app::DatePickerDialog::_class = nullptr;
jclass android::app::NativeActivity::_class = nullptr;
jclass android::app::FragmentManager::_class = nullptr;
jclass android::app::FragmentTransaction::_class = nullptr;
jclass android::app::Activity::_class = nullptr;
jclass android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener::_class = nullptr;
jclass android::app::KeyguardManager::_class = nullptr;
jclass android::app::ActionBar_TabListener::_class = nullptr;
jclass android::app::DatePickerDialog_OnDateSetListener::_class = nullptr;
jclass android::app::ActivityGroup::_class = nullptr;
jclass android::app::FragmentManager_OnBackStackChangedListener::_class = nullptr;
jclass android::app::PendingIntent_OnFinished::_class = nullptr;
jclass android::app::ApplicationErrorReport::_class = nullptr;
jclass android::app::TimePickerDialog_OnTimeSetListener::_class = nullptr;
jclass android::app::ProgressDialog::_class = nullptr;
jclass android::app::ActionBar_LayoutParams::_class = nullptr;
jclass android::app::WallpaperManager::_class = nullptr;
jclass android::app::LauncherActivity_IconResizer::_class = nullptr;
jclass android::app::ActionBar_OnNavigationListener::_class = nullptr;
jclass android::app::ActivityManager_ProcessErrorStateInfo::_class = nullptr;
jclass android::app::LoaderManager_LoaderCallbacks::_class = nullptr;
jclass android::app::LauncherActivity::_class = nullptr;
jclass android::app::PendingIntent_CanceledException::_class = nullptr;
jclass android::app::ApplicationErrorReport_AnrInfo::_class = nullptr;
jclass android::app::ActivityManager_RunningTaskInfo::_class = nullptr;
jclass android::app::KeyguardManager_KeyguardLock::_class = nullptr;
jclass android::app::NotificationManager::_class = nullptr;
jclass android::app::DownloadManager_Request::_class = nullptr;
jclass android::app::FragmentBreadCrumbs::_class = nullptr;
jclass android::app::ActionBar::_class = nullptr;
jclass android::app::FragmentManager_BackStackEntry::_class = nullptr;
jclass android::app::ApplicationErrorReport_BatteryInfo::_class = nullptr;
jclass android::app::Application::_class = nullptr;
jclass android::app::Instrumentation::_class = nullptr;
jclass android::app::ExpandableListActivity::_class = nullptr;
jclass android::app::ListFragment::_class = nullptr;
jclass android::app::AlarmManager::_class = nullptr;
jclass android::app::ListActivity::_class = nullptr;
jclass android::app::DownloadManager::_class = nullptr;
jclass android::app::ApplicationErrorReport_RunningServiceInfo::_class = nullptr;
jclass android::app::KeyguardManager_OnKeyguardExitResult::_class = nullptr;
jclass android::app::ActivityManager_RunningServiceInfo::_class = nullptr;
jclass android::app::Instrumentation_ActivityResult::_class = nullptr;
jclass android::app::Fragment_InstantiationException::_class = nullptr;
jclass android::app::IntentService::_class = nullptr;
jclass android::app::Application_ActivityLifecycleCallbacks::_class = nullptr;
jclass android::app::ActivityManager_RunningAppProcessInfo::_class = nullptr;
jclass android::app::Instrumentation_ActivityMonitor::_class = nullptr;
jclass android::app::Fragment_SavedState::_class = nullptr;
jclass android::app::LauncherActivity_ListItem::_class = nullptr;
jclass android::app::ActionBar_OnMenuVisibilityListener::_class = nullptr;
jclass android::app::ActivityManager::_class = nullptr;
jclass android::app::SearchManager_OnDismissListener::_class = nullptr;
jclass android::app::LocalActivityManager::_class = nullptr;
jclass android::app::DialogFragment::_class = nullptr;
jclass android::app::ActivityManager_MemoryInfo::_class = nullptr;
jclass android::app::AlertDialog_Builder::_class = nullptr;
jclass android::app::SearchManager_OnCancelListener::_class = nullptr;
jclass android::app::ApplicationErrorReport_CrashInfo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Notification_Builder::Notification_Builder(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Notification_Builder android::app::Notification_Builder::setWhen(int64_t arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWhen", "(J)Landroid/app/Notification$Builder;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setSmallIcon(int32_t arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmallIcon", "(I)Landroid/app/Notification$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setSmallIcon(int32_t arg0, int32_t arg1) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmallIcon", "(II)Landroid/app/Notification$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setContentTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentTitle", "(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setContentText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentText", "(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setNumber(int32_t arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNumber", "(I)Landroid/app/Notification$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setContentInfo(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentInfo", "(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setProgress(int32_t arg0, int32_t arg1, bool arg2) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgress", "(IIZ)Landroid/app/Notification$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setContent(const ::android::widget::RemoteViews& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContent", "(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setContentIntent(const ::android::app::PendingIntent& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentIntent", "(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setDeleteIntent(const ::android::app::PendingIntent& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDeleteIntent", "(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setFullScreenIntent(const ::android::app::PendingIntent& arg0, bool arg1) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFullScreenIntent", "(Landroid/app/PendingIntent;Z)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setTicker(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTicker", "(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setTicker(const ::java::lang::CharSequence& arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTicker", "(Ljava/lang/CharSequence;Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setLargeIcon(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLargeIcon", "(Landroid/graphics/Bitmap;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setSound(const ::android::net::Uri& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSound", "(Landroid/net/Uri;)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setSound(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSound", "(Landroid/net/Uri;I)Landroid/app/Notification$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setVibrate(const std::vector< int64_t>& arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVibrate", "([J)Landroid/app/Notification$Builder;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setLights(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLights", "(III)Landroid/app/Notification$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setOngoing(bool arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOngoing", "(Z)Landroid/app/Notification$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setOnlyAlertOnce(bool arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnlyAlertOnce", "(Z)Landroid/app/Notification$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setAutoCancel(bool arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoCancel", "(Z)Landroid/app/Notification$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification_Builder android::app::Notification_Builder::setDefaults(int32_t arg0) const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaults", "(I)Landroid/app/Notification$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification_Builder _ret(ret);
    return _ret;
}

::android::app::Notification android::app::Notification_Builder::getNotification() const {
    if (!::android::app::Notification_Builder::_class) ::android::app::Notification_Builder::_class = java::fetch_class("android/app/Notification$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotification", "()Landroid/app/Notification;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Notification _ret(ret);
    return _ret;
}

void android::app::SearchManager::startSearch(const ::java::lang::String& arg0, bool arg1, const ::android::content::ComponentName& arg2, const ::android::os::Bundle& arg3, bool arg4) const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "startSearch", "(Ljava/lang/String;ZLandroid/content/ComponentName;Landroid/os/Bundle;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    bool _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::app::SearchManager::triggerSearch(const ::java::lang::String& arg0, const ::android::content::ComponentName& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "triggerSearch", "(Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::SearchManager::stopSearch() const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopSearch", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::SearchManager::setOnDismissListener(const ::android::app::SearchManager_OnDismissListener& arg0) const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDismissListener", "(Landroid/app/SearchManager$OnDismissListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::SearchManager::setOnCancelListener(const ::android::app::SearchManager_OnCancelListener& arg0) const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCancelListener", "(Landroid/app/SearchManager$OnCancelListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::SearchManager::onCancel(const ::android::content::DialogInterface& arg0) const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::SearchManager::onDismiss(const ::android::content::DialogInterface& arg0) const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::SearchableInfo android::app::SearchManager::getSearchableInfo(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSearchableInfo", "(Landroid/content/ComponentName;)Landroid/app/SearchableInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::SearchableInfo _ret(ret);
    return _ret;
}

::java::util::List android::app::SearchManager::getSearchablesInGlobalSearch() const {
    if (!::android::app::SearchManager::_class) ::android::app::SearchManager::_class = java::fetch_class("android/app/SearchManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSearchablesInGlobalSearch", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Fragment::Fragment() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::app::Fragment android::app::Fragment::instantiate(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "instantiate", "(Landroid/content/Context;Ljava/lang/String;)Landroid/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::app::Fragment _ret(ret);
    return _ret;
}

::android::app::Fragment android::app::Fragment::instantiate(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2){
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "instantiate", "(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::app::Fragment _ret(ret);
    return _ret;
}

bool android::app::Fragment::equals(const ::java::lang::Object& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::app::Fragment::hashCode() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::app::Fragment::toString() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::app::Fragment::getId() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::app::Fragment::getTag() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::app::Fragment::setArguments(const ::android::os::Bundle& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setArguments", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::app::Fragment::getArguments() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArguments", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::app::Fragment::setInitialSavedState(const ::android::app::Fragment_SavedState& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInitialSavedState", "(Landroid/app/Fragment$SavedState;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::setTargetFragment(const ::android::app::Fragment& arg0, int32_t arg1) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetFragment", "(Landroid/app/Fragment;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::app::Fragment android::app::Fragment::getTargetFragment() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetFragment", "()Landroid/app/Fragment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Fragment _ret(ret);
    return _ret;
}

int32_t android::app::Fragment::getTargetRequestCode() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetRequestCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::app::Activity android::app::Fragment::getActivity() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::content::res::Resources android::app::Fragment::getResources() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::Fragment::getText(int32_t arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::app::Fragment::getString(int32_t arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::app::Fragment::getString(int32_t arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I[Ljava/lang/Object;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::app::FragmentManager android::app::Fragment::getFragmentManager() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragmentManager", "()Landroid/app/FragmentManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::FragmentManager _ret(ret);
    return _ret;
}

bool android::app::Fragment::isAdded() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAdded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Fragment::isDetached() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDetached", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Fragment::isRemoving() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRemoving", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Fragment::isInLayout() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInLayout", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Fragment::isResumed() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isResumed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Fragment::isVisible() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Fragment::isHidden() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHidden", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::Fragment::onHiddenChanged(bool arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHiddenChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::setRetainInstance(bool arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRetainInstance", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Fragment::getRetainInstance() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRetainInstance", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::Fragment::setHasOptionsMenu(bool arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasOptionsMenu", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::setMenuVisibility(bool arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMenuVisibility", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::setUserVisibleHint(bool arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserVisibleHint", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Fragment::getUserVisibleHint() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserVisibleHint", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::app::LoaderManager android::app::Fragment::getLoaderManager() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoaderManager", "()Landroid/app/LoaderManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::LoaderManager _ret(ret);
    return _ret;
}

void android::app::Fragment::startActivity(const ::android::content::Intent& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivity", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::startActivityForResult(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityForResult", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Fragment::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Fragment::onInflate(const ::android::util::AttributeSet& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInflate", "(Landroid/util/AttributeSet;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Fragment::onInflate(const ::android::app::Activity& arg0, const ::android::util::AttributeSet& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInflate", "(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Fragment::onAttach(const ::android::app::Activity& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttach", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::Animator android::app::Fragment::onCreateAnimator(int32_t arg0, bool arg1, int32_t arg2) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateAnimator", "(IZI)Landroid/animation/Animator;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::animation::Animator _ret(ret);
    return _ret;
}

void android::app::Fragment::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::onViewCreated(const ::android::view::View& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewCreated", "(Landroid/view/View;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::app::Fragment::onCreateView(const ::android::view::LayoutInflater& arg0, const ::android::view::ViewGroup& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::app::Fragment::getView() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::app::Fragment::onActivityCreated(const ::android::os::Bundle& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityCreated", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::onStart() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onResume() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onSaveInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::onPause() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onStop() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onLowMemory() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onTrimMemory(int32_t arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrimMemory", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::onDestroyView() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onDestroy() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onDetach() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Fragment::onCreateOptionsMenu(const ::android::view::Menu& arg0, const ::android::view::MenuInflater& arg1) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateOptionsMenu", "(Landroid/view/Menu;Landroid/view/MenuInflater;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Fragment::onPrepareOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareOptionsMenu", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::onDestroyOptionsMenu() const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Fragment::onOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Fragment::onOptionsMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Fragment::registerForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Fragment::unregisterForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Fragment::onContextItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Fragment::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::app::Fragment::_class) ::android::app::Fragment::_class = java::fetch_class("android/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::TabActivity::TabActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ActivityGroup((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::TabActivity::_class) ::android::app::TabActivity::_class = java::fetch_class("android/app/TabActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::TabActivity::setDefaultTab(const ::java::lang::String& arg0) const {
    if (!::android::app::TabActivity::_class) ::android::app::TabActivity::_class = java::fetch_class("android/app/TabActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultTab", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::TabActivity::setDefaultTab(int32_t arg0) const {
    if (!::android::app::TabActivity::_class) ::android::app::TabActivity::_class = java::fetch_class("android/app/TabActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultTab", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::TabActivity::onContentChanged() const {
    if (!::android::app::TabActivity::_class) ::android::app::TabActivity::_class = java::fetch_class("android/app/TabActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::widget::TabHost android::app::TabActivity::getTabHost() const {
    if (!::android::app::TabActivity::_class) ::android::app::TabActivity::_class = java::fetch_class("android/app/TabActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabHost", "()Landroid/widget/TabHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::TabHost _ret(ret);
    return _ret;
}

::android::widget::TabWidget android::app::TabActivity::getTabWidget() const {
    if (!::android::app::TabActivity::_class) ::android::app::TabActivity::_class = java::fetch_class("android/app/TabActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabWidget", "()Landroid/widget/TabWidget;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::TabWidget _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::WallpaperInfo::WallpaperInfo(const ::android::content::Context& arg0, const ::android::content::pm::ResolveInfo& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String android::app::WallpaperInfo::getPackageName() const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::app::WallpaperInfo::getServiceName() const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ServiceInfo android::app::WallpaperInfo::getServiceInfo() const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceInfo", "()Landroid/content/pm/ServiceInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ServiceInfo _ret(ret);
    return _ret;
}

::android::content::ComponentName android::app::WallpaperInfo::getComponent() const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponent", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::WallpaperInfo::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::app::WallpaperInfo::loadIcon(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIcon", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::app::WallpaperInfo::loadThumbnail(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadThumbnail", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::WallpaperInfo::loadAuthor(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadAuthor", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::WallpaperInfo::loadDescription(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadDescription", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::app::WallpaperInfo::getSettingsActivity() const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivity", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::app::WallpaperInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::app::WallpaperInfo::toString() const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::app::WallpaperInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::WallpaperInfo::describeContents() const {
    if (!::android::app::WallpaperInfo::_class) ::android::app::WallpaperInfo::_class = java::fetch_class("android/app/WallpaperInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::AliasActivity::AliasActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::AliasActivity::_class) ::android::app::AliasActivity::_class = java::fetch_class("android/app/AliasActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::app::SearchableInfo::getSuggestAuthority() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestAuthority", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::app::SearchableInfo::getSuggestPackage() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::app::SearchableInfo::getSearchActivity() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSearchActivity", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

bool android::app::SearchableInfo::shouldRewriteQueryFromData() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldRewriteQueryFromData", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::SearchableInfo::shouldRewriteQueryFromText() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldRewriteQueryFromText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getSettingsDescriptionId() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsDescriptionId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::app::SearchableInfo::getSuggestPath() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::app::SearchableInfo::getSuggestSelection() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestSelection", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::app::SearchableInfo::getSuggestIntentAction() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestIntentAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::app::SearchableInfo::getSuggestIntentData() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestIntentData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::app::SearchableInfo::getSuggestThreshold() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestThreshold", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getHintId() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHintId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::app::SearchableInfo::getVoiceSearchEnabled() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceSearchEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::SearchableInfo::getVoiceSearchLaunchWebSearch() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceSearchLaunchWebSearch", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::SearchableInfo::getVoiceSearchLaunchRecognizer() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceSearchLaunchRecognizer", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getVoiceLanguageModeId() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceLanguageModeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getVoicePromptTextId() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoicePromptTextId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getVoiceLanguageId() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceLanguageId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getVoiceMaxResults() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVoiceMaxResults", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getInputType() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::SearchableInfo::getImeOptions() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImeOptions", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::app::SearchableInfo::shouldIncludeInGlobalSearch() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldIncludeInGlobalSearch", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::SearchableInfo::queryAfterZeroResults() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryAfterZeroResults", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::SearchableInfo::autoUrlDetect() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "autoUrlDetect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::app::SearchableInfo::describeContents() const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::SearchableInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::SearchableInfo::_class) ::android::app::SearchableInfo::_class = java::fetch_class("android/app/SearchableInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Notification::Notification() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Notification::Notification(int32_t arg0, const ::java::lang::CharSequence& arg1, int64_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/CharSequence;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Notification::Notification(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Notification android::app::Notification::clone() const {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/app/Notification;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Notification _ret(ret);
    return _ret;
}

int32_t android::app::Notification::describeContents() const {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::Notification::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Notification::setLatestEventInfo(const ::android::content::Context& arg0, const ::java::lang::CharSequence& arg1, const ::java::lang::CharSequence& arg2, const ::android::app::PendingIntent& arg3) const {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLatestEventInfo", "(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::String android::app::Notification::toString() const {
    if (!::android::app::Notification::_class) ::android::app::Notification::_class = java::fetch_class("android/app/Notification");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::widget::Button android::app::AlertDialog::getButton(int32_t arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getButton", "(I)Landroid/widget/Button;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::Button _ret(ret);
    return _ret;
}

::android::widget::ListView android::app::AlertDialog::getListView() const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListView", "()Landroid/widget/ListView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListView _ret(ret);
    return _ret;
}

void android::app::AlertDialog::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlertDialog::setCustomTitle(const ::android::view::View& arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomTitle", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlertDialog::setMessage(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessage", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlertDialog::setView(const ::android::view::View& arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlertDialog::setView(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setView", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::app::AlertDialog::setButton(int32_t arg0, const ::java::lang::CharSequence& arg1, const ::android::os::Message& arg2) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton", "(ILjava/lang/CharSequence;Landroid/os/Message;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::AlertDialog::setButton(int32_t arg0, const ::java::lang::CharSequence& arg1, const ::android::content::DialogInterface_OnClickListener& arg2) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton", "(ILjava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::AlertDialog::setButton(const ::java::lang::CharSequence& arg0, const ::android::os::Message& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton", "(Ljava/lang/CharSequence;Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::AlertDialog::setButton2(const ::java::lang::CharSequence& arg0, const ::android::os::Message& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton2", "(Ljava/lang/CharSequence;Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::AlertDialog::setButton3(const ::java::lang::CharSequence& arg0, const ::android::os::Message& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton3", "(Ljava/lang/CharSequence;Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::AlertDialog::setButton(const ::java::lang::CharSequence& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton", "(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::AlertDialog::setButton2(const ::java::lang::CharSequence& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton2", "(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::AlertDialog::setButton3(const ::java::lang::CharSequence& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButton3", "(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::AlertDialog::setIcon(int32_t arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlertDialog::setIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlertDialog::setIconAttribute(int32_t arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconAttribute", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlertDialog::setInverseBackgroundForced(bool arg0) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInverseBackgroundForced", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::AlertDialog::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::AlertDialog::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::AlertDialog::_class) ::android::app::AlertDialog::_class = java::fetch_class("android/app/AlertDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Service::Service() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::app::Application android::app::Service::getApplication() const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplication", "()Landroid/app/Application;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Application _ret(ret);
    return _ret;
}

void android::app::Service::onCreate() const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Service::onStart(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::Service::onStartCommand(const ::android::content::Intent& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartCommand", "(Landroid/content/Intent;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Service::onDestroy() const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Service::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Service::onLowMemory() const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Service::onTrimMemory(int32_t arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrimMemory", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::IBinder android::app::Service::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool android::app::Service::onUnbind(const ::android::content::Intent& arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUnbind", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Service::onRebind(const ::android::content::Intent& arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRebind", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Service::onTaskRemoved(const ::android::content::Intent& arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTaskRemoved", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Service::stopSelf() const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopSelf", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Service::stopSelf(int32_t arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopSelf", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Service::stopSelfResult(int32_t arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopSelfResult", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Service::startForeground(int32_t arg0, const ::android::app::Notification& arg1) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "startForeground", "(ILandroid/app/Notification;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Service::stopForeground(bool arg0) const {
    if (!::android::app::Service::_class) ::android::app::Service::_class = java::fetch_class("android/app/Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopForeground", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::DownloadManager_Query::DownloadManager_Query() : ::java::lang::Object((jobject)0) {
    if (!::android::app::DownloadManager_Query::_class) ::android::app::DownloadManager_Query::_class = java::fetch_class("android/app/DownloadManager$Query");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::app::DownloadManager_Query android::app::DownloadManager_Query::setFilterById(const std::vector< int64_t>& arg0) const {
    if (!::android::app::DownloadManager_Query::_class) ::android::app::DownloadManager_Query::_class = java::fetch_class("android/app/DownloadManager$Query");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterById", "([J)Landroid/app/DownloadManager$Query;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Query _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Query android::app::DownloadManager_Query::setFilterByStatus(int32_t arg0) const {
    if (!::android::app::DownloadManager_Query::_class) ::android::app::DownloadManager_Query::_class = java::fetch_class("android/app/DownloadManager$Query");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterByStatus", "(I)Landroid/app/DownloadManager$Query;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Query _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::app::PendingIntent::getActivity(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2, int32_t arg3){
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActivity", "(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::app::PendingIntent::getActivities(const ::android::content::Context& arg0, int32_t arg1, const std::vector< ::android::content::Intent>& arg2, int32_t arg3){
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActivities", "(Landroid/content/Context;I[Landroid/content/Intent;I)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::android::content::Intent& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::app::PendingIntent::getBroadcast(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2, int32_t arg3){
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBroadcast", "(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::app::PendingIntent::getService(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2, int32_t arg3){
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getService", "(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::content::IntentSender android::app::PendingIntent::getIntentSender() const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntentSender", "()Landroid/content/IntentSender;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::IntentSender _ret(ret);
    return _ret;
}

void android::app::PendingIntent::cancel() const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::PendingIntent::send() const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::PendingIntent::send(int32_t arg0) const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::PendingIntent::send(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Landroid/content/Context;ILandroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::PendingIntent::send(int32_t arg0, const ::android::app::PendingIntent_OnFinished& arg1, const ::android::os::Handler& arg2) const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(ILandroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::PendingIntent::send(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2, const ::android::app::PendingIntent_OnFinished& arg3, const ::android::os::Handler& arg4) const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::app::PendingIntent::send(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2, const ::android::app::PendingIntent_OnFinished& arg3, const ::android::os::Handler& arg4, const ::java::lang::String& arg5) const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

::java::lang::String android::app::PendingIntent::getTargetPackage() const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::app::PendingIntent::equals(const ::java::lang::Object& arg0) const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::app::PendingIntent::hashCode() const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::app::PendingIntent::toString() const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::app::PendingIntent::describeContents() const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::PendingIntent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::PendingIntent::writePendingIntentOrNullToParcel(const ::android::app::PendingIntent& arg0, const ::android::os::Parcel& arg1){
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writePendingIntentOrNullToParcel", "(Landroid/app/PendingIntent;Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::app::PendingIntent android::app::PendingIntent::readPendingIntentOrNullFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::app::PendingIntent::_class) ::android::app::PendingIntent::_class = java::fetch_class("android/app/PendingIntent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readPendingIntentOrNullFromParcel", "(Landroid/os/Parcel;)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

void android::app::UiModeManager::enableCarMode(int32_t arg0) const {
    if (!::android::app::UiModeManager::_class) ::android::app::UiModeManager::_class = java::fetch_class("android/app/UiModeManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableCarMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::UiModeManager::disableCarMode(int32_t arg0) const {
    if (!::android::app::UiModeManager::_class) ::android::app::UiModeManager::_class = java::fetch_class("android/app/UiModeManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "disableCarMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::UiModeManager::getCurrentModeType() const {
    if (!::android::app::UiModeManager::_class) ::android::app::UiModeManager::_class = java::fetch_class("android/app/UiModeManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentModeType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::UiModeManager::setNightMode(int32_t arg0) const {
    if (!::android::app::UiModeManager::_class) ::android::app::UiModeManager::_class = java::fetch_class("android/app/UiModeManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNightMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::UiModeManager::getNightMode() const {
    if (!::android::app::UiModeManager::_class) ::android::app::UiModeManager::_class = java::fetch_class("android/app/UiModeManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNightMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActionBar_Tab::ActionBar_Tab() : ::java::lang::Object((jobject)0) {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::app::ActionBar_Tab::getPosition() const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable android::app::ActionBar_Tab::getIcon() const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::ActionBar_Tab::getText() const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(Landroid/graphics/drawable/Drawable;)Landroid/app/ActionBar$Tab;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setIcon(int32_t arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(I)Landroid/app/ActionBar$Tab;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setText(int32_t arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(I)Landroid/app/ActionBar$Tab;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setCustomView(const ::android::view::View& arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomView", "(Landroid/view/View;)Landroid/app/ActionBar$Tab;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setCustomView(int32_t arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomView", "(I)Landroid/app/ActionBar$Tab;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::view::View android::app::ActionBar_Tab::getCustomView() const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCustomView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setTag(const ::java::lang::Object& arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTag", "(Ljava/lang/Object;)Landroid/app/ActionBar$Tab;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::java::lang::Object android::app::ActionBar_Tab::getTag() const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setTabListener(const ::android::app::ActionBar_TabListener& arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTabListener", "(Landroid/app/ActionBar$TabListener;)Landroid/app/ActionBar$Tab;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

void android::app::ActionBar_Tab::select() const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "select", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setContentDescription(int32_t arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(I)Landroid/app/ActionBar$Tab;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar_Tab::setContentDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::ActionBar_Tab::getContentDescription() const {
    if (!::android::app::ActionBar_Tab::_class) ::android::app::ActionBar_Tab::_class = java::fetch_class("android/app/ActionBar$Tab");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::TimePickerDialog::TimePickerDialog(const ::android::content::Context& arg0, const ::android::app::TimePickerDialog_OnTimeSetListener& arg1, int32_t arg2, int32_t arg3, bool arg4) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::TimePicker_OnTimeChangedListener((jobject)0) {
    if (!::android::app::TimePickerDialog::_class) ::android::app::TimePickerDialog::_class = java::fetch_class("android/app/TimePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::TimePickerDialog::TimePickerDialog(const ::android::content::Context& arg0, int32_t arg1, const ::android::app::TimePickerDialog_OnTimeSetListener& arg2, int32_t arg3, int32_t arg4, bool arg5) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::TimePicker_OnTimeChangedListener((jobject)0) {
    if (!::android::app::TimePickerDialog::_class) ::android::app::TimePickerDialog::_class = java::fetch_class("android/app/TimePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    bool _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

void android::app::TimePickerDialog::onClick(const ::android::content::DialogInterface& arg0, int32_t arg1) const {
    if (!::android::app::TimePickerDialog::_class) ::android::app::TimePickerDialog::_class = java::fetch_class("android/app/TimePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/content/DialogInterface;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::TimePickerDialog::updateTime(int32_t arg0, int32_t arg1) const {
    if (!::android::app::TimePickerDialog::_class) ::android::app::TimePickerDialog::_class = java::fetch_class("android/app/TimePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateTime", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::TimePickerDialog::onTimeChanged(const ::android::widget::TimePicker& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::TimePickerDialog::_class) ::android::app::TimePickerDialog::_class = java::fetch_class("android/app/TimePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTimeChanged", "(Landroid/widget/TimePicker;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::os::Bundle android::app::TimePickerDialog::onSaveInstanceState() const {
    if (!::android::app::TimePickerDialog::_class) ::android::app::TimePickerDialog::_class = java::fetch_class("android/app/TimePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::app::TimePickerDialog::onRestoreInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::app::TimePickerDialog::_class) ::android::app::TimePickerDialog::_class = java::fetch_class("android/app/TimePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ActivityManager_RecentTaskInfo::_class) ::android::app::ActivityManager_RecentTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RecentTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::app::ActivityManager_RecentTaskInfo::describeContents() const {
    if (!::android::app::ActivityManager_RecentTaskInfo::_class) ::android::app::ActivityManager_RecentTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RecentTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActivityManager_RecentTaskInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager_RecentTaskInfo::_class) ::android::app::ActivityManager_RecentTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RecentTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActivityManager_RecentTaskInfo::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::app::ActivityManager_RecentTaskInfo::_class) ::android::app::ActivityManager_RecentTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RecentTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Dialog::Dialog(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Dialog::Dialog(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::Context android::app::Dialog::getContext() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::app::ActionBar android::app::Dialog::getActionBar() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionBar", "()Landroid/app/ActionBar;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::ActionBar _ret(ret);
    return _ret;
}

void android::app::Dialog::setOwnerActivity(const ::android::app::Activity& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOwnerActivity", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Activity android::app::Dialog::getOwnerActivity() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOwnerActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

bool android::app::Dialog::isShowing() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShowing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::Dialog::show() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::hide() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::dismiss() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::Bundle android::app::Dialog::onSaveInstanceState() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::app::Dialog::onRestoreInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::Window android::app::Dialog::getWindow() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindow", "()Landroid/view/Window;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Window _ret(ret);
    return _ret;
}

::android::view::View android::app::Dialog::getCurrentFocus() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentFocus", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::app::Dialog::findViewById(int32_t arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewById", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::app::Dialog::setContentView(int32_t arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setContentView(const ::android::view::View& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setContentView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Dialog::addContentView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "addContentView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Dialog::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setTitle(int32_t arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Dialog::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Dialog::onKeyLongPress(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyLongPress", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Dialog::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Dialog::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Dialog::onBackPressed() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackPressed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Dialog::onKeyShortcut(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyShortcut", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Dialog::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Dialog::onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowAttributesChanged", "(Landroid/view/WindowManager$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::onContentChanged() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::onWindowFocusChanged(bool arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::onAttachedToWindow() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::onDetachedFromWindow() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Dialog::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::dispatchKeyShortcutEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyShortcutEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::dispatchGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::View android::app::Dialog::onCreatePanelView(int32_t arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelView", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::app::Dialog::onCreatePanelMenu(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelMenu", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Dialog::onPreparePanel(int32_t arg0, const ::android::view::View& arg1, const ::android::view::Menu& arg2) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreparePanel", "(ILandroid/view/View;Landroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::app::Dialog::onMenuOpened(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuOpened", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Dialog::onMenuItemSelected(int32_t arg0, const ::android::view::MenuItem& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemSelected", "(ILandroid/view/MenuItem;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::app::Dialog::onPanelClosed(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelClosed", "(ILandroid/view/Menu;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Dialog::onCreateOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::onPrepareOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Dialog::onOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Dialog::onOptionsMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::openOptionsMenu() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::closeOptionsMenu() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::invalidateOptionsMenu() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Dialog::registerForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::unregisterForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::openContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "openContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Dialog::onContextItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Dialog::onContextMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Dialog::onSearchRequested() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSearchRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::ActionMode android::app::Dialog::onWindowStartingActionMode(const ::android::view::ActionMode_Callback& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowStartingActionMode", "(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ActionMode _ret(ret);
    return _ret;
}

void android::app::Dialog::onActionModeStarted(const ::android::view::ActionMode& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionModeStarted", "(Landroid/view/ActionMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::onActionModeFinished(const ::android::view::ActionMode& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionModeFinished", "(Landroid/view/ActionMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::takeKeyEvents(bool arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeKeyEvents", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Dialog::requestWindowFeature(int32_t arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestWindowFeature", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Dialog::setFeatureDrawableResource(int32_t arg0, int32_t arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableResource", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Dialog::setFeatureDrawableUri(int32_t arg0, const ::android::net::Uri& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableUri", "(ILandroid/net/Uri;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Dialog::setFeatureDrawable(int32_t arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawable", "(ILandroid/graphics/drawable/Drawable;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Dialog::setFeatureDrawableAlpha(int32_t arg0, int32_t arg1) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableAlpha", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::LayoutInflater android::app::Dialog::getLayoutInflater() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutInflater", "()Landroid/view/LayoutInflater;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

void android::app::Dialog::setCancelable(bool arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCancelable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setCanceledOnTouchOutside(bool arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCanceledOnTouchOutside", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::cancel() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Dialog::setOnCancelListener(const ::android::content::DialogInterface_OnCancelListener& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCancelListener", "(Landroid/content/DialogInterface$OnCancelListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setCancelMessage(const ::android::os::Message& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCancelMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setOnDismissListener(const ::android::content::DialogInterface_OnDismissListener& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDismissListener", "(Landroid/content/DialogInterface$OnDismissListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setOnShowListener(const ::android::content::DialogInterface_OnShowListener& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnShowListener", "(Landroid/content/DialogInterface$OnShowListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setDismissMessage(const ::android::os::Message& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDismissMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Dialog::setVolumeControlStream(int32_t arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeControlStream", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::Dialog::getVolumeControlStream() const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeControlStream", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::Dialog::setOnKeyListener(const ::android::content::DialogInterface_OnKeyListener& arg0) const {
    if (!::android::app::Dialog::_class) ::android::app::Dialog::_class = java::fetch_class("android/app/Dialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnKeyListener", "(Landroid/content/DialogInterface$OnKeyListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::LoaderManager::LoaderManager() : ::java::lang::Object((jobject)0) {
    if (!::android::app::LoaderManager::_class) ::android::app::LoaderManager::_class = java::fetch_class("android/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::Loader android::app::LoaderManager::initLoader(int32_t arg0, const ::android::os::Bundle& arg1, const ::android::app::LoaderManager_LoaderCallbacks& arg2) const {
    if (!::android::app::LoaderManager::_class) ::android::app::LoaderManager::_class = java::fetch_class("android/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "initLoader", "(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::Loader _ret(ret);
    return _ret;
}

::android::content::Loader android::app::LoaderManager::restartLoader(int32_t arg0, const ::android::os::Bundle& arg1, const ::android::app::LoaderManager_LoaderCallbacks& arg2) const {
    if (!::android::app::LoaderManager::_class) ::android::app::LoaderManager::_class = java::fetch_class("android/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "restartLoader", "(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::Loader _ret(ret);
    return _ret;
}

void android::app::LoaderManager::destroyLoader(int32_t arg0) const {
    if (!::android::app::LoaderManager::_class) ::android::app::LoaderManager::_class = java::fetch_class("android/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyLoader", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Loader android::app::LoaderManager::getLoader(int32_t arg0) const {
    if (!::android::app::LoaderManager::_class) ::android::app::LoaderManager::_class = java::fetch_class("android/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoader", "(I)Landroid/content/Loader;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Loader _ret(ret);
    return _ret;
}

void android::app::LoaderManager::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::app::LoaderManager::_class) ::android::app::LoaderManager::_class = java::fetch_class("android/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::app::LoaderManager::enableDebugLogging(bool arg0){
    if (!::android::app::LoaderManager::_class) ::android::app::LoaderManager::_class = java::fetch_class("android/app/LoaderManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enableDebugLogging", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::DatePickerDialog::DatePickerDialog(const ::android::content::Context& arg0, const ::android::app::DatePickerDialog_OnDateSetListener& arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::DatePicker_OnDateChangedListener((jobject)0) {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/app/DatePickerDialog$OnDateSetListener;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::DatePickerDialog::DatePickerDialog(const ::android::content::Context& arg0, int32_t arg1, const ::android::app::DatePickerDialog_OnDateSetListener& arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::DatePicker_OnDateChangedListener((jobject)0) {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/app/DatePickerDialog$OnDateSetListener;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

void android::app::DatePickerDialog::onClick(const ::android::content::DialogInterface& arg0, int32_t arg1) const {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/content/DialogInterface;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::DatePickerDialog::onDateChanged(const ::android::widget::DatePicker& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDateChanged", "(Landroid/widget/DatePicker;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::widget::DatePicker android::app::DatePickerDialog::getDatePicker() const {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatePicker", "()Landroid/widget/DatePicker;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::DatePicker _ret(ret);
    return _ret;
}

void android::app::DatePickerDialog::updateDate(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDate", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::os::Bundle android::app::DatePickerDialog::onSaveInstanceState() const {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::app::DatePickerDialog::onRestoreInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::app::DatePickerDialog::_class) ::android::app::DatePickerDialog::_class = java::fetch_class("android/app/DatePickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::NativeActivity::NativeActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::InputQueue_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceHolder_Callback2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::NativeActivity::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::NativeActivity::onLowMemory() const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::NativeActivity::onWindowFocusChanged(bool arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::NativeActivity::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::NativeActivity::surfaceCreated(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceCreated", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::NativeActivity::surfaceChanged(const ::android::view::SurfaceHolder& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceChanged", "(Landroid/view/SurfaceHolder;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::app::NativeActivity::surfaceRedrawNeeded(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceRedrawNeeded", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::NativeActivity::surfaceDestroyed(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceDestroyed", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::NativeActivity::onInputQueueCreated(const ::android::view::InputQueue& arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInputQueueCreated", "(Landroid/view/InputQueue;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::NativeActivity::onInputQueueDestroyed(const ::android::view::InputQueue& arg0) const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInputQueueDestroyed", "(Landroid/view/InputQueue;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::NativeActivity::onGlobalLayout() const {
    if (!::android::app::NativeActivity::_class) ::android::app::NativeActivity::_class = java::fetch_class("android/app/NativeActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGlobalLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::FragmentManager::FragmentManager() : ::java::lang::Object((jobject)0) {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::app::FragmentTransaction android::app::FragmentManager::beginTransaction() const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginTransaction", "()Landroid/app/FragmentTransaction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::app::FragmentManager::executePendingTransactions() const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "executePendingTransactions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::app::Fragment android::app::FragmentManager::findFragmentById(int32_t arg0) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFragmentById", "(I)Landroid/app/Fragment;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Fragment _ret(ret);
    return _ret;
}

::android::app::Fragment android::app::FragmentManager::findFragmentByTag(const ::java::lang::String& arg0) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFragmentByTag", "(Ljava/lang/String;)Landroid/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Fragment _ret(ret);
    return _ret;
}

void android::app::FragmentManager::popBackStack() const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::FragmentManager::popBackStackImmediate() const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::FragmentManager::popBackStack(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::app::FragmentManager::popBackStackImmediate(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "(Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::app::FragmentManager::popBackStack(int32_t arg0, int32_t arg1) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::app::FragmentManager::popBackStackImmediate(int32_t arg0, int32_t arg1) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::FragmentManager::getBackStackEntryCount() const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackStackEntryCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::app::FragmentManager_BackStackEntry android::app::FragmentManager::getBackStackEntryAt(int32_t arg0) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackStackEntryAt", "(I)Landroid/app/FragmentManager$BackStackEntry;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentManager_BackStackEntry _ret(ret);
    return _ret;
}

void android::app::FragmentManager::addOnBackStackChangedListener(const ::android::app::FragmentManager_OnBackStackChangedListener& arg0) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnBackStackChangedListener", "(Landroid/app/FragmentManager$OnBackStackChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::FragmentManager::removeOnBackStackChangedListener(const ::android::app::FragmentManager_OnBackStackChangedListener& arg0) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnBackStackChangedListener", "(Landroid/app/FragmentManager$OnBackStackChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::FragmentManager::putFragment(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::android::app::Fragment& arg2) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFragment", "(Landroid/os/Bundle;Ljava/lang/String;Landroid/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::app::Fragment android::app::FragmentManager::getFragment(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "(Landroid/os/Bundle;Ljava/lang/String;)Landroid/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::Fragment _ret(ret);
    return _ret;
}

::android::app::Fragment_SavedState android::app::FragmentManager::saveFragmentInstanceState(const ::android::app::Fragment& arg0) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveFragmentInstanceState", "(Landroid/app/Fragment;)Landroid/app/Fragment$SavedState;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Fragment_SavedState _ret(ret);
    return _ret;
}

void android::app::FragmentManager::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::app::FragmentManager::enableDebugLogging(bool arg0){
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enableDebugLogging", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::app::FragmentManager::invalidateOptionsMenu() const {
    if (!::android::app::FragmentManager::_class) ::android::app::FragmentManager::_class = java::fetch_class("android/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::FragmentTransaction::FragmentTransaction() : ::java::lang::Object((jobject)0) {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::app::FragmentTransaction android::app::FragmentTransaction::add(const ::android::app::Fragment& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::add(int32_t arg0, const ::android::app::Fragment& arg1) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::add(int32_t arg0, const ::android::app::Fragment& arg1, const ::java::lang::String& arg2) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::replace(int32_t arg0, const ::android::app::Fragment& arg1) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::replace(int32_t arg0, const ::android::app::Fragment& arg1, const ::java::lang::String& arg2) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::remove(const ::android::app::Fragment& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::hide(const ::android::app::Fragment& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::show(const ::android::app::Fragment& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::detach(const ::android::app::Fragment& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "detach", "(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::attach(const ::android::app::Fragment& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "attach", "(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::app::FragmentTransaction::isEmpty() const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setCustomAnimations(int32_t arg0, int32_t arg1) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomAnimations", "(II)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setCustomAnimations(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomAnimations", "(IIII)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setTransition(int32_t arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransition", "(I)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setTransitionStyle(int32_t arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionStyle", "(I)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::addToBackStack(const ::java::lang::String& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "addToBackStack", "(Ljava/lang/String;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::app::FragmentTransaction::isAddToBackStackAllowed() const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAddToBackStackAllowed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::app::FragmentTransaction android::app::FragmentTransaction::disallowAddToBackStack() const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "disallowAddToBackStack", "()Landroid/app/FragmentTransaction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setBreadCrumbTitle(int32_t arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbTitle", "(I)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setBreadCrumbTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbTitle", "(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setBreadCrumbShortTitle(int32_t arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbShortTitle", "(I)Landroid/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::app::FragmentTransaction android::app::FragmentTransaction::setBreadCrumbShortTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbShortTitle", "(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::FragmentTransaction _ret(ret);
    return _ret;
}

int32_t android::app::FragmentTransaction::commit() const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "commit", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::FragmentTransaction::commitAllowingStateLoss() const {
    if (!::android::app::FragmentTransaction::_class) ::android::app::FragmentTransaction::_class = java::fetch_class("android/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitAllowingStateLoss", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Activity::Activity() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::Intent android::app::Activity::getIntent() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::app::Activity::setIntent(const ::android::content::Intent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Application android::app::Activity::getApplication() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplication", "()Landroid/app/Application;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Application _ret(ret);
    return _ret;
}

bool android::app::Activity::isChild() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChild", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::app::Activity android::app::Activity::getParent() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::view::WindowManager android::app::Activity::getWindowManager() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowManager", "()Landroid/view/WindowManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::WindowManager _ret(ret);
    return _ret;
}

::android::view::Window android::app::Activity::getWindow() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindow", "()Landroid/view/Window;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Window _ret(ret);
    return _ret;
}

::android::app::LoaderManager android::app::Activity::getLoaderManager() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoaderManager", "()Landroid/app/LoaderManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::LoaderManager _ret(ret);
    return _ret;
}

::android::view::View android::app::Activity::getCurrentFocus() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentFocus", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::app::Activity::onCreateThumbnail(const ::android::graphics::Bitmap& arg0, const ::android::graphics::Canvas& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateThumbnail", "(Landroid/graphics/Bitmap;Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::app::Activity::onCreateDescription() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::app::Activity::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::Activity::getChangingConfigurations() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::app::Activity::getLastNonConfigurationInstance() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastNonConfigurationInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::app::Activity::onRetainNonConfigurationInstance() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRetainNonConfigurationInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::app::Activity::onLowMemory() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::onTrimMemory(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrimMemory", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::FragmentManager android::app::Activity::getFragmentManager() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragmentManager", "()Landroid/app/FragmentManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::FragmentManager _ret(ret);
    return _ret;
}

void android::app::Activity::onAttachFragment(const ::android::app::Fragment& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachFragment", "(Landroid/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::app::Activity::managedQuery(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "managedQuery", "(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::app::Activity::startManagingCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startManagingCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::stopManagingCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopManagingCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::app::Activity::findViewById(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewById", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::app::ActionBar android::app::Activity::getActionBar() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionBar", "()Landroid/app/ActionBar;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::ActionBar _ret(ret);
    return _ret;
}

void android::app::Activity::setContentView(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setContentView(const ::android::view::View& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setContentView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::addContentView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "addContentView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::setFinishOnTouchOutside(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFinishOnTouchOutside", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setDefaultKeyMode(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultKeyMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Activity::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Activity::onKeyLongPress(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyLongPress", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Activity::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Activity::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Activity::onBackPressed() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackPressed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Activity::onKeyShortcut(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyShortcut", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Activity::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Activity::onUserInteraction() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUserInteraction", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowAttributesChanged", "(Landroid/view/WindowManager$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::onContentChanged() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::onWindowFocusChanged(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::onAttachedToWindow() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::onDetachedFromWindow() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Activity::hasWindowFocus() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWindowFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Activity::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::dispatchKeyShortcutEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyShortcutEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::dispatchGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::View android::app::Activity::onCreatePanelView(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelView", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::app::Activity::onCreatePanelMenu(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelMenu", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Activity::onPreparePanel(int32_t arg0, const ::android::view::View& arg1, const ::android::view::Menu& arg2) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreparePanel", "(ILandroid/view/View;Landroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::app::Activity::onMenuOpened(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuOpened", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Activity::onMenuItemSelected(int32_t arg0, const ::android::view::MenuItem& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemSelected", "(ILandroid/view/MenuItem;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::onPanelClosed(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelClosed", "(ILandroid/view/Menu;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::invalidateOptionsMenu() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Activity::onCreateOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::onPrepareOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::app::Activity::onOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Activity::onOptionsMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::openOptionsMenu() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::closeOptionsMenu() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Activity::registerForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::unregisterForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::openContextMenu(const ::android::view::View& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "openContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::closeContextMenu() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeContextMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Activity::onContextItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Activity::onContextMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::showDialog(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "showDialog", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Activity::showDialog(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "showDialog", "(ILandroid/os/Bundle;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::dismissDialog(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismissDialog", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::removeDialog(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeDialog", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Activity::onSearchRequested() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSearchRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::Activity::startSearch(const ::java::lang::String& arg0, bool arg1, const ::android::os::Bundle& arg2, bool arg3) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startSearch", "(Ljava/lang/String;ZLandroid/os/Bundle;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::app::Activity::triggerSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "triggerSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::takeKeyEvents(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeKeyEvents", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Activity::requestWindowFeature(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestWindowFeature", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Activity::setFeatureDrawableResource(int32_t arg0, int32_t arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableResource", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::setFeatureDrawableUri(int32_t arg0, const ::android::net::Uri& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableUri", "(ILandroid/net/Uri;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::setFeatureDrawable(int32_t arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawable", "(ILandroid/graphics/drawable/Drawable;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::setFeatureDrawableAlpha(int32_t arg0, int32_t arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableAlpha", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::LayoutInflater android::app::Activity::getLayoutInflater() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutInflater", "()Landroid/view/LayoutInflater;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

::android::view::MenuInflater android::app::Activity::getMenuInflater() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMenuInflater", "()Landroid/view/MenuInflater;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::MenuInflater _ret(ret);
    return _ret;
}

void android::app::Activity::startActivityForResult(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityForResult", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::startIntentSenderForResult(const ::android::content::IntentSender& arg0, int32_t arg1, const ::android::content::Intent& arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startIntentSenderForResult", "(Landroid/content/IntentSender;ILandroid/content/Intent;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::app::Activity::startActivity(const ::android::content::Intent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivity", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::startActivities(const std::vector< ::android::content::Intent>& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivities", "([Landroid/content/Intent;)V");
    unsigned arg0s = arg0.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::content::Intent& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::startIntentSender(const ::android::content::IntentSender& arg0, const ::android::content::Intent& arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startIntentSender", "(Landroid/content/IntentSender;Landroid/content/Intent;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::app::Activity::startActivityIfNeeded(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityIfNeeded", "(Landroid/content/Intent;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::app::Activity::startNextMatchingActivity(const ::android::content::Intent& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startNextMatchingActivity", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::app::Activity::startActivityFromChild(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1, int32_t arg2) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityFromChild", "(Landroid/app/Activity;Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Activity::startActivityFromFragment(const ::android::app::Fragment& arg0, const ::android::content::Intent& arg1, int32_t arg2) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityFromFragment", "(Landroid/app/Fragment;Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Activity::startIntentSenderFromChild(const ::android::app::Activity& arg0, const ::android::content::IntentSender& arg1, int32_t arg2, const ::android::content::Intent& arg3, int32_t arg4, int32_t arg5, int32_t arg6) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startIntentSenderFromChild", "(Landroid/app/Activity;Landroid/content/IntentSender;ILandroid/content/Intent;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::app::Activity::overridePendingTransition(int32_t arg0, int32_t arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "overridePendingTransition", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Activity::setResult(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResult", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setResult(int32_t arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResult", "(ILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::app::Activity::getCallingPackage() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallingPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::app::Activity::getCallingActivity() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallingActivity", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

void android::app::Activity::setVisible(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Activity::isFinishing() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinishing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Activity::isChangingConfigurations() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChangingConfigurations", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::Activity::recreate() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "recreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::finish() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Activity::finishFromChild(const ::android::app::Activity& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishFromChild", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::finishActivity(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishActivity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::finishActivityFromChild(const ::android::app::Activity& arg0, int32_t arg1) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishActivityFromChild", "(Landroid/app/Activity;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::app::PendingIntent android::app::Activity::createPendingResult(int32_t arg0, const ::android::content::Intent& arg1, int32_t arg2) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "createPendingResult", "(ILandroid/content/Intent;I)Landroid/app/PendingIntent;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

void android::app::Activity::setRequestedOrientation(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRequestedOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::Activity::getRequestedOrientation() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestedOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::Activity::getTaskId() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTaskId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::app::Activity::isTaskRoot() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTaskRoot", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::Activity::moveTaskToBack(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveTaskToBack", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::app::Activity::getLocalClassName() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::app::Activity::getComponentName() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponentName", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::android::content::SharedPreferences android::app::Activity::getPreferences(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferences", "(I)Landroid/content/SharedPreferences;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::SharedPreferences _ret(ret);
    return _ret;
}

::java::lang::Object android::app::Activity::getSystemService(const ::java::lang::String& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::app::Activity::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setTitle(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setTitleColor(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitleColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::app::Activity::getTitle() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::app::Activity::getTitleColor() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitleColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::Activity::setProgressBarVisibility(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressBarVisibility", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setProgressBarIndeterminateVisibility(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressBarIndeterminateVisibility", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setProgressBarIndeterminate(bool arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressBarIndeterminate", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setProgress(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setSecondaryProgress(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSecondaryProgress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::setVolumeControlStream(int32_t arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeControlStream", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::Activity::getVolumeControlStream() const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeControlStream", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::Activity::runOnUiThread(const ::java::lang::Runnable& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "runOnUiThread", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::app::Activity::onCreateView(const ::java::lang::String& arg0, const ::android::content::Context& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::app::Activity::onCreateView(const ::android::view::View& arg0, const ::java::lang::String& arg1, const ::android::content::Context& arg2, const ::android::util::AttributeSet& arg3) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::app::Activity::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::view::ActionMode android::app::Activity::startActionMode(const ::android::view::ActionMode_Callback& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActionMode", "(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ActionMode _ret(ret);
    return _ret;
}

::android::view::ActionMode android::app::Activity::onWindowStartingActionMode(const ::android::view::ActionMode_Callback& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowStartingActionMode", "(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ActionMode _ret(ret);
    return _ret;
}

void android::app::Activity::onActionModeStarted(const ::android::view::ActionMode& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionModeStarted", "(Landroid/view/ActionMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Activity::onActionModeFinished(const ::android::view::ActionMode& arg0) const {
    if (!::android::app::Activity::_class) ::android::app::Activity::_class = java::fetch_class("android/app/Activity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionModeFinished", "(Landroid/view/ActionMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener::onBreadCrumbClick(const ::android::app::FragmentManager_BackStackEntry& arg0, int32_t arg1) const {
    if (!::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener::_class) ::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener::_class = java::fetch_class("android/app/FragmentBreadCrumbs$OnBreadCrumbClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBreadCrumbClick", "(Landroid/app/FragmentManager$BackStackEntry;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::app::KeyguardManager_KeyguardLock android::app::KeyguardManager::newKeyguardLock(const ::java::lang::String& arg0) const {
    if (!::android::app::KeyguardManager::_class) ::android::app::KeyguardManager::_class = java::fetch_class("android/app/KeyguardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "newKeyguardLock", "(Ljava/lang/String;)Landroid/app/KeyguardManager$KeyguardLock;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::KeyguardManager_KeyguardLock _ret(ret);
    return _ret;
}

bool android::app::KeyguardManager::inKeyguardRestrictedInputMode() const {
    if (!::android::app::KeyguardManager::_class) ::android::app::KeyguardManager::_class = java::fetch_class("android/app/KeyguardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "inKeyguardRestrictedInputMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::KeyguardManager::exitKeyguardSecurely(const ::android::app::KeyguardManager_OnKeyguardExitResult& arg0) const {
    if (!::android::app::KeyguardManager::_class) ::android::app::KeyguardManager::_class = java::fetch_class("android/app/KeyguardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "exitKeyguardSecurely", "(Landroid/app/KeyguardManager$OnKeyguardExitResult;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar_TabListener::onTabSelected(const ::android::app::ActionBar_Tab& arg0, const ::android::app::FragmentTransaction& arg1) const {
    if (!::android::app::ActionBar_TabListener::_class) ::android::app::ActionBar_TabListener::_class = java::fetch_class("android/app/ActionBar$TabListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTabSelected", "(Landroid/app/ActionBar$Tab;Landroid/app/FragmentTransaction;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActionBar_TabListener::onTabUnselected(const ::android::app::ActionBar_Tab& arg0, const ::android::app::FragmentTransaction& arg1) const {
    if (!::android::app::ActionBar_TabListener::_class) ::android::app::ActionBar_TabListener::_class = java::fetch_class("android/app/ActionBar$TabListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTabUnselected", "(Landroid/app/ActionBar$Tab;Landroid/app/FragmentTransaction;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActionBar_TabListener::onTabReselected(const ::android::app::ActionBar_Tab& arg0, const ::android::app::FragmentTransaction& arg1) const {
    if (!::android::app::ActionBar_TabListener::_class) ::android::app::ActionBar_TabListener::_class = java::fetch_class("android/app/ActionBar$TabListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTabReselected", "(Landroid/app/ActionBar$Tab;Landroid/app/FragmentTransaction;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::DatePickerDialog_OnDateSetListener::onDateSet(const ::android::widget::DatePicker& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::app::DatePickerDialog_OnDateSetListener::_class) ::android::app::DatePickerDialog_OnDateSetListener::_class = java::fetch_class("android/app/DatePickerDialog$OnDateSetListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDateSet", "(Landroid/widget/DatePicker;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityGroup::ActivityGroup() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::ActivityGroup::_class) ::android::app::ActivityGroup::_class = java::fetch_class("android/app/ActivityGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityGroup::ActivityGroup(bool arg0) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::ActivityGroup::_class) ::android::app::ActivityGroup::_class = java::fetch_class("android/app/ActivityGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Activity android::app::ActivityGroup::getCurrentActivity() const {
    if (!::android::app::ActivityGroup::_class) ::android::app::ActivityGroup::_class = java::fetch_class("android/app/ActivityGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::app::LocalActivityManager android::app::ActivityGroup::getLocalActivityManager() const {
    if (!::android::app::ActivityGroup::_class) ::android::app::ActivityGroup::_class = java::fetch_class("android/app/ActivityGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalActivityManager", "()Landroid/app/LocalActivityManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::LocalActivityManager _ret(ret);
    return _ret;
}

void android::app::FragmentManager_OnBackStackChangedListener::onBackStackChanged() const {
    if (!::android::app::FragmentManager_OnBackStackChangedListener::_class) ::android::app::FragmentManager_OnBackStackChangedListener::_class = java::fetch_class("android/app/FragmentManager$OnBackStackChangedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackStackChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::PendingIntent_OnFinished::onSendFinished(const ::android::app::PendingIntent& arg0, const ::android::content::Intent& arg1, int32_t arg2, const ::java::lang::String& arg3, const ::android::os::Bundle& arg4) const {
    if (!::android::app::PendingIntent_OnFinished::_class) ::android::app::PendingIntent_OnFinished::_class = java::fetch_class("android/app/PendingIntent$OnFinished");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSendFinished", "(Landroid/app/PendingIntent;Landroid/content/Intent;ILjava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport::ApplicationErrorReport() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ApplicationErrorReport::_class) ::android::app::ApplicationErrorReport::_class = java::fetch_class("android/app/ApplicationErrorReport");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::ComponentName android::app::ApplicationErrorReport::getErrorReportReceiver(const ::android::content::Context& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::android::app::ApplicationErrorReport::_class) ::android::app::ApplicationErrorReport::_class = java::fetch_class("android/app/ApplicationErrorReport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getErrorReportReceiver", "(Landroid/content/Context;Ljava/lang/String;I)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

void android::app::ApplicationErrorReport::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ApplicationErrorReport::_class) ::android::app::ApplicationErrorReport::_class = java::fetch_class("android/app/ApplicationErrorReport");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ApplicationErrorReport::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::app::ApplicationErrorReport::_class) ::android::app::ApplicationErrorReport::_class = java::fetch_class("android/app/ApplicationErrorReport");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::ApplicationErrorReport::describeContents() const {
    if (!::android::app::ApplicationErrorReport::_class) ::android::app::ApplicationErrorReport::_class = java::fetch_class("android/app/ApplicationErrorReport");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ApplicationErrorReport::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::ApplicationErrorReport::_class) ::android::app::ApplicationErrorReport::_class = java::fetch_class("android/app/ApplicationErrorReport");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::TimePickerDialog_OnTimeSetListener::onTimeSet(const ::android::widget::TimePicker& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::TimePickerDialog_OnTimeSetListener::_class) ::android::app::TimePickerDialog_OnTimeSetListener::_class = java::fetch_class("android/app/TimePickerDialog$OnTimeSetListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTimeSet", "(Landroid/widget/TimePicker;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ProgressDialog::ProgressDialog(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ProgressDialog::ProgressDialog(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::app::ProgressDialog android::app::ProgressDialog::show(const ::android::content::Context& arg0, const ::java::lang::CharSequence& arg1, const ::java::lang::CharSequence& arg2){
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::app::ProgressDialog _ret(ret);
    return _ret;
}

::android::app::ProgressDialog android::app::ProgressDialog::show(const ::android::content::Context& arg0, const ::java::lang::CharSequence& arg1, const ::java::lang::CharSequence& arg2, bool arg3){
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)Landroid/app/ProgressDialog;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::ProgressDialog _ret(ret);
    return _ret;
}

::android::app::ProgressDialog android::app::ProgressDialog::show(const ::android::content::Context& arg0, const ::java::lang::CharSequence& arg1, const ::java::lang::CharSequence& arg2, bool arg3, bool arg4){
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZ)Landroid/app/ProgressDialog;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    bool _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::app::ProgressDialog _ret(ret);
    return _ret;
}

::android::app::ProgressDialog android::app::ProgressDialog::show(const ::android::content::Context& arg0, const ::java::lang::CharSequence& arg1, const ::java::lang::CharSequence& arg2, bool arg3, bool arg4, const ::android::content::DialogInterface_OnCancelListener& arg5){
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZLandroid/content/DialogInterface$OnCancelListener;)Landroid/app/ProgressDialog;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    bool _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::app::ProgressDialog _ret(ret);
    return _ret;
}

void android::app::ProgressDialog::onStart() const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::ProgressDialog::setProgress(int32_t arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::setSecondaryProgress(int32_t arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSecondaryProgress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::ProgressDialog::getProgress() const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProgress", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::ProgressDialog::getSecondaryProgress() const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSecondaryProgress", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::ProgressDialog::getMax() const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMax", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ProgressDialog::setMax(int32_t arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMax", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::incrementProgressBy(int32_t arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementProgressBy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::incrementSecondaryProgressBy(int32_t arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementSecondaryProgressBy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::setProgressDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::setIndeterminateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndeterminateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::setIndeterminate(bool arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndeterminate", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::ProgressDialog::isIndeterminate() const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIndeterminate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::ProgressDialog::setMessage(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessage", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::setProgressStyle(int32_t arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressStyle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::setProgressNumberFormat(const ::java::lang::String& arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressNumberFormat", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ProgressDialog::setProgressPercentFormat(const ::java::text::NumberFormat& arg0) const {
    if (!::android::app::ProgressDialog::_class) ::android::app::ProgressDialog::_class = java::fetch_class("android/app/ProgressDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressPercentFormat", "(Ljava/text/NumberFormat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActionBar_LayoutParams::ActionBar_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::app::ActionBar_LayoutParams::_class) ::android::app::ActionBar_LayoutParams::_class = java::fetch_class("android/app/ActionBar$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActionBar_LayoutParams::ActionBar_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::app::ActionBar_LayoutParams::_class) ::android::app::ActionBar_LayoutParams::_class = java::fetch_class("android/app/ActionBar$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActionBar_LayoutParams::ActionBar_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::app::ActionBar_LayoutParams::_class) ::android::app::ActionBar_LayoutParams::_class = java::fetch_class("android/app/ActionBar$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActionBar_LayoutParams::ActionBar_LayoutParams(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::app::ActionBar_LayoutParams::_class) ::android::app::ActionBar_LayoutParams::_class = java::fetch_class("android/app/ActionBar$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActionBar_LayoutParams::ActionBar_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::app::ActionBar_LayoutParams::_class) ::android::app::ActionBar_LayoutParams::_class = java::fetch_class("android/app/ActionBar$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::WallpaperManager android::app::WallpaperManager::getInstance(const ::android::content::Context& arg0){
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Landroid/content/Context;)Landroid/app/WallpaperManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::app::WallpaperManager _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::app::WallpaperManager::getDrawable() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::app::WallpaperManager::peekDrawable() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::app::WallpaperManager::getFastDrawable() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFastDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::app::WallpaperManager::peekFastDrawable() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekFastDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::app::WallpaperManager::forgetLoadedWallpaper() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "forgetLoadedWallpaper", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::app::WallpaperInfo android::app::WallpaperManager::getWallpaperInfo() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaperInfo", "()Landroid/app/WallpaperInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::WallpaperInfo _ret(ret);
    return _ret;
}

void android::app::WallpaperManager::setResource(int32_t arg0) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::WallpaperManager::setBitmap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBitmap", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::WallpaperManager::setStream(const ::java::io::InputStream& arg0) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStream", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::WallpaperManager::getDesiredMinimumWidth() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDesiredMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::WallpaperManager::getDesiredMinimumHeight() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDesiredMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::WallpaperManager::suggestDesiredDimensions(int32_t arg0, int32_t arg1) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "suggestDesiredDimensions", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::WallpaperManager::setWallpaperOffsets(const ::android::os::IBinder& arg0, float arg1, float arg2) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaperOffsets", "(Landroid/os/IBinder;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::WallpaperManager::setWallpaperOffsetSteps(float arg0, float arg1) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaperOffsetSteps", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::WallpaperManager::sendWallpaperCommand(const ::android::os::IBinder& arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::os::Bundle& arg5) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendWallpaperCommand", "(Landroid/os/IBinder;Ljava/lang/String;IIILandroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::app::WallpaperManager::clearWallpaperOffsets(const ::android::os::IBinder& arg0) const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearWallpaperOffsets", "(Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::WallpaperManager::clear() const {
    if (!::android::app::WallpaperManager::_class) ::android::app::WallpaperManager::_class = java::fetch_class("android/app/WallpaperManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::LauncherActivity_IconResizer::LauncherActivity_IconResizer(const ::android::app::LauncherActivity& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::LauncherActivity_IconResizer::_class) ::android::app::LauncherActivity_IconResizer::_class = java::fetch_class("android/app/LauncherActivity$IconResizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/LauncherActivity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::graphics::drawable::Drawable android::app::LauncherActivity_IconResizer::createIconThumbnail(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::LauncherActivity_IconResizer::_class) ::android::app::LauncherActivity_IconResizer::_class = java::fetch_class("android/app/LauncherActivity$IconResizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "createIconThumbnail", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

bool android::app::ActionBar_OnNavigationListener::onNavigationItemSelected(int32_t arg0, int64_t arg1) const {
    if (!::android::app::ActionBar_OnNavigationListener::_class) ::android::app::ActionBar_OnNavigationListener::_class = java::fetch_class("android/app/ActionBar$OnNavigationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNavigationItemSelected", "(IJ)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityManager_ProcessErrorStateInfo::ActivityManager_ProcessErrorStateInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ActivityManager_ProcessErrorStateInfo::_class) ::android::app::ActivityManager_ProcessErrorStateInfo::_class = java::fetch_class("android/app/ActivityManager$ProcessErrorStateInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::app::ActivityManager_ProcessErrorStateInfo::describeContents() const {
    if (!::android::app::ActivityManager_ProcessErrorStateInfo::_class) ::android::app::ActivityManager_ProcessErrorStateInfo::_class = java::fetch_class("android/app/ActivityManager$ProcessErrorStateInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActivityManager_ProcessErrorStateInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager_ProcessErrorStateInfo::_class) ::android::app::ActivityManager_ProcessErrorStateInfo::_class = java::fetch_class("android/app/ActivityManager$ProcessErrorStateInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActivityManager_ProcessErrorStateInfo::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::app::ActivityManager_ProcessErrorStateInfo::_class) ::android::app::ActivityManager_ProcessErrorStateInfo::_class = java::fetch_class("android/app/ActivityManager$ProcessErrorStateInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Loader android::app::LoaderManager_LoaderCallbacks::onCreateLoader(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::LoaderManager_LoaderCallbacks::_class) ::android::app::LoaderManager_LoaderCallbacks::_class = java::fetch_class("android/app/LoaderManager$LoaderCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateLoader", "(ILandroid/os/Bundle;)Landroid/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Loader _ret(ret);
    return _ret;
}

void android::app::LoaderManager_LoaderCallbacks::onLoadFinished(const ::android::content::Loader& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::app::LoaderManager_LoaderCallbacks::_class) ::android::app::LoaderManager_LoaderCallbacks::_class = java::fetch_class("android/app/LoaderManager$LoaderCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadFinished", "(Landroid/content/Loader;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::LoaderManager_LoaderCallbacks::onLoaderReset(const ::android::content::Loader& arg0) const {
    if (!::android::app::LoaderManager_LoaderCallbacks::_class) ::android::app::LoaderManager_LoaderCallbacks::_class = java::fetch_class("android/app/LoaderManager$LoaderCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoaderReset", "(Landroid/content/Loader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::LauncherActivity::LauncherActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ListActivity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::LauncherActivity::_class) ::android::app::LauncherActivity::_class = java::fetch_class("android/app/LauncherActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::LauncherActivity::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::LauncherActivity::_class) ::android::app::LauncherActivity::_class = java::fetch_class("android/app/LauncherActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::LauncherActivity::setTitle(int32_t arg0) const {
    if (!::android::app::LauncherActivity::_class) ::android::app::LauncherActivity::_class = java::fetch_class("android/app/LauncherActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::app::LauncherActivity::makeListItems() const {
    if (!::android::app::LauncherActivity::_class) ::android::app::LauncherActivity::_class = java::fetch_class("android/app/LauncherActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeListItems", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::PendingIntent_CanceledException::PendingIntent_CanceledException() : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::app::PendingIntent_CanceledException::_class) ::android::app::PendingIntent_CanceledException::_class = java::fetch_class("android/app/PendingIntent$CanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::PendingIntent_CanceledException::PendingIntent_CanceledException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::app::PendingIntent_CanceledException::_class) ::android::app::PendingIntent_CanceledException::_class = java::fetch_class("android/app/PendingIntent$CanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::PendingIntent_CanceledException::PendingIntent_CanceledException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::app::PendingIntent_CanceledException::_class) ::android::app::PendingIntent_CanceledException::_class = java::fetch_class("android/app/PendingIntent$CanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_AnrInfo::_class) ::android::app::ApplicationErrorReport_AnrInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$AnrInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_AnrInfo::_class) ::android::app::ApplicationErrorReport_AnrInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$AnrInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::app::ApplicationErrorReport_AnrInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ApplicationErrorReport_AnrInfo::_class) ::android::app::ApplicationErrorReport_AnrInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$AnrInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ApplicationErrorReport_AnrInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::ApplicationErrorReport_AnrInfo::_class) ::android::app::ApplicationErrorReport_AnrInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$AnrInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ActivityManager_RunningTaskInfo::_class) ::android::app::ActivityManager_RunningTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RunningTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::app::ActivityManager_RunningTaskInfo::describeContents() const {
    if (!::android::app::ActivityManager_RunningTaskInfo::_class) ::android::app::ActivityManager_RunningTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RunningTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActivityManager_RunningTaskInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager_RunningTaskInfo::_class) ::android::app::ActivityManager_RunningTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RunningTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActivityManager_RunningTaskInfo::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::app::ActivityManager_RunningTaskInfo::_class) ::android::app::ActivityManager_RunningTaskInfo::_class = java::fetch_class("android/app/ActivityManager$RunningTaskInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::KeyguardManager_KeyguardLock::disableKeyguard() const {
    if (!::android::app::KeyguardManager_KeyguardLock::_class) ::android::app::KeyguardManager_KeyguardLock::_class = java::fetch_class("android/app/KeyguardManager$KeyguardLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "disableKeyguard", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::KeyguardManager_KeyguardLock::reenableKeyguard() const {
    if (!::android::app::KeyguardManager_KeyguardLock::_class) ::android::app::KeyguardManager_KeyguardLock::_class = java::fetch_class("android/app/KeyguardManager$KeyguardLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "reenableKeyguard", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::NotificationManager::notify(int32_t arg0, const ::android::app::Notification& arg1) const {
    if (!::android::app::NotificationManager::_class) ::android::app::NotificationManager::_class = java::fetch_class("android/app/NotificationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(ILandroid/app/Notification;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::NotificationManager::notify(const ::java::lang::String& arg0, int32_t arg1, const ::android::app::Notification& arg2) const {
    if (!::android::app::NotificationManager::_class) ::android::app::NotificationManager::_class = java::fetch_class("android/app/NotificationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(Ljava/lang/String;ILandroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::NotificationManager::cancel(int32_t arg0) const {
    if (!::android::app::NotificationManager::_class) ::android::app::NotificationManager::_class = java::fetch_class("android/app/NotificationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::NotificationManager::cancel(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::app::NotificationManager::_class) ::android::app::NotificationManager::_class = java::fetch_class("android/app/NotificationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::NotificationManager::cancelAll() const {
    if (!::android::app::NotificationManager::_class) ::android::app::NotificationManager::_class = java::fetch_class("android/app/NotificationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::DownloadManager_Request::DownloadManager_Request(const ::android::net::Uri& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setDestinationUri(const ::android::net::Uri& arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDestinationUri", "(Landroid/net/Uri;)Landroid/app/DownloadManager$Request;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setDestinationInExternalFilesDir(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDestinationInExternalFilesDir", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setDestinationInExternalPublicDir(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDestinationInExternalPublicDir", "(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

void android::app::DownloadManager_Request::allowScanningByMediaScanner() const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "allowScanningByMediaScanner", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::addRequestHeader(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestHeader", "(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDescription", "(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setMimeType(const ::java::lang::String& arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMimeType", "(Ljava/lang/String;)Landroid/app/DownloadManager$Request;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setShowRunningNotification(bool arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowRunningNotification", "(Z)Landroid/app/DownloadManager$Request;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setNotificationVisibility(int32_t arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotificationVisibility", "(I)Landroid/app/DownloadManager$Request;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setAllowedNetworkTypes(int32_t arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowedNetworkTypes", "(I)Landroid/app/DownloadManager$Request;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setAllowedOverRoaming(bool arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowedOverRoaming", "(Z)Landroid/app/DownloadManager$Request;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

::android::app::DownloadManager_Request android::app::DownloadManager_Request::setVisibleInDownloadsUi(bool arg0) const {
    if (!::android::app::DownloadManager_Request::_class) ::android::app::DownloadManager_Request::_class = java::fetch_class("android/app/DownloadManager$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibleInDownloadsUi", "(Z)Landroid/app/DownloadManager$Request;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::DownloadManager_Request _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::FragmentBreadCrumbs::FragmentBreadCrumbs(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::app::FragmentManager_OnBackStackChangedListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::FragmentBreadCrumbs::FragmentBreadCrumbs(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::app::FragmentManager_OnBackStackChangedListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::FragmentBreadCrumbs::FragmentBreadCrumbs(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::app::FragmentManager_OnBackStackChangedListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::app::FragmentBreadCrumbs::setActivity(const ::android::app::Activity& arg0) const {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivity", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::FragmentBreadCrumbs::setMaxVisible(int32_t arg0) const {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxVisible", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::FragmentBreadCrumbs::setParentTitle(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1, const ::android::view::View_OnClickListener& arg2) const {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParentTitle", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::FragmentBreadCrumbs::setOnBreadCrumbClickListener(const ::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener& arg0) const {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnBreadCrumbClickListener", "(Landroid/app/FragmentBreadCrumbs$OnBreadCrumbClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::FragmentBreadCrumbs::setTitle(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::FragmentBreadCrumbs::onBackStackChanged() const {
    if (!::android::app::FragmentBreadCrumbs::_class) ::android::app::FragmentBreadCrumbs::_class = java::fetch_class("android/app/FragmentBreadCrumbs");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackStackChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActionBar::ActionBar() : ::java::lang::Object((jobject)0) {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::ActionBar::setCustomView(const ::android::view::View& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setCustomView(const ::android::view::View& arg0, const ::android::app::ActionBar_LayoutParams& arg1) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomView", "(Landroid/view/View;Landroid/app/ActionBar$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActionBar::setCustomView(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomView", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setIcon(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setLogo(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLogo", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setLogo(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLogo", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setListNavigationCallbacks(const ::android::widget::SpinnerAdapter& arg0, const ::android::app::ActionBar_OnNavigationListener& arg1) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListNavigationCallbacks", "(Landroid/widget/SpinnerAdapter;Landroid/app/ActionBar$OnNavigationListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActionBar::setSelectedNavigationItem(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectedNavigationItem", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::ActionBar::getSelectedNavigationIndex() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedNavigationIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::ActionBar::getNavigationItemCount() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNavigationItemCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActionBar::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setTitle(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setSubtitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubtitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setSubtitle(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubtitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setDisplayOptions(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayOptions", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setDisplayOptions(int32_t arg0, int32_t arg1) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayOptions", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActionBar::setDisplayUseLogoEnabled(bool arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayUseLogoEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setDisplayShowHomeEnabled(bool arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayShowHomeEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setDisplayHomeAsUpEnabled(bool arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayHomeAsUpEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setDisplayShowTitleEnabled(bool arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayShowTitleEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setDisplayShowCustomEnabled(bool arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayShowCustomEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setStackedBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStackedBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setSplitBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSplitBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::app::ActionBar::getCustomView() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCustomView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::ActionBar::getTitle() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::ActionBar::getSubtitle() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::app::ActionBar::getNavigationMode() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNavigationMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActionBar::setNavigationMode(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNavigationMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::ActionBar::getDisplayOptions() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayOptions", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::app::ActionBar_Tab android::app::ActionBar::newTab() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTab", "()Landroid/app/ActionBar$Tab;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

void android::app::ActionBar::addTab(const ::android::app::ActionBar_Tab& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTab", "(Landroid/app/ActionBar$Tab;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::addTab(const ::android::app::ActionBar_Tab& arg0, bool arg1) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTab", "(Landroid/app/ActionBar$Tab;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActionBar::addTab(const ::android::app::ActionBar_Tab& arg0, int32_t arg1) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTab", "(Landroid/app/ActionBar$Tab;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActionBar::addTab(const ::android::app::ActionBar_Tab& arg0, int32_t arg1, bool arg2) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTab", "(Landroid/app/ActionBar$Tab;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::ActionBar::removeTab(const ::android::app::ActionBar_Tab& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeTab", "(Landroid/app/ActionBar$Tab;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::removeTabAt(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeTabAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::removeAllTabs() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllTabs", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::ActionBar::selectTab(const ::android::app::ActionBar_Tab& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "selectTab", "(Landroid/app/ActionBar$Tab;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::ActionBar_Tab android::app::ActionBar::getSelectedTab() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedTab", "()Landroid/app/ActionBar$Tab;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

::android::app::ActionBar_Tab android::app::ActionBar::getTabAt(int32_t arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabAt", "(I)Landroid/app/ActionBar$Tab;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::ActionBar_Tab _ret(ret);
    return _ret;
}

int32_t android::app::ActionBar::getTabCount() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::ActionBar::getHeight() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActionBar::show() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::ActionBar::hide() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::ActionBar::isShowing() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShowing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::ActionBar::addOnMenuVisibilityListener(const ::android::app::ActionBar_OnMenuVisibilityListener& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnMenuVisibilityListener", "(Landroid/app/ActionBar$OnMenuVisibilityListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::removeOnMenuVisibilityListener(const ::android::app::ActionBar_OnMenuVisibilityListener& arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnMenuVisibilityListener", "(Landroid/app/ActionBar$OnMenuVisibilityListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActionBar::setHomeButtonEnabled(bool arg0) const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHomeButtonEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Context android::app::ActionBar::getThemedContext() const {
    if (!::android::app::ActionBar::_class) ::android::app::ActionBar::_class = java::fetch_class("android/app/ActionBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThemedContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

int32_t android::app::FragmentManager_BackStackEntry::getId() const {
    if (!::android::app::FragmentManager_BackStackEntry::_class) ::android::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::app::FragmentManager_BackStackEntry::getName() const {
    if (!::android::app::FragmentManager_BackStackEntry::_class) ::android::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::app::FragmentManager_BackStackEntry::getBreadCrumbTitleRes() const {
    if (!::android::app::FragmentManager_BackStackEntry::_class) ::android::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbTitleRes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::FragmentManager_BackStackEntry::getBreadCrumbShortTitleRes() const {
    if (!::android::app::FragmentManager_BackStackEntry::_class) ::android::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbShortTitleRes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::app::FragmentManager_BackStackEntry::getBreadCrumbTitle() const {
    if (!::android::app::FragmentManager_BackStackEntry::_class) ::android::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::FragmentManager_BackStackEntry::getBreadCrumbShortTitle() const {
    if (!::android::app::FragmentManager_BackStackEntry::_class) ::android::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbShortTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_BatteryInfo::_class) ::android::app::ApplicationErrorReport_BatteryInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$BatteryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_BatteryInfo::_class) ::android::app::ApplicationErrorReport_BatteryInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$BatteryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::app::ApplicationErrorReport_BatteryInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ApplicationErrorReport_BatteryInfo::_class) ::android::app::ApplicationErrorReport_BatteryInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$BatteryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ApplicationErrorReport_BatteryInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::ApplicationErrorReport_BatteryInfo::_class) ::android::app::ApplicationErrorReport_BatteryInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$BatteryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Application::Application() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::Application::onCreate() const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Application::onTerminate() const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTerminate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Application::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application::onLowMemory() const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Application::onTrimMemory(int32_t arg0) const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrimMemory", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application::registerComponentCallbacks(const ::android::content::ComponentCallbacks& arg0) const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerComponentCallbacks", "(Landroid/content/ComponentCallbacks;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application::unregisterComponentCallbacks(const ::android::content::ComponentCallbacks& arg0) const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterComponentCallbacks", "(Landroid/content/ComponentCallbacks;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application::registerActivityLifecycleCallbacks(const ::android::app::Application_ActivityLifecycleCallbacks& arg0) const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerActivityLifecycleCallbacks", "(Landroid/app/Application$ActivityLifecycleCallbacks;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application::unregisterActivityLifecycleCallbacks(const ::android::app::Application_ActivityLifecycleCallbacks& arg0) const {
    if (!::android::app::Application::_class) ::android::app::Application::_class = java::fetch_class("android/app/Application");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterActivityLifecycleCallbacks", "(Landroid/app/Application$ActivityLifecycleCallbacks;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Instrumentation::Instrumentation() : ::java::lang::Object((jobject)0) {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::Instrumentation::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::start() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::onStart() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::app::Instrumentation::onException(const ::java::lang::Object& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "onException", "(Ljava/lang/Object;Ljava/lang/Throwable;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::sendStatus(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStatus", "(ILandroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::finish(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "(ILandroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::setAutomaticPerformanceSnapshots() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutomaticPerformanceSnapshots", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::startPerformanceSnapshot() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPerformanceSnapshot", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::endPerformanceSnapshot() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "endPerformanceSnapshot", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::onDestroy() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::content::Context android::app::Instrumentation::getContext() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::content::ComponentName android::app::Instrumentation::getComponentName() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponentName", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::android::content::Context android::app::Instrumentation::getTargetContext() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

bool android::app::Instrumentation::isProfiling() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "isProfiling", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::Instrumentation::startProfiling() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "startProfiling", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::stopProfiling() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopProfiling", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::setInTouchMode(bool arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInTouchMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::waitForIdle(const ::java::lang::Runnable& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForIdle", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::waitForIdleSync() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForIdleSync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::runOnMainSync(const ::java::lang::Runnable& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "runOnMainSync", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Activity android::app::Instrumentation::startActivitySync(const ::android::content::Intent& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivitySync", "(Landroid/content/Intent;)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::app::Instrumentation::addMonitor(const ::android::app::Instrumentation_ActivityMonitor& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMonitor", "(Landroid/app/Instrumentation$ActivityMonitor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Instrumentation_ActivityMonitor android::app::Instrumentation::addMonitor(const ::android::content::IntentFilter& arg0, const ::android::app::Instrumentation_ActivityResult& arg1, bool arg2) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMonitor", "(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Instrumentation_ActivityMonitor _ret(ret);
    return _ret;
}

::android::app::Instrumentation_ActivityMonitor android::app::Instrumentation::addMonitor(const ::java::lang::String& arg0, const ::android::app::Instrumentation_ActivityResult& arg1, bool arg2) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMonitor", "(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Instrumentation_ActivityMonitor _ret(ret);
    return _ret;
}

bool android::app::Instrumentation::checkMonitorHit(const ::android::app::Instrumentation_ActivityMonitor& arg0, int32_t arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkMonitorHit", "(Landroid/app/Instrumentation$ActivityMonitor;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::app::Activity android::app::Instrumentation::waitForMonitor(const ::android::app::Instrumentation_ActivityMonitor& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForMonitor", "(Landroid/app/Instrumentation$ActivityMonitor;)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::app::Activity android::app::Instrumentation::waitForMonitorWithTimeout(const ::android::app::Instrumentation_ActivityMonitor& arg0, int64_t arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForMonitorWithTimeout", "(Landroid/app/Instrumentation$ActivityMonitor;J)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::app::Instrumentation::removeMonitor(const ::android::app::Instrumentation_ActivityMonitor& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeMonitor", "(Landroid/app/Instrumentation$ActivityMonitor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::Instrumentation::invokeMenuActionSync(const ::android::app::Activity& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeMenuActionSync", "(Landroid/app/Activity;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::app::Instrumentation::invokeContextMenuAction(const ::android::app::Activity& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeContextMenuAction", "(Landroid/app/Activity;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::Instrumentation::sendStringSync(const ::java::lang::String& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStringSync", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::sendKeySync(const ::android::view::KeyEvent& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeySync", "(Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::sendKeyDownUpSync(int32_t arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeyDownUpSync", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::sendCharacterSync(int32_t arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCharacterSync", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::sendPointerSync(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendPointerSync", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::sendTrackballEventSync(const ::android::view::MotionEvent& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendTrackballEventSync", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Application android::app::Instrumentation::newApplication(const ::java::lang::ClassLoader& arg0, const ::java::lang::String& arg1, const ::android::content::Context& arg2) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "newApplication", "(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Context;)Landroid/app/Application;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Application _ret(ret);
    return _ret;
}

::android::app::Application android::app::Instrumentation::newApplication(const ::java::lang::Class& arg0, const ::android::content::Context& arg1){
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newApplication", "(Ljava/lang/Class;Landroid/content/Context;)Landroid/app/Application;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::app::Application _ret(ret);
    return _ret;
}

void android::app::Instrumentation::callApplicationOnCreate(const ::android::app::Application& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callApplicationOnCreate", "(Landroid/app/Application;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Activity android::app::Instrumentation::newActivity(const ::java::lang::Class& arg0, const ::android::content::Context& arg1, const ::android::os::IBinder& arg2, const ::android::app::Application& arg3, const ::android::content::Intent& arg4, const ::android::content::pm::ActivityInfo& arg5, const ::java::lang::CharSequence& arg6, const ::android::app::Activity& arg7, const ::java::lang::String& arg8, const ::java::lang::Object& arg9) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "newActivity", "(Ljava/lang/Class;Landroid/content/Context;Landroid/os/IBinder;Landroid/app/Application;Landroid/content/Intent;Landroid/content/pm/ActivityInfo;Ljava/lang/CharSequence;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/Object;)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject _arg8 = arg8.obj;
    jobject _arg9 = arg9.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::app::Activity android::app::Instrumentation::newActivity(const ::java::lang::ClassLoader& arg0, const ::java::lang::String& arg1, const ::android::content::Intent& arg2) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "newActivity", "(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::app::Instrumentation::callActivityOnCreate(const ::android::app::Activity& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnCreate", "(Landroid/app/Activity;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::callActivityOnDestroy(const ::android::app::Activity& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnDestroy", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::callActivityOnRestoreInstanceState(const ::android::app::Activity& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnRestoreInstanceState", "(Landroid/app/Activity;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::callActivityOnPostCreate(const ::android::app::Activity& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnPostCreate", "(Landroid/app/Activity;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::callActivityOnNewIntent(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnNewIntent", "(Landroid/app/Activity;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::callActivityOnStart(const ::android::app::Activity& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnStart", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::callActivityOnRestart(const ::android::app::Activity& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnRestart", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::callActivityOnResume(const ::android::app::Activity& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnResume", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::callActivityOnStop(const ::android::app::Activity& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnStop", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::callActivityOnSaveInstanceState(const ::android::app::Activity& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnSaveInstanceState", "(Landroid/app/Activity;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Instrumentation::callActivityOnPause(const ::android::app::Activity& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnPause", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::callActivityOnUserLeaving(const ::android::app::Activity& arg0) const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "callActivityOnUserLeaving", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Instrumentation::startAllocCounting() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "startAllocCounting", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::Instrumentation::stopAllocCounting() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopAllocCounting", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::Bundle android::app::Instrumentation::getAllocCounts() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllocCounts", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::app::Instrumentation::getBinderCounts() const {
    if (!::android::app::Instrumentation::_class) ::android::app::Instrumentation::_class = java::fetch_class("android/app/Instrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBinderCounts", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ExpandableListActivity::ExpandableListActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::ExpandableListView_OnChildClickListener((jobject)0), ::android::widget::ExpandableListView_OnGroupCollapseListener((jobject)0), ::android::widget::ExpandableListView_OnGroupExpandListener((jobject)0) {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::ExpandableListActivity::onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::app::ExpandableListActivity::onChildClick(const ::android::widget::ExpandableListView& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int64_t arg4) const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChildClick", "(Landroid/widget/ExpandableListView;Landroid/view/View;IIJ)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int64_t _arg4 = arg4;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::app::ExpandableListActivity::onGroupCollapse(int32_t arg0) const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupCollapse", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ExpandableListActivity::onGroupExpand(int32_t arg0) const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupExpand", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ExpandableListActivity::onContentChanged() const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::ExpandableListActivity::setListAdapter(const ::android::widget::ExpandableListAdapter& arg0) const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListAdapter", "(Landroid/widget/ExpandableListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::ExpandableListView android::app::ExpandableListActivity::getExpandableListView() const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpandableListView", "()Landroid/widget/ExpandableListView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ExpandableListView _ret(ret);
    return _ret;
}

::android::widget::ExpandableListAdapter android::app::ExpandableListActivity::getExpandableListAdapter() const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpandableListAdapter", "()Landroid/widget/ExpandableListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ExpandableListAdapter _ret(ret);
    return _ret;
}

int64_t android::app::ExpandableListActivity::getSelectedId() const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::app::ExpandableListActivity::getSelectedPosition() const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedPosition", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::app::ExpandableListActivity::setSelectedChild(int32_t arg0, int32_t arg1, bool arg2) const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectedChild", "(IIZ)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::ExpandableListActivity::setSelectedGroup(int32_t arg0) const {
    if (!::android::app::ExpandableListActivity::_class) ::android::app::ExpandableListActivity::_class = java::fetch_class("android/app/ExpandableListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectedGroup", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ListFragment::ListFragment() : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::view::View android::app::ListFragment::onCreateView(const ::android::view::LayoutInflater& arg0, const ::android::view::ViewGroup& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::app::ListFragment::onViewCreated(const ::android::view::View& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewCreated", "(Landroid/view/View;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ListFragment::onDestroyView() const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::ListFragment::onListItemClick(const ::android::widget::ListView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onListItemClick", "(Landroid/widget/ListView;Landroid/view/View;IJ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::app::ListFragment::setListAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ListFragment::setSelection(int32_t arg0) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::ListFragment::getSelectedItemPosition() const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::app::ListFragment::getSelectedItemId() const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::widget::ListView android::app::ListFragment::getListView() const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListView", "()Landroid/widget/ListView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListView _ret(ret);
    return _ret;
}

void android::app::ListFragment::setEmptyText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmptyText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ListFragment::setListShown(bool arg0) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListShown", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ListFragment::setListShownNoAnimation(bool arg0) const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListShownNoAnimation", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::ListAdapter android::app::ListFragment::getListAdapter() const {
    if (!::android::app::ListFragment::_class) ::android::app::ListFragment::_class = java::fetch_class("android/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

void android::app::AlarmManager::set(int32_t arg0, int64_t arg1, const ::android::app::PendingIntent& arg2) const {
    if (!::android::app::AlarmManager::_class) ::android::app::AlarmManager::_class = java::fetch_class("android/app/AlarmManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IJLandroid/app/PendingIntent;)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::AlarmManager::setRepeating(int32_t arg0, int64_t arg1, int64_t arg2, const ::android::app::PendingIntent& arg3) const {
    if (!::android::app::AlarmManager::_class) ::android::app::AlarmManager::_class = java::fetch_class("android/app/AlarmManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRepeating", "(IJJLandroid/app/PendingIntent;)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::app::AlarmManager::setInexactRepeating(int32_t arg0, int64_t arg1, int64_t arg2, const ::android::app::PendingIntent& arg3) const {
    if (!::android::app::AlarmManager::_class) ::android::app::AlarmManager::_class = java::fetch_class("android/app/AlarmManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInexactRepeating", "(IJJLandroid/app/PendingIntent;)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::app::AlarmManager::cancel(const ::android::app::PendingIntent& arg0) const {
    if (!::android::app::AlarmManager::_class) ::android::app::AlarmManager::_class = java::fetch_class("android/app/AlarmManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlarmManager::setTime(int64_t arg0) const {
    if (!::android::app::AlarmManager::_class) ::android::app::AlarmManager::_class = java::fetch_class("android/app/AlarmManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::AlarmManager::setTimeZone(const ::java::lang::String& arg0) const {
    if (!::android::app::AlarmManager::_class) ::android::app::AlarmManager::_class = java::fetch_class("android/app/AlarmManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeZone", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ListActivity::ListActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::ListActivity::onContentChanged() const {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::ListActivity::setListAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ListActivity::setSelection(int32_t arg0) const {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::ListActivity::getSelectedItemPosition() const {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::app::ListActivity::getSelectedItemId() const {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::widget::ListView android::app::ListActivity::getListView() const {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListView", "()Landroid/widget/ListView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListView _ret(ret);
    return _ret;
}

::android::widget::ListAdapter android::app::ListActivity::getListAdapter() const {
    if (!::android::app::ListActivity::_class) ::android::app::ListActivity::_class = java::fetch_class("android/app/ListActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

int64_t android::app::DownloadManager::enqueue(const ::android::app::DownloadManager_Request& arg0) const {
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "enqueue", "(Landroid/app/DownloadManager$Request;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t android::app::DownloadManager::remove(const std::vector< int64_t>& arg0) const {
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "([J)I");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::database::Cursor android::app::DownloadManager::query(const ::android::app::DownloadManager_Query& arg0) const {
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::app::DownloadManager::openDownloadedFile(int64_t arg0) const {
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openDownloadedFile", "(J)Landroid/os/ParcelFileDescriptor;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::net::Uri android::app::DownloadManager::getUriForDownloadedFile(int64_t arg0) const {
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUriForDownloadedFile", "(J)Landroid/net/Uri;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::app::DownloadManager::getMimeTypeForDownloadedFile(int64_t arg0) const {
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeTypeForDownloadedFile", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Long android::app::DownloadManager::getMaxBytesOverMobile(const ::android::content::Context& arg0){
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxBytesOverMobile", "(Landroid/content/Context;)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Long _ret(ret);
    return _ret;
}

::java::lang::Long android::app::DownloadManager::getRecommendedMaxBytesOverMobile(const ::android::content::Context& arg0){
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRecommendedMaxBytesOverMobile", "(Landroid/content/Context;)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Long _ret(ret);
    return _ret;
}

int64_t android::app::DownloadManager::addCompletedDownload(const ::java::lang::String& arg0, const ::java::lang::String& arg1, bool arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, int64_t arg5, bool arg6) const {
    if (!::android::app::DownloadManager::_class) ::android::app::DownloadManager::_class = java::fetch_class("android/app/DownloadManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCompletedDownload", "(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;JZ)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int64_t _arg5 = arg5;
    bool _arg6 = arg6;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_RunningServiceInfo::_class) ::android::app::ApplicationErrorReport_RunningServiceInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_RunningServiceInfo::_class) ::android::app::ApplicationErrorReport_RunningServiceInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::app::ApplicationErrorReport_RunningServiceInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ApplicationErrorReport_RunningServiceInfo::_class) ::android::app::ApplicationErrorReport_RunningServiceInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ApplicationErrorReport_RunningServiceInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::ApplicationErrorReport_RunningServiceInfo::_class) ::android::app::ApplicationErrorReport_RunningServiceInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::KeyguardManager_OnKeyguardExitResult::onKeyguardExitResult(bool arg0) const {
    if (!::android::app::KeyguardManager_OnKeyguardExitResult::_class) ::android::app::KeyguardManager_OnKeyguardExitResult::_class = java::fetch_class("android/app/KeyguardManager$OnKeyguardExitResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyguardExitResult", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ActivityManager_RunningServiceInfo::_class) ::android::app::ActivityManager_RunningServiceInfo::_class = java::fetch_class("android/app/ActivityManager$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::app::ActivityManager_RunningServiceInfo::describeContents() const {
    if (!::android::app::ActivityManager_RunningServiceInfo::_class) ::android::app::ActivityManager_RunningServiceInfo::_class = java::fetch_class("android/app/ActivityManager$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActivityManager_RunningServiceInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager_RunningServiceInfo::_class) ::android::app::ActivityManager_RunningServiceInfo::_class = java::fetch_class("android/app/ActivityManager$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActivityManager_RunningServiceInfo::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::app::ActivityManager_RunningServiceInfo::_class) ::android::app::ActivityManager_RunningServiceInfo::_class = java::fetch_class("android/app/ActivityManager$RunningServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Instrumentation_ActivityResult::Instrumentation_ActivityResult(int32_t arg0, const ::android::content::Intent& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::app::Instrumentation_ActivityResult::_class) ::android::app::Instrumentation_ActivityResult::_class = java::fetch_class("android/app/Instrumentation$ActivityResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::app::Instrumentation_ActivityResult::getResultCode() const {
    if (!::android::app::Instrumentation_ActivityResult::_class) ::android::app::Instrumentation_ActivityResult::_class = java::fetch_class("android/app/Instrumentation$ActivityResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::content::Intent android::app::Instrumentation_ActivityResult::getResultData() const {
    if (!::android::app::Instrumentation_ActivityResult::_class) ::android::app::Instrumentation_ActivityResult::_class = java::fetch_class("android/app/Instrumentation$ActivityResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultData", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Fragment_InstantiationException::Fragment_InstantiationException(const ::java::lang::String& arg0, const ::java::lang::Exception& arg1) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::app::Fragment_InstantiationException::_class) ::android::app::Fragment_InstantiationException::_class = java::fetch_class("android/app/Fragment$InstantiationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::IntentService::IntentService(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::app::IntentService::_class) ::android::app::IntentService::_class = java::fetch_class("android/app/IntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::app::IntentService::setIntentRedelivery(bool arg0) const {
    if (!::android::app::IntentService::_class) ::android::app::IntentService::_class = java::fetch_class("android/app/IntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntentRedelivery", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::IntentService::onCreate() const {
    if (!::android::app::IntentService::_class) ::android::app::IntentService::_class = java::fetch_class("android/app/IntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::IntentService::onStart(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::app::IntentService::_class) ::android::app::IntentService::_class = java::fetch_class("android/app/IntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::IntentService::onStartCommand(const ::android::content::Intent& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::IntentService::_class) ::android::app::IntentService::_class = java::fetch_class("android/app/IntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartCommand", "(Landroid/content/Intent;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::IntentService::onDestroy() const {
    if (!::android::app::IntentService::_class) ::android::app::IntentService::_class = java::fetch_class("android/app/IntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::IBinder android::app::IntentService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::app::IntentService::_class) ::android::app::IntentService::_class = java::fetch_class("android/app/IntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

void android::app::Application_ActivityLifecycleCallbacks::onActivityCreated(const ::android::app::Activity& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Application_ActivityLifecycleCallbacks::_class) ::android::app::Application_ActivityLifecycleCallbacks::_class = java::fetch_class("android/app/Application$ActivityLifecycleCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityCreated", "(Landroid/app/Activity;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Application_ActivityLifecycleCallbacks::onActivityStarted(const ::android::app::Activity& arg0) const {
    if (!::android::app::Application_ActivityLifecycleCallbacks::_class) ::android::app::Application_ActivityLifecycleCallbacks::_class = java::fetch_class("android/app/Application$ActivityLifecycleCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityStarted", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application_ActivityLifecycleCallbacks::onActivityResumed(const ::android::app::Activity& arg0) const {
    if (!::android::app::Application_ActivityLifecycleCallbacks::_class) ::android::app::Application_ActivityLifecycleCallbacks::_class = java::fetch_class("android/app/Application$ActivityLifecycleCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResumed", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application_ActivityLifecycleCallbacks::onActivityPaused(const ::android::app::Activity& arg0) const {
    if (!::android::app::Application_ActivityLifecycleCallbacks::_class) ::android::app::Application_ActivityLifecycleCallbacks::_class = java::fetch_class("android/app/Application$ActivityLifecycleCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityPaused", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application_ActivityLifecycleCallbacks::onActivityStopped(const ::android::app::Activity& arg0) const {
    if (!::android::app::Application_ActivityLifecycleCallbacks::_class) ::android::app::Application_ActivityLifecycleCallbacks::_class = java::fetch_class("android/app/Application$ActivityLifecycleCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityStopped", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::Application_ActivityLifecycleCallbacks::onActivitySaveInstanceState(const ::android::app::Activity& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::app::Application_ActivityLifecycleCallbacks::_class) ::android::app::Application_ActivityLifecycleCallbacks::_class = java::fetch_class("android/app/Application$ActivityLifecycleCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivitySaveInstanceState", "(Landroid/app/Activity;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::Application_ActivityLifecycleCallbacks::onActivityDestroyed(const ::android::app::Activity& arg0) const {
    if (!::android::app::Application_ActivityLifecycleCallbacks::_class) ::android::app::Application_ActivityLifecycleCallbacks::_class = java::fetch_class("android/app/Application$ActivityLifecycleCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityDestroyed", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ActivityManager_RunningAppProcessInfo::_class) ::android::app::ActivityManager_RunningAppProcessInfo::_class = java::fetch_class("android/app/ActivityManager$RunningAppProcessInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo(const ::java::lang::String& arg0, int32_t arg1, const std::vector< ::java::lang::String>& arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ActivityManager_RunningAppProcessInfo::_class) ::android::app::ActivityManager_RunningAppProcessInfo::_class = java::fetch_class("android/app/ActivityManager$RunningAppProcessInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::app::ActivityManager_RunningAppProcessInfo::describeContents() const {
    if (!::android::app::ActivityManager_RunningAppProcessInfo::_class) ::android::app::ActivityManager_RunningAppProcessInfo::_class = java::fetch_class("android/app/ActivityManager$RunningAppProcessInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActivityManager_RunningAppProcessInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager_RunningAppProcessInfo::_class) ::android::app::ActivityManager_RunningAppProcessInfo::_class = java::fetch_class("android/app/ActivityManager$RunningAppProcessInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActivityManager_RunningAppProcessInfo::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::app::ActivityManager_RunningAppProcessInfo::_class) ::android::app::ActivityManager_RunningAppProcessInfo::_class = java::fetch_class("android/app/ActivityManager$RunningAppProcessInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(const ::android::content::IntentFilter& arg0, const ::android::app::Instrumentation_ActivityResult& arg1, bool arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(const ::java::lang::String& arg0, const ::android::app::Instrumentation_ActivityResult& arg1, bool arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::content::IntentFilter android::app::Instrumentation_ActivityMonitor::getFilter() const {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/content/IntentFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::IntentFilter _ret(ret);
    return _ret;
}

::android::app::Instrumentation_ActivityResult android::app::Instrumentation_ActivityMonitor::getResult() const {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResult", "()Landroid/app/Instrumentation$ActivityResult;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Instrumentation_ActivityResult _ret(ret);
    return _ret;
}

bool android::app::Instrumentation_ActivityMonitor::isBlocking() const {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBlocking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::app::Instrumentation_ActivityMonitor::getHits() const {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::app::Activity android::app::Instrumentation_ActivityMonitor::getLastActivity() const {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::app::Activity android::app::Instrumentation_ActivityMonitor::waitForActivity() const {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::app::Activity android::app::Instrumentation_ActivityMonitor::waitForActivityWithTimeout(int64_t arg0) const {
    if (!::android::app::Instrumentation_ActivityMonitor::_class) ::android::app::Instrumentation_ActivityMonitor::_class = java::fetch_class("android/app/Instrumentation$ActivityMonitor");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForActivityWithTimeout", "(J)Landroid/app/Activity;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Activity _ret(ret);
    return _ret;
}

int32_t android::app::Fragment_SavedState::describeContents() const {
    if (!::android::app::Fragment_SavedState::_class) ::android::app::Fragment_SavedState::_class = java::fetch_class("android/app/Fragment$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::Fragment_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::Fragment_SavedState::_class) ::android::app::Fragment_SavedState::_class = java::fetch_class("android/app/Fragment$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::LauncherActivity_ListItem::LauncherActivity_ListItem() : ::java::lang::Object((jobject)0) {
    if (!::android::app::LauncherActivity_ListItem::_class) ::android::app::LauncherActivity_ListItem::_class = java::fetch_class("android/app/LauncherActivity$ListItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::ActionBar_OnMenuVisibilityListener::onMenuVisibilityChanged(bool arg0) const {
    if (!::android::app::ActionBar_OnMenuVisibilityListener::_class) ::android::app::ActionBar_OnMenuVisibilityListener::_class = java::fetch_class("android/app/ActionBar$OnMenuVisibilityListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuVisibilityChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::ActivityManager::getMemoryClass() const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMemoryClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::ActivityManager::getLargeMemoryClass() const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLargeMemoryClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::app::ActivityManager::getRecentTasks(int32_t arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecentTasks", "(II)Ljava/util/List;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::app::ActivityManager::getRunningTasks(int32_t arg0) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunningTasks", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::app::ActivityManager::moveTaskToFront(int32_t arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveTaskToFront", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::app::ActivityManager::getRunningServices(int32_t arg0) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunningServices", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::app::ActivityManager::getRunningServiceControlPanel(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunningServiceControlPanel", "(Landroid/content/ComponentName;)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

void android::app::ActivityManager::getMemoryInfo(const ::android::app::ActivityManager_MemoryInfo& arg0) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMemoryInfo", "(Landroid/app/ActivityManager$MemoryInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::app::ActivityManager::getProcessesInErrorState() const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProcessesInErrorState", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::app::ActivityManager::getRunningAppProcesses() const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunningAppProcesses", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

std::vector< ::android::os::Debug_MemoryInfo> android::app::ActivityManager::getProcessMemoryInfo(const std::vector< int32_t>& arg0) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProcessMemoryInfo", "([I)[Landroid/os/Debug$MemoryInfo;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::Debug_MemoryInfo> _ret(rets, ::android::os::Debug_MemoryInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::Debug_MemoryInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::app::ActivityManager::restartPackage(const ::java::lang::String& arg0) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "restartPackage", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::ActivityManager::killBackgroundProcesses(const ::java::lang::String& arg0) const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "killBackgroundProcesses", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::pm::ConfigurationInfo android::app::ActivityManager::getDeviceConfigurationInfo() const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceConfigurationInfo", "()Landroid/content/pm/ConfigurationInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ConfigurationInfo _ret(ret);
    return _ret;
}

int32_t android::app::ActivityManager::getLauncherLargeIconDensity() const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLauncherLargeIconDensity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::ActivityManager::getLauncherLargeIconSize() const {
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLauncherLargeIconSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::app::ActivityManager::isUserAMonkey(){
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isUserAMonkey", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool android::app::ActivityManager::isRunningInTestHarness(){
    if (!::android::app::ActivityManager::_class) ::android::app::ActivityManager::_class = java::fetch_class("android/app/ActivityManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isRunningInTestHarness", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void android::app::SearchManager_OnDismissListener::onDismiss() const {
    if (!::android::app::SearchManager_OnDismissListener::_class) ::android::app::SearchManager_OnDismissListener::_class = java::fetch_class("android/app/SearchManager$OnDismissListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::LocalActivityManager::LocalActivityManager(const ::android::app::Activity& arg0, bool arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::view::Window android::app::LocalActivityManager::startActivity(const ::java::lang::String& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivity", "(Ljava/lang/String;Landroid/content/Intent;)Landroid/view/Window;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::Window _ret(ret);
    return _ret;
}

::android::view::Window android::app::LocalActivityManager::destroyActivity(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyActivity", "(Ljava/lang/String;Z)Landroid/view/Window;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::Window _ret(ret);
    return _ret;
}

::android::app::Activity android::app::LocalActivityManager::getCurrentActivity() const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::java::lang::String android::app::LocalActivityManager::getCurrentId() const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::app::Activity android::app::LocalActivityManager::getActivity(const ::java::lang::String& arg0) const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivity", "(Ljava/lang/String;)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::app::LocalActivityManager::dispatchCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::app::LocalActivityManager::saveInstanceState() const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveInstanceState", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::app::LocalActivityManager::dispatchResume() const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::LocalActivityManager::dispatchPause(bool arg0) const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPause", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::LocalActivityManager::dispatchStop() const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::LocalActivityManager::removeAllActivities() const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllActivities", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::LocalActivityManager::dispatchDestroy(bool arg0) const {
    if (!::android::app::LocalActivityManager::_class) ::android::app::LocalActivityManager::_class = java::fetch_class("android/app/LocalActivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDestroy", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::DialogFragment::DialogFragment() : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::DialogFragment::setStyle(int32_t arg0, int32_t arg1) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStyle", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::DialogFragment::show(const ::android::app::FragmentManager& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Landroid/app/FragmentManager;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::DialogFragment::show(const ::android::app::FragmentTransaction& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Landroid/app/FragmentTransaction;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::app::DialogFragment::dismiss() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::DialogFragment::dismissAllowingStateLoss() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismissAllowingStateLoss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::app::Dialog android::app::DialogFragment::getDialog() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialog", "()Landroid/app/Dialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

int32_t android::app::DialogFragment::getTheme() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTheme", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::DialogFragment::setCancelable(bool arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCancelable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::DialogFragment::isCancelable() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::DialogFragment::setShowsDialog(bool arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowsDialog", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::DialogFragment::getShowsDialog() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShowsDialog", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::app::DialogFragment::onAttach(const ::android::app::Activity& arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttach", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::DialogFragment::onDetach() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::DialogFragment::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Dialog android::app::DialogFragment::onCreateDialog(const ::android::os::Bundle& arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateDialog", "(Landroid/os/Bundle;)Landroid/app/Dialog;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

void android::app::DialogFragment::onCancel(const ::android::content::DialogInterface& arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::DialogFragment::onDismiss(const ::android::content::DialogInterface& arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::DialogFragment::onActivityCreated(const ::android::os::Bundle& arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityCreated", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::DialogFragment::onStart() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::DialogFragment::onSaveInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::DialogFragment::onStop() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::DialogFragment::onDestroyView() const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::DialogFragment::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::app::DialogFragment::_class) ::android::app::DialogFragment::_class = java::fetch_class("android/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ActivityManager_MemoryInfo::ActivityManager_MemoryInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::ActivityManager_MemoryInfo::_class) ::android::app::ActivityManager_MemoryInfo::_class = java::fetch_class("android/app/ActivityManager$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::app::ActivityManager_MemoryInfo::describeContents() const {
    if (!::android::app::ActivityManager_MemoryInfo::_class) ::android::app::ActivityManager_MemoryInfo::_class = java::fetch_class("android/app/ActivityManager$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::ActivityManager_MemoryInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ActivityManager_MemoryInfo::_class) ::android::app::ActivityManager_MemoryInfo::_class = java::fetch_class("android/app/ActivityManager$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ActivityManager_MemoryInfo::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::app::ActivityManager_MemoryInfo::_class) ::android::app::ActivityManager_MemoryInfo::_class = java::fetch_class("android/app/ActivityManager$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::AlertDialog_Builder::AlertDialog_Builder(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::AlertDialog_Builder::AlertDialog_Builder(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::Context android::app::AlertDialog_Builder::getContext() const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setTitle(int32_t arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setCustomTitle(const ::android::view::View& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomTitle", "(Landroid/view/View;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setMessage(int32_t arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessage", "(I)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setMessage(const ::java::lang::CharSequence& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessage", "(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setIcon(int32_t arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(I)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(Landroid/graphics/drawable/Drawable;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setIconAttribute(int32_t arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconAttribute", "(I)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setPositiveButton(int32_t arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositiveButton", "(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setPositiveButton(const ::java::lang::CharSequence& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositiveButton", "(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setNegativeButton(int32_t arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNegativeButton", "(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setNegativeButton(const ::java::lang::CharSequence& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNegativeButton", "(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setNeutralButton(int32_t arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNeutralButton", "(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setNeutralButton(const ::java::lang::CharSequence& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNeutralButton", "(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setCancelable(bool arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCancelable", "(Z)Landroid/app/AlertDialog$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setOnCancelListener(const ::android::content::DialogInterface_OnCancelListener& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCancelListener", "(Landroid/content/DialogInterface$OnCancelListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setOnKeyListener(const ::android::content::DialogInterface_OnKeyListener& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnKeyListener", "(Landroid/content/DialogInterface$OnKeyListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setItems(int32_t arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItems", "(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setItems(const std::vector< ::java::lang::CharSequence>& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItems", "([Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setAdapter(const ::android::widget::ListAdapter& arg0, const ::android::content::DialogInterface_OnClickListener& arg1) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ListAdapter;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setCursor(const ::android::database::Cursor& arg0, const ::android::content::DialogInterface_OnClickListener& arg1, const ::java::lang::String& arg2) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursor", "(Landroid/database/Cursor;Landroid/content/DialogInterface$OnClickListener;Ljava/lang/String;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setMultiChoiceItems(int32_t arg0, const std::vector< bool>& arg1, const ::android::content::DialogInterface_OnMultiChoiceClickListener& arg2) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMultiChoiceItems", "(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setMultiChoiceItems(const std::vector< ::java::lang::CharSequence>& arg0, const std::vector< bool>& arg1, const ::android::content::DialogInterface_OnMultiChoiceClickListener& arg2) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMultiChoiceItems", "([Ljava/lang/CharSequence;[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setMultiChoiceItems(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::content::DialogInterface_OnMultiChoiceClickListener& arg3) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMultiChoiceItems", "(Landroid/database/Cursor;Ljava/lang/String;Ljava/lang/String;Landroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setSingleChoiceItems(int32_t arg0, int32_t arg1, const ::android::content::DialogInterface_OnClickListener& arg2) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleChoiceItems", "(IILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setSingleChoiceItems(const ::android::database::Cursor& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::android::content::DialogInterface_OnClickListener& arg3) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleChoiceItems", "(Landroid/database/Cursor;ILjava/lang/String;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setSingleChoiceItems(const std::vector< ::java::lang::CharSequence>& arg0, int32_t arg1, const ::android::content::DialogInterface_OnClickListener& arg2) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleChoiceItems", "([Ljava/lang/CharSequence;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setSingleChoiceItems(const ::android::widget::ListAdapter& arg0, int32_t arg1, const ::android::content::DialogInterface_OnClickListener& arg2) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleChoiceItems", "(Landroid/widget/ListAdapter;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemSelectedListener", "(Landroid/widget/AdapterView$OnItemSelectedListener;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setView(const ::android::view::View& arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setView", "(Landroid/view/View;)Landroid/app/AlertDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog_Builder android::app::AlertDialog_Builder::setInverseBackgroundForced(bool arg0) const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInverseBackgroundForced", "(Z)Landroid/app/AlertDialog$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::AlertDialog_Builder _ret(ret);
    return _ret;
}

::android::app::AlertDialog android::app::AlertDialog_Builder::create() const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/app/AlertDialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::AlertDialog _ret(ret);
    return _ret;
}

::android::app::AlertDialog android::app::AlertDialog_Builder::show() const {
    if (!::android::app::AlertDialog_Builder::_class) ::android::app::AlertDialog_Builder::_class = java::fetch_class("android/app/AlertDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()Landroid/app/AlertDialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::AlertDialog _ret(ret);
    return _ret;
}

void android::app::SearchManager_OnCancelListener::onCancel() const {
    if (!::android::app::SearchManager_OnCancelListener::_class) ::android::app::SearchManager_OnCancelListener::_class = java::fetch_class("android/app/SearchManager$OnCancelListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_CrashInfo::_class) ::android::app::ApplicationErrorReport_CrashInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$CrashInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_CrashInfo::_class) ::android::app::ApplicationErrorReport_CrashInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$CrashInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::ApplicationErrorReport_CrashInfo::_class) ::android::app::ApplicationErrorReport_CrashInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$CrashInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::app::ApplicationErrorReport_CrashInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::ApplicationErrorReport_CrashInfo::_class) ::android::app::ApplicationErrorReport_CrashInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$CrashInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::ApplicationErrorReport_CrashInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::ApplicationErrorReport_CrashInfo::_class) ::android::app::ApplicationErrorReport_CrashInfo::_class = java::fetch_class("android/app/ApplicationErrorReport$CrashInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

