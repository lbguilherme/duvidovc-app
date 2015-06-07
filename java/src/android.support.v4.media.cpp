#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "android.support.v4.media.MediaDescriptionCompat.hpp"
#include "android.support.v4.media.MediaMetadataCompat.hpp"
#include "android.support.v4.media.RatingCompat.hpp"
#include "android.support.v4.media.TransportController.hpp"
#include "android.support.v4.media.TransportMediator.hpp"
#include "android.support.v4.media.TransportPerformer.hpp"
#include "android.support.v4.media.TransportStateListener.hpp"
#include "android.support.v4.media.VolumeProviderCompat.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.View.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Set.hpp"

jclass android::support::v4::media::TransportPerformer::_class = nullptr;
jclass android::support::v4::media::MediaMetadataCompat_Builder::_class = nullptr;
jclass android::support::v4::media::MediaDescriptionCompat::_class = nullptr;
jclass android::support::v4::media::MediaMetadataCompat::_class = nullptr;
jclass android::support::v4::media::TransportMediator::_class = nullptr;
jclass android::support::v4::media::TransportController::_class = nullptr;
jclass android::support::v4::media::VolumeProviderCompat_Callback::_class = nullptr;
jclass android::support::v4::media::VolumeProviderCompat::_class = nullptr;
jclass android::support::v4::media::MediaDescriptionCompat_Builder::_class = nullptr;
jclass android::support::v4::media::TransportStateListener::_class = nullptr;
jclass android::support::v4::media::RatingCompat::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::TransportPerformer::TransportPerformer() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::media::TransportPerformer::onStart() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::TransportPerformer::onPause() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::TransportPerformer::onStop() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t android::support::v4::media::TransportPerformer::onGetDuration() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::media::TransportPerformer::onGetCurrentPosition() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetCurrentPosition", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::support::v4::media::TransportPerformer::onSeekTo(int64_t arg0) const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSeekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::TransportPerformer::onIsPlaying() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onIsPlaying", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::support::v4::media::TransportPerformer::onGetBufferPercentage() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetBufferPercentage", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::TransportPerformer::onGetTransportControlFlags() const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetTransportControlFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::media::TransportPerformer::onMediaButtonDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMediaButtonDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::media::TransportPerformer::onMediaButtonUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMediaButtonUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::media::TransportPerformer::onAudioFocusChange(int32_t arg0) const {
    if (!::android::support::v4::media::TransportPerformer::_class) ::android::support::v4::media::TransportPerformer::_class = java::fetch_class("android/support/v4/media/TransportPerformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAudioFocusChange", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::MediaMetadataCompat_Builder::MediaMetadataCompat_Builder() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::MediaMetadataCompat_Builder::MediaMetadataCompat_Builder(const ::android::support::v4::media::MediaMetadataCompat& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/media/MediaMetadataCompat;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::media::MediaMetadataCompat_Builder android::support::v4::media::MediaMetadataCompat_Builder::putText(const ::java::lang::String& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putText", "(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/support/v4/media/MediaMetadataCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::media::MediaMetadataCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat_Builder android::support::v4::media::MediaMetadataCompat_Builder::putString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putString", "(Ljava/lang/String;Ljava/lang/String;)Landroid/support/v4/media/MediaMetadataCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::media::MediaMetadataCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat_Builder android::support::v4::media::MediaMetadataCompat_Builder::putLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(Ljava/lang/String;J)Landroid/support/v4/media/MediaMetadataCompat$Builder;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::media::MediaMetadataCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat_Builder android::support::v4::media::MediaMetadataCompat_Builder::putRating(const ::java::lang::String& arg0, const ::android::support::v4::media::RatingCompat& arg1) const {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putRating", "(Ljava/lang/String;Landroid/support/v4/media/RatingCompat;)Landroid/support/v4/media/MediaMetadataCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::media::MediaMetadataCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat_Builder android::support::v4::media::MediaMetadataCompat_Builder::putBitmap(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1) const {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBitmap", "(Ljava/lang/String;Landroid/graphics/Bitmap;)Landroid/support/v4/media/MediaMetadataCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::media::MediaMetadataCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::MediaMetadataCompat_Builder::build() const {
    if (!::android::support::v4::media::MediaMetadataCompat_Builder::_class) ::android::support::v4::media::MediaMetadataCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/media/MediaMetadataCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::MediaDescriptionCompat::getMediaId() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::MediaDescriptionCompat::getTitle() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::MediaDescriptionCompat::getSubtitle() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::media::MediaDescriptionCompat::getDescription() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::support::v4::media::MediaDescriptionCompat::getIconBitmap() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIconBitmap", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::media::MediaDescriptionCompat::getIconUri() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIconUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::MediaDescriptionCompat::getExtras() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::MediaDescriptionCompat::describeContents() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::MediaDescriptionCompat::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::media::MediaDescriptionCompat::toString() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::MediaDescriptionCompat::getMediaDescription() const {
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaDescription", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat android::support::v4::media::MediaDescriptionCompat::fromMediaDescription(const ::java::lang::Object& arg0){
    if (!::android::support::v4::media::MediaDescriptionCompat::_class) ::android::support::v4::media::MediaDescriptionCompat::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromMediaDescription", "(Ljava/lang/Object;)Landroid/support/v4/media/MediaDescriptionCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat _ret(ret);
    return _ret;
}

bool android::support::v4::media::MediaMetadataCompat::containsKey(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::media::MediaMetadataCompat::getText(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/String;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::media::MediaMetadataCompat::getString(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::support::v4::media::MediaMetadataCompat::getLong(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::android::support::v4::media::RatingCompat android::support::v4::media::MediaMetadataCompat::getRating(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRating", "(Ljava/lang/String;)Landroid/support/v4/media/RatingCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::RatingCompat _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::support::v4::media::MediaMetadataCompat::getBitmap(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBitmap", "(Ljava/lang/String;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat android::support::v4::media::MediaMetadataCompat::getDescription() const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Landroid/support/v4/media/MediaDescriptionCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaDescriptionCompat _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::MediaMetadataCompat::describeContents() const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::MediaMetadataCompat::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::media::MediaMetadataCompat::size() const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Set android::support::v4::media::MediaMetadataCompat::keySet() const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::android::os::Bundle android::support::v4::media::MediaMetadataCompat::getBundle() const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaMetadataCompat android::support::v4::media::MediaMetadataCompat::fromMediaMetadata(const ::java::lang::Object& arg0){
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromMediaMetadata", "(Ljava/lang/Object;)Landroid/support/v4/media/MediaMetadataCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::MediaMetadataCompat _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::MediaMetadataCompat::getMediaMetadata() const {
    if (!::android::support::v4::media::MediaMetadataCompat::_class) ::android::support::v4::media::MediaMetadataCompat::_class = java::fetch_class("android/support/v4/media/MediaMetadataCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMediaMetadata", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::TransportMediator::TransportMediator(const ::android::app::Activity& arg0, const ::android::support::v4::media::TransportPerformer& arg1) : ::java::lang::Object((jobject)0), ::android::support::v4::media::TransportController((jobject)0) {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;Landroid/support/v4/media/TransportPerformer;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::TransportMediator::TransportMediator(const ::android::view::View& arg0, const ::android::support::v4::media::TransportPerformer& arg1) : ::java::lang::Object((jobject)0), ::android::support::v4::media::TransportController((jobject)0) {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;Landroid/support/v4/media/TransportPerformer;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Object android::support::v4::media::TransportMediator::getRemoteControlClient() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteControlClient", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::media::TransportMediator::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::media::TransportMediator::registerStateListener(const ::android::support::v4::media::TransportStateListener& arg0) const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerStateListener", "(Landroid/support/v4/media/TransportStateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::TransportMediator::unregisterStateListener(const ::android::support::v4::media::TransportStateListener& arg0) const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterStateListener", "(Landroid/support/v4/media/TransportStateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::TransportMediator::refreshState() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "refreshState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::TransportMediator::startPlaying() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPlaying", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::TransportMediator::pausePlaying() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "pausePlaying", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::TransportMediator::stopPlaying() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopPlaying", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t android::support::v4::media::TransportMediator::getDuration() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::media::TransportMediator::getCurrentPosition() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentPosition", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::support::v4::media::TransportMediator::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::TransportMediator::isPlaying() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPlaying", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::support::v4::media::TransportMediator::getBufferPercentage() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBufferPercentage", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::TransportMediator::getTransportControlFlags() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransportControlFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::TransportMediator::destroy() const {
    if (!::android::support::v4::media::TransportMediator::_class) ::android::support::v4::media::TransportMediator::_class = java::fetch_class("android/support/v4/media/TransportMediator");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::TransportController::TransportController() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::media::TransportController::registerStateListener(const ::android::support::v4::media::TransportStateListener& arg0) const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerStateListener", "(Landroid/support/v4/media/TransportStateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::TransportController::unregisterStateListener(const ::android::support::v4::media::TransportStateListener& arg0) const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterStateListener", "(Landroid/support/v4/media/TransportStateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::TransportController::startPlaying() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPlaying", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::TransportController::pausePlaying() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "pausePlaying", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::media::TransportController::stopPlaying() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopPlaying", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t android::support::v4::media::TransportController::getDuration() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::media::TransportController::getCurrentPosition() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentPosition", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::support::v4::media::TransportController::seekTo(int64_t arg0) const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::media::TransportController::isPlaying() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPlaying", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::support::v4::media::TransportController::getBufferPercentage() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBufferPercentage", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::TransportController::getTransportControlFlags() const {
    if (!::android::support::v4::media::TransportController::_class) ::android::support::v4::media::TransportController::_class = java::fetch_class("android/support/v4/media/TransportController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransportControlFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::VolumeProviderCompat_Callback::VolumeProviderCompat_Callback() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::VolumeProviderCompat_Callback::_class) ::android::support::v4::media::VolumeProviderCompat_Callback::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::media::VolumeProviderCompat_Callback::onVolumeChanged(const ::android::support::v4::media::VolumeProviderCompat& arg0) const {
    if (!::android::support::v4::media::VolumeProviderCompat_Callback::_class) ::android::support::v4::media::VolumeProviderCompat_Callback::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onVolumeChanged", "(Landroid/support/v4/media/VolumeProviderCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::VolumeProviderCompat::VolumeProviderCompat(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::media::VolumeProviderCompat::getCurrentVolume() const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentVolume", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::VolumeProviderCompat::getVolumeControl() const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeControl", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::media::VolumeProviderCompat::getMaxVolume() const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxVolume", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::VolumeProviderCompat::setCurrentVolume(int32_t arg0) const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentVolume", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::VolumeProviderCompat::onSetVolumeTo(int32_t arg0) const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSetVolumeTo", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::VolumeProviderCompat::onAdjustVolume(int32_t arg0) const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAdjustVolume", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::VolumeProviderCompat::setCallback(const ::android::support::v4::media::VolumeProviderCompat_Callback& arg0) const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/support/v4/media/VolumeProviderCompat$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::media::VolumeProviderCompat::getVolumeProvider() const {
    if (!::android::support::v4::media::VolumeProviderCompat::_class) ::android::support::v4::media::VolumeProviderCompat::_class = java::fetch_class("android/support/v4/media/VolumeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeProvider", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::MediaDescriptionCompat_Builder::MediaDescriptionCompat_Builder() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::media::MediaDescriptionCompat_Builder android::support::v4::media::MediaDescriptionCompat_Builder::setMediaId(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMediaId", "(Ljava/lang/String;)Landroid/support/v4/media/MediaDescriptionCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat_Builder android::support::v4::media::MediaDescriptionCompat_Builder::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/media/MediaDescriptionCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat_Builder android::support::v4::media::MediaDescriptionCompat_Builder::setSubtitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubtitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/media/MediaDescriptionCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat_Builder android::support::v4::media::MediaDescriptionCompat_Builder::setDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDescription", "(Ljava/lang/CharSequence;)Landroid/support/v4/media/MediaDescriptionCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat_Builder android::support::v4::media::MediaDescriptionCompat_Builder::setIconBitmap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconBitmap", "(Landroid/graphics/Bitmap;)Landroid/support/v4/media/MediaDescriptionCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat_Builder android::support::v4::media::MediaDescriptionCompat_Builder::setIconUri(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconUri", "(Landroid/net/Uri;)Landroid/support/v4/media/MediaDescriptionCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat_Builder android::support::v4::media::MediaDescriptionCompat_Builder::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)Landroid/support/v4/media/MediaDescriptionCompat$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::media::MediaDescriptionCompat_Builder _ret(ret);
    return _ret;
}

::android::support::v4::media::MediaDescriptionCompat android::support::v4::media::MediaDescriptionCompat_Builder::build() const {
    if (!::android::support::v4::media::MediaDescriptionCompat_Builder::_class) ::android::support::v4::media::MediaDescriptionCompat_Builder::_class = java::fetch_class("android/support/v4/media/MediaDescriptionCompat$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/media/MediaDescriptionCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::media::MediaDescriptionCompat _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::media::TransportStateListener::TransportStateListener() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::media::TransportStateListener::_class) ::android::support::v4::media::TransportStateListener::_class = java::fetch_class("android/support/v4/media/TransportStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::media::TransportStateListener::onPlayingChanged(const ::android::support::v4::media::TransportController& arg0) const {
    if (!::android::support::v4::media::TransportStateListener::_class) ::android::support::v4::media::TransportStateListener::_class = java::fetch_class("android/support/v4/media/TransportStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPlayingChanged", "(Landroid/support/v4/media/TransportController;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::media::TransportStateListener::onTransportControlsChanged(const ::android::support::v4::media::TransportController& arg0) const {
    if (!::android::support::v4::media::TransportStateListener::_class) ::android::support::v4::media::TransportStateListener::_class = java::fetch_class("android/support/v4/media/TransportStateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTransportControlsChanged", "(Landroid/support/v4/media/TransportController;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::media::RatingCompat::toString() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::media::RatingCompat::describeContents() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::media::RatingCompat::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::media::RatingCompat android::support::v4::media::RatingCompat::newUnratedRating(int32_t arg0){
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUnratedRating", "(I)Landroid/support/v4/media/RatingCompat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::RatingCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::RatingCompat android::support::v4::media::RatingCompat::newHeartRating(bool arg0){
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newHeartRating", "(Z)Landroid/support/v4/media/RatingCompat;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::RatingCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::RatingCompat android::support::v4::media::RatingCompat::newThumbRating(bool arg0){
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newThumbRating", "(Z)Landroid/support/v4/media/RatingCompat;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::RatingCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::RatingCompat android::support::v4::media::RatingCompat::newStarRating(int32_t arg0, float arg1){
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newStarRating", "(IF)Landroid/support/v4/media/RatingCompat;");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::media::RatingCompat _ret(ret);
    return _ret;
}

::android::support::v4::media::RatingCompat android::support::v4::media::RatingCompat::newPercentageRating(float arg0){
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPercentageRating", "(F)Landroid/support/v4/media/RatingCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::RatingCompat _ret(ret);
    return _ret;
}

bool android::support::v4::media::RatingCompat::isRated() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::support::v4::media::RatingCompat::getRatingStyle() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRatingStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::media::RatingCompat::hasHeart() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasHeart", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::media::RatingCompat::isThumbUp() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isThumbUp", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

float android::support::v4::media::RatingCompat::getStarRating() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStarRating", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::support::v4::media::RatingCompat::getPercentRating() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPercentRating", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::android::support::v4::media::RatingCompat android::support::v4::media::RatingCompat::fromRating(const ::java::lang::Object& arg0){
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromRating", "(Ljava/lang/Object;)Landroid/support/v4/media/RatingCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::media::RatingCompat _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::media::RatingCompat::getRating() const {
    if (!::android::support::v4::media::RatingCompat::_class) ::android::support::v4::media::RatingCompat::_class = java::fetch_class("android/support/v4/media/RatingCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRating", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

