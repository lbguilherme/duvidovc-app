#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.app.ActivityManager.hpp"
#include "android.app.Dialog.hpp"
#include "android.app.Notification.hpp"
#include "android.app.NotificationManager.hpp"
#include "android.app.PendingIntent.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.DialogInterface.hpp"
#include "android.content.Intent.hpp"
#include "android.content.pm.ActivityInfo.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Matrix.hpp"
#include "android.graphics.RectF.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Message.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.Parcelable.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle.hpp"
#include "android.support.v4.app.ActivityCompat.hpp"
#include "android.support.v4.app.ActivityManagerCompat.hpp"
#include "android.support.v4.app.ActivityOptionsCompat.hpp"
#include "android.support.v4.app.BackStackRecord.hpp"
#include "android.support.v4.app.BackStackState.hpp"
#include "android.support.v4.app.DialogFragment.hpp"
#include "android.support.v4.app.Fragment.hpp"
#include "android.support.v4.app.FragmentActivity.hpp"
#include "android.support.v4.app.FragmentContainer.hpp"
#include "android.support.v4.app.FragmentManager.hpp"
#include "android.support.v4.app.FragmentManagerImpl.hpp"
#include "android.support.v4.app.FragmentManagerState.hpp"
#include "android.support.v4.app.FragmentPagerAdapter.hpp"
#include "android.support.v4.app.FragmentState.hpp"
#include "android.support.v4.app.FragmentStatePagerAdapter.hpp"
#include "android.support.v4.app.FragmentTabHost.hpp"
#include "android.support.v4.app.FragmentTransaction.hpp"
#include "android.support.v4.app.INotificationSideChannel.hpp"
#include "android.support.v4.app.ListFragment.hpp"
#include "android.support.v4.app.LoaderManager.hpp"
#include "android.support.v4.app.LoaderManagerImpl.hpp"
#include "android.support.v4.app.NavUtils.hpp"
#include "android.support.v4.app.NoSaveStateFrameLayout.hpp"
#include "android.support.v4.app.NotificationCompat.hpp"
#include "android.support.v4.app.NotificationCompatExtras.hpp"
#include "android.support.v4.app.NotificationCompatSideChannelService.hpp"
#include "android.support.v4.app.NotificationManagerCompat.hpp"
#include "android.support.v4.app.RemoteInput.hpp"
#include "android.support.v4.app.ServiceCompat.hpp"
#include "android.support.v4.app.ShareCompat.hpp"
#include "android.support.v4.app.SharedElementCallback.hpp"
#include "android.support.v4.app.SuperNotCalledException.hpp"
#include "android.support.v4.app.TaskStackBuilder.hpp"
#include "android.support.v4.content.Loader.hpp"
#include "android.support.v4.util.Pair.hpp"
#include "android.support.v4.widget.DrawerLayout.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.SparseArray.hpp"
#include "android.view.ContextMenu.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.LayoutInflater.hpp"
#include "android.view.Menu.hpp"
#include "android.view.MenuInflater.hpp"
#include "android.view.MenuItem.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.view.animation.Animation.hpp"
#include "android.widget.ListAdapter.hpp"
#include "android.widget.ListView.hpp"
#include "android.widget.RemoteViews.hpp"
#include "android.widget.TabHost.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"

jclass android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class = nullptr;
jclass android::support::v4::app::RemoteInput_Builder::_class = nullptr;
jclass android::support::v4::app::LoaderManager_LoaderCallbacks::_class = nullptr;
jclass android::support::v4::app::SharedElementCallback::_class = nullptr;
jclass android::support::v4::app::INotificationSideChannel::_class = nullptr;
jclass android::support::v4::app::ShareCompat_IntentBuilder::_class = nullptr;
jclass android::support::v4::app::FragmentActivity::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_CancelTask::_class = nullptr;
jclass android::support::v4::app::FragmentManagerState::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_Builder::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_ImplIceCreamSandwich::_class = nullptr;
jclass android::support::v4::app::FragmentActivity_NonConfigurationInstances::_class = nullptr;
jclass android::support::v4::app::ShareCompat_ShareCompatImpl::_class = nullptr;
jclass android::support::v4::app::NoSaveStateFrameLayout::_class = nullptr;
jclass android::support::v4::app::ShareCompat_IntentReader::_class = nullptr;
jclass android::support::v4::app::ShareCompat_ShareCompatImplJB::_class = nullptr;
jclass android::support::v4::app::DialogFragment::_class = nullptr;
jclass android::support::v4::app::BackStackRecord_TransitionState::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = nullptr;
jclass android::support::v4::app::RemoteInput_Impl::_class = nullptr;
jclass android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb::_class = nullptr;
jclass android::support::v4::app::FragmentTabHost::_class = nullptr;
jclass android::support::v4::app::FragmentManager_OnBackStackChangedListener::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_Task::_class = nullptr;
jclass android::support::v4::app::FragmentTabHost_DummyTabFactory::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::_class = nullptr;
jclass android::support::v4::app::NavUtils::_class = nullptr;
jclass android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21::_class = nullptr;
jclass android::support::v4::app::DialogFragment_DialogStyle::_class = nullptr;
jclass android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplJellybean::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_Impl::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_Extender::_class = nullptr;
jclass android::support::v4::app::NotificationCompat::_class = nullptr;
jclass android::support::v4::app::FragmentManagerImpl::_class = nullptr;
jclass android::support::v4::app::ShareCompat::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class = nullptr;
jclass android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_InboxStyle::_class = nullptr;
jclass android::support::v4::app::FragmentManager_BackStackEntry::_class = nullptr;
jclass android::support::v4::app::ShareCompat_ShareCompatImplBase::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_BigTextStyle::_class = nullptr;
jclass android::support::v4::app::FragmentManager::_class = nullptr;
jclass android::support::v4::app::SuperNotCalledException::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_Action_Builder::_class = nullptr;
jclass android::support::v4::app::RemoteInput_ImplApi20::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_BigPictureStyle::_class = nullptr;
jclass android::support::v4::app::LoaderManagerImpl::_class = nullptr;
jclass android::support::v4::app::Fragment::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle_Delegate::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = nullptr;
jclass android::support::v4::app::ActivityManagerCompat::_class = nullptr;
jclass android::support::v4::app::Fragment_InstantiationException::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_Style::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = nullptr;
jclass android::support::v4::app::ShareCompat_ShareCompatImplICS::_class = nullptr;
jclass android::support::v4::app::FragmentTransaction::_class = nullptr;
jclass android::support::v4::app::RemoteInput_ImplBase::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplIceCreamSandwich::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplHoneycomb::_class = nullptr;
jclass android::support::v4::app::FragmentManagerImpl_FragmentTag::_class = nullptr;
jclass android::support::v4::app::LoaderManager::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class = nullptr;
jclass android::support::v4::app::TaskStackBuilder::_class = nullptr;
jclass android::support::v4::app::BackStackState::_class = nullptr;
jclass android::support::v4::app::FragmentTransaction_Transit::_class = nullptr;
jclass android::support::v4::app::ListFragment::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent::_class = nullptr;
jclass android::support::v4::app::FragmentTabHost_SavedState::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord::_class = nullptr;
jclass android::support::v4::app::NavUtils_NavUtilsImplBase::_class = nullptr;
jclass android::support::v4::app::INotificationSideChannel_Stub::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class = nullptr;
jclass android::support::v4::app::FragmentPagerAdapter::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = nullptr;
jclass android::support::v4::app::NotificationCompatSideChannelService::_class = nullptr;
jclass android::support::v4::app::FragmentState::_class = nullptr;
jclass android::support::v4::app::BackStackRecord::_class = nullptr;
jclass android::support::v4::app::FragmentTabHost_TabInfo::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplApi21::_class = nullptr;
jclass android::support::v4::app::NotificationCompatExtras::_class = nullptr;
jclass android::support::v4::app::ActivityCompat::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_WearableExtender::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle::_class = nullptr;
jclass android::support::v4::app::BackStackRecord_Op::_class = nullptr;
jclass android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle_DelegateProvider::_class = nullptr;
jclass android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl::_class = nullptr;
jclass android::support::v4::app::FragmentContainer::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::_class = nullptr;
jclass android::support::v4::app::ServiceCompat::_class = nullptr;
jclass android::support::v4::app::TaskStackBuilder_SupportParentable::_class = nullptr;
jclass android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImplJB::_class = nullptr;
jclass android::support::v4::app::Fragment_SavedState::_class = nullptr;
jclass android::support::v4::app::NavUtils_NavUtilsImpl::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_Action_Extender::_class = nullptr;
jclass android::support::v4::app::RemoteInput_ImplJellybean::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_CarExtender::_class = nullptr;
jclass android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_NotifyTask::_class = nullptr;
jclass android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::_class = nullptr;
jclass android::support::v4::app::RemoteInput::_class = nullptr;
jclass android::support::v4::app::ActivityOptionsCompat::_class = nullptr;
jclass android::support::v4::app::FragmentStatePagerAdapter::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = nullptr;
jclass android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::_class = nullptr;
jclass android::support::v4::app::NavUtils_NavUtilsImplJB::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_ImplBase::_class = nullptr;
jclass android::support::v4::app::NotificationCompat_Action::_class = nullptr;
jclass android::support::v4::app::NotificationManagerCompat_ImplEclair::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::LoaderManagerImpl_LoaderInfo::LoaderManagerImpl_LoaderInfo(int32_t arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::app::LoaderManager_LoaderCallbacks& arg2) : ::java::lang::Object((jobject)0), ::android::support::v4::content::Loader_OnLoadCompleteListener((jobject)0) {
    if (!::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class) ::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl$LoaderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILandroid/os/Bundle;Landroid/support/v4/app/LoaderManager$LoaderCallbacks;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::app::LoaderManagerImpl_LoaderInfo::onLoadComplete(const ::android::support::v4::content::Loader& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class) ::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl$LoaderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadComplete", "(Landroid/support/v4/content/Loader;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::LoaderManagerImpl_LoaderInfo::toString() const {
    if (!::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class) ::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl$LoaderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::LoaderManagerImpl_LoaderInfo::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class) ::android::support::v4::app::LoaderManagerImpl_LoaderInfo::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl$LoaderInfo");
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
::android::support::v4::app::RemoteInput_Builder::RemoteInput_Builder(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::RemoteInput_Builder::_class) ::android::support::v4::app::RemoteInput_Builder::_class = java::fetch_class("android/support/v4/app/RemoteInput$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::RemoteInput_Builder android::support::v4::app::RemoteInput_Builder::setLabel(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::RemoteInput_Builder::_class) ::android::support::v4::app::RemoteInput_Builder::_class = java::fetch_class("android/support/v4/app/RemoteInput$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabel", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/RemoteInput$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::RemoteInput_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::RemoteInput_Builder android::support::v4::app::RemoteInput_Builder::setChoices(const std::vector< ::java::lang::CharSequence>& arg0) const {
    if (!::android::support::v4::app::RemoteInput_Builder::_class) ::android::support::v4::app::RemoteInput_Builder::_class = java::fetch_class("android/support/v4/app/RemoteInput$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChoices", "([Ljava/lang/CharSequence;)Landroid/support/v4/app/RemoteInput$Builder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::RemoteInput_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::RemoteInput_Builder android::support::v4::app::RemoteInput_Builder::setAllowFreeFormInput(bool arg0) const {
    if (!::android::support::v4::app::RemoteInput_Builder::_class) ::android::support::v4::app::RemoteInput_Builder::_class = java::fetch_class("android/support/v4/app/RemoteInput$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowFreeFormInput", "(Z)Landroid/support/v4/app/RemoteInput$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::RemoteInput_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::RemoteInput_Builder android::support::v4::app::RemoteInput_Builder::addExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::RemoteInput_Builder::_class) ::android::support::v4::app::RemoteInput_Builder::_class = java::fetch_class("android/support/v4/app/RemoteInput$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addExtras", "(Landroid/os/Bundle;)Landroid/support/v4/app/RemoteInput$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::RemoteInput_Builder _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::RemoteInput_Builder::getExtras() const {
    if (!::android::support::v4::app::RemoteInput_Builder::_class) ::android::support::v4::app::RemoteInput_Builder::_class = java::fetch_class("android/support/v4/app/RemoteInput$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::support::v4::app::RemoteInput android::support::v4::app::RemoteInput_Builder::build() const {
    if (!::android::support::v4::app::RemoteInput_Builder::_class) ::android::support::v4::app::RemoteInput_Builder::_class = java::fetch_class("android/support/v4/app/RemoteInput$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/app/RemoteInput;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::RemoteInput _ret(ret);
    return _ret;
}

::android::support::v4::content::Loader android::support::v4::app::LoaderManager_LoaderCallbacks::onCreateLoader(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::app::LoaderManager_LoaderCallbacks::_class) ::android::support::v4::app::LoaderManager_LoaderCallbacks::_class = java::fetch_class("android/support/v4/app/LoaderManager$LoaderCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateLoader", "(ILandroid/os/Bundle;)Landroid/support/v4/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::content::Loader _ret(ret);
    return _ret;
}

void android::support::v4::app::LoaderManager_LoaderCallbacks::onLoadFinished(const ::android::support::v4::content::Loader& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::app::LoaderManager_LoaderCallbacks::_class) ::android::support::v4::app::LoaderManager_LoaderCallbacks::_class = java::fetch_class("android/support/v4/app/LoaderManager$LoaderCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadFinished", "(Landroid/support/v4/content/Loader;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::LoaderManager_LoaderCallbacks::onLoaderReset(const ::android::support::v4::content::Loader& arg0) const {
    if (!::android::support::v4::app::LoaderManager_LoaderCallbacks::_class) ::android::support::v4::app::LoaderManager_LoaderCallbacks::_class = java::fetch_class("android/support/v4/app/LoaderManager$LoaderCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoaderReset", "(Landroid/support/v4/content/Loader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::SharedElementCallback::SharedElementCallback() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::SharedElementCallback::_class) ::android::support::v4::app::SharedElementCallback::_class = java::fetch_class("android/support/v4/app/SharedElementCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::app::SharedElementCallback::onSharedElementStart(const ::java::util::List& arg0, const ::java::util::List& arg1, const ::java::util::List& arg2) const {
    if (!::android::support::v4::app::SharedElementCallback::_class) ::android::support::v4::app::SharedElementCallback::_class = java::fetch_class("android/support/v4/app/SharedElementCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSharedElementStart", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::SharedElementCallback::onSharedElementEnd(const ::java::util::List& arg0, const ::java::util::List& arg1, const ::java::util::List& arg2) const {
    if (!::android::support::v4::app::SharedElementCallback::_class) ::android::support::v4::app::SharedElementCallback::_class = java::fetch_class("android/support/v4/app/SharedElementCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSharedElementEnd", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::SharedElementCallback::onRejectSharedElements(const ::java::util::List& arg0) const {
    if (!::android::support::v4::app::SharedElementCallback::_class) ::android::support::v4::app::SharedElementCallback::_class = java::fetch_class("android/support/v4/app/SharedElementCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRejectSharedElements", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::SharedElementCallback::onMapSharedElements(const ::java::util::List& arg0, const ::java::util::Map& arg1) const {
    if (!::android::support::v4::app::SharedElementCallback::_class) ::android::support::v4::app::SharedElementCallback::_class = java::fetch_class("android/support/v4/app/SharedElementCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMapSharedElements", "(Ljava/util/List;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::support::v4::app::SharedElementCallback::onCaptureSharedElementSnapshot(const ::android::view::View& arg0, const ::android::graphics::Matrix& arg1, const ::android::graphics::RectF& arg2) const {
    if (!::android::support::v4::app::SharedElementCallback::_class) ::android::support::v4::app::SharedElementCallback::_class = java::fetch_class("android/support/v4/app/SharedElementCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCaptureSharedElementSnapshot", "(Landroid/view/View;Landroid/graphics/Matrix;Landroid/graphics/RectF;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::app::SharedElementCallback::onCreateSnapshotView(const ::android::content::Context& arg0, const ::android::os::Parcelable& arg1) const {
    if (!::android::support::v4::app::SharedElementCallback::_class) ::android::support::v4::app::SharedElementCallback::_class = java::fetch_class("android/support/v4/app/SharedElementCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateSnapshotView", "(Landroid/content/Context;Landroid/os/Parcelable;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::app::INotificationSideChannel::notify(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::android::app::Notification& arg3) const {
    if (!::android::support::v4::app::INotificationSideChannel::_class) ::android::support::v4::app::INotificationSideChannel::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(Ljava/lang/String;ILjava/lang/String;Landroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::app::INotificationSideChannel::cancel(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::INotificationSideChannel::_class) ::android::support::v4::app::INotificationSideChannel::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::INotificationSideChannel::cancelAll(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::INotificationSideChannel::_class) ::android::support::v4::app::INotificationSideChannel::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelAll", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::from(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "from", "(Landroid/app/Activity;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::app::ShareCompat_IntentBuilder::getIntent() const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::app::ShareCompat_IntentBuilder::createChooserIntent() const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "createChooserIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::support::v4::app::ShareCompat_IntentBuilder::startChooser() const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "startChooser", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setChooserTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChooserTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setChooserTitle(int32_t arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChooserTitle", "(I)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setType(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setType", "(Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setHtmlText(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHtmlText", "(Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setStream(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStream", "(Landroid/net/Uri;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::addStream(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addStream", "(Landroid/net/Uri;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setEmailTo(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmailTo", "([Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::addEmailTo(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEmailTo", "(Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::addEmailTo(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEmailTo", "([Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setEmailCc(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmailCc", "([Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::addEmailCc(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEmailCc", "(Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::addEmailCc(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEmailCc", "([Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setEmailBcc(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmailBcc", "([Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::addEmailBcc(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEmailBcc", "(Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::addEmailBcc(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEmailBcc", "([Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::ShareCompat_IntentBuilder android::support::v4::app::ShareCompat_IntentBuilder::setSubject(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentBuilder::_class) ::android::support::v4::app::ShareCompat_IntentBuilder::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubject", "(Ljava/lang/String;)Landroid/support/v4/app/ShareCompat$IntentBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentBuilder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentActivity::FragmentActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::app::FragmentActivity::onBackPressed() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackPressed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentActivity::supportFinishAfterTransition() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportFinishAfterTransition", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentActivity::setEnterSharedElementCallback(const ::android::support::v4::app::SharedElementCallback& arg0) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnterSharedElementCallback", "(Landroid/support/v4/app/SharedElementCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentActivity::setExitSharedElementCallback(const ::android::support::v4::app::SharedElementCallback& arg0) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExitSharedElementCallback", "(Landroid/support/v4/app/SharedElementCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentActivity::supportPostponeEnterTransition() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportPostponeEnterTransition", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentActivity::supportStartPostponedEnterTransition() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportStartPostponedEnterTransition", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentActivity::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::FragmentActivity::onCreatePanelMenu(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelMenu", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::support::v4::app::FragmentActivity::onCreateView(const ::java::lang::String& arg0, const ::android::content::Context& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentActivity::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentActivity::onLowMemory() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::app::FragmentActivity::onMenuItemSelected(int32_t arg0, const ::android::view::MenuItem& arg1) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemSelected", "(ILandroid/view/MenuItem;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentActivity::onPanelClosed(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelClosed", "(ILandroid/view/Menu;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::app::FragmentActivity::onPreparePanel(int32_t arg0, const ::android::view::View& arg1, const ::android::view::Menu& arg2) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreparePanel", "(ILandroid/view/View;Landroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::support::v4::app::FragmentActivity::onRetainNonConfigurationInstance() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRetainNonConfigurationInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::FragmentActivity::onRetainCustomNonConfigurationInstance() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRetainCustomNonConfigurationInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::FragmentActivity::getLastCustomNonConfigurationInstance() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastCustomNonConfigurationInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentActivity::supportInvalidateOptionsMenu() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportInvalidateOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentActivity::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
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

void android::support::v4::app::FragmentActivity::onAttachFragment(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachFragment", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::app::FragmentManager android::support::v4::app::FragmentActivity::getSupportFragmentManager() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportFragmentManager", "()Landroid/support/v4/app/FragmentManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentManager _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentActivity::startActivityForResult(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityForResult", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentActivity::startActivityFromFragment(const ::android::support::v4::app::Fragment& arg0, const ::android::content::Intent& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityFromFragment", "(Landroid/support/v4/app/Fragment;Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::app::LoaderManager android::support::v4::app::FragmentActivity::getSupportLoaderManager() const {
    if (!::android::support::v4::app::FragmentActivity::_class) ::android::support::v4::app::FragmentActivity::_class = java::fetch_class("android/support/v4/app/FragmentActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportLoaderManager", "()Landroid/support/v4/app/LoaderManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::LoaderManager _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationManagerCompat_CancelTask::NotificationManagerCompat_CancelTask(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Task((jobject)0) {
    if (!::android::support::v4::app::NotificationManagerCompat_CancelTask::_class) ::android::support::v4::app::NotificationManagerCompat_CancelTask::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$CancelTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationManagerCompat_CancelTask::NotificationManagerCompat_CancelTask(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Task((jobject)0) {
    if (!::android::support::v4::app::NotificationManagerCompat_CancelTask::_class) ::android::support::v4::app::NotificationManagerCompat_CancelTask::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$CancelTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::app::NotificationManagerCompat_CancelTask::send(const ::android::support::v4::app::INotificationSideChannel& arg0) const {
    if (!::android::support::v4::app::NotificationManagerCompat_CancelTask::_class) ::android::support::v4::app::NotificationManagerCompat_CancelTask::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$CancelTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Landroid/support/v4/app/INotificationSideChannel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationManagerCompat_CancelTask::toString() const {
    if (!::android::support::v4::app::NotificationManagerCompat_CancelTask::_class) ::android::support::v4::app::NotificationManagerCompat_CancelTask::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$CancelTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentManagerState::FragmentManagerState() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::app::FragmentManagerState::_class) ::android::support::v4::app::FragmentManagerState::_class = java::fetch_class("android/support/v4/app/FragmentManagerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentManagerState::FragmentManagerState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::app::FragmentManagerState::_class) ::android::support::v4::app::FragmentManagerState::_class = java::fetch_class("android/support/v4/app/FragmentManagerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::app::FragmentManagerState::describeContents() const {
    if (!::android::support::v4::app::FragmentManagerState::_class) ::android::support::v4::app::FragmentManagerState::_class = java::fetch_class("android/support/v4/app/FragmentManagerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManagerState::_class) ::android::support::v4::app::FragmentManagerState::_class = java::fetch_class("android/support/v4/app/FragmentManagerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_Builder::NotificationCompat_Builder(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setWhen(int64_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWhen", "(J)Landroid/support/v4/app/NotificationCompat$Builder;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setShowWhen(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowWhen", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setUsesChronometer(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUsesChronometer", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setSmallIcon(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmallIcon", "(I)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setSmallIcon(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmallIcon", "(II)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setContentTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setContentText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setSubText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setNumber(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNumber", "(I)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setContentInfo(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentInfo", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setProgress(int32_t arg0, int32_t arg1, bool arg2) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgress", "(IIZ)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setContent(const ::android::widget::RemoteViews& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContent", "(Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setContentIntent(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentIntent", "(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setDeleteIntent(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDeleteIntent", "(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setFullScreenIntent(const ::android::app::PendingIntent& arg0, bool arg1) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFullScreenIntent", "(Landroid/app/PendingIntent;Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setTicker(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTicker", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setTicker(const ::java::lang::CharSequence& arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTicker", "(Ljava/lang/CharSequence;Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setLargeIcon(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLargeIcon", "(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setSound(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSound", "(Landroid/net/Uri;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setSound(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSound", "(Landroid/net/Uri;I)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setVibrate(const std::vector< int64_t>& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVibrate", "([J)Landroid/support/v4/app/NotificationCompat$Builder;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setLights(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLights", "(III)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setOngoing(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOngoing", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setOnlyAlertOnce(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnlyAlertOnce", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setAutoCancel(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoCancel", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setLocalOnly(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocalOnly", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setCategory(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCategory", "(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setDefaults(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaults", "(I)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setPriority(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPriority", "(I)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::addPerson(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPerson", "(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setGroup(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroup", "(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setGroupSummary(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupSummary", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setSortKey(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSortKey", "(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::addExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addExtras", "(Landroid/os/Bundle;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::NotificationCompat_Builder::getExtras() const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::addAction(int32_t arg0, const ::java::lang::CharSequence& arg1, const ::android::app::PendingIntent& arg2) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::addAction(const ::android::support::v4::app::NotificationCompat_Action& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Landroid/support/v4/app/NotificationCompat$Action;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setStyle(const ::android::support::v4::app::NotificationCompat_Style& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStyle", "(Landroid/support/v4/app/NotificationCompat$Style;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setColor(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColor", "(I)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setVisibility(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibility", "(I)Landroid/support/v4/app/NotificationCompat$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::setPublicVersion(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublicVersion", "(Landroid/app/Notification;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Builder::extend(const ::android::support::v4::app::NotificationCompat_Extender& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "extend", "(Landroid/support/v4/app/NotificationCompat$Extender;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::app::Notification android::support::v4::app::NotificationCompat_Builder::getNotification() const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotification", "()Landroid/app/Notification;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::app::Notification android::support::v4::app::NotificationCompat_Builder::build() const {
    if (!::android::support::v4::app::NotificationCompat_Builder::_class) ::android::support::v4::app::NotificationCompat_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/app/Notification;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Notification _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationManagerCompat_ImplIceCreamSandwich::getSideChannelBindFlags() const {
    if (!::android::support::v4::app::NotificationManagerCompat_ImplIceCreamSandwich::_class) ::android::support::v4::app::NotificationManagerCompat_ImplIceCreamSandwich::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$ImplIceCreamSandwich");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSideChannelBindFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::app::ShareCompat_ShareCompatImpl::configureMenuItem(const ::android::view::MenuItem& arg0, const ::android::support::v4::app::ShareCompat_IntentBuilder& arg1) const {
    if (!::android::support::v4::app::ShareCompat_ShareCompatImpl::_class) ::android::support::v4::app::ShareCompat_ShareCompatImpl::_class = java::fetch_class("android/support/v4/app/ShareCompat$ShareCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureMenuItem", "(Landroid/view/MenuItem;Landroid/support/v4/app/ShareCompat$IntentBuilder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::ShareCompat_ShareCompatImpl::escapeHtml(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::ShareCompat_ShareCompatImpl::_class) ::android::support::v4::app::ShareCompat_ShareCompatImpl::_class = java::fetch_class("android/support/v4/app/ShareCompat$ShareCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "escapeHtml", "(Ljava/lang/CharSequence;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NoSaveStateFrameLayout::NoSaveStateFrameLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::support::v4::app::NoSaveStateFrameLayout::_class) ::android::support::v4::app::NoSaveStateFrameLayout::_class = java::fetch_class("android/support/v4/app/NoSaveStateFrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::ShareCompat_IntentReader android::support::v4::app::ShareCompat_IntentReader::from(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "from", "(Landroid/app/Activity;)Landroid/support/v4/app/ShareCompat$IntentReader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::app::ShareCompat_IntentReader _ret(ret);
    return _ret;
}

bool android::support::v4::app::ShareCompat_IntentReader::isShareIntent() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShareIntent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::ShareCompat_IntentReader::isSingleShare() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSingleShare", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::ShareCompat_IntentReader::isMultipleShare() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMultipleShare", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::support::v4::app::ShareCompat_IntentReader::getType() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::ShareCompat_IntentReader::getText() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::ShareCompat_IntentReader::getHtmlText() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHtmlText", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::app::ShareCompat_IntentReader::getStream() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStream", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::app::ShareCompat_IntentReader::getStream(int32_t arg0) const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStream", "(I)Landroid/net/Uri;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::ShareCompat_IntentReader::getStreamCount() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStreamCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::String> android::support::v4::app::ShareCompat_IntentReader::getEmailTo() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmailTo", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::support::v4::app::ShareCompat_IntentReader::getEmailCc() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmailCc", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::support::v4::app::ShareCompat_IntentReader::getEmailBcc() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmailBcc", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String android::support::v4::app::ShareCompat_IntentReader::getSubject() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubject", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::ShareCompat_IntentReader::getCallingPackage() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallingPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::support::v4::app::ShareCompat_IntentReader::getCallingActivity() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallingActivity", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::app::ShareCompat_IntentReader::getCallingActivityIcon() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallingActivityIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::app::ShareCompat_IntentReader::getCallingApplicationIcon() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallingApplicationIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::ShareCompat_IntentReader::getCallingApplicationLabel() const {
    if (!::android::support::v4::app::ShareCompat_IntentReader::_class) ::android::support::v4::app::ShareCompat_IntentReader::_class = java::fetch_class("android/support/v4/app/ShareCompat$IntentReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallingApplicationLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::ShareCompat_ShareCompatImplJB::escapeHtml(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::ShareCompat_ShareCompatImplJB::_class) ::android::support::v4::app::ShareCompat_ShareCompatImplJB::_class = java::fetch_class("android/support/v4/app/ShareCompat$ShareCompatImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "escapeHtml", "(Ljava/lang/CharSequence;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::DialogFragment::DialogFragment() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::app::DialogFragment::setStyle(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStyle", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::DialogFragment::show(const ::android::support::v4::app::FragmentManager& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Landroid/support/v4/app/FragmentManager;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::app::DialogFragment::show(const ::android::support::v4::app::FragmentTransaction& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Landroid/support/v4/app/FragmentTransaction;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::DialogFragment::dismiss() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::DialogFragment::dismissAllowingStateLoss() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismissAllowingStateLoss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::app::Dialog android::support::v4::app::DialogFragment::getDialog() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialog", "()Landroid/app/Dialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::DialogFragment::getTheme() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTheme", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::app::DialogFragment::setCancelable(bool arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCancelable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::DialogFragment::isCancelable() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::DialogFragment::setShowsDialog(bool arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowsDialog", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::DialogFragment::getShowsDialog() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShowsDialog", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::DialogFragment::onAttach(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttach", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::DialogFragment::onDetach() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::DialogFragment::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::LayoutInflater android::support::v4::app::DialogFragment::getLayoutInflater(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutInflater", "(Landroid/os/Bundle;)Landroid/view/LayoutInflater;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

::android::app::Dialog android::support::v4::app::DialogFragment::onCreateDialog(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateDialog", "(Landroid/os/Bundle;)Landroid/app/Dialog;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

void android::support::v4::app::DialogFragment::onCancel(const ::android::content::DialogInterface& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::DialogFragment::onDismiss(const ::android::content::DialogInterface& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::DialogFragment::onActivityCreated(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityCreated", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::DialogFragment::onStart() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::DialogFragment::onSaveInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::DialogFragment::onStop() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::DialogFragment::onDestroyView() const {
    if (!::android::support::v4::app::DialogFragment::_class) ::android::support::v4::app::DialogFragment::_class = java::fetch_class("android/support/v4/app/DialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::BackStackRecord_TransitionState::BackStackRecord_TransitionState(const ::android::support::v4::app::BackStackRecord& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::BackStackRecord_TransitionState::_class) ::android::support::v4::app::BackStackRecord_TransitionState::_class = java::fetch_class("android/support/v4/app/BackStackRecord$TransitionState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/BackStackRecord;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplBase::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getExtras(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "(Landroid/app/Notification;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getActionCount(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionCount", "(Landroid/app/Notification;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::app::NotificationCompat_Action android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getAction(const ::android::app::Notification& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "(Landroid/app/Notification;I)Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Action _ret(ret);
    return _ret;
}

std::vector< ::android::support::v4::app::NotificationCompat_Action> android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getActionsFromParcelableArrayList(const ::java::util::ArrayList& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionsFromParcelableArrayList", "(Ljava/util/ArrayList;)[Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::app::NotificationCompat_Action> _ret(rets, ::android::support::v4::app::NotificationCompat_Action((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::app::NotificationCompat_Action retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::ArrayList android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getParcelableArrayListForActions(const std::vector< ::android::support::v4::app::NotificationCompat_Action>& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArrayListForActions", "([Landroid/support/v4/app/NotificationCompat$Action;)Ljava/util/ArrayList;");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::NotificationCompat_Action::_class) ::android::support::v4::app::NotificationCompat_Action::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::NotificationCompat_Action::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::NotificationCompat_Action& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getCategory(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCategory", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getLocalOnly(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalOnly", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getGroup(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplBase::isGroupSummary(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupSummary", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplBase::getSortKey(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSortKey", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::RemoteInput_Impl::getResultsFromIntent(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::RemoteInput_Impl::_class) ::android::support::v4::app::RemoteInput_Impl::_class = java::fetch_class("android/support/v4/app/RemoteInput$Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::RemoteInput_Impl::addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>& arg0, const ::android::content::Intent& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::RemoteInput_Impl::_class) ::android::support::v4::app::RemoteInput_Impl::_class = java::fetch_class("android/support/v4/app/RemoteInput$Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResultsToIntent", "([Landroid/support/v4/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::RemoteInput::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::RemoteInput& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::app::PendingIntent android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb::getPendingIntent(const ::android::content::Context& arg0, const std::vector< ::android::content::Intent>& arg1, int32_t arg2, int32_t arg3, const ::android::os::Bundle& arg4) const {
    if (!::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb::_class) ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder$TaskStackBuilderImplHoneycomb");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPendingIntent", "(Landroid/content/Context;[Landroid/content/Intent;IILandroid/os/Bundle;)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::Intent& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentTabHost::FragmentTabHost(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::TabHost((jobject)0), ::android::widget::TabHost_OnTabChangeListener((jobject)0) {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentTabHost::FragmentTabHost(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::TabHost((jobject)0), ::android::widget::TabHost_OnTabChangeListener((jobject)0) {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::app::FragmentTabHost::setup() const {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setup", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentTabHost::setup(const ::android::content::Context& arg0, const ::android::support::v4::app::FragmentManager& arg1) const {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setup", "(Landroid/content/Context;Landroid/support/v4/app/FragmentManager;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentTabHost::setup(const ::android::content::Context& arg0, const ::android::support::v4::app::FragmentManager& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setup", "(Landroid/content/Context;Landroid/support/v4/app/FragmentManager;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentTabHost::setOnTabChangedListener(const ::android::widget::TabHost_OnTabChangeListener& arg0) const {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnTabChangedListener", "(Landroid/widget/TabHost$OnTabChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentTabHost::addTab(const ::android::widget::TabHost_TabSpec& arg0, const ::java::lang::Class& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTab", "(Landroid/widget/TabHost$TabSpec;Ljava/lang/Class;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentTabHost::onTabChanged(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::FragmentTabHost::_class) ::android::support::v4::app::FragmentTabHost::_class = java::fetch_class("android/support/v4/app/FragmentTabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTabChanged", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManager_OnBackStackChangedListener::onBackStackChanged() const {
    if (!::android::support::v4::app::FragmentManager_OnBackStackChangedListener::_class) ::android::support::v4::app::FragmentManager_OnBackStackChangedListener::_class = java::fetch_class("android/support/v4/app/FragmentManager$OnBackStackChangedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackStackChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::NotificationManagerCompat_Task::send(const ::android::support::v4::app::INotificationSideChannel& arg0) const {
    if (!::android::support::v4::app::NotificationManagerCompat_Task::_class) ::android::support::v4::app::NotificationManagerCompat_Task::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Landroid/support/v4/app/INotificationSideChannel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentTabHost_DummyTabFactory::FragmentTabHost_DummyTabFactory(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::widget::TabHost_TabContentFactory((jobject)0) {
    if (!::android::support::v4::app::FragmentTabHost_DummyTabFactory::_class) ::android::support::v4::app::FragmentTabHost_DummyTabFactory::_class = java::fetch_class("android/support/v4/app/FragmentTabHost$DummyTabFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::view::View android::support::v4::app::FragmentTabHost_DummyTabFactory::createTabContent(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::FragmentTabHost_DummyTabFactory::_class) ::android::support::v4::app::FragmentTabHost_DummyTabFactory::_class = java::fetch_class("android/support/v4/app/FragmentTabHost$DummyTabFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createTabContent", "(Ljava/lang/String;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::getThemeUpIndicator(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplHC");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThemeUpIndicator", "(Landroid/app/Activity;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::setActionBarUpIndicator(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, const ::android::graphics::drawable::Drawable& arg2, int32_t arg3) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplHC");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarUpIndicator", "(Ljava/lang/Object;Landroid/app/Activity;Landroid/graphics/drawable/Drawable;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::setActionBarDescription(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplHC");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarDescription", "(Ljava/lang/Object;Landroid/app/Activity;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::app::NavUtils::shouldUpRecreateTask(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "shouldUpRecreateTask", "(Landroid/app/Activity;Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::app::NavUtils::navigateUpFromSameTask(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateUpFromSameTask", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::app::NavUtils::navigateUpTo(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateUpTo", "(Landroid/app/Activity;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::content::Intent android::support::v4::app::NavUtils::getParentActivityIntent(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getParentActivityIntent", "(Landroid/app/Activity;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::app::NavUtils::getParentActivityIntent(const ::android::content::Context& arg0, const ::java::lang::Class& arg1){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getParentActivityIntent", "(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::app::NavUtils::getParentActivityIntent(const ::android::content::Context& arg0, const ::android::content::ComponentName& arg1){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getParentActivityIntent", "(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::NavUtils::getParentActivityName(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getParentActivityName", "(Landroid/app/Activity;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::NavUtils::getParentActivityName(const ::android::content::Context& arg0, const ::android::content::ComponentName& arg1){
    if (!::android::support::v4::app::NavUtils::_class) ::android::support::v4::app::NavUtils::_class = java::fetch_class("android/support/v4/app/NavUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getParentActivityName", "(Landroid/content/Context;Landroid/content/ComponentName;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21::toBundle() const {
    if (!::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21::_class) ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat$ActivityOptionsImpl21");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21::update(const ::android::support::v4::app::ActivityOptionsCompat& arg0) const {
    if (!::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21::_class) ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat$ActivityOptionsImpl21");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/support/v4/app/ActivityOptionsCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::PendingIntent android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplJellybean::getPendingIntent(const ::android::content::Context& arg0, const std::vector< ::android::content::Intent>& arg1, int32_t arg2, int32_t arg3, const ::android::os::Bundle& arg4) const {
    if (!::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplJellybean::_class) ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplJellybean::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder$TaskStackBuilderImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPendingIntent", "(Landroid/content/Context;[Landroid/content/Intent;IILandroid/os/Bundle;)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::Intent& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

void android::support::v4::app::NotificationManagerCompat_Impl::cancelNotification(const ::android::app::NotificationManager& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::NotificationManagerCompat_Impl::_class) ::android::support::v4::app::NotificationManagerCompat_Impl::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelNotification", "(Landroid/app/NotificationManager;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::NotificationManagerCompat_Impl::postNotification(const ::android::app::NotificationManager& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::android::app::Notification& arg3) const {
    if (!::android::support::v4::app::NotificationManagerCompat_Impl::_class) ::android::support::v4::app::NotificationManagerCompat_Impl::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postNotification", "(Landroid/app/NotificationManager;Ljava/lang/String;ILandroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::support::v4::app::NotificationManagerCompat_Impl::getSideChannelBindFlags() const {
    if (!::android::support::v4::app::NotificationManagerCompat_Impl::_class) ::android::support::v4::app::NotificationManagerCompat_Impl::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSideChannelBindFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_Extender::extend(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Extender::_class) ::android::support::v4::app::NotificationCompat_Extender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Extender");
    static jmethodID mid = java::jni->GetMethodID(_class, "extend", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat::NotificationCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::Bundle android::support::v4::app::NotificationCompat::getExtras(const ::android::app::Notification& arg0){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExtras", "(Landroid/app/Notification;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat::getActionCount(const ::android::app::Notification& arg0){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActionCount", "(Landroid/app/Notification;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::android::support::v4::app::NotificationCompat_Action android::support::v4::app::NotificationCompat::getAction(const ::android::app::Notification& arg0, int32_t arg1){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAction", "(Landroid/app/Notification;I)Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Action _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::NotificationCompat::getCategory(const ::android::app::Notification& arg0){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCategory", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat::getLocalOnly(const ::android::app::Notification& arg0){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLocalOnly", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat::getGroup(const ::android::app::Notification& arg0){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGroup", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat::isGroupSummary(const ::android::app::Notification& arg0){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isGroupSummary", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat::getSortKey(const ::android::app::Notification& arg0){
    if (!::android::support::v4::app::NotificationCompat::_class) ::android::support::v4::app::NotificationCompat::_class = java::fetch_class("android/support/v4/app/NotificationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSortKey", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentManagerImpl::beginTransaction() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginTransaction", "()Landroid/support/v4/app/FragmentTransaction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentManagerImpl::executePendingTransactions() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "executePendingTransactions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::popBackStack() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::app::FragmentManagerImpl::popBackStackImmediate() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::popBackStack(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::app::FragmentManagerImpl::popBackStackImmediate(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "(Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentManagerImpl::popBackStack(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::app::FragmentManagerImpl::popBackStackImmediate(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::app::FragmentManagerImpl::getBackStackEntryCount() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackStackEntryCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::FragmentManager_BackStackEntry android::support::v4::app::FragmentManagerImpl::getBackStackEntryAt(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackStackEntryAt", "(I)Landroid/support/v4/app/FragmentManager$BackStackEntry;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentManager_BackStackEntry _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentManagerImpl::addOnBackStackChangedListener(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnBackStackChangedListener", "(Landroid/support/v4/app/FragmentManager$OnBackStackChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManagerImpl::removeOnBackStackChangedListener(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnBackStackChangedListener", "(Landroid/support/v4/app/FragmentManager$OnBackStackChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManagerImpl::putFragment(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::android::support::v4::app::Fragment& arg2) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFragment", "(Landroid/os/Bundle;Ljava/lang/String;Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::app::Fragment android::support::v4::app::FragmentManagerImpl::getFragment(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "(Landroid/os/Bundle;Ljava/lang/String;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::app::FragmentManagerImpl::getFragments() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragments", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::support::v4::app::Fragment_SavedState android::support::v4::app::FragmentManagerImpl::saveFragmentInstanceState(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveFragmentInstanceState", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/Fragment$SavedState;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment_SavedState _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentManagerImpl::isDestroyed() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDestroyed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::support::v4::app::FragmentManagerImpl::toString() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentManagerImpl::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
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

void android::support::v4::app::FragmentManagerImpl::performPendingDeferredStart(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performPendingDeferredStart", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManagerImpl::addFragment(const ::android::support::v4::app::Fragment& arg0, bool arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFragment", "(Landroid/support/v4/app/Fragment;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentManagerImpl::removeFragment(const ::android::support::v4::app::Fragment& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFragment", "(Landroid/support/v4/app/Fragment;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentManagerImpl::hideFragment(const ::android::support::v4::app::Fragment& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideFragment", "(Landroid/support/v4/app/Fragment;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentManagerImpl::showFragment(const ::android::support::v4::app::Fragment& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "showFragment", "(Landroid/support/v4/app/Fragment;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentManagerImpl::detachFragment(const ::android::support::v4::app::Fragment& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "detachFragment", "(Landroid/support/v4/app/Fragment;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentManagerImpl::attachFragment(const ::android::support::v4::app::Fragment& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachFragment", "(Landroid/support/v4/app/Fragment;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::app::Fragment android::support::v4::app::FragmentManagerImpl::findFragmentById(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFragmentById", "(I)Landroid/support/v4/app/Fragment;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

::android::support::v4::app::Fragment android::support::v4::app::FragmentManagerImpl::findFragmentByTag(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFragmentByTag", "(Ljava/lang/String;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

::android::support::v4::app::Fragment android::support::v4::app::FragmentManagerImpl::findFragmentByWho(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFragmentByWho", "(Ljava/lang/String;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentManagerImpl::enqueueAction(const ::java::lang::Runnable& arg0, bool arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "enqueueAction", "(Ljava/lang/Runnable;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::app::FragmentManagerImpl::allocBackStackIndex(const ::android::support::v4::app::BackStackRecord& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "allocBackStackIndex", "(Landroid/support/v4/app/BackStackRecord;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManagerImpl::setBackStackIndex(int32_t arg0, const ::android::support::v4::app::BackStackRecord& arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackStackIndex", "(ILandroid/support/v4/app/BackStackRecord;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentManagerImpl::freeBackStackIndex(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "freeBackStackIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::FragmentManagerImpl::execPendingActions() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "execPendingActions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::attachActivity(const ::android::support::v4::app::FragmentActivity& arg0, const ::android::support::v4::app::FragmentContainer& arg1, const ::android::support::v4::app::Fragment& arg2) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachActivity", "(Landroid/support/v4/app/FragmentActivity;Landroid/support/v4/app/FragmentContainer;Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentManagerImpl::noteStateNotSaved() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "noteStateNotSaved", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchCreate() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchActivityCreated() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchActivityCreated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchStart() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchResume() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchPause() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchStop() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchReallyStop() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchReallyStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchDestroyView() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchDestroy() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::FragmentManagerImpl::dispatchConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManagerImpl::dispatchLowMemory() const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::app::FragmentManagerImpl::dispatchCreateOptionsMenu(const ::android::view::Menu& arg0, const ::android::view::MenuInflater& arg1) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchCreateOptionsMenu", "(Landroid/view/Menu;Landroid/view/MenuInflater;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::app::FragmentManagerImpl::dispatchPrepareOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPrepareOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::app::FragmentManagerImpl::dispatchOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::app::FragmentManagerImpl::dispatchContextItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchContextItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManagerImpl::dispatchOptionsMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchOptionsMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::app::FragmentManagerImpl::reverseTransit(int32_t arg0){
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverseTransit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::app::FragmentManagerImpl::transitToStyleIndex(int32_t arg0, bool arg1){
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "transitToStyleIndex", "(IZ)I");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::android::view::View android::support::v4::app::FragmentManagerImpl::onCreateView(const ::android::view::View& arg0, const ::java::lang::String& arg1, const ::android::content::Context& arg2, const ::android::util::AttributeSet& arg3) const {
    if (!::android::support::v4::app::FragmentManagerImpl::_class) ::android::support::v4::app::FragmentManagerImpl::_class = java::fetch_class("android/support/v4/app/FragmentManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::ShareCompat::ShareCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::ShareCompat::_class) ::android::support::v4::app::ShareCompat::_class = java::fetch_class("android/support/v4/app/ShareCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::support::v4::app::ShareCompat::getCallingPackage(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ShareCompat::_class) ::android::support::v4::app::ShareCompat::_class = java::fetch_class("android/support/v4/app/ShareCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCallingPackage", "(Landroid/app/Activity;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::support::v4::app::ShareCompat::getCallingActivity(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ShareCompat::_class) ::android::support::v4::app::ShareCompat::_class = java::fetch_class("android/support/v4/app/ShareCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCallingActivity", "(Landroid/app/Activity;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

void android::support::v4::app::ShareCompat::configureMenuItem(const ::android::view::MenuItem& arg0, const ::android::support::v4::app::ShareCompat_IntentBuilder& arg1){
    if (!::android::support::v4::app::ShareCompat::_class) ::android::support::v4::app::ShareCompat::_class = java::fetch_class("android/support/v4/app/ShareCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "configureMenuItem", "(Landroid/view/MenuItem;Landroid/support/v4/app/ShareCompat$IntentBuilder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::app::ShareCompat::configureMenuItem(const ::android::view::Menu& arg0, int32_t arg1, const ::android::support::v4::app::ShareCompat_IntentBuilder& arg2){
    if (!::android::support::v4::app::ShareCompat::_class) ::android::support::v4::app::ShareCompat::_class = java::fetch_class("android/support/v4/app/ShareCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "configureMenuItem", "(Landroid/view/Menu;ILandroid/support/v4/app/ShareCompat$IntentBuilder;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::NotificationCompat_CarExtender_UnreadConversation_Builder(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::addMessage(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMessage", "(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::setReplyAction(const ::android::app::PendingIntent& arg0, const ::android::support::v4::app::RemoteInput& arg1) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReplyAction", "(Landroid/app/PendingIntent;Landroid/support/v4/app/RemoteInput;)Landroid/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::setReadPendingIntent(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadPendingIntent", "(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::setLatestTimestamp(int64_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLatestTimestamp", "(J)Landroid/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::build() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/app/NotificationCompat$CarExtender$UnreadConversation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation _ret(ret);
    return _ret;
}

::android::os::IBinder android::support::v4::app::INotificationSideChannel_Stub_Proxy::asBinder() const {
    if (!::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class) ::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::INotificationSideChannel_Stub_Proxy::getInterfaceDescriptor() const {
    if (!::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class) ::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceDescriptor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::INotificationSideChannel_Stub_Proxy::notify(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::android::app::Notification& arg3) const {
    if (!::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class) ::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(Ljava/lang/String;ILjava/lang/String;Landroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::app::INotificationSideChannel_Stub_Proxy::cancel(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class) ::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::INotificationSideChannel_Stub_Proxy::cancelAll(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class) ::android::support::v4::app::INotificationSideChannel_Stub_Proxy::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelAll", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_Action_WearableExtender::NotificationCompat_Action_WearableExtender() : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Action_Extender((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_Action_WearableExtender::NotificationCompat_Action_WearableExtender(const ::android::support::v4::app::NotificationCompat_Action& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Action_Extender((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/NotificationCompat$Action;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_Action_Builder android::support::v4::app::NotificationCompat_Action_WearableExtender::extend(const ::android::support::v4::app::NotificationCompat_Action_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "extend", "(Landroid/support/v4/app/NotificationCompat$Action$Builder;)Landroid/support/v4/app/NotificationCompat$Action$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action_WearableExtender android::support::v4::app::NotificationCompat_Action_WearableExtender::clone() const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/support/v4/app/NotificationCompat$Action$WearableExtender;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action_WearableExtender android::support::v4::app::NotificationCompat_Action_WearableExtender::setAvailableOffline(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAvailableOffline", "(Z)Landroid/support/v4/app/NotificationCompat$Action$WearableExtender;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_Action_WearableExtender::isAvailableOffline() const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAvailableOffline", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_Action_WearableExtender android::support::v4::app::NotificationCompat_Action_WearableExtender::setInProgressLabel(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInProgressLabel", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Action$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::NotificationCompat_Action_WearableExtender::getInProgressLabel() const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInProgressLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action_WearableExtender android::support::v4::app::NotificationCompat_Action_WearableExtender::setConfirmLabel(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConfirmLabel", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Action$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::NotificationCompat_Action_WearableExtender::getConfirmLabel() const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConfirmLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action_WearableExtender android::support::v4::app::NotificationCompat_Action_WearableExtender::setCancelLabel(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCancelLabel", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Action$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::NotificationCompat_Action_WearableExtender::getCancelLabel() const {
    if (!::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_Action_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCancelLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_InboxStyle::NotificationCompat_InboxStyle() : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_InboxStyle::_class) ::android::support::v4::app::NotificationCompat_InboxStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$InboxStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_InboxStyle::NotificationCompat_InboxStyle(const ::android::support::v4::app::NotificationCompat_Builder& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_InboxStyle::_class) ::android::support::v4::app::NotificationCompat_InboxStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$InboxStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/NotificationCompat$Builder;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_InboxStyle android::support::v4::app::NotificationCompat_InboxStyle::setBigContentTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_InboxStyle::_class) ::android::support::v4::app::NotificationCompat_InboxStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$InboxStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBigContentTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$InboxStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_InboxStyle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_InboxStyle android::support::v4::app::NotificationCompat_InboxStyle::setSummaryText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_InboxStyle::_class) ::android::support::v4::app::NotificationCompat_InboxStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$InboxStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummaryText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$InboxStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_InboxStyle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_InboxStyle android::support::v4::app::NotificationCompat_InboxStyle::addLine(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_InboxStyle::_class) ::android::support::v4::app::NotificationCompat_InboxStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$InboxStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLine", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$InboxStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_InboxStyle _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::FragmentManager_BackStackEntry::getId() const {
    if (!::android::support::v4::app::FragmentManager_BackStackEntry::_class) ::android::support::v4::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/support/v4/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::support::v4::app::FragmentManager_BackStackEntry::getName() const {
    if (!::android::support::v4::app::FragmentManager_BackStackEntry::_class) ::android::support::v4::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/support/v4/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::FragmentManager_BackStackEntry::getBreadCrumbTitleRes() const {
    if (!::android::support::v4::app::FragmentManager_BackStackEntry::_class) ::android::support::v4::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/support/v4/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbTitleRes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::app::FragmentManager_BackStackEntry::getBreadCrumbShortTitleRes() const {
    if (!::android::support::v4::app::FragmentManager_BackStackEntry::_class) ::android::support::v4::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/support/v4/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbShortTitleRes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::support::v4::app::FragmentManager_BackStackEntry::getBreadCrumbTitle() const {
    if (!::android::support::v4::app::FragmentManager_BackStackEntry::_class) ::android::support::v4::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/support/v4/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::FragmentManager_BackStackEntry::getBreadCrumbShortTitle() const {
    if (!::android::support::v4::app::FragmentManager_BackStackEntry::_class) ::android::support::v4::app::FragmentManager_BackStackEntry::_class = java::fetch_class("android/support/v4/app/FragmentManager$BackStackEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbShortTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::app::ShareCompat_ShareCompatImplBase::configureMenuItem(const ::android::view::MenuItem& arg0, const ::android::support::v4::app::ShareCompat_IntentBuilder& arg1) const {
    if (!::android::support::v4::app::ShareCompat_ShareCompatImplBase::_class) ::android::support::v4::app::ShareCompat_ShareCompatImplBase::_class = java::fetch_class("android/support/v4/app/ShareCompat$ShareCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureMenuItem", "(Landroid/view/MenuItem;Landroid/support/v4/app/ShareCompat$IntentBuilder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::ShareCompat_ShareCompatImplBase::escapeHtml(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::ShareCompat_ShareCompatImplBase::_class) ::android::support::v4::app::ShareCompat_ShareCompatImplBase::_class = java::fetch_class("android/support/v4/app/ShareCompat$ShareCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "escapeHtml", "(Ljava/lang/CharSequence;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_BigTextStyle::NotificationCompat_BigTextStyle() : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_BigTextStyle::_class) ::android::support::v4::app::NotificationCompat_BigTextStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigTextStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_BigTextStyle::NotificationCompat_BigTextStyle(const ::android::support::v4::app::NotificationCompat_Builder& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_BigTextStyle::_class) ::android::support::v4::app::NotificationCompat_BigTextStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigTextStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/NotificationCompat$Builder;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_BigTextStyle android::support::v4::app::NotificationCompat_BigTextStyle::setBigContentTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_BigTextStyle::_class) ::android::support::v4::app::NotificationCompat_BigTextStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigTextStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBigContentTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$BigTextStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_BigTextStyle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_BigTextStyle android::support::v4::app::NotificationCompat_BigTextStyle::setSummaryText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_BigTextStyle::_class) ::android::support::v4::app::NotificationCompat_BigTextStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigTextStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummaryText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$BigTextStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_BigTextStyle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_BigTextStyle android::support::v4::app::NotificationCompat_BigTextStyle::bigText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_BigTextStyle::_class) ::android::support::v4::app::NotificationCompat_BigTextStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigTextStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "bigText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$BigTextStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_BigTextStyle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentManager::FragmentManager() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentManager::beginTransaction() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginTransaction", "()Landroid/support/v4/app/FragmentTransaction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentManager::openTransaction() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openTransaction", "()Landroid/support/v4/app/FragmentTransaction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentManager::executePendingTransactions() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "executePendingTransactions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::Fragment android::support::v4::app::FragmentManager::findFragmentById(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFragmentById", "(I)Landroid/support/v4/app/Fragment;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

::android::support::v4::app::Fragment android::support::v4::app::FragmentManager::findFragmentByTag(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFragmentByTag", "(Ljava/lang/String;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentManager::popBackStack() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::app::FragmentManager::popBackStackImmediate() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::FragmentManager::popBackStack(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::app::FragmentManager::popBackStackImmediate(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "(Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::FragmentManager::popBackStack(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStack", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::app::FragmentManager::popBackStackImmediate(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "popBackStackImmediate", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::app::FragmentManager::getBackStackEntryCount() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackStackEntryCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::FragmentManager_BackStackEntry android::support::v4::app::FragmentManager::getBackStackEntryAt(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackStackEntryAt", "(I)Landroid/support/v4/app/FragmentManager$BackStackEntry;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentManager_BackStackEntry _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentManager::addOnBackStackChangedListener(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& arg0) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnBackStackChangedListener", "(Landroid/support/v4/app/FragmentManager$OnBackStackChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManager::removeOnBackStackChangedListener(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& arg0) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnBackStackChangedListener", "(Landroid/support/v4/app/FragmentManager$OnBackStackChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::FragmentManager::putFragment(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::android::support::v4::app::Fragment& arg2) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFragment", "(Landroid/os/Bundle;Ljava/lang/String;Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::app::Fragment android::support::v4::app::FragmentManager::getFragment(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "(Landroid/os/Bundle;Ljava/lang/String;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::app::FragmentManager::getFragments() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragments", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::support::v4::app::Fragment_SavedState android::support::v4::app::FragmentManager::saveFragmentInstanceState(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveFragmentInstanceState", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/Fragment$SavedState;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment_SavedState _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentManager::isDestroyed() const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDestroyed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::FragmentManager::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
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

void android::support::v4::app::FragmentManager::enableDebugLogging(bool arg0){
    if (!::android::support::v4::app::FragmentManager::_class) ::android::support::v4::app::FragmentManager::_class = java::fetch_class("android/support/v4/app/FragmentManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enableDebugLogging", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::SuperNotCalledException::SuperNotCalledException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::support::v4::app::SuperNotCalledException::_class) ::android::support::v4::app::SuperNotCalledException::_class = java::fetch_class("android/support/v4/app/SuperNotCalledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_Action_Builder::NotificationCompat_Action_Builder(int32_t arg0, const ::java::lang::CharSequence& arg1, const ::android::app::PendingIntent& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_Action_Builder::_class) ::android::support::v4::app::NotificationCompat_Action_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_Action_Builder::NotificationCompat_Action_Builder(const ::android::support::v4::app::NotificationCompat_Action& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_Action_Builder::_class) ::android::support::v4::app::NotificationCompat_Action_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/NotificationCompat$Action;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_Action_Builder android::support::v4::app::NotificationCompat_Action_Builder::addExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_Builder::_class) ::android::support::v4::app::NotificationCompat_Action_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addExtras", "(Landroid/os/Bundle;)Landroid/support/v4/app/NotificationCompat$Action$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_Builder _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::NotificationCompat_Action_Builder::getExtras() const {
    if (!::android::support::v4::app::NotificationCompat_Action_Builder::_class) ::android::support::v4::app::NotificationCompat_Action_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action_Builder android::support::v4::app::NotificationCompat_Action_Builder::addRemoteInput(const ::android::support::v4::app::RemoteInput& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_Builder::_class) ::android::support::v4::app::NotificationCompat_Action_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRemoteInput", "(Landroid/support/v4/app/RemoteInput;)Landroid/support/v4/app/NotificationCompat$Action$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action_Builder android::support::v4::app::NotificationCompat_Action_Builder::extend(const ::android::support::v4::app::NotificationCompat_Action_Extender& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_Builder::_class) ::android::support::v4::app::NotificationCompat_Action_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "extend", "(Landroid/support/v4/app/NotificationCompat$Action$Extender;)Landroid/support/v4/app/NotificationCompat$Action$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action android::support::v4::app::NotificationCompat_Action_Builder::build() const {
    if (!::android::support::v4::app::NotificationCompat_Action_Builder::_class) ::android::support::v4::app::NotificationCompat_Action_Builder::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/app/NotificationCompat$Action;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::NotificationCompat_Action _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::RemoteInput_ImplApi20::getResultsFromIntent(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::RemoteInput_ImplApi20::_class) ::android::support::v4::app::RemoteInput_ImplApi20::_class = java::fetch_class("android/support/v4/app/RemoteInput$ImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::RemoteInput_ImplApi20::addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>& arg0, const ::android::content::Intent& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::RemoteInput_ImplApi20::_class) ::android::support::v4::app::RemoteInput_ImplApi20::_class = java::fetch_class("android/support/v4/app/RemoteInput$ImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResultsToIntent", "([Landroid/support/v4/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::RemoteInput::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::RemoteInput& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_BigPictureStyle::NotificationCompat_BigPictureStyle() : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_BigPictureStyle::_class) ::android::support::v4::app::NotificationCompat_BigPictureStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigPictureStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_BigPictureStyle::NotificationCompat_BigPictureStyle(const ::android::support::v4::app::NotificationCompat_Builder& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_BigPictureStyle::_class) ::android::support::v4::app::NotificationCompat_BigPictureStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigPictureStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/NotificationCompat$Builder;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_BigPictureStyle android::support::v4::app::NotificationCompat_BigPictureStyle::setBigContentTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_BigPictureStyle::_class) ::android::support::v4::app::NotificationCompat_BigPictureStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigPictureStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBigContentTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$BigPictureStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_BigPictureStyle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_BigPictureStyle android::support::v4::app::NotificationCompat_BigPictureStyle::setSummaryText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_BigPictureStyle::_class) ::android::support::v4::app::NotificationCompat_BigPictureStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigPictureStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummaryText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$BigPictureStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_BigPictureStyle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_BigPictureStyle android::support::v4::app::NotificationCompat_BigPictureStyle::bigPicture(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_BigPictureStyle::_class) ::android::support::v4::app::NotificationCompat_BigPictureStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigPictureStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "bigPicture", "(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$BigPictureStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_BigPictureStyle _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_BigPictureStyle android::support::v4::app::NotificationCompat_BigPictureStyle::bigLargeIcon(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_BigPictureStyle::_class) ::android::support::v4::app::NotificationCompat_BigPictureStyle::_class = java::fetch_class("android/support/v4/app/NotificationCompat$BigPictureStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "bigLargeIcon", "(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$BigPictureStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_BigPictureStyle _ret(ret);
    return _ret;
}

::android::support::v4::content::Loader android::support::v4::app::LoaderManagerImpl::initLoader(int32_t arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::app::LoaderManager_LoaderCallbacks& arg2) const {
    if (!::android::support::v4::app::LoaderManagerImpl::_class) ::android::support::v4::app::LoaderManagerImpl::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "initLoader", "(ILandroid/os/Bundle;Landroid/support/v4/app/LoaderManager$LoaderCallbacks;)Landroid/support/v4/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::content::Loader _ret(ret);
    return _ret;
}

::android::support::v4::content::Loader android::support::v4::app::LoaderManagerImpl::restartLoader(int32_t arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::app::LoaderManager_LoaderCallbacks& arg2) const {
    if (!::android::support::v4::app::LoaderManagerImpl::_class) ::android::support::v4::app::LoaderManagerImpl::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "restartLoader", "(ILandroid/os/Bundle;Landroid/support/v4/app/LoaderManager$LoaderCallbacks;)Landroid/support/v4/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::content::Loader _ret(ret);
    return _ret;
}

void android::support::v4::app::LoaderManagerImpl::destroyLoader(int32_t arg0) const {
    if (!::android::support::v4::app::LoaderManagerImpl::_class) ::android::support::v4::app::LoaderManagerImpl::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyLoader", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::content::Loader android::support::v4::app::LoaderManagerImpl::getLoader(int32_t arg0) const {
    if (!::android::support::v4::app::LoaderManagerImpl::_class) ::android::support::v4::app::LoaderManagerImpl::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoader", "(I)Landroid/support/v4/content/Loader;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::content::Loader _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::LoaderManagerImpl::toString() const {
    if (!::android::support::v4::app::LoaderManagerImpl::_class) ::android::support::v4::app::LoaderManagerImpl::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::LoaderManagerImpl::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::LoaderManagerImpl::_class) ::android::support::v4::app::LoaderManagerImpl::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl");
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

bool android::support::v4::app::LoaderManagerImpl::hasRunningLoaders() const {
    if (!::android::support::v4::app::LoaderManagerImpl::_class) ::android::support::v4::app::LoaderManagerImpl::_class = java::fetch_class("android/support/v4/app/LoaderManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasRunningLoaders", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::Fragment::Fragment() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::app::Fragment android::support::v4::app::Fragment::instantiate(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "instantiate", "(Landroid/content/Context;Ljava/lang/String;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

::android::support::v4::app::Fragment android::support::v4::app::Fragment::instantiate(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2){
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "instantiate", "(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

bool android::support::v4::app::Fragment::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::app::Fragment::hashCode() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::support::v4::app::Fragment::toString() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::Fragment::getId() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::support::v4::app::Fragment::getTag() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setArguments(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setArguments", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::support::v4::app::Fragment::getArguments() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArguments", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setInitialSavedState(const ::android::support::v4::app::Fragment_SavedState& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInitialSavedState", "(Landroid/support/v4/app/Fragment$SavedState;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::setTargetFragment(const ::android::support::v4::app::Fragment& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetFragment", "(Landroid/support/v4/app/Fragment;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::app::Fragment android::support::v4::app::Fragment::getTargetFragment() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetFragment", "()Landroid/support/v4/app/Fragment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::Fragment::getTargetRequestCode() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetRequestCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::FragmentActivity android::support::v4::app::Fragment::getActivity() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivity", "()Landroid/support/v4/app/FragmentActivity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentActivity _ret(ret);
    return _ret;
}

::android::content::res::Resources android::support::v4::app::Fragment::getResources() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::Fragment::getText(int32_t arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::Fragment::getString(int32_t arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::Fragment::getString(int32_t arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
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

::android::support::v4::app::FragmentManager android::support::v4::app::Fragment::getFragmentManager() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragmentManager", "()Landroid/support/v4/app/FragmentManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentManager _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentManager android::support::v4::app::Fragment::getChildFragmentManager() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildFragmentManager", "()Landroid/support/v4/app/FragmentManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentManager _ret(ret);
    return _ret;
}

::android::support::v4::app::Fragment android::support::v4::app::Fragment::getParentFragment() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentFragment", "()Landroid/support/v4/app/Fragment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

bool android::support::v4::app::Fragment::isAdded() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAdded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::isDetached() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDetached", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::isRemoving() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRemoving", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::isInLayout() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInLayout", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::isResumed() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isResumed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::isVisible() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::isHidden() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHidden", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::hasOptionsMenu() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasOptionsMenu", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::app::Fragment::isMenuVisible() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMenuVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::Fragment::onHiddenChanged(bool arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHiddenChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::setRetainInstance(bool arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRetainInstance", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::Fragment::getRetainInstance() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRetainInstance", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::Fragment::setHasOptionsMenu(bool arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasOptionsMenu", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::setMenuVisibility(bool arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMenuVisibility", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::setUserVisibleHint(bool arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserVisibleHint", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::Fragment::getUserVisibleHint() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserVisibleHint", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::LoaderManager android::support::v4::app::Fragment::getLoaderManager() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoaderManager", "()Landroid/support/v4/app/LoaderManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::LoaderManager _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::startActivity(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivity", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::startActivityForResult(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityForResult", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::Fragment::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::LayoutInflater android::support::v4::app::Fragment::getLayoutInflater(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutInflater", "(Landroid/os/Bundle;)Landroid/view/LayoutInflater;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::onInflate(const ::android::app::Activity& arg0, const ::android::util::AttributeSet& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInflate", "(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::Fragment::onAttach(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttach", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Animation android::support::v4::app::Fragment::onCreateAnimation(int32_t arg0, bool arg1, int32_t arg2) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateAnimation", "(IZI)Landroid/view/animation/Animation;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::support::v4::app::Fragment::onCreateView(const ::android::view::LayoutInflater& arg0, const ::android::view::ViewGroup& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::onViewCreated(const ::android::view::View& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewCreated", "(Landroid/view/View;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::support::v4::app::Fragment::getView() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::onActivityCreated(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityCreated", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::onViewStateRestored(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewStateRestored", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::onStart() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onResume() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onSaveInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::onPause() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onStop() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onLowMemory() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onDestroyView() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onDestroy() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onDetach() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::Fragment::onCreateOptionsMenu(const ::android::view::Menu& arg0, const ::android::view::MenuInflater& arg1) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateOptionsMenu", "(Landroid/view/Menu;Landroid/view/MenuInflater;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::Fragment::onPrepareOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareOptionsMenu", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::onDestroyOptionsMenu() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyOptionsMenu", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::app::Fragment::onOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::onOptionsMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::Fragment::registerForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::unregisterForContextMenu(const ::android::view::View& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterForContextMenu", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::Fragment::onContextItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::setEnterSharedElementCallback(const ::android::support::v4::app::SharedElementCallback& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnterSharedElementCallback", "(Landroid/support/v4/app/SharedElementCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::setExitSharedElementCallback(const ::android::support::v4::app::SharedElementCallback& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExitSharedElementCallback", "(Landroid/support/v4/app/SharedElementCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::Fragment::setEnterTransition(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnterTransition", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::Fragment::getEnterTransition() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnterTransition", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setReturnTransition(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReturnTransition", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::Fragment::getReturnTransition() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReturnTransition", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setExitTransition(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExitTransition", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::Fragment::getExitTransition() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExitTransition", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setReenterTransition(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReenterTransition", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::Fragment::getReenterTransition() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReenterTransition", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setSharedElementEnterTransition(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSharedElementEnterTransition", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::Fragment::getSharedElementEnterTransition() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedElementEnterTransition", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setSharedElementReturnTransition(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSharedElementReturnTransition", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::Fragment::getSharedElementReturnTransition() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedElementReturnTransition", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::Fragment::setAllowEnterTransitionOverlap(bool arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowEnterTransitionOverlap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::Fragment::getAllowEnterTransitionOverlap() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowEnterTransitionOverlap", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::Fragment::setAllowReturnTransitionOverlap(bool arg0) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowReturnTransitionOverlap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::Fragment::getAllowReturnTransitionOverlap() const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowReturnTransitionOverlap", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::Fragment::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::Fragment::_class) ::android::support::v4::app::Fragment::_class = java::fetch_class("android/support/v4/app/Fragment");
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

::android::graphics::drawable::Drawable android::support::v4::app::ActionBarDrawerToggle_Delegate::getThemeUpIndicator() const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_Delegate::_class) ::android::support::v4::app::ActionBarDrawerToggle_Delegate::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$Delegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThemeUpIndicator", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::app::ActionBarDrawerToggle_Delegate::setActionBarUpIndicator(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_Delegate::_class) ::android::support::v4::app::ActionBarDrawerToggle_Delegate::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$Delegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarUpIndicator", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::ActionBarDrawerToggle_Delegate::setActionBarDescription(int32_t arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_Delegate::_class) ::android::support::v4::app::ActionBarDrawerToggle_Delegate::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$Delegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarDescription", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::getExtras(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "(Landroid/app/Notification;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::getActionCount(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionCount", "(Landroid/app/Notification;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::app::NotificationCompat_Action android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::getAction(const ::android::app::Notification& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "(Landroid/app/Notification;I)Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Action _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::getLocalOnly(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalOnly", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::getGroup(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::isGroupSummary(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupSummary", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::getSortKey(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplKitKat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSortKey", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::ActivityManagerCompat::isLowRamDevice(const ::android::app::ActivityManager& arg0){
    if (!::android::support::v4::app::ActivityManagerCompat::_class) ::android::support::v4::app::ActivityManagerCompat::_class = java::fetch_class("android/support/v4/app/ActivityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLowRamDevice", "(Landroid/app/ActivityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::Fragment_InstantiationException::Fragment_InstantiationException(const ::java::lang::String& arg0, const ::java::lang::Exception& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::support::v4::app::Fragment_InstantiationException::_class) ::android::support::v4::app::Fragment_InstantiationException::_class = java::fetch_class("android/support/v4/app/Fragment$InstantiationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_Style::NotificationCompat_Style() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_Style::_class) ::android::support::v4::app::NotificationCompat_Style::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Style");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::app::NotificationCompat_Style::setBuilder(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Style::_class) ::android::support::v4::app::NotificationCompat_Style::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Style");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBuilder", "(Landroid/support/v4/app/NotificationCompat$Builder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Notification android::support::v4::app::NotificationCompat_Style::build() const {
    if (!::android::support::v4::app::NotificationCompat_Style::_class) ::android::support::v4::app::NotificationCompat_Style::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Style");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/app/Notification;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImpl::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::NotificationCompat_NotificationCompatImpl::getExtras(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "(Landroid/app/Notification;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_NotificationCompatImpl::getActionCount(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionCount", "(Landroid/app/Notification;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::app::NotificationCompat_Action android::support::v4::app::NotificationCompat_NotificationCompatImpl::getAction(const ::android::app::Notification& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "(Landroid/app/Notification;I)Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Action _ret(ret);
    return _ret;
}

std::vector< ::android::support::v4::app::NotificationCompat_Action> android::support::v4::app::NotificationCompat_NotificationCompatImpl::getActionsFromParcelableArrayList(const ::java::util::ArrayList& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionsFromParcelableArrayList", "(Ljava/util/ArrayList;)[Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::app::NotificationCompat_Action> _ret(rets, ::android::support::v4::app::NotificationCompat_Action((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::app::NotificationCompat_Action retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::ArrayList android::support::v4::app::NotificationCompat_NotificationCompatImpl::getParcelableArrayListForActions(const std::vector< ::android::support::v4::app::NotificationCompat_Action>& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArrayListForActions", "([Landroid/support/v4/app/NotificationCompat$Action;)Ljava/util/ArrayList;");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::NotificationCompat_Action::_class) ::android::support::v4::app::NotificationCompat_Action::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::NotificationCompat_Action::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::NotificationCompat_Action& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImpl::getCategory(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCategory", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImpl::getLocalOnly(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalOnly", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImpl::getGroup(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImpl::isGroupSummary(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupSummary", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImpl::getSortKey(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImpl::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSortKey", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::ShareCompat_ShareCompatImplICS::configureMenuItem(const ::android::view::MenuItem& arg0, const ::android::support::v4::app::ShareCompat_IntentBuilder& arg1) const {
    if (!::android::support::v4::app::ShareCompat_ShareCompatImplICS::_class) ::android::support::v4::app::ShareCompat_ShareCompatImplICS::_class = java::fetch_class("android/support/v4/app/ShareCompat$ShareCompatImplICS");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureMenuItem", "(Landroid/view/MenuItem;Landroid/support/v4/app/ShareCompat$IntentBuilder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentTransaction::FragmentTransaction() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::add(const ::android::support::v4::app::Fragment& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Landroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::add(int32_t arg0, const ::android::support::v4::app::Fragment& arg1) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::add(int32_t arg0, const ::android::support::v4::app::Fragment& arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::replace(int32_t arg0, const ::android::support::v4::app::Fragment& arg1) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::replace(int32_t arg0, const ::android::support::v4::app::Fragment& arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::remove(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::hide(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::show(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::detach(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "detach", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::attach(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "attach", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentTransaction::isEmpty() const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setCustomAnimations(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomAnimations", "(II)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setCustomAnimations(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomAnimations", "(IIII)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::addSharedElement(const ::android::view::View& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSharedElement", "(Landroid/view/View;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setTransition(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransition", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setTransitionStyle(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionStyle", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::addToBackStack(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "addToBackStack", "(Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentTransaction::isAddToBackStackAllowed() const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAddToBackStackAllowed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::disallowAddToBackStack() const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "disallowAddToBackStack", "()Landroid/support/v4/app/FragmentTransaction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setBreadCrumbTitle(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbTitle", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setBreadCrumbTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setBreadCrumbShortTitle(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbShortTitle", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::FragmentTransaction::setBreadCrumbShortTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbShortTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::FragmentTransaction::commit() const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "commit", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::app::FragmentTransaction::commitAllowingStateLoss() const {
    if (!::android::support::v4::app::FragmentTransaction::_class) ::android::support::v4::app::FragmentTransaction::_class = java::fetch_class("android/support/v4/app/FragmentTransaction");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitAllowingStateLoss", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::os::Bundle android::support::v4::app::RemoteInput_ImplBase::getResultsFromIntent(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::RemoteInput_ImplBase::_class) ::android::support::v4::app::RemoteInput_ImplBase::_class = java::fetch_class("android/support/v4/app/RemoteInput$ImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::RemoteInput_ImplBase::addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>& arg0, const ::android::content::Intent& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::RemoteInput_ImplBase::_class) ::android::support::v4::app::RemoteInput_ImplBase::_class = java::fetch_class("android/support/v4/app/RemoteInput$ImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResultsToIntent", "([Landroid/support/v4/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::RemoteInput::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::RemoteInput& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::app::NotificationManagerCompat android::support::v4::app::NotificationManagerCompat::from(const ::android::content::Context& arg0){
    if (!::android::support::v4::app::NotificationManagerCompat::_class) ::android::support::v4::app::NotificationManagerCompat::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "from", "(Landroid/content/Context;)Landroid/support/v4/app/NotificationManagerCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::app::NotificationManagerCompat _ret(ret);
    return _ret;
}

void android::support::v4::app::NotificationManagerCompat::cancel(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationManagerCompat::_class) ::android::support::v4::app::NotificationManagerCompat::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::NotificationManagerCompat::cancel(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationManagerCompat::_class) ::android::support::v4::app::NotificationManagerCompat::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::NotificationManagerCompat::cancelAll() const {
    if (!::android::support::v4::app::NotificationManagerCompat::_class) ::android::support::v4::app::NotificationManagerCompat::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::NotificationManagerCompat::notify(int32_t arg0, const ::android::app::Notification& arg1) const {
    if (!::android::support::v4::app::NotificationManagerCompat::_class) ::android::support::v4::app::NotificationManagerCompat::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(ILandroid/app/Notification;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::NotificationManagerCompat::notify(const ::java::lang::String& arg0, int32_t arg1, const ::android::app::Notification& arg2) const {
    if (!::android::support::v4::app::NotificationManagerCompat::_class) ::android::support::v4::app::NotificationManagerCompat::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(Ljava/lang/String;ILandroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::Set android::support::v4::app::NotificationManagerCompat::getEnabledListenerPackages(const ::android::content::Context& arg0){
    if (!::android::support::v4::app::NotificationManagerCompat::_class) ::android::support::v4::app::NotificationManagerCompat::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEnabledListenerPackages", "(Landroid/content/Context;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplIceCreamSandwich::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplIceCreamSandwich::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplIceCreamSandwich::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplIceCreamSandwich");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplHoneycomb::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplHoneycomb::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplHoneycomb::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplHoneycomb");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::LoaderManager::LoaderManager() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::content::Loader android::support::v4::app::LoaderManager::initLoader(int32_t arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::app::LoaderManager_LoaderCallbacks& arg2) const {
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "initLoader", "(ILandroid/os/Bundle;Landroid/support/v4/app/LoaderManager$LoaderCallbacks;)Landroid/support/v4/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::content::Loader _ret(ret);
    return _ret;
}

::android::support::v4::content::Loader android::support::v4::app::LoaderManager::restartLoader(int32_t arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::app::LoaderManager_LoaderCallbacks& arg2) const {
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "restartLoader", "(ILandroid/os/Bundle;Landroid/support/v4/app/LoaderManager$LoaderCallbacks;)Landroid/support/v4/content/Loader;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::content::Loader _ret(ret);
    return _ret;
}

void android::support::v4::app::LoaderManager::destroyLoader(int32_t arg0) const {
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyLoader", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::content::Loader android::support::v4::app::LoaderManager::getLoader(int32_t arg0) const {
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoader", "(I)Landroid/support/v4/content/Loader;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::content::Loader _ret(ret);
    return _ret;
}

void android::support::v4::app::LoaderManager::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
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

void android::support::v4::app::LoaderManager::enableDebugLogging(bool arg0){
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enableDebugLogging", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::support::v4::app::LoaderManager::hasRunningLoaders() const {
    if (!::android::support::v4::app::LoaderManager::_class) ::android::support::v4::app::LoaderManager::_class = java::fetch_class("android/support/v4/app/LoaderManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasRunningLoaders", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationManagerCompat_SideChannelManager::NotificationManagerCompat_SideChannelManager(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0), ::android::os::Handler_Callback((jobject)0) {
    if (!::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class) ::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$SideChannelManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::app::NotificationManagerCompat_SideChannelManager::queueTask(const ::android::support::v4::app::NotificationManagerCompat_Task& arg0) const {
    if (!::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class) ::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$SideChannelManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queueTask", "(Landroid/support/v4/app/NotificationManagerCompat$Task;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::NotificationManagerCompat_SideChannelManager::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class) ::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$SideChannelManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::app::NotificationManagerCompat_SideChannelManager::onServiceConnected(const ::android::content::ComponentName& arg0, const ::android::os::IBinder& arg1) const {
    if (!::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class) ::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$SideChannelManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceConnected", "(Landroid/content/ComponentName;Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::NotificationManagerCompat_SideChannelManager::onServiceDisconnected(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class) ::android::support::v4::app::NotificationManagerCompat_SideChannelManager::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$SideChannelManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceDisconnected", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::app::TaskStackBuilder android::support::v4::app::TaskStackBuilder::create(const ::android::content::Context& arg0){
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/content/Context;)Landroid/support/v4/app/TaskStackBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::app::TaskStackBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::TaskStackBuilder android::support::v4::app::TaskStackBuilder::from(const ::android::content::Context& arg0){
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "from", "(Landroid/content/Context;)Landroid/support/v4/app/TaskStackBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::app::TaskStackBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::TaskStackBuilder android::support::v4::app::TaskStackBuilder::addNextIntent(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addNextIntent", "(Landroid/content/Intent;)Landroid/support/v4/app/TaskStackBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::TaskStackBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::TaskStackBuilder android::support::v4::app::TaskStackBuilder::addNextIntentWithParentStack(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addNextIntentWithParentStack", "(Landroid/content/Intent;)Landroid/support/v4/app/TaskStackBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::TaskStackBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::TaskStackBuilder android::support::v4::app::TaskStackBuilder::addParentStack(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addParentStack", "(Landroid/app/Activity;)Landroid/support/v4/app/TaskStackBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::TaskStackBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::TaskStackBuilder android::support::v4::app::TaskStackBuilder::addParentStack(const ::java::lang::Class& arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addParentStack", "(Ljava/lang/Class;)Landroid/support/v4/app/TaskStackBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::TaskStackBuilder _ret(ret);
    return _ret;
}

::android::support::v4::app::TaskStackBuilder android::support::v4::app::TaskStackBuilder::addParentStack(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addParentStack", "(Landroid/content/ComponentName;)Landroid/support/v4/app/TaskStackBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::TaskStackBuilder _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::TaskStackBuilder::getIntentCount() const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntentCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::content::Intent android::support::v4::app::TaskStackBuilder::getIntent(int32_t arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntent", "(I)Landroid/content/Intent;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::app::TaskStackBuilder::editIntentAt(int32_t arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "editIntentAt", "(I)Landroid/content/Intent;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::java::util::Iterator android::support::v4::app::TaskStackBuilder::iterator() const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void android::support::v4::app::TaskStackBuilder::startActivities() const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivities", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::TaskStackBuilder::startActivities(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivities", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::PendingIntent android::support::v4::app::TaskStackBuilder::getPendingIntent(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPendingIntent", "(II)Landroid/app/PendingIntent;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::app::TaskStackBuilder::getPendingIntent(int32_t arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPendingIntent", "(IILandroid/os/Bundle;)Landroid/app/PendingIntent;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

std::vector< ::android::content::Intent> android::support::v4::app::TaskStackBuilder::getIntents() const {
    if (!::android::support::v4::app::TaskStackBuilder::_class) ::android::support::v4::app::TaskStackBuilder::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntents", "()[Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::content::Intent> _ret(rets, ::android::content::Intent((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::content::Intent retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::BackStackState::BackStackState(const ::android::support::v4::app::FragmentManagerImpl& arg0, const ::android::support::v4::app::BackStackRecord& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::app::BackStackState::_class) ::android::support::v4::app::BackStackState::_class = java::fetch_class("android/support/v4/app/BackStackState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/FragmentManagerImpl;Landroid/support/v4/app/BackStackRecord;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::BackStackState::BackStackState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::app::BackStackState::_class) ::android::support::v4::app::BackStackState::_class = java::fetch_class("android/support/v4/app/BackStackState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::BackStackRecord android::support::v4::app::BackStackState::instantiate(const ::android::support::v4::app::FragmentManagerImpl& arg0) const {
    if (!::android::support::v4::app::BackStackState::_class) ::android::support::v4::app::BackStackState::_class = java::fetch_class("android/support/v4/app/BackStackState");
    static jmethodID mid = java::jni->GetMethodID(_class, "instantiate", "(Landroid/support/v4/app/FragmentManagerImpl;)Landroid/support/v4/app/BackStackRecord;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::BackStackRecord _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::BackStackState::describeContents() const {
    if (!::android::support::v4::app::BackStackState::_class) ::android::support::v4::app::BackStackState::_class = java::fetch_class("android/support/v4/app/BackStackState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::app::BackStackState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::BackStackState::_class) ::android::support::v4::app::BackStackState::_class = java::fetch_class("android/support/v4/app/BackStackState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::ListFragment::ListFragment() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::view::View android::support::v4::app::ListFragment::onCreateView(const ::android::view::LayoutInflater& arg0, const ::android::view::ViewGroup& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::app::ListFragment::onViewCreated(const ::android::view::View& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewCreated", "(Landroid/view/View;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::ListFragment::onDestroyView() const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::ListFragment::onListItemClick(const ::android::widget::ListView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onListItemClick", "(Landroid/widget/ListView;Landroid/view/View;IJ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::app::ListFragment::setListAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ListFragment::setSelection(int32_t arg0) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::app::ListFragment::getSelectedItemPosition() const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::support::v4::app::ListFragment::getSelectedItemId() const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::widget::ListView android::support::v4::app::ListFragment::getListView() const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListView", "()Landroid/widget/ListView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListView _ret(ret);
    return _ret;
}

void android::support::v4::app::ListFragment::setEmptyText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmptyText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ListFragment::setListShown(bool arg0) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListShown", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ListFragment::setListShownNoAnimation(bool arg0) const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListShownNoAnimation", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::ListAdapter android::support::v4::app::ListFragment::getListAdapter() const {
    if (!::android::support::v4::app::ListFragment::_class) ::android::support::v4::app::ListFragment::_class = java::fetch_class("android/support/v4/app/ListFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::getThemeUpIndicator(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplJellybeanMR2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThemeUpIndicator", "(Landroid/app/Activity;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::setActionBarUpIndicator(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, const ::android::graphics::drawable::Drawable& arg2, int32_t arg3) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplJellybeanMR2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarUpIndicator", "(Ljava/lang/Object;Landroid/app/Activity;Landroid/graphics/drawable/Drawable;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::setActionBarDescription(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplJellybeanMR2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarDescription", "(Ljava/lang/Object;Landroid/app/Activity;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent::NotificationManagerCompat_ServiceConnectedEvent(const ::android::content::ComponentName& arg0, const ::android::os::IBinder& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent::_class) ::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$ServiceConnectedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/ComponentName;Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::app::FragmentTabHost_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentTabHost_SavedState::_class) ::android::support::v4::app::FragmentTabHost_SavedState::_class = java::fetch_class("android/support/v4/app/FragmentTabHost$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::FragmentTabHost_SavedState::toString() const {
    if (!::android::support::v4::app::FragmentTabHost_SavedState::_class) ::android::support::v4::app::FragmentTabHost_SavedState::_class = java::fetch_class("android/support/v4/app/FragmentTabHost$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord::NotificationManagerCompat_SideChannelManager_ListenerRecord(const ::android::content::ComponentName& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord::_class) ::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$SideChannelManager$ListenerRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::content::Intent android::support::v4::app::NavUtils_NavUtilsImplBase::getParentActivityIntent(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplBase::_class) ::android::support::v4::app::NavUtils_NavUtilsImplBase::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentActivityIntent", "(Landroid/app/Activity;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

bool android::support::v4::app::NavUtils_NavUtilsImplBase::shouldUpRecreateTask(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplBase::_class) ::android::support::v4::app::NavUtils_NavUtilsImplBase::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldUpRecreateTask", "(Landroid/app/Activity;Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::NavUtils_NavUtilsImplBase::navigateUpTo(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplBase::_class) ::android::support::v4::app::NavUtils_NavUtilsImplBase::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigateUpTo", "(Landroid/app/Activity;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::NavUtils_NavUtilsImplBase::getParentActivityName(const ::android::content::Context& arg0, const ::android::content::pm::ActivityInfo& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplBase::_class) ::android::support::v4::app::NavUtils_NavUtilsImplBase::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentActivityName", "(Landroid/content/Context;Landroid/content/pm/ActivityInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::INotificationSideChannel_Stub::INotificationSideChannel_Stub() : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::app::INotificationSideChannel((jobject)0) {
    if (!::android::support::v4::app::INotificationSideChannel_Stub::_class) ::android::support::v4::app::INotificationSideChannel_Stub::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::app::INotificationSideChannel android::support::v4::app::INotificationSideChannel_Stub::asInterface(const ::android::os::IBinder& arg0){
    if (!::android::support::v4::app::INotificationSideChannel_Stub::_class) ::android::support::v4::app::INotificationSideChannel_Stub::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asInterface", "(Landroid/os/IBinder;)Landroid/support/v4/app/INotificationSideChannel;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::app::INotificationSideChannel _ret(ret);
    return _ret;
}

::android::os::IBinder android::support::v4::app::INotificationSideChannel_Stub::asBinder() const {
    if (!::android::support::v4::app::INotificationSideChannel_Stub::_class) ::android::support::v4::app::INotificationSideChannel_Stub::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool android::support::v4::app::INotificationSideChannel_Stub::onTransact(int32_t arg0, const ::android::os::Parcel& arg1, const ::android::os::Parcel& arg2, int32_t arg3) const {
    if (!::android::support::v4::app::INotificationSideChannel_Stub::_class) ::android::support::v4::app::INotificationSideChannel_Stub::_class = java::fetch_class("android/support/v4/app/INotificationSideChannel$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTransact", "(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::setPosition(float arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class) ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$SlideDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPosition", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::getPosition() const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class) ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$SlideDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::setOffset(float arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class) ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$SlideDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOffset", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class) ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$SlideDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentPagerAdapter::FragmentPagerAdapter(const ::android::support::v4::app::FragmentManager& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::view::PagerAdapter((jobject)0) {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/FragmentManager;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::Fragment android::support::v4::app::FragmentPagerAdapter::getItem(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Landroid/support/v4/app/Fragment;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentPagerAdapter::startUpdate(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startUpdate", "(Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::FragmentPagerAdapter::instantiateItem(const ::android::view::ViewGroup& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "instantiateItem", "(Landroid/view/ViewGroup;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentPagerAdapter::destroyItem(const ::android::view::ViewGroup& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyItem", "(Landroid/view/ViewGroup;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentPagerAdapter::setPrimaryItem(const ::android::view::ViewGroup& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrimaryItem", "(Landroid/view/ViewGroup;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentPagerAdapter::finishUpdate(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishUpdate", "(Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::FragmentPagerAdapter::isViewFromObject(const ::android::view::View& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isViewFromObject", "(Landroid/view/View;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::support::v4::app::FragmentPagerAdapter::saveState() const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentPagerAdapter::restoreState(const ::android::os::Parcelable& arg0, const ::java::lang::ClassLoader& arg1) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreState", "(Landroid/os/Parcelable;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t android::support::v4::app::FragmentPagerAdapter::getItemId(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentPagerAdapter::_class) ::android::support::v4::app::FragmentPagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentPagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getExtras(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "(Landroid/app/Notification;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getActionCount(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionCount", "(Landroid/app/Notification;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::app::NotificationCompat_Action android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getAction(const ::android::app::Notification& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "(Landroid/app/Notification;I)Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Action _ret(ret);
    return _ret;
}

std::vector< ::android::support::v4::app::NotificationCompat_Action> android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getActionsFromParcelableArrayList(const ::java::util::ArrayList& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionsFromParcelableArrayList", "(Ljava/util/ArrayList;)[Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::app::NotificationCompat_Action> _ret(rets, ::android::support::v4::app::NotificationCompat_Action((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::app::NotificationCompat_Action retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::ArrayList android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getParcelableArrayListForActions(const std::vector< ::android::support::v4::app::NotificationCompat_Action>& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArrayListForActions", "([Landroid/support/v4/app/NotificationCompat$Action;)Ljava/util/ArrayList;");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::NotificationCompat_Action::_class) ::android::support::v4::app::NotificationCompat_Action::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::NotificationCompat_Action::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::NotificationCompat_Action& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getLocalOnly(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalOnly", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getGroup(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::isGroupSummary(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupSummary", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::getSortKey(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSortKey", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::getMessages() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessages", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::support::v4::app::RemoteInput android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::getRemoteInput() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteInput", "()Landroid/support/v4/app/RemoteInput;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::RemoteInput _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::getReplyPendingIntent() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReplyPendingIntent", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::getReadPendingIntent() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReadPendingIntent", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::getParticipants() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParticipants", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::getParticipant() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParticipant", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::getLatestTimestamp() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class) ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender$UnreadConversation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLatestTimestamp", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompatSideChannelService::NotificationCompatSideChannelService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::support::v4::app::NotificationCompatSideChannelService::_class) ::android::support::v4::app::NotificationCompatSideChannelService::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::IBinder android::support::v4::app::NotificationCompatSideChannelService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::NotificationCompatSideChannelService::_class) ::android::support::v4::app::NotificationCompatSideChannelService::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

void android::support::v4::app::NotificationCompatSideChannelService::notify(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::android::app::Notification& arg3) const {
    if (!::android::support::v4::app::NotificationCompatSideChannelService::_class) ::android::support::v4::app::NotificationCompatSideChannelService::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(Ljava/lang/String;ILjava/lang/String;Landroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::app::NotificationCompatSideChannelService::cancel(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::NotificationCompatSideChannelService::_class) ::android::support::v4::app::NotificationCompatSideChannelService::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::NotificationCompatSideChannelService::cancelAll(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::NotificationCompatSideChannelService::_class) ::android::support::v4::app::NotificationCompatSideChannelService::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelAll", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentState::FragmentState(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::app::FragmentState::_class) ::android::support::v4::app::FragmentState::_class = java::fetch_class("android/support/v4/app/FragmentState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentState::FragmentState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::app::FragmentState::_class) ::android::support::v4::app::FragmentState::_class = java::fetch_class("android/support/v4/app/FragmentState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::Fragment android::support::v4::app::FragmentState::instantiate(const ::android::support::v4::app::FragmentActivity& arg0, const ::android::support::v4::app::Fragment& arg1) const {
    if (!::android::support::v4::app::FragmentState::_class) ::android::support::v4::app::FragmentState::_class = java::fetch_class("android/support/v4/app/FragmentState");
    static jmethodID mid = java::jni->GetMethodID(_class, "instantiate", "(Landroid/support/v4/app/FragmentActivity;Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/Fragment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::FragmentState::describeContents() const {
    if (!::android::support::v4::app::FragmentState::_class) ::android::support::v4::app::FragmentState::_class = java::fetch_class("android/support/v4/app/FragmentState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::app::FragmentState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentState::_class) ::android::support::v4::app::FragmentState::_class = java::fetch_class("android/support/v4/app/FragmentState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::BackStackRecord::toString() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::BackStackRecord::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
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

void android::support::v4::app::BackStackRecord::dump(const ::java::lang::String& arg0, const ::java::io::PrintWriter& arg1, bool arg2) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/PrintWriter;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::BackStackRecord::BackStackRecord(const ::android::support::v4::app::FragmentManagerImpl& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::FragmentManager_BackStackEntry((jobject)0), ::android::support::v4::app::FragmentTransaction((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/FragmentManagerImpl;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::app::BackStackRecord::getId() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::app::BackStackRecord::getBreadCrumbTitleRes() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbTitleRes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::app::BackStackRecord::getBreadCrumbShortTitleRes() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbShortTitleRes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::support::v4::app::BackStackRecord::getBreadCrumbTitle() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::BackStackRecord::getBreadCrumbShortTitle() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbShortTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::add(const ::android::support::v4::app::Fragment& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Landroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::add(int32_t arg0, const ::android::support::v4::app::Fragment& arg1) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::add(int32_t arg0, const ::android::support::v4::app::Fragment& arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::replace(int32_t arg0, const ::android::support::v4::app::Fragment& arg1) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::replace(int32_t arg0, const ::android::support::v4::app::Fragment& arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::remove(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::hide(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::show(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::detach(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "detach", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::attach(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "attach", "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setCustomAnimations(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomAnimations", "(II)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setCustomAnimations(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomAnimations", "(IIII)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setTransition(int32_t arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransition", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::addSharedElement(const ::android::view::View& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSharedElement", "(Landroid/view/View;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setTransitionStyle(int32_t arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionStyle", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::addToBackStack(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "addToBackStack", "(Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

bool android::support::v4::app::BackStackRecord::isAddToBackStackAllowed() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAddToBackStackAllowed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::disallowAddToBackStack() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "disallowAddToBackStack", "()Landroid/support/v4/app/FragmentTransaction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setBreadCrumbTitle(int32_t arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbTitle", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setBreadCrumbTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setBreadCrumbShortTitle(int32_t arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbShortTitle", "(I)Landroid/support/v4/app/FragmentTransaction;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

::android::support::v4::app::FragmentTransaction android::support::v4::app::BackStackRecord::setBreadCrumbShortTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBreadCrumbShortTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::FragmentTransaction _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::BackStackRecord::commit() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "commit", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::app::BackStackRecord::commitAllowingStateLoss() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitAllowingStateLoss", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::app::BackStackRecord::run() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::BackStackRecord::calculateBackFragments(const ::android::util::SparseArray& arg0, const ::android::util::SparseArray& arg1) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "calculateBackFragments", "(Landroid/util/SparseArray;Landroid/util/SparseArray;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::app::BackStackRecord_TransitionState android::support::v4::app::BackStackRecord::popFromBackStack(bool arg0, const ::android::support::v4::app::BackStackRecord_TransitionState& arg1, const ::android::util::SparseArray& arg2, const ::android::util::SparseArray& arg3) const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "popFromBackStack", "(ZLandroid/support/v4/app/BackStackRecord$TransitionState;Landroid/util/SparseArray;Landroid/util/SparseArray;)Landroid/support/v4/app/BackStackRecord$TransitionState;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::support::v4::app::BackStackRecord_TransitionState _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::BackStackRecord::getName() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::BackStackRecord::getTransition() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::app::BackStackRecord::getTransitionStyle() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransitionStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::app::BackStackRecord::isEmpty() const {
    if (!::android::support::v4::app::BackStackRecord::_class) ::android::support::v4::app::BackStackRecord::_class = java::fetch_class("android/support/v4/app/BackStackRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplApi21::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplApi21::getCategory(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCategory", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::ActivityCompat::ActivityCompat() : ::java::lang::Object((jobject)0), ::android::support::v4::content::ContextCompat((jobject)0) {
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::app::ActivityCompat::invalidateOptionsMenu(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invalidateOptionsMenu", "(Landroid/app/Activity;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::app::ActivityCompat::startActivity(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1, const ::android::os::Bundle& arg2){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startActivity", "(Landroid/app/Activity;Landroid/content/Intent;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::ActivityCompat::startActivityForResult(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1, int32_t arg2, const ::android::os::Bundle& arg3){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startActivityForResult", "(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::app::ActivityCompat::finishAffinity(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "finishAffinity", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::app::ActivityCompat::finishAfterTransition(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "finishAfterTransition", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::app::ActivityCompat::setEnterSharedElementCallback(const ::android::app::Activity& arg0, const ::android::support::v4::app::SharedElementCallback& arg1){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setEnterSharedElementCallback", "(Landroid/app/Activity;Landroid/support/v4/app/SharedElementCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::app::ActivityCompat::setExitSharedElementCallback(const ::android::app::Activity& arg0, const ::android::support::v4::app::SharedElementCallback& arg1){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setExitSharedElementCallback", "(Landroid/app/Activity;Landroid/support/v4/app/SharedElementCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::app::ActivityCompat::postponeEnterTransition(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "postponeEnterTransition", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::app::ActivityCompat::startPostponedEnterTransition(const ::android::app::Activity& arg0){
    if (!::android::support::v4::app::ActivityCompat::_class) ::android::support::v4::app::ActivityCompat::_class = java::fetch_class("android/support/v4/app/ActivityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startPostponedEnterTransition", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_WearableExtender::NotificationCompat_WearableExtender() : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_WearableExtender::NotificationCompat_WearableExtender(const ::android::app::Notification& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_WearableExtender::extend(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "extend", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::clone() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::addAction(const ::android::support::v4::app::NotificationCompat_Action& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Landroid/support/v4/app/NotificationCompat$Action;)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::addActions(const ::java::util::List& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "addActions", "(Ljava/util/List;)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::clearActions() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearActions", "()Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::app::NotificationCompat_WearableExtender::getActions() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setDisplayIntent(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayIntent", "(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::app::NotificationCompat_WearableExtender::getDisplayIntent() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayIntent", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::addPage(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPage", "(Landroid/app/Notification;)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::addPages(const ::java::util::List& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPages", "(Ljava/util/List;)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::clearPages() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPages", "()Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::app::NotificationCompat_WearableExtender::getPages() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPages", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setBackground(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackground", "(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::support::v4::app::NotificationCompat_WearableExtender::getBackground() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackground", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setContentIcon(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentIcon", "(I)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_WearableExtender::getContentIcon() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentIcon", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setContentIconGravity(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentIconGravity", "(I)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_WearableExtender::getContentIconGravity() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentIconGravity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setContentAction(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentAction", "(I)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_WearableExtender::getContentAction() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentAction", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setGravity(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_WearableExtender::getGravity() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGravity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setCustomSizePreset(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomSizePreset", "(I)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_WearableExtender::getCustomSizePreset() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCustomSizePreset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setCustomContentHeight(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomContentHeight", "(I)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_WearableExtender::getCustomContentHeight() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCustomContentHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setStartScrollBottom(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartScrollBottom", "(Z)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_WearableExtender::getStartScrollBottom() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartScrollBottom", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setContentIntentAvailableOffline(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentIntentAvailableOffline", "(Z)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_WearableExtender::getContentIntentAvailableOffline() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentIntentAvailableOffline", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setHintHideIcon(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHintHideIcon", "(Z)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_WearableExtender::getHintHideIcon() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHintHideIcon", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setHintShowBackgroundOnly(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHintShowBackgroundOnly", "(Z)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_WearableExtender::getHintShowBackgroundOnly() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHintShowBackgroundOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setHintAvoidBackgroundClipping(bool arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHintAvoidBackgroundClipping", "(Z)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_WearableExtender::getHintAvoidBackgroundClipping() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHintAvoidBackgroundClipping", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_WearableExtender android::support::v4::app::NotificationCompat_WearableExtender::setHintScreenTimeout(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHintScreenTimeout", "(I)Landroid/support/v4/app/NotificationCompat$WearableExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_WearableExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_WearableExtender::getHintScreenTimeout() const {
    if (!::android::support::v4::app::NotificationCompat_WearableExtender::_class) ::android::support::v4::app::NotificationCompat_WearableExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$WearableExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHintScreenTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::ActionBarDrawerToggle::ActionBarDrawerToggle(const ::android::app::Activity& arg0, const ::android::support::v4::widget::DrawerLayout& arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerListener((jobject)0) {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;Landroid/support/v4/widget/DrawerLayout;III)V");
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
::android::support::v4::app::ActionBarDrawerToggle::ActionBarDrawerToggle(const ::android::app::Activity& arg0, const ::android::support::v4::widget::DrawerLayout& arg1, bool arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerListener((jobject)0) {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;Landroid/support/v4/widget/DrawerLayout;ZIII)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

void android::support::v4::app::ActionBarDrawerToggle::syncState() const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "syncState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::app::ActionBarDrawerToggle::setHomeAsUpIndicator(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHomeAsUpIndicator", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ActionBarDrawerToggle::setHomeAsUpIndicator(int32_t arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHomeAsUpIndicator", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ActionBarDrawerToggle::setDrawerIndicatorEnabled(bool arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerIndicatorEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::ActionBarDrawerToggle::isDrawerIndicatorEnabled() const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDrawerIndicatorEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::app::ActionBarDrawerToggle::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::ActionBarDrawerToggle::onOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::app::ActionBarDrawerToggle::onDrawerSlide(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerSlide", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::ActionBarDrawerToggle::onDrawerOpened(const ::android::view::View& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerOpened", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ActionBarDrawerToggle::onDrawerClosed(const ::android::view::View& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerClosed", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ActionBarDrawerToggle::onDrawerStateChanged(int32_t arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle::_class) ::android::support::v4::app::ActionBarDrawerToggle::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::ActivityCompat_SharedElementCallback21Impl(const ::android::support::v4::app::SharedElementCallback& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class) ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = java::fetch_class("android/support/v4/app/ActivityCompat$SharedElementCallback21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/SharedElementCallback;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::onSharedElementStart(const ::java::util::List& arg0, const ::java::util::List& arg1, const ::java::util::List& arg2) const {
    if (!::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class) ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = java::fetch_class("android/support/v4/app/ActivityCompat$SharedElementCallback21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSharedElementStart", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::onSharedElementEnd(const ::java::util::List& arg0, const ::java::util::List& arg1, const ::java::util::List& arg2) const {
    if (!::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class) ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = java::fetch_class("android/support/v4/app/ActivityCompat$SharedElementCallback21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSharedElementEnd", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::onRejectSharedElements(const ::java::util::List& arg0) const {
    if (!::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class) ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = java::fetch_class("android/support/v4/app/ActivityCompat$SharedElementCallback21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRejectSharedElements", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::onMapSharedElements(const ::java::util::List& arg0, const ::java::util::Map& arg1) const {
    if (!::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class) ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = java::fetch_class("android/support/v4/app/ActivityCompat$SharedElementCallback21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMapSharedElements", "(Ljava/util/List;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::onCaptureSharedElementSnapshot(const ::android::view::View& arg0, const ::android::graphics::Matrix& arg1, const ::android::graphics::RectF& arg2) const {
    if (!::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class) ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = java::fetch_class("android/support/v4/app/ActivityCompat$SharedElementCallback21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCaptureSharedElementSnapshot", "(Landroid/view/View;Landroid/graphics/Matrix;Landroid/graphics/RectF;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::onCreateSnapshotView(const ::android::content::Context& arg0, const ::android::os::Parcelable& arg1) const {
    if (!::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class) ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl::_class = java::fetch_class("android/support/v4/app/ActivityCompat$SharedElementCallback21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateSnapshotView", "(Landroid/content/Context;Landroid/os/Parcelable;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::support::v4::app::ActionBarDrawerToggle_Delegate android::support::v4::app::ActionBarDrawerToggle_DelegateProvider::getDrawerToggleDelegate() const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider::_class) ::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$DelegateProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawerToggleDelegate", "()Landroid/support/v4/app/ActionBarDrawerToggle$Delegate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::ActionBarDrawerToggle_Delegate _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl::getPendingIntent(const ::android::content::Context& arg0, const std::vector< ::android::content::Intent>& arg1, int32_t arg2, int32_t arg3, const ::android::os::Bundle& arg4) const {
    if (!::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl::_class) ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder$TaskStackBuilderImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPendingIntent", "(Landroid/content/Context;[Landroid/content/Intent;IILandroid/os/Bundle;)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::Intent& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::app::FragmentContainer::findViewById(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentContainer::_class) ::android::support::v4::app::FragmentContainer::_class = java::fetch_class("android/support/v4/app/FragmentContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewById", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::support::v4::app::FragmentContainer::hasView() const {
    if (!::android::support::v4::app::FragmentContainer::_class) ::android::support::v4::app::FragmentContainer::_class = java::fetch_class("android/support/v4/app/FragmentContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::graphics::drawable::Drawable android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::getThemeUpIndicator(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThemeUpIndicator", "(Landroid/app/Activity;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::setActionBarUpIndicator(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, const ::android::graphics::drawable::Drawable& arg2, int32_t arg3) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarUpIndicator", "(Ljava/lang/Object;Landroid/app/Activity;Landroid/graphics/drawable/Drawable;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::setActionBarDescription(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarDescription", "(Ljava/lang/Object;Landroid/app/Activity;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::app::TaskStackBuilder_SupportParentable::getSupportParentActivityIntent() const {
    if (!::android::support::v4::app::TaskStackBuilder_SupportParentable::_class) ::android::support::v4::app::TaskStackBuilder_SupportParentable::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder$SupportParentable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportParentActivityIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImplJB::toBundle() const {
    if (!::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImplJB::_class) ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImplJB::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat$ActivityOptionsImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImplJB::update(const ::android::support::v4::app::ActivityOptionsCompat& arg0) const {
    if (!::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImplJB::_class) ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImplJB::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat$ActivityOptionsImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/support/v4/app/ActivityOptionsCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::app::Fragment_SavedState::describeContents() const {
    if (!::android::support::v4::app::Fragment_SavedState::_class) ::android::support::v4::app::Fragment_SavedState::_class = java::fetch_class("android/support/v4/app/Fragment$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::app::Fragment_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::Fragment_SavedState::_class) ::android::support::v4::app::Fragment_SavedState::_class = java::fetch_class("android/support/v4/app/Fragment$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::content::Intent android::support::v4::app::NavUtils_NavUtilsImpl::getParentActivityIntent(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImpl::_class) ::android::support::v4::app::NavUtils_NavUtilsImpl::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentActivityIntent", "(Landroid/app/Activity;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

bool android::support::v4::app::NavUtils_NavUtilsImpl::shouldUpRecreateTask(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImpl::_class) ::android::support::v4::app::NavUtils_NavUtilsImpl::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldUpRecreateTask", "(Landroid/app/Activity;Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::NavUtils_NavUtilsImpl::navigateUpTo(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImpl::_class) ::android::support::v4::app::NavUtils_NavUtilsImpl::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigateUpTo", "(Landroid/app/Activity;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::NavUtils_NavUtilsImpl::getParentActivityName(const ::android::content::Context& arg0, const ::android::content::pm::ActivityInfo& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImpl::_class) ::android::support::v4::app::NavUtils_NavUtilsImpl::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentActivityName", "(Landroid/content/Context;Landroid/content/pm/ActivityInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action_Builder android::support::v4::app::NotificationCompat_Action_Extender::extend(const ::android::support::v4::app::NotificationCompat_Action_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_Action_Extender::_class) ::android::support::v4::app::NotificationCompat_Action_Extender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action$Extender");
    static jmethodID mid = java::jni->GetMethodID(_class, "extend", "(Landroid/support/v4/app/NotificationCompat$Action$Builder;)Landroid/support/v4/app/NotificationCompat$Action$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Action_Builder _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::RemoteInput_ImplJellybean::getResultsFromIntent(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::app::RemoteInput_ImplJellybean::_class) ::android::support::v4::app::RemoteInput_ImplJellybean::_class = java::fetch_class("android/support/v4/app/RemoteInput$ImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::RemoteInput_ImplJellybean::addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>& arg0, const ::android::content::Intent& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::app::RemoteInput_ImplJellybean::_class) ::android::support::v4::app::RemoteInput_ImplJellybean::_class = java::fetch_class("android/support/v4/app/RemoteInput$ImplJellybean");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResultsToIntent", "([Landroid/support/v4/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::RemoteInput::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::RemoteInput& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_CarExtender::NotificationCompat_CarExtender() : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_CarExtender::NotificationCompat_CarExtender(const ::android::app::Notification& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::NotificationCompat_Builder android::support::v4::app::NotificationCompat_CarExtender::extend(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "extend", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/support/v4/app/NotificationCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_CarExtender android::support::v4::app::NotificationCompat_CarExtender::setColor(int32_t arg0) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColor", "(I)Landroid/support/v4/app/NotificationCompat$CarExtender;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_CarExtender _ret(ret);
    return _ret;
}

int32_t android::support::v4::app::NotificationCompat_CarExtender::getColor() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::app::NotificationCompat_CarExtender android::support::v4::app::NotificationCompat_CarExtender::setLargeIcon(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLargeIcon", "(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$CarExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_CarExtender _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::support::v4::app::NotificationCompat_CarExtender::getLargeIcon() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLargeIcon", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_CarExtender android::support::v4::app::NotificationCompat_CarExtender::setUnreadConversation(const ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUnreadConversation", "(Landroid/support/v4/app/NotificationCompat$CarExtender$UnreadConversation;)Landroid/support/v4/app/NotificationCompat$CarExtender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::NotificationCompat_CarExtender _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation android::support::v4::app::NotificationCompat_CarExtender::getUnreadConversation() const {
    if (!::android::support::v4::app::NotificationCompat_CarExtender::_class) ::android::support::v4::app::NotificationCompat_CarExtender::_class = java::fetch_class("android/support/v4/app/NotificationCompat$CarExtender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnreadConversation", "()Landroid/support/v4/app/NotificationCompat$CarExtender$UnreadConversation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase::getPendingIntent(const ::android::content::Context& arg0, const std::vector< ::android::content::Intent>& arg1, int32_t arg2, int32_t arg3, const ::android::os::Bundle& arg4) const {
    if (!::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase::_class) ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase::_class = java::fetch_class("android/support/v4/app/TaskStackBuilder$TaskStackBuilderImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPendingIntent", "(Landroid/content/Context;[Landroid/content/Intent;IILandroid/os/Bundle;)Landroid/app/PendingIntent;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::Intent& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationManagerCompat_NotifyTask::NotificationManagerCompat_NotifyTask(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::android::app::Notification& arg3) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Task((jobject)0) {
    if (!::android::support::v4::app::NotificationManagerCompat_NotifyTask::_class) ::android::support::v4::app::NotificationManagerCompat_NotifyTask::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$NotifyTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;Landroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::support::v4::app::NotificationManagerCompat_NotifyTask::send(const ::android::support::v4::app::INotificationSideChannel& arg0) const {
    if (!::android::support::v4::app::NotificationManagerCompat_NotifyTask::_class) ::android::support::v4::app::NotificationManagerCompat_NotifyTask::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$NotifyTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Landroid/support/v4/app/INotificationSideChannel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationManagerCompat_NotifyTask::toString() const {
    if (!::android::support::v4::app::NotificationManagerCompat_NotifyTask::_class) ::android::support::v4::app::NotificationManagerCompat_NotifyTask::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$NotifyTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::notify(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::android::app::Notification& arg3) const {
    if (!::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::_class) ::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService$NotificationSideChannelStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "(Ljava/lang/String;ILjava/lang/String;Landroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::cancel(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::_class) ::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService$NotificationSideChannelStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::cancelAll(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::_class) ::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub::_class = java::fetch_class("android/support/v4/app/NotificationCompatSideChannelService$NotificationSideChannelStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelAll", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::RemoteInput::getResultKey() const {
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::app::RemoteInput::getLabel() const {
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

std::vector< ::java::lang::CharSequence> android::support::v4::app::RemoteInput::getChoices() const {
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChoices", "()[Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::app::RemoteInput::getAllowFreeFormInput() const {
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowFreeFormInput", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::os::Bundle android::support::v4::app::RemoteInput::getExtras() const {
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::RemoteInput::getResultsFromIntent(const ::android::content::Intent& arg0){
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getResultsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::RemoteInput::addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>& arg0, const ::android::content::Intent& arg1, const ::android::os::Bundle& arg2){
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addResultsToIntent", "([Landroid/support/v4/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::RemoteInput::_class) ::android::support::v4::app::RemoteInput::_class = java::fetch_class("android/support/v4/app/RemoteInput");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::RemoteInput::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::RemoteInput& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::app::ActivityOptionsCompat android::support::v4::app::ActivityOptionsCompat::makeCustomAnimation(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2){
    if (!::android::support::v4::app::ActivityOptionsCompat::_class) ::android::support::v4::app::ActivityOptionsCompat::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeCustomAnimation", "(Landroid/content/Context;II)Landroid/support/v4/app/ActivityOptionsCompat;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::ActivityOptionsCompat _ret(ret);
    return _ret;
}

::android::support::v4::app::ActivityOptionsCompat android::support::v4::app::ActivityOptionsCompat::makeScaleUpAnimation(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::support::v4::app::ActivityOptionsCompat::_class) ::android::support::v4::app::ActivityOptionsCompat::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeScaleUpAnimation", "(Landroid/view/View;IIII)Landroid/support/v4/app/ActivityOptionsCompat;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::support::v4::app::ActivityOptionsCompat _ret(ret);
    return _ret;
}

::android::support::v4::app::ActivityOptionsCompat android::support::v4::app::ActivityOptionsCompat::makeThumbnailScaleUpAnimation(const ::android::view::View& arg0, const ::android::graphics::Bitmap& arg1, int32_t arg2, int32_t arg3){
    if (!::android::support::v4::app::ActivityOptionsCompat::_class) ::android::support::v4::app::ActivityOptionsCompat::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeThumbnailScaleUpAnimation", "(Landroid/view/View;Landroid/graphics/Bitmap;II)Landroid/support/v4/app/ActivityOptionsCompat;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::support::v4::app::ActivityOptionsCompat _ret(ret);
    return _ret;
}

::android::support::v4::app::ActivityOptionsCompat android::support::v4::app::ActivityOptionsCompat::makeSceneTransitionAnimation(const ::android::app::Activity& arg0, const ::android::view::View& arg1, const ::java::lang::String& arg2){
    if (!::android::support::v4::app::ActivityOptionsCompat::_class) ::android::support::v4::app::ActivityOptionsCompat::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeSceneTransitionAnimation", "(Landroid/app/Activity;Landroid/view/View;Ljava/lang/String;)Landroid/support/v4/app/ActivityOptionsCompat;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::app::ActivityOptionsCompat _ret(ret);
    return _ret;
}

::android::support::v4::app::ActivityOptionsCompat android::support::v4::app::ActivityOptionsCompat::makeSceneTransitionAnimation(const ::android::app::Activity& arg0, const std::vector< ::android::support::v4::util::Pair>& arg1){
    if (!::android::support::v4::app::ActivityOptionsCompat::_class) ::android::support::v4::app::ActivityOptionsCompat::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeSceneTransitionAnimation", "(Landroid/app/Activity;[Landroid/support/v4/util/Pair;)Landroid/support/v4/app/ActivityOptionsCompat;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::support::v4::util::Pair::_class) ::android::support::v4::util::Pair::_class = java::fetch_class("android/support/v4/util/Pair");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::support::v4::util::Pair::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::support::v4::util::Pair& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::app::ActivityOptionsCompat _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::app::ActivityOptionsCompat::toBundle() const {
    if (!::android::support::v4::app::ActivityOptionsCompat::_class) ::android::support::v4::app::ActivityOptionsCompat::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::support::v4::app::ActivityOptionsCompat::update(const ::android::support::v4::app::ActivityOptionsCompat& arg0) const {
    if (!::android::support::v4::app::ActivityOptionsCompat::_class) ::android::support::v4::app::ActivityOptionsCompat::_class = java::fetch_class("android/support/v4/app/ActivityOptionsCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/support/v4/app/ActivityOptionsCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::FragmentStatePagerAdapter::FragmentStatePagerAdapter(const ::android::support::v4::app::FragmentManager& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::view::PagerAdapter((jobject)0) {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/FragmentManager;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::Fragment android::support::v4::app::FragmentStatePagerAdapter::getItem(int32_t arg0) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Landroid/support/v4/app/Fragment;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentStatePagerAdapter::startUpdate(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startUpdate", "(Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::app::FragmentStatePagerAdapter::instantiateItem(const ::android::view::ViewGroup& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "instantiateItem", "(Landroid/view/ViewGroup;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentStatePagerAdapter::destroyItem(const ::android::view::ViewGroup& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyItem", "(Landroid/view/ViewGroup;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentStatePagerAdapter::setPrimaryItem(const ::android::view::ViewGroup& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrimaryItem", "(Landroid/view/ViewGroup;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::FragmentStatePagerAdapter::finishUpdate(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishUpdate", "(Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::app::FragmentStatePagerAdapter::isViewFromObject(const ::android::view::View& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isViewFromObject", "(Landroid/view/View;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::support::v4::app::FragmentStatePagerAdapter::saveState() const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::support::v4::app::FragmentStatePagerAdapter::restoreState(const ::android::os::Parcelable& arg0, const ::java::lang::ClassLoader& arg1) const {
    if (!::android::support::v4::app::FragmentStatePagerAdapter::_class) ::android::support::v4::app::FragmentStatePagerAdapter::_class = java::fetch_class("android/support/v4/app/FragmentStatePagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreState", "(Landroid/os/Parcelable;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::app::Notification android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::build(const ::android::support::v4::app::NotificationCompat_Builder& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Landroid/support/v4/app/NotificationCompat$Builder;)Landroid/app/Notification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Notification _ret(ret);
    return _ret;
}

::android::support::v4::app::NotificationCompat_Action android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::getAction(const ::android::app::Notification& arg0, int32_t arg1) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "(Landroid/app/Notification;I)Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::app::NotificationCompat_Action _ret(ret);
    return _ret;
}

std::vector< ::android::support::v4::app::NotificationCompat_Action> android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::getActionsFromParcelableArrayList(const ::java::util::ArrayList& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionsFromParcelableArrayList", "(Ljava/util/ArrayList;)[Landroid/support/v4/app/NotificationCompat$Action;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::app::NotificationCompat_Action> _ret(rets, ::android::support::v4::app::NotificationCompat_Action((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::app::NotificationCompat_Action retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::ArrayList android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::getParcelableArrayListForActions(const std::vector< ::android::support::v4::app::NotificationCompat_Action>& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArrayListForActions", "([Landroid/support/v4/app/NotificationCompat$Action;)Ljava/util/ArrayList;");
    unsigned arg0s = arg0.size();
    if (!::android::support::v4::app::NotificationCompat_Action::_class) ::android::support::v4::app::NotificationCompat_Action::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::support::v4::app::NotificationCompat_Action::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::support::v4::app::NotificationCompat_Action& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::getLocalOnly(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalOnly", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::getGroup(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::isGroupSummary(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupSummary", "(Landroid/app/Notification;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::getSortKey(const ::android::app::Notification& arg0) const {
    if (!::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class) ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20::_class = java::fetch_class("android/support/v4/app/NotificationCompat$NotificationCompatImplApi20");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSortKey", "(Landroid/app/Notification;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::getThemeUpIndicator(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThemeUpIndicator", "(Landroid/app/Activity;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::setActionBarUpIndicator(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, const ::android::graphics::drawable::Drawable& arg2, int32_t arg3) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarUpIndicator", "(Ljava/lang/Object;Landroid/app/Activity;Landroid/graphics/drawable/Drawable;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::setActionBarDescription(const ::java::lang::Object& arg0, const ::android::app::Activity& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::_class) ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplBase::_class = java::fetch_class("android/support/v4/app/ActionBarDrawerToggle$ActionBarDrawerToggleImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionBarDescription", "(Ljava/lang/Object;Landroid/app/Activity;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::app::NavUtils_NavUtilsImplJB::getParentActivityIntent(const ::android::app::Activity& arg0) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplJB::_class) ::android::support::v4::app::NavUtils_NavUtilsImplJB::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentActivityIntent", "(Landroid/app/Activity;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

bool android::support::v4::app::NavUtils_NavUtilsImplJB::shouldUpRecreateTask(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplJB::_class) ::android::support::v4::app::NavUtils_NavUtilsImplJB::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldUpRecreateTask", "(Landroid/app/Activity;Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::app::NavUtils_NavUtilsImplJB::navigateUpTo(const ::android::app::Activity& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplJB::_class) ::android::support::v4::app::NavUtils_NavUtilsImplJB::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigateUpTo", "(Landroid/app/Activity;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::app::NavUtils_NavUtilsImplJB::getParentActivityName(const ::android::content::Context& arg0, const ::android::content::pm::ActivityInfo& arg1) const {
    if (!::android::support::v4::app::NavUtils_NavUtilsImplJB::_class) ::android::support::v4::app::NavUtils_NavUtilsImplJB::_class = java::fetch_class("android/support/v4/app/NavUtils$NavUtilsImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentActivityName", "(Landroid/content/Context;Landroid/content/pm/ActivityInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::app::NotificationManagerCompat_ImplBase::cancelNotification(const ::android::app::NotificationManager& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::NotificationManagerCompat_ImplBase::_class) ::android::support::v4::app::NotificationManagerCompat_ImplBase::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$ImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelNotification", "(Landroid/app/NotificationManager;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::NotificationManagerCompat_ImplBase::postNotification(const ::android::app::NotificationManager& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::android::app::Notification& arg3) const {
    if (!::android::support::v4::app::NotificationManagerCompat_ImplBase::_class) ::android::support::v4::app::NotificationManagerCompat_ImplBase::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$ImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "postNotification", "(Landroid/app/NotificationManager;Ljava/lang/String;ILandroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::support::v4::app::NotificationManagerCompat_ImplBase::getSideChannelBindFlags() const {
    if (!::android::support::v4::app::NotificationManagerCompat_ImplBase::_class) ::android::support::v4::app::NotificationManagerCompat_ImplBase::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$ImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSideChannelBindFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::app::NotificationCompat_Action::NotificationCompat_Action(int32_t arg0, const ::java::lang::CharSequence& arg1, const ::android::app::PendingIntent& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::app::NotificationCompat_Action::_class) ::android::support::v4::app::NotificationCompat_Action::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::os::Bundle android::support::v4::app::NotificationCompat_Action::getExtras() const {
    if (!::android::support::v4::app::NotificationCompat_Action::_class) ::android::support::v4::app::NotificationCompat_Action::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

std::vector< ::android::support::v4::app::RemoteInput> android::support::v4::app::NotificationCompat_Action::getRemoteInputs() const {
    if (!::android::support::v4::app::NotificationCompat_Action::_class) ::android::support::v4::app::NotificationCompat_Action::_class = java::fetch_class("android/support/v4/app/NotificationCompat$Action");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteInputs", "()[Landroid/support/v4/app/RemoteInput;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::app::RemoteInput> _ret(rets, ::android::support::v4::app::RemoteInput((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::app::RemoteInput retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::support::v4::app::NotificationManagerCompat_ImplEclair::cancelNotification(const ::android::app::NotificationManager& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::support::v4::app::NotificationManagerCompat_ImplEclair::_class) ::android::support::v4::app::NotificationManagerCompat_ImplEclair::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$ImplEclair");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelNotification", "(Landroid/app/NotificationManager;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::app::NotificationManagerCompat_ImplEclair::postNotification(const ::android::app::NotificationManager& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::android::app::Notification& arg3) const {
    if (!::android::support::v4::app::NotificationManagerCompat_ImplEclair::_class) ::android::support::v4::app::NotificationManagerCompat_ImplEclair::_class = java::fetch_class("android/support/v4/app/NotificationManagerCompat$ImplEclair");
    static jmethodID mid = java::jni->GetMethodID(_class, "postNotification", "(Landroid/app/NotificationManager;Ljava/lang/String;ILandroid/app/Notification;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

