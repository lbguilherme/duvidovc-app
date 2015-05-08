#include "java-core.hpp"
#include <memory>
#include "android.app.PendingIntent.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Looper.hpp"
#include "android.os.Message.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ResultReceiver.hpp"
#include "android.support.v4.media.MediaDescriptionCompat.hpp"
#include "android.support.v4.media.MediaMetadataCompat.hpp"
#include "android.support.v4.media.RatingCompat.hpp"
#include "android.support.v4.media.VolumeProviderCompat.hpp"
#include "android.support.v4.media.session.IMediaControllerCallback.hpp"
#include "android.support.v4.media.session.IMediaSession.hpp"
#include "android.support.v4.media.session.MediaControllerCompat.hpp"
#include "android.support.v4.media.session.MediaSessionCompat.hpp"
#include "android.support.v4.media.session.ParcelableVolumeInfo.hpp"
#include "android.support.v4.media.session.PlaybackStateCompat.hpp"
#include "android.view.KeyEvent.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::support::v4::media::session::PlaybackStateCompat_Builder::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = nullptr;
jclass android::support::v4::media::session::ParcelableVolumeInfo::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command::_class = nullptr;
jclass android::support::v4::media::session::IMediaControllerCallback::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_Token::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::_class = nullptr;
jclass android::support::v4::media::session::PlaybackStateCompat::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::_class = nullptr;
jclass android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = nullptr;
jclass android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = nullptr;
jclass android::support::v4::media::session::IMediaSession::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class = nullptr;
jclass android::support::v4::media::session::IMediaControllerCallback_Stub::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_Callback::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat::_class = nullptr;
jclass android::support::v4::media::session::IMediaSession_Stub::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_Callback::_class = nullptr;
jclass android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = nullptr;
jclass android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class = nullptr;
jclass android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener::_class = nullptr;
jclass android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::PlaybackStateCompat_Builder::PlaybackStateCompat_Builder() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::PlaybackStateCompat_Builder::PlaybackStateCompat_Builder(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::media::session::PlaybackStateCompat_Builder android::support::v4::media::session::PlaybackStateCompat_Builder::setState(int32_t arg0, int64_t arg1, float arg2) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setState", "(IJF)Landroid/support/v4/media/session/PlaybackStateCompat$Builder;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    float _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::media::session::PlaybackStateCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat_Builder android::support::v4::media::session::PlaybackStateCompat_Builder::setState(int32_t arg0, int64_t arg1, float arg2, int64_t arg3) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setState", "(IJFJ)Landroid/support/v4/media/session/PlaybackStateCompat$Builder;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    float _arg2 = arg2;
    int64_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::support::v4::media::session::PlaybackStateCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat_Builder android::support::v4::media::session::PlaybackStateCompat_Builder::setBufferedPosition(int64_t arg0) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBufferedPosition", "(J)Landroid/support/v4/media/session/PlaybackStateCompat$Builder;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::session::PlaybackStateCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat_Builder android::support::v4::media::session::PlaybackStateCompat_Builder::setActions(int64_t arg0) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActions", "(J)Landroid/support/v4/media/session/PlaybackStateCompat$Builder;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::session::PlaybackStateCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat_Builder android::support::v4::media::session::PlaybackStateCompat_Builder::setErrorMessage(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorMessage", "(Ljava/lang/CharSequence;)Landroid/support/v4/media/session/PlaybackStateCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::session::PlaybackStateCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::PlaybackStateCompat_Builder::build() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::play() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::playFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::playFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::skipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::pause() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::stop() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::fastForward() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "fastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::skipToNext() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::rewind() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::skipToPrevious() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::setRating(const ::android::support::v4::media::RatingCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRating", "(Landroid/support/v4/media/RatingCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::sendCustomAction(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Landroid/support/v4/media/session/PlaybackStateCompat$CustomAction;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControls::sendCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControls::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::MediaControllerCompat_TransportControlsBase(const ::android::support::v4::media::session::IMediaSession& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_TransportControls((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/media/session/IMediaSession;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::play() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::playFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::playFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::skipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::pause() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::stop() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::fastForward() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "fastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::skipToNext() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::rewind() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::skipToPrevious() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::setRating(const ::android::support::v4::media::RatingCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRating", "(Landroid/support/v4/media/RatingCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::sendCustomAction(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Landroid/support/v4/media/session/PlaybackStateCompat$CustomAction;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::sendCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::ParcelableVolumeInfo::ParcelableVolumeInfo(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::media::session::ParcelableVolumeInfo::_class) ::android::support::v4::media::session::ParcelableVolumeInfo::_class = java::fetch_class("android/support/v4/media/session/ParcelableVolumeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::ParcelableVolumeInfo::ParcelableVolumeInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::media::session::ParcelableVolumeInfo::_class) ::android::support::v4::media::session::ParcelableVolumeInfo::_class = java::fetch_class("android/support/v4/media/session/ParcelableVolumeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::media::session::ParcelableVolumeInfo::describeContents() const {
    if (!::android::support::v4::media::session::ParcelableVolumeInfo::_class) ::android::support::v4::media::session::ParcelableVolumeInfo::_class = java::fetch_class("android/support/v4/media/session/ParcelableVolumeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::session::ParcelableVolumeInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::ParcelableVolumeInfo::_class) ::android::support::v4::media::session::ParcelableVolumeInfo::_class = java::fetch_class("android/support/v4/media/session/ParcelableVolumeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/support/v4/media/session/MediaSessionCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setFlags(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setPlaybackToLocal(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToLocal", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setPlaybackToRemote(const ::android::support::v4::media::VolumeProviderCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToRemote", "(Landroid/support/v4/media/VolumeProviderCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setActive(bool arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActive", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::isActive() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::sendSessionEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendSessionEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::release() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::support::v4::media::session::MediaSessionCompat_Token android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::getSessionToken() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionToken", "()Landroid/support/v4/media/session/MediaSessionCompat$Token;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaSessionCompat_Token _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setPlaybackState(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackState", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setMetadata(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMetadata", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setSessionActivity(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionActivity", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setMediaButtonReceiver(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMediaButtonReceiver", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setQueue(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueue", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setQueueTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueueTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setRatingType(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRatingType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::getMediaSession() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaSession", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::getRemoteControlClient() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteControlClient", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command::MediaSessionCompat_MediaSessionImplBase_Command(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::os::ResultReceiver& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$Command");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::IMediaControllerCallback::onEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::IMediaControllerCallback::onSessionDestroyed() const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSessionDestroyed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaControllerCallback::onPlaybackStateChanged(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlaybackStateChanged", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback::onMetadataChanged(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMetadataChanged", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback::onQueueChanged(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueChanged", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback::onQueueTitleChanged(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueTitleChanged", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback::onExtrasChanged(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtrasChanged", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback::onVolumeInfoChanged(const ::android::support::v4::media::session::ParcelableVolumeInfo& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback::_class) ::android::support::v4::media::session::IMediaControllerCallback::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onVolumeInfoChanged", "(Landroid/support/v4/media/session/ParcelableVolumeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat::MediaSessionCompat(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::content::ComponentName& arg2, const ::android::app::PendingIntent& arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Landroid/content/ComponentName;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaSessionCompat::setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/support/v4/media/session/MediaSessionCompat$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/support/v4/media/session/MediaSessionCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat::setSessionActivity(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionActivity", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setMediaButtonReceiver(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMediaButtonReceiver", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setFlags(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setPlaybackToLocal(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToLocal", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setPlaybackToRemote(const ::android::support::v4::media::VolumeProviderCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToRemote", "(Landroid/support/v4/media/VolumeProviderCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setActive(bool arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActive", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::MediaSessionCompat::isActive() const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat::sendSessionEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendSessionEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat::release() const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::support::v4::media::session::MediaSessionCompat_Token android::support::v4::media::session::MediaSessionCompat::getSessionToken() const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionToken", "()Landroid/support/v4/media/session/MediaSessionCompat$Token;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaSessionCompat_Token _ret(ret);
    return _ret;
}

::android::support::v4::media::session::MediaControllerCompat android::support::v4::media::session::MediaSessionCompat::getController() const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getController", "()Landroid/support/v4/media/session/MediaControllerCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaSessionCompat::setPlaybackState(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackState", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setMetadata(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMetadata", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setQueue(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueue", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setQueueTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueueTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setRatingType(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRatingType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat::getMediaSession() const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaSession", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat::getRemoteControlClient() const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteControlClient", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaSessionCompat::addOnActiveChangeListener(const ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnActiveChangeListener", "(Landroid/support/v4/media/session/MediaSessionCompat$OnActiveChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat::removeOnActiveChangeListener(const ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnActiveChangeListener", "(Landroid/support/v4/media/session/MediaSessionCompat$OnActiveChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::media::session::MediaSessionCompat android::support::v4::media::session::MediaSessionCompat::obtain(const ::android::content::Context& arg0, const ::java::lang::Object& arg1){
    if (!::android::support::v4::media::session::MediaSessionCompat::_class) ::android::support::v4::media::session::MediaSessionCompat::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/content/Context;Ljava/lang/Object;)Landroid/support/v4/media/session/MediaSessionCompat;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::media::session::MediaSessionCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::session::MediaSessionCompat_Token android::support::v4::media::session::MediaSessionCompat_Token::fromToken(const ::java::lang::Object& arg0){
    if (!::android::support::v4::media::session::MediaSessionCompat_Token::_class) ::android::support::v4::media::session::MediaSessionCompat_Token::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Token");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromToken", "(Ljava/lang/Object;)Landroid/support/v4/media/session/MediaSessionCompat$Token;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::session::MediaSessionCompat_Token _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::MediaSessionCompat_Token::describeContents() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Token::_class) ::android::support::v4::media::session::MediaSessionCompat_Token::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Token::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Token::_class) ::android::support::v4::media::session::MediaSessionCompat_Token::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_Token::getToken() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Token::_class) ::android::support::v4::media::session::MediaSessionCompat_Token::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToken", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onSessionDestroyed() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSessionDestroyed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onPlaybackStateChanged(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlaybackStateChanged", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onMetadataChanged(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMetadataChanged", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onQueueChanged(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueChanged", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onQueueTitleChanged(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueTitleChanged", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onExtrasChanged(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtrasChanged", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::onVolumeInfoChanged(const ::android::support::v4::media::session::ParcelableVolumeInfo& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onVolumeInfoChanged", "(Landroid/support/v4/media/session/ParcelableVolumeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::MediaSessionCompat_ResultReceiverWrapper(const ::android::os::ResultReceiver& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::_class) ::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$ResultReceiverWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::describeContents() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::_class) ::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$ResultReceiverWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::_class) ::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$ResultReceiverWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::media::session::PlaybackStateCompat::toString() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::PlaybackStateCompat::describeContents() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::session::PlaybackStateCompat::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::media::session::PlaybackStateCompat::getState() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::support::v4::media::session::PlaybackStateCompat::getPosition() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::media::session::PlaybackStateCompat::getBufferedPosition() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBufferedPosition", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float android::support::v4::media::session::PlaybackStateCompat::getPlaybackSpeed() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackSpeed", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int64_t android::support::v4::media::session::PlaybackStateCompat::getActions() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::CharSequence android::support::v4::media::session::PlaybackStateCompat::getErrorMessage() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorMessage", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int64_t android::support::v4::media::session::PlaybackStateCompat::getLastPositionUpdateTime() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastPositionUpdateTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::PlaybackStateCompat::fromPlaybackState(const ::java::lang::Object& arg0){
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromPlaybackState", "(Ljava/lang/Object;)Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::PlaybackStateCompat::getPlaybackState() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat::_class) ::android::support::v4::media::session::PlaybackStateCompat::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_QueueItem::MediaSessionCompat_QueueItem(const ::android::support::v4::media::MediaDescriptionCompat& arg0, int64_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/media/MediaDescriptionCompat;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::support::v4::media::MediaDescriptionCompat android::support::v4::media::session::MediaSessionCompat_QueueItem::getDescription() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Landroid/support/v4/media/MediaDescriptionCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaDescriptionCompat _ret(ret);
    return _ret;
}

int64_t android::support::v4::media::session::MediaSessionCompat_QueueItem::getQueueId() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_QueueItem::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::media::session::MediaSessionCompat_QueueItem::describeContents() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_QueueItem::getQueueItem() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueItem", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::support::v4::media::session::MediaSessionCompat_QueueItem android::support::v4::media::session::MediaSessionCompat_QueueItem::obtain(const ::java::lang::Object& arg0){
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Ljava/lang/Object;)Landroid/support/v4/media/session/MediaSessionCompat$QueueItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::session::MediaSessionCompat_QueueItem _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::session::MediaSessionCompat_QueueItem::toString() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class) ::android::support::v4::media::session::MediaSessionCompat_QueueItem::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$QueueItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::MediaControllerCompat_Callback_MessageHandler(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0, const ::android::os::Looper& arg1) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::post(int32_t arg0, const ::java::lang::Object& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "post", "(ILjava/lang/Object;Landroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::PlaybackStateCompat_CustomAction::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::media::session::PlaybackStateCompat_CustomAction::describeContents() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::support::v4::media::session::PlaybackStateCompat_CustomAction::getAction() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::PlaybackStateCompat_CustomAction::getName() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::PlaybackStateCompat_CustomAction::getIcon() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIcon", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::os::Bundle android::support::v4::media::session::PlaybackStateCompat_CustomAction::getExtras() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::session::PlaybackStateCompat_CustomAction::toString() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::MediaControllerCompat_TransportControlsApi21(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_TransportControls((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::play() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::pause() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::stop() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::fastForward() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "fastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::rewind() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::skipToNext() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::skipToPrevious() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::setRating(const ::android::support::v4::media::RatingCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRating", "(Landroid/support/v4/media/RatingCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::playFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::playFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::skipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::sendCustomAction(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Landroid/support/v4/media/session/PlaybackStateCompat$CustomAction;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::sendCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$TransportControlsApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::sendCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper& arg2) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/support/v4/media/session/MediaSessionCompat$ResultReceiverWrapper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::sendMediaButton(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMediaButton", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::registerCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallbackListener", "(Landroid/support/v4/media/session/IMediaControllerCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::unregisterCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterCallbackListener", "(Landroid/support/v4/media/session/IMediaControllerCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getPackageName() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getTag() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getLaunchPendingIntent() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLaunchPendingIntent", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

int64_t android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getFlags() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::ParcelableVolumeInfo android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getVolumeAttributes() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeAttributes", "()Landroid/support/v4/media/session/ParcelableVolumeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::ParcelableVolumeInfo _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::adjustVolume(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::setVolumeTo(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeTo", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::play() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::playFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::playFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::skipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::pause() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::stop() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::next() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::previous() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::fastForward() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "fastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::rewind() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::rate(const ::android::support::v4::media::RatingCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "rate", "(Landroid/support/v4/media/RatingCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::sendCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getMetadata() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getPlaybackState() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getQueue() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getQueueTitle() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getExtras() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::getRatingType() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::isTransportControlEnabled() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MediaSessionStub::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MediaSessionStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTransportControlEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::PlaybackStateCompat_CustomAction_Builder(const ::java::lang::String& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)Landroid/support/v4/media/session/PlaybackStateCompat$CustomAction$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat_CustomAction android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::build() const {
    if (!::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::_class) ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder::_class = java::fetch_class("android/support/v4/media/session/PlaybackStateCompat$CustomAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/media/session/PlaybackStateCompat$CustomAction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::onSessionDestroyed() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSessionDestroyed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::onSessionEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSessionEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::onPlaybackStateChanged(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlaybackStateChanged", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::onMetadataChanged(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMetadataChanged", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onMediaButtonEvent(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMediaButtonEvent", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onPlay() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlay", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onPlayFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlayFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onPlayFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlayFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onSkipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSkipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onPause() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onSkipToNext() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSkipToNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onSkipToPrevious() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSkipToPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onFastForward() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onRewind() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onStop() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onSeekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSeekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onSetRating(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSetRating", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::onCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback_StubApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback$StubApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::IMediaSession::sendCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper& arg2) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/support/v4/media/session/MediaSessionCompat$ResultReceiverWrapper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::media::session::IMediaSession::sendMediaButton(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMediaButton", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession::registerCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallbackListener", "(Landroid/support/v4/media/session/IMediaControllerCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession::unregisterCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterCallbackListener", "(Landroid/support/v4/media/session/IMediaControllerCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::IMediaSession::isTransportControlEnabled() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTransportControlEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::support::v4::media::session::IMediaSession::getPackageName() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::session::IMediaSession::getTag() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::media::session::IMediaSession::getLaunchPendingIntent() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLaunchPendingIntent", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

int64_t android::support::v4::media::session::IMediaSession::getFlags() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::ParcelableVolumeInfo android::support::v4::media::session::IMediaSession::getVolumeAttributes() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeAttributes", "()Landroid/support/v4/media/session/ParcelableVolumeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::ParcelableVolumeInfo _ret(ret);
    return _ret;
}

void android::support::v4::media::session::IMediaSession::adjustVolume(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::IMediaSession::setVolumeTo(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeTo", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::IMediaSession::play() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession::playFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::IMediaSession::playFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::IMediaSession::skipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession::pause() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession::stop() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession::next() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession::previous() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession::fastForward() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "fastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession::rewind() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession::rate(const ::android::support::v4::media::RatingCompat& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "rate", "(Landroid/support/v4/media/RatingCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession::sendCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::session::IMediaSession::getMetadata() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::IMediaSession::getPlaybackState() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::media::session::IMediaSession::getQueue() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::IMediaSession::getQueueTitle() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::session::IMediaSession::getExtras() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::IMediaSession::getRatingType() const {
    if (!::android::support::v4::media::session::IMediaSession::_class) ::android::support::v4::media::session::IMediaSession::_class = java::fetch_class("android/support/v4/media/session/IMediaSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::registerCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::unregisterCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::dispatchMediaButtonEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchMediaButtonEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::media::session::MediaControllerCompat_TransportControls android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getTransportControls() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransportControls", "()Landroid/support/v4/media/session/MediaControllerCompat$TransportControls;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_TransportControls _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getPlaybackState() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getMetadata() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getQueue() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getQueueTitle() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getExtras() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getRatingType() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getFlags() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getPlaybackInfo() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackInfo", "()Landroid/support/v4/media/session/MediaControllerCompat$PlaybackInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getSessionActivity() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionActivity", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::setVolumeTo(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::adjustVolume(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::sendCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getPackageName() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::getMediaController() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaController", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::MediaSessionCompat_MediaSessionImplBase_MessageHandler(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase& arg0, const ::android::os::Looper& arg1) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase;Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::post(int32_t arg0, const ::java::lang::Object& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "post", "(ILjava/lang/Object;Landroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::post(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "post", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::post(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "post", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::post(int32_t arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "post", "(ILjava/lang/Object;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase$MessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::IMediaControllerCallback_Stub::IMediaControllerCallback_Stub() : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback((jobject)0) {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::media::session::IMediaControllerCallback android::support::v4::media::session::IMediaControllerCallback_Stub::asInterface(const ::android::os::IBinder& arg0){
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asInterface", "(Landroid/os/IBinder;)Landroid/support/v4/media/session/IMediaControllerCallback;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::session::IMediaControllerCallback _ret(ret);
    return _ret;
}

::android::os::IBinder android::support::v4::media::session::IMediaControllerCallback_Stub::asBinder() const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool android::support::v4::media::session::IMediaControllerCallback_Stub::onTransact(int32_t arg0, const ::android::os::Parcel& arg1, const ::android::os::Parcel& arg2, int32_t arg3) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTransact", "(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_Callback::MediaSessionCompat_Callback() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaSessionCompat_Callback::onCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::media::session::MediaSessionCompat_Callback::onMediaButtonEvent(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMediaButtonEvent", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onPlay() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlay", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onPlayFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlayFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onPlayFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlayFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onSkipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSkipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onPause() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onSkipToNext() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSkipToNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onSkipToPrevious() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSkipToPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onFastForward() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onRewind() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onStop() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onSeekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSeekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onSetRating(const ::android::support::v4::media::RatingCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSetRating", "(Landroid/support/v4/media/RatingCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_Callback::onCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_Callback::_class) ::android::support::v4::media::session::MediaSessionCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::MediaSessionCompat_MediaSessionImplBase(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::content::ComponentName& arg2, const ::android::app::PendingIntent& arg3) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Landroid/content/ComponentName;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/support/v4/media/session/MediaSessionCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setFlags(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setPlaybackToLocal(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToLocal", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setPlaybackToRemote(const ::android::support::v4::media::VolumeProviderCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToRemote", "(Landroid/support/v4/media/VolumeProviderCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setActive(bool arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActive", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::isActive() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::sendSessionEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendSessionEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::release() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::support::v4::media::session::MediaSessionCompat_Token android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::getSessionToken() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionToken", "()Landroid/support/v4/media/session/MediaSessionCompat$Token;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaSessionCompat_Token _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setPlaybackState(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackState", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setMetadata(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMetadata", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setSessionActivity(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionActivity", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setMediaButtonReceiver(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMediaButtonReceiver", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setQueue(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueue", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setQueueTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueueTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::getMediaSession() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaSession", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::getRemoteControlClient() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteControlClient", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setRatingType(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRatingType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat::MediaControllerCompat(const ::android::content::Context& arg0, const ::android::support::v4::media::session::MediaSessionCompat& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/support/v4/media/session/MediaSessionCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat::MediaControllerCompat(const ::android::content::Context& arg0, const ::android::support::v4::media::session::MediaSessionCompat_Token& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/support/v4/media/session/MediaSessionCompat$Token;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::support::v4::media::session::MediaControllerCompat_TransportControls android::support::v4::media::session::MediaControllerCompat::getTransportControls() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransportControls", "()Landroid/support/v4/media/session/MediaControllerCompat$TransportControls;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_TransportControls _ret(ret);
    return _ret;
}

bool android::support::v4::media::session::MediaControllerCompat::dispatchMediaButtonEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchMediaButtonEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::MediaControllerCompat::getPlaybackState() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::session::MediaControllerCompat::getMetadata() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::media::session::MediaControllerCompat::getQueue() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::MediaControllerCompat::getQueueTitle() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::session::MediaControllerCompat::getExtras() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::MediaControllerCompat::getRatingType() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::support::v4::media::session::MediaControllerCompat::getFlags() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo android::support::v4::media::session::MediaControllerCompat::getPlaybackInfo() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackInfo", "()Landroid/support/v4/media/session/MediaControllerCompat$PlaybackInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::media::session::MediaControllerCompat::getSessionActivity() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionActivity", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

::android::support::v4::media::session::MediaSessionCompat_Token android::support::v4::media::session::MediaControllerCompat::getSessionToken() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionToken", "()Landroid/support/v4/media/session/MediaSessionCompat$Token;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaSessionCompat_Token _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaControllerCompat::setVolumeTo(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat::adjustVolume(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat::registerCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat::registerCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat::unregisterCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat::sendCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::support::v4::media::session::MediaControllerCompat::getPackageName() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaControllerCompat::getMediaController() const {
    if (!::android::support::v4::media::session::MediaControllerCompat::_class) ::android::support::v4::media::session::MediaControllerCompat::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaController", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::IMediaSession_Stub::IMediaSession_Stub() : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaSession((jobject)0) {
    if (!::android::support::v4::media::session::IMediaSession_Stub::_class) ::android::support::v4::media::session::IMediaSession_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::media::session::IMediaSession android::support::v4::media::session::IMediaSession_Stub::asInterface(const ::android::os::IBinder& arg0){
    if (!::android::support::v4::media::session::IMediaSession_Stub::_class) ::android::support::v4::media::session::IMediaSession_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asInterface", "(Landroid/os/IBinder;)Landroid/support/v4/media/session/IMediaSession;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::session::IMediaSession _ret(ret);
    return _ret;
}

::android::os::IBinder android::support::v4::media::session::IMediaSession_Stub::asBinder() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub::_class) ::android::support::v4::media::session::IMediaSession_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool android::support::v4::media::session::IMediaSession_Stub::onTransact(int32_t arg0, const ::android::os::Parcel& arg1, const ::android::os::Parcel& arg2, int32_t arg3) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub::_class) ::android::support::v4::media::session::IMediaSession_Stub::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTransact", "(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat_Callback::MediaControllerCompat_Callback() : ::java::lang::Object((jobject)0), ::android::os::IBinder_DeathRecipient((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaControllerCompat_Callback::onSessionDestroyed() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSessionDestroyed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::onSessionEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSessionEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::onPlaybackStateChanged(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlaybackStateChanged", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::onMetadataChanged(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMetadataChanged", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::onQueueChanged(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueChanged", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::onQueueTitleChanged(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueTitleChanged", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::onExtrasChanged(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtrasChanged", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::onAudioInfoChanged(const ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAudioInfoChanged", "(Landroid/support/v4/media/session/MediaControllerCompat$PlaybackInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaControllerCompat_Callback::binderDied() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_Callback::_class) ::android::support::v4::media::session::MediaControllerCompat_Callback::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "binderDied", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::IBinder android::support::v4::media::session::IMediaSession_Stub_Proxy::asBinder() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::session::IMediaSession_Stub_Proxy::getInterfaceDescriptor() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceDescriptor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::sendCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper& arg2) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/support/v4/media/session/MediaSessionCompat$ResultReceiverWrapper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::media::session::IMediaSession_Stub_Proxy::sendMediaButton(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMediaButton", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::registerCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallbackListener", "(Landroid/support/v4/media/session/IMediaControllerCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::unregisterCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterCallbackListener", "(Landroid/support/v4/media/session/IMediaControllerCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::IMediaSession_Stub_Proxy::isTransportControlEnabled() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTransportControlEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::support::v4::media::session::IMediaSession_Stub_Proxy::getPackageName() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::session::IMediaSession_Stub_Proxy::getTag() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::media::session::IMediaSession_Stub_Proxy::getLaunchPendingIntent() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLaunchPendingIntent", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

int64_t android::support::v4::media::session::IMediaSession_Stub_Proxy::getFlags() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::ParcelableVolumeInfo android::support::v4::media::session::IMediaSession_Stub_Proxy::getVolumeAttributes() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeAttributes", "()Landroid/support/v4/media/session/ParcelableVolumeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::ParcelableVolumeInfo _ret(ret);
    return _ret;
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::adjustVolume(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::setVolumeTo(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeTo", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::play() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::playFromMediaId(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromMediaId", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::playFromSearch(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "playFromSearch", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::skipToQueueItem(int64_t arg0) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipToQueueItem", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::pause() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::stop() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::next() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::previous() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::fastForward() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "fastForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::rewind() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::rate(const ::android::support::v4::media::RatingCompat& arg0) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "rate", "(Landroid/support/v4/media/RatingCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaSession_Stub_Proxy::sendCustomAction(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCustomAction", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::session::IMediaSession_Stub_Proxy::getMetadata() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::IMediaSession_Stub_Proxy::getPlaybackState() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::media::session::IMediaSession_Stub_Proxy::getQueue() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::IMediaSession_Stub_Proxy::getQueueTitle() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::session::IMediaSession_Stub_Proxy::getExtras() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::IMediaSession_Stub_Proxy::getRatingType() const {
    if (!::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaSession_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaSession$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::MediaControllerCompat_MediaControllerImplApi21(const ::android::content::Context& arg0, const ::android::support::v4::media::session::MediaSessionCompat& arg1) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/support/v4/media/session/MediaSessionCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::MediaControllerCompat_MediaControllerImplApi21(const ::android::content::Context& arg0, const ::android::support::v4::media::session::MediaSessionCompat_Token& arg1) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/support/v4/media/session/MediaSessionCompat$Token;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::registerCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::unregisterCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::dispatchMediaButtonEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchMediaButtonEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::media::session::MediaControllerCompat_TransportControls android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getTransportControls() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransportControls", "()Landroid/support/v4/media/session/MediaControllerCompat$TransportControls;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_TransportControls _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getPlaybackState() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getMetadata() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getQueue() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getQueueTitle() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getExtras() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getRatingType() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getFlags() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getPlaybackInfo() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackInfo", "()Landroid/support/v4/media/session/MediaControllerCompat$PlaybackInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getSessionActivity() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionActivity", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::setVolumeTo(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::adjustVolume(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::sendCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getPackageName() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::getMediaController() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaController", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::MediaControllerCompat_MediaControllerImplBase(const ::android::support::v4::media::session::MediaSessionCompat_Token& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl((jobject)0) {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/media/session/MediaSessionCompat$Token;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::registerCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::unregisterCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterCallback", "(Landroid/support/v4/media/session/MediaControllerCompat$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::dispatchMediaButtonEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchMediaButtonEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::media::session::MediaControllerCompat_TransportControls android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getTransportControls() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransportControls", "()Landroid/support/v4/media/session/MediaControllerCompat$TransportControls;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_TransportControls _ret(ret);
    return _ret;
}

::android::support::v4::media::session::PlaybackStateCompat android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getPlaybackState() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackState", "()Landroid/support/v4/media/session/PlaybackStateCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::PlaybackStateCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getMetadata() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetadata", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getQueue() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getQueueTitle() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getExtras() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getRatingType() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getFlags() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getPlaybackInfo() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackInfo", "()Landroid/support/v4/media/session/MediaControllerCompat$PlaybackInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo _ret(ret);
    return _ret;
}

::android::app::PendingIntent android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getSessionActivity() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionActivity", "()Landroid/app/PendingIntent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::PendingIntent _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::setVolumeTo(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::adjustVolume(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::sendCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendCommand", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getPackageName() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::getMediaController() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class) ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$MediaControllerImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaController", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::MediaSessionCompat_MediaSessionImplApi21(const ::android::content::Context& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::MediaSessionCompat_MediaSessionImplApi21(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl((jobject)0) {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/support/v4/media/session/MediaSessionCompat$Callback;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setFlags(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setPlaybackToLocal(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToLocal", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setPlaybackToRemote(const ::android::support::v4::media::VolumeProviderCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackToRemote", "(Landroid/support/v4/media/VolumeProviderCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setActive(bool arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActive", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::isActive() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::sendSessionEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendSessionEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::release() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::support::v4::media::session::MediaSessionCompat_Token android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::getSessionToken() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionToken", "()Landroid/support/v4/media/session/MediaSessionCompat$Token;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::session::MediaSessionCompat_Token _ret(ret);
    return _ret;
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setPlaybackState(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackState", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setMetadata(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMetadata", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setSessionActivity(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionActivity", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setMediaButtonReceiver(const ::android::app::PendingIntent& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMediaButtonReceiver", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setQueue(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueue", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setQueueTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueueTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setRatingType(int32_t arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRatingType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::getMediaSession() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaSession", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::getRemoteControlClient() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class) ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplApi21::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$MediaSessionImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteControlClient", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::getPlaybackType() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class) ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$PlaybackInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::getAudioStream() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class) ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$PlaybackInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAudioStream", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::getVolumeControl() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class) ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$PlaybackInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeControl", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::getMaxVolume() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class) ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$PlaybackInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxVolume", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::getCurrentVolume() const {
    if (!::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class) ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo::_class = java::fetch_class("android/support/v4/media/session/MediaControllerCompat$PlaybackInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentVolume", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener::onActiveChanged() const {
    if (!::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener::_class) ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener::_class = java::fetch_class("android/support/v4/media/session/MediaSessionCompat$OnActiveChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActiveChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::IBinder android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::asBinder() const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::getInterfaceDescriptor() const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceDescriptor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onSessionDestroyed() const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSessionDestroyed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onPlaybackStateChanged(const ::android::support::v4::media::session::PlaybackStateCompat& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlaybackStateChanged", "(Landroid/support/v4/media/session/PlaybackStateCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onMetadataChanged(const ::android::support::v4::media::MediaMetadataCompat& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMetadataChanged", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onQueueChanged(const ::java::util::List& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueChanged", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onQueueTitleChanged(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueueTitleChanged", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onExtrasChanged(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtrasChanged", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::onVolumeInfoChanged(const ::android::support::v4::media::session::ParcelableVolumeInfo& arg0) const {
    if (!::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class) ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy::_class = java::fetch_class("android/support/v4/media/session/IMediaControllerCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "onVolumeInfoChanged", "(Landroid/support/v4/media/session/ParcelableVolumeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

