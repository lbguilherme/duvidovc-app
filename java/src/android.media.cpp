#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.app.PendingIntent.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.res.AssetFileDescriptor.hpp"
#include "android.database.Cursor.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.PointF.hpp"
#include "android.hardware.Camera.hpp"
#include "android.media.AsyncPlayer.hpp"
#include "android.media.AudioFormat.hpp"
#include "android.media.AudioManager.hpp"
#include "android.media.AudioRecord.hpp"
#include "android.media.AudioTrack.hpp"
#include "android.media.CamcorderProfile.hpp"
#include "android.media.CameraProfile.hpp"
#include "android.media.ExifInterface.hpp"
#include "android.media.FaceDetector.hpp"
#include "android.media.JetPlayer.hpp"
#include "android.media.MediaMetadataRetriever.hpp"
#include "android.media.MediaPlayer.hpp"
#include "android.media.MediaRecorder.hpp"
#include "android.media.MediaScannerConnection.hpp"
#include "android.media.RemoteControlClient.hpp"
#include "android.media.Ringtone.hpp"
#include "android.media.RingtoneManager.hpp"
#include "android.media.SoundPool.hpp"
#include "android.media.ThumbnailUtils.hpp"
#include "android.media.ToneGenerator.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Handler.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Looper.hpp"
#include "android.view.Surface.hpp"
#include "android.view.SurfaceHolder.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.util.Map.hpp"

jclass android::media::MediaScannerConnection_MediaScannerConnectionClient::_class = nullptr;
jclass android::media::AudioTrack_OnPlaybackPositionUpdateListener::_class = nullptr;
jclass android::media::MediaMetadataRetriever::_class = nullptr;
jclass android::media::RingtoneManager::_class = nullptr;
jclass android::media::ToneGenerator::_class = nullptr;
jclass android::media::MediaPlayer::_class = nullptr;
jclass android::media::MediaRecorder_OnInfoListener::_class = nullptr;
jclass android::media::MediaPlayer_OnSeekCompleteListener::_class = nullptr;
jclass android::media::Ringtone::_class = nullptr;
jclass android::media::CamcorderProfile::_class = nullptr;
jclass android::media::AudioFormat::_class = nullptr;
jclass android::media::JetPlayer::_class = nullptr;
jclass android::media::ExifInterface::_class = nullptr;
jclass android::media::FaceDetector::_class = nullptr;
jclass android::media::MediaRecorder_AudioSource::_class = nullptr;
jclass android::media::MediaPlayer_OnCompletionListener::_class = nullptr;
jclass android::media::SoundPool_OnLoadCompleteListener::_class = nullptr;
jclass android::media::MediaRecorder_OutputFormat::_class = nullptr;
jclass android::media::AudioManager::_class = nullptr;
jclass android::media::SoundPool::_class = nullptr;
jclass android::media::RemoteControlClient_MetadataEditor::_class = nullptr;
jclass android::media::MediaPlayer_OnVideoSizeChangedListener::_class = nullptr;
jclass android::media::MediaScannerConnection_OnScanCompletedListener::_class = nullptr;
jclass android::media::MediaRecorder::_class = nullptr;
jclass android::media::MediaScannerConnection::_class = nullptr;
jclass android::media::AsyncPlayer::_class = nullptr;
jclass android::media::CameraProfile::_class = nullptr;
jclass android::media::RemoteControlClient::_class = nullptr;
jclass android::media::JetPlayer_OnJetEventListener::_class = nullptr;
jclass android::media::MediaPlayer_OnErrorListener::_class = nullptr;
jclass android::media::AudioRecord_OnRecordPositionUpdateListener::_class = nullptr;
jclass android::media::AudioRecord::_class = nullptr;
jclass android::media::MediaPlayer_OnInfoListener::_class = nullptr;
jclass android::media::MediaRecorder_VideoSource::_class = nullptr;
jclass android::media::MediaRecorder_AudioEncoder::_class = nullptr;
jclass android::media::MediaPlayer_OnBufferingUpdateListener::_class = nullptr;
jclass android::media::FaceDetector_Face::_class = nullptr;
jclass android::media::MediaPlayer_OnPreparedListener::_class = nullptr;
jclass android::media::ThumbnailUtils::_class = nullptr;
jclass android::media::AudioManager_OnAudioFocusChangeListener::_class = nullptr;
jclass android::media::MediaRecorder_VideoEncoder::_class = nullptr;
jclass android::media::MediaRecorder_OnErrorListener::_class = nullptr;
jclass android::media::AudioTrack::_class = nullptr;

void android::media::MediaScannerConnection_MediaScannerConnectionClient::onMediaScannerConnected() const {
    if (!::android::media::MediaScannerConnection_MediaScannerConnectionClient::_class) ::android::media::MediaScannerConnection_MediaScannerConnectionClient::_class = java::fetch_class("android/media/MediaScannerConnection$MediaScannerConnectionClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMediaScannerConnected", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaScannerConnection_MediaScannerConnectionClient::onScanCompleted(const ::java::lang::String& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::media::MediaScannerConnection_MediaScannerConnectionClient::_class) ::android::media::MediaScannerConnection_MediaScannerConnectionClient::_class = java::fetch_class("android/media/MediaScannerConnection$MediaScannerConnectionClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScanCompleted", "(Ljava/lang/String;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::AudioTrack_OnPlaybackPositionUpdateListener::onMarkerReached(const ::android::media::AudioTrack& arg0) const {
    if (!::android::media::AudioTrack_OnPlaybackPositionUpdateListener::_class) ::android::media::AudioTrack_OnPlaybackPositionUpdateListener::_class = java::fetch_class("android/media/AudioTrack$OnPlaybackPositionUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMarkerReached", "(Landroid/media/AudioTrack;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioTrack_OnPlaybackPositionUpdateListener::onPeriodicNotification(const ::android::media::AudioTrack& arg0) const {
    if (!::android::media::AudioTrack_OnPlaybackPositionUpdateListener::_class) ::android::media::AudioTrack_OnPlaybackPositionUpdateListener::_class = java::fetch_class("android/media/AudioTrack$OnPlaybackPositionUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPeriodicNotification", "(Landroid/media/AudioTrack;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::MediaMetadataRetriever::MediaMetadataRetriever() : ::java::lang::Object((jobject)0) {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::media::MediaMetadataRetriever::setDataSource(const ::java::lang::String& arg0) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaMetadataRetriever::setDataSource(const ::java::lang::String& arg0, const ::java::util::Map& arg1) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaMetadataRetriever::setDataSource(const ::java::io::FileDescriptor& arg0, int64_t arg1, int64_t arg2) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Ljava/io/FileDescriptor;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::MediaMetadataRetriever::setDataSource(const ::java::io::FileDescriptor& arg0) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaMetadataRetriever::setDataSource(const ::android::content::Context& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Landroid/content/Context;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::media::MediaMetadataRetriever::extractMetadata(int32_t arg0) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "extractMetadata", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::media::MediaMetadataRetriever::getFrameAtTime(int64_t arg0, int32_t arg1) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFrameAtTime", "(JI)Landroid/graphics/Bitmap;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::media::MediaMetadataRetriever::getFrameAtTime(int64_t arg0) const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFrameAtTime", "(J)Landroid/graphics/Bitmap;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::media::MediaMetadataRetriever::getFrameAtTime() const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFrameAtTime", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

std::vector< int8_t> android::media::MediaMetadataRetriever::getEmbeddedPicture() const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmbeddedPicture", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::media::MediaMetadataRetriever::release() const {
    if (!::android::media::MediaMetadataRetriever::_class) ::android::media::MediaMetadataRetriever::_class = java::fetch_class("android/media/MediaMetadataRetriever");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::RingtoneManager::RingtoneManager(const ::android::app::Activity& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::RingtoneManager::RingtoneManager(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::media::RingtoneManager::setType(int32_t arg0) const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::RingtoneManager::inferStreamType() const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "inferStreamType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::RingtoneManager::setStopPreviousRingtone(bool arg0) const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStopPreviousRingtone", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::media::RingtoneManager::getStopPreviousRingtone() const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStopPreviousRingtone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::RingtoneManager::stopPreviousRingtone() const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopPreviousRingtone", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::media::RingtoneManager::getIncludeDrm() const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIncludeDrm", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::RingtoneManager::setIncludeDrm(bool arg0) const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIncludeDrm", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::media::RingtoneManager::getCursor() const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursor", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::media::Ringtone android::media::RingtoneManager::getRingtone(int32_t arg0) const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRingtone", "(I)Landroid/media/Ringtone;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::media::Ringtone _ret(ret);
    return _ret;
}

::android::net::Uri android::media::RingtoneManager::getRingtoneUri(int32_t arg0) const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRingtoneUri", "(I)Landroid/net/Uri;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::media::RingtoneManager::getRingtonePosition(const ::android::net::Uri& arg0) const {
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRingtonePosition", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::net::Uri android::media::RingtoneManager::getValidRingtoneUri(const ::android::content::Context& arg0){
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getValidRingtoneUri", "(Landroid/content/Context;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::media::Ringtone android::media::RingtoneManager::getRingtone(const ::android::content::Context& arg0, const ::android::net::Uri& arg1){
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRingtone", "(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/Ringtone;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::media::Ringtone _ret(ret);
    return _ret;
}

::android::net::Uri android::media::RingtoneManager::getActualDefaultRingtoneUri(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActualDefaultRingtoneUri", "(Landroid/content/Context;I)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

void android::media::RingtoneManager::setActualDefaultRingtoneUri(const ::android::content::Context& arg0, int32_t arg1, const ::android::net::Uri& arg2){
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setActualDefaultRingtoneUri", "(Landroid/content/Context;ILandroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::media::RingtoneManager::isDefault(const ::android::net::Uri& arg0){
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDefault", "(Landroid/net/Uri;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::media::RingtoneManager::getDefaultType(const ::android::net::Uri& arg0){
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultType", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::android::net::Uri android::media::RingtoneManager::getDefaultUri(int32_t arg0){
    if (!::android::media::RingtoneManager::_class) ::android::media::RingtoneManager::_class = java::fetch_class("android/media/RingtoneManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultUri", "(I)Landroid/net/Uri;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::ToneGenerator::ToneGenerator(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::media::ToneGenerator::_class) ::android::media::ToneGenerator::_class = java::fetch_class("android/media/ToneGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::media::ToneGenerator::startTone(int32_t arg0) const {
    if (!::android::media::ToneGenerator::_class) ::android::media::ToneGenerator::_class = java::fetch_class("android/media/ToneGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTone", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::media::ToneGenerator::startTone(int32_t arg0, int32_t arg1) const {
    if (!::android::media::ToneGenerator::_class) ::android::media::ToneGenerator::_class = java::fetch_class("android/media/ToneGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTone", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::media::ToneGenerator::stopTone() const {
    if (!::android::media::ToneGenerator::_class) ::android::media::ToneGenerator::_class = java::fetch_class("android/media/ToneGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopTone", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::ToneGenerator::release() const {
    if (!::android::media::ToneGenerator::_class) ::android::media::ToneGenerator::_class = java::fetch_class("android/media/ToneGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::MediaPlayer::MediaPlayer() : ::java::lang::Object((jobject)0) {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::media::MediaPlayer::setDisplay(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplay", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setSurface(const ::android::view::Surface& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSurface", "(Landroid/view/Surface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::media::MediaPlayer android::media::MediaPlayer::create(const ::android::content::Context& arg0, const ::android::net::Uri& arg1){
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/MediaPlayer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::media::MediaPlayer _ret(ret);
    return _ret;
}

::android::media::MediaPlayer android::media::MediaPlayer::create(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, const ::android::view::SurfaceHolder& arg2){
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;)Landroid/media/MediaPlayer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::media::MediaPlayer _ret(ret);
    return _ret;
}

::android::media::MediaPlayer android::media::MediaPlayer::create(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/content/Context;I)Landroid/media/MediaPlayer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::media::MediaPlayer _ret(ret);
    return _ret;
}

void android::media::MediaPlayer::setDataSource(const ::android::content::Context& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Landroid/content/Context;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaPlayer::setDataSource(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, const ::java::util::Map& arg2) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::MediaPlayer::setDataSource(const ::java::lang::String& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setDataSource(const ::java::io::FileDescriptor& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setDataSource(const ::java::io::FileDescriptor& arg0, int64_t arg1, int64_t arg2) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSource", "(Ljava/io/FileDescriptor;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::MediaPlayer::prepare() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepare", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer::prepareAsync() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareAsync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer::start() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer::stop() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer::pause() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer::setWakeMode(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWakeMode", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaPlayer::setScreenOnWhilePlaying(bool arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScreenOnWhilePlaying", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::MediaPlayer::getVideoWidth() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVideoWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::MediaPlayer::getVideoHeight() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVideoHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::media::MediaPlayer::isPlaying() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPlaying", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::MediaPlayer::seekTo(int32_t arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::MediaPlayer::getCurrentPosition() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::MediaPlayer::getDuration() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::MediaPlayer::release() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer::reset() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer::setAudioStreamType(int32_t arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAudioStreamType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setLooping(bool arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLooping", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::media::MediaPlayer::isLooping() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLooping", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::MediaPlayer::setVolume(float arg0, float arg1) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolume", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaPlayer::setAudioSessionId(int32_t arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAudioSessionId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::MediaPlayer::getAudioSessionId() const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAudioSessionId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::MediaPlayer::attachAuxEffect(int32_t arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachAuxEffect", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setAuxEffectSendLevel(float arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuxEffectSendLevel", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setOnPreparedListener(const ::android::media::MediaPlayer_OnPreparedListener& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnPreparedListener", "(Landroid/media/MediaPlayer$OnPreparedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setOnCompletionListener(const ::android::media::MediaPlayer_OnCompletionListener& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCompletionListener", "(Landroid/media/MediaPlayer$OnCompletionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setOnBufferingUpdateListener(const ::android::media::MediaPlayer_OnBufferingUpdateListener& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnBufferingUpdateListener", "(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setOnSeekCompleteListener(const ::android::media::MediaPlayer_OnSeekCompleteListener& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnSeekCompleteListener", "(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setOnVideoSizeChangedListener(const ::android::media::MediaPlayer_OnVideoSizeChangedListener& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnVideoSizeChangedListener", "(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setOnErrorListener(const ::android::media::MediaPlayer_OnErrorListener& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnErrorListener", "(Landroid/media/MediaPlayer$OnErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer::setOnInfoListener(const ::android::media::MediaPlayer_OnInfoListener& arg0) const {
    if (!::android::media::MediaPlayer::_class) ::android::media::MediaPlayer::_class = java::fetch_class("android/media/MediaPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnInfoListener", "(Landroid/media/MediaPlayer$OnInfoListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder_OnInfoListener::onInfo(const ::android::media::MediaRecorder& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::MediaRecorder_OnInfoListener::_class) ::android::media::MediaRecorder_OnInfoListener::_class = java::fetch_class("android/media/MediaRecorder$OnInfoListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInfo", "(Landroid/media/MediaRecorder;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::MediaPlayer_OnSeekCompleteListener::onSeekComplete(const ::android::media::MediaPlayer& arg0) const {
    if (!::android::media::MediaPlayer_OnSeekCompleteListener::_class) ::android::media::MediaPlayer_OnSeekCompleteListener::_class = java::fetch_class("android/media/MediaPlayer$OnSeekCompleteListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSeekComplete", "(Landroid/media/MediaPlayer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::Ringtone::setStreamType(int32_t arg0) const {
    if (!::android::media::Ringtone::_class) ::android::media::Ringtone::_class = java::fetch_class("android/media/Ringtone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStreamType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::Ringtone::getStreamType() const {
    if (!::android::media::Ringtone::_class) ::android::media::Ringtone::_class = java::fetch_class("android/media/Ringtone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStreamType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::media::Ringtone::getTitle(const ::android::content::Context& arg0) const {
    if (!::android::media::Ringtone::_class) ::android::media::Ringtone::_class = java::fetch_class("android/media/Ringtone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::media::Ringtone::play() const {
    if (!::android::media::Ringtone::_class) ::android::media::Ringtone::_class = java::fetch_class("android/media/Ringtone");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::Ringtone::stop() const {
    if (!::android::media::Ringtone::_class) ::android::media::Ringtone::_class = java::fetch_class("android/media/Ringtone");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::media::Ringtone::isPlaying() const {
    if (!::android::media::Ringtone::_class) ::android::media::Ringtone::_class = java::fetch_class("android/media/Ringtone");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPlaying", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::media::CamcorderProfile android::media::CamcorderProfile::get(int32_t arg0){
    if (!::android::media::CamcorderProfile::_class) ::android::media::CamcorderProfile::_class = java::fetch_class("android/media/CamcorderProfile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(I)Landroid/media/CamcorderProfile;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::media::CamcorderProfile _ret(ret);
    return _ret;
}

::android::media::CamcorderProfile android::media::CamcorderProfile::get(int32_t arg0, int32_t arg1){
    if (!::android::media::CamcorderProfile::_class) ::android::media::CamcorderProfile::_class = java::fetch_class("android/media/CamcorderProfile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(II)Landroid/media/CamcorderProfile;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::media::CamcorderProfile _ret(ret);
    return _ret;
}

bool android::media::CamcorderProfile::hasProfile(int32_t arg0){
    if (!::android::media::CamcorderProfile::_class) ::android::media::CamcorderProfile::_class = java::fetch_class("android/media/CamcorderProfile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasProfile", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::media::CamcorderProfile::hasProfile(int32_t arg0, int32_t arg1){
    if (!::android::media::CamcorderProfile::_class) ::android::media::CamcorderProfile::_class = java::fetch_class("android/media/CamcorderProfile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasProfile", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::AudioFormat::AudioFormat() : ::java::lang::Object((jobject)0) {
    if (!::android::media::AudioFormat::_class) ::android::media::AudioFormat::_class = java::fetch_class("android/media/AudioFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::media::JetPlayer android::media::JetPlayer::getJetPlayer(){
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getJetPlayer", "()Landroid/media/JetPlayer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::media::JetPlayer _ret(ret);
    return _ret;
}

::java::lang::Object android::media::JetPlayer::clone() const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::media::JetPlayer::release() const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::media::JetPlayer::getMaxTracks(){
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxTracks", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

bool android::media::JetPlayer::loadJetFile(const ::java::lang::String& arg0) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadJetFile", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::media::JetPlayer::loadJetFile(const ::android::content::res::AssetFileDescriptor& arg0) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadJetFile", "(Landroid/content/res/AssetFileDescriptor;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::media::JetPlayer::closeJetFile() const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeJetFile", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::media::JetPlayer::play() const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::media::JetPlayer::pause() const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::media::JetPlayer::queueJetSegment(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int8_t arg5) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "queueJetSegment", "(IIIIIB)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int8_t _arg5 = arg5;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

bool android::media::JetPlayer::queueJetSegmentMuteArray(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< bool>& arg4, int8_t arg5) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "queueJetSegmentMuteArray", "(IIII[ZB)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jbooleanArray _arg4 = java::jni->NewBooleanArray(arg4.size());
    unsigned arg4s = arg4.size();
    std::unique_ptr<bool[]> arg4t(new bool[arg4s]);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      arg4t[arg4i] = arg4[arg4i];
    }
    java::jni->SetBooleanArrayRegion(_arg4, 0, arg4s, (const jboolean*)arg4t.get());
    int8_t _arg5 = arg5;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

bool android::media::JetPlayer::setMuteFlags(int32_t arg0, bool arg1) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMuteFlags", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::media::JetPlayer::setMuteArray(const std::vector< bool>& arg0, bool arg1) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMuteArray", "([ZZ)Z");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::media::JetPlayer::setMuteFlag(int32_t arg0, bool arg1, bool arg2) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMuteFlag", "(IZZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::media::JetPlayer::triggerClip(int32_t arg0) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "triggerClip", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::media::JetPlayer::clearQueue() const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearQueue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::JetPlayer::setEventListener(const ::android::media::JetPlayer_OnJetEventListener& arg0) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEventListener", "(Landroid/media/JetPlayer$OnJetEventListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::JetPlayer::setEventListener(const ::android::media::JetPlayer_OnJetEventListener& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::media::JetPlayer::_class) ::android::media::JetPlayer::_class = java::fetch_class("android/media/JetPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEventListener", "(Landroid/media/JetPlayer$OnJetEventListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::ExifInterface::ExifInterface(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::media::ExifInterface::getAttribute(const ::java::lang::String& arg0) const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::media::ExifInterface::getAttributeInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

double android::media::ExifInterface::getAttributeDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeDouble", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

void android::media::ExifInterface::setAttribute(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::ExifInterface::saveAttributes() const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveAttributes", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::media::ExifInterface::hasThumbnail() const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasThumbnail", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< int8_t> android::media::ExifInterface::getThumbnail() const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThumbnail", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool android::media::ExifInterface::getLatLong(const std::vector< float>& arg0) const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLatLong", "([F)Z");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

double android::media::ExifInterface::getAltitude(double arg0) const {
    if (!::android::media::ExifInterface::_class) ::android::media::ExifInterface::_class = java::fetch_class("android/media/ExifInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAltitude", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::FaceDetector::FaceDetector(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::media::FaceDetector::_class) ::android::media::FaceDetector::_class = java::fetch_class("android/media/FaceDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::media::FaceDetector::findFaces(const ::android::graphics::Bitmap& arg0, const std::vector< ::android::media::FaceDetector_Face>& arg1) const {
    if (!::android::media::FaceDetector::_class) ::android::media::FaceDetector::_class = java::fetch_class("android/media/FaceDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFaces", "(Landroid/graphics/Bitmap;[Landroid/media/FaceDetector$Face;)I");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::media::FaceDetector_Face::_class) ::android::media::FaceDetector_Face::_class = java::fetch_class("android/media/FaceDetector$Face");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::media::FaceDetector_Face::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::media::FaceDetector_Face& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaPlayer_OnCompletionListener::onCompletion(const ::android::media::MediaPlayer& arg0) const {
    if (!::android::media::MediaPlayer_OnCompletionListener::_class) ::android::media::MediaPlayer_OnCompletionListener::_class = java::fetch_class("android/media/MediaPlayer$OnCompletionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCompletion", "(Landroid/media/MediaPlayer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::SoundPool_OnLoadCompleteListener::onLoadComplete(const ::android::media::SoundPool& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::SoundPool_OnLoadCompleteListener::_class) ::android::media::SoundPool_OnLoadCompleteListener::_class = java::fetch_class("android/media/SoundPool$OnLoadCompleteListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadComplete", "(Landroid/media/SoundPool;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::AudioManager::adjustStreamVolume(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustStreamVolume", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::AudioManager::adjustVolume(int32_t arg0, int32_t arg1) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustVolume", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::AudioManager::adjustSuggestedStreamVolume(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustSuggestedStreamVolume", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioManager::getRingerMode() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRingerMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioManager::getStreamMaxVolume(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStreamMaxVolume", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::AudioManager::getStreamVolume(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStreamVolume", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::media::AudioManager::setRingerMode(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRingerMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioManager::setStreamVolume(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStreamVolume", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::AudioManager::setStreamSolo(int32_t arg0, bool arg1) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStreamSolo", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::AudioManager::setStreamMute(int32_t arg0, bool arg1) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStreamMute", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::media::AudioManager::shouldVibrate(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldVibrate", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::media::AudioManager::getVibrateSetting(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVibrateSetting", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::media::AudioManager::setVibrateSetting(int32_t arg0, int32_t arg1) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVibrateSetting", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::AudioManager::setSpeakerphoneOn(bool arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpeakerphoneOn", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::media::AudioManager::isSpeakerphoneOn() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpeakerphoneOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::media::AudioManager::isBluetoothScoAvailableOffCall() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBluetoothScoAvailableOffCall", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::AudioManager::startBluetoothSco() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "startBluetoothSco", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::AudioManager::stopBluetoothSco() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopBluetoothSco", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::AudioManager::setBluetoothScoOn(bool arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBluetoothScoOn", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::media::AudioManager::isBluetoothScoOn() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBluetoothScoOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::AudioManager::setBluetoothA2dpOn(bool arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBluetoothA2dpOn", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::media::AudioManager::isBluetoothA2dpOn() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBluetoothA2dpOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::AudioManager::setWiredHeadsetOn(bool arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWiredHeadsetOn", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::media::AudioManager::isWiredHeadsetOn() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWiredHeadsetOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::AudioManager::setMicrophoneMute(bool arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMicrophoneMute", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::media::AudioManager::isMicrophoneMute() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMicrophoneMute", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::AudioManager::setMode(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::AudioManager::getMode() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::AudioManager::setRouting(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRouting", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioManager::getRouting(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRouting", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::media::AudioManager::isMusicActive() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMusicActive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::AudioManager::setParameters(const ::java::lang::String& arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameters", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::media::AudioManager::getParameters(const ::java::lang::String& arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::media::AudioManager::playSoundEffect(int32_t arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "playSoundEffect", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioManager::playSoundEffect(int32_t arg0, float arg1) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "playSoundEffect", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::AudioManager::loadSoundEffects() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadSoundEffects", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::AudioManager::unloadSoundEffects() const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unloadSoundEffects", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::media::AudioManager::requestAudioFocus(const ::android::media::AudioManager_OnAudioFocusChangeListener& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestAudioFocus", "(Landroid/media/AudioManager$OnAudioFocusChangeListener;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioManager::abandonAudioFocus(const ::android::media::AudioManager_OnAudioFocusChangeListener& arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "abandonAudioFocus", "(Landroid/media/AudioManager$OnAudioFocusChangeListener;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::media::AudioManager::registerMediaButtonEventReceiver(const ::android::content::ComponentName& arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerMediaButtonEventReceiver", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioManager::unregisterMediaButtonEventReceiver(const ::android::content::ComponentName& arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterMediaButtonEventReceiver", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioManager::registerRemoteControlClient(const ::android::media::RemoteControlClient& arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerRemoteControlClient", "(Landroid/media/RemoteControlClient;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioManager::unregisterRemoteControlClient(const ::android::media::RemoteControlClient& arg0) const {
    if (!::android::media::AudioManager::_class) ::android::media::AudioManager::_class = java::fetch_class("android/media/AudioManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterRemoteControlClient", "(Landroid/media/RemoteControlClient;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::SoundPool::SoundPool(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::media::SoundPool::load(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::media::SoundPool::load(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Landroid/content/Context;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::SoundPool::load(const ::android::content::res::AssetFileDescriptor& arg0, int32_t arg1) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Landroid/content/res/AssetFileDescriptor;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::media::SoundPool::load(const ::java::io::FileDescriptor& arg0, int64_t arg1, int64_t arg2, int32_t arg3) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/io/FileDescriptor;JJI)I");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::media::SoundPool::unload(int32_t arg0) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "unload", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::media::SoundPool::play(int32_t arg0, float arg1, float arg2, int32_t arg3, int32_t arg4, float arg5) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "(IFFIIF)I");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    float _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::media::SoundPool::pause(int32_t arg0) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::SoundPool::resume(int32_t arg0) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "resume", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::SoundPool::autoPause() const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "autoPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::SoundPool::autoResume() const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "autoResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::SoundPool::stop(int32_t arg0) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::SoundPool::setVolume(int32_t arg0, float arg1, float arg2) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolume", "(IFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::SoundPool::setPriority(int32_t arg0, int32_t arg1) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPriority", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::SoundPool::setLoop(int32_t arg0, int32_t arg1) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoop", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::SoundPool::setRate(int32_t arg0, float arg1) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRate", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::SoundPool::setOnLoadCompleteListener(const ::android::media::SoundPool_OnLoadCompleteListener& arg0) const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnLoadCompleteListener", "(Landroid/media/SoundPool$OnLoadCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::SoundPool::release() const {
    if (!::android::media::SoundPool::_class) ::android::media::SoundPool::_class = java::fetch_class("android/media/SoundPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::media::RemoteControlClient_MetadataEditor android::media::RemoteControlClient_MetadataEditor::putString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::media::RemoteControlClient_MetadataEditor::_class) ::android::media::RemoteControlClient_MetadataEditor::_class = java::fetch_class("android/media/RemoteControlClient$MetadataEditor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putString", "(ILjava/lang/String;)Landroid/media/RemoteControlClient$MetadataEditor;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::media::RemoteControlClient_MetadataEditor _ret(ret);
    return _ret;
}

::android::media::RemoteControlClient_MetadataEditor android::media::RemoteControlClient_MetadataEditor::putLong(int32_t arg0, int64_t arg1) const {
    if (!::android::media::RemoteControlClient_MetadataEditor::_class) ::android::media::RemoteControlClient_MetadataEditor::_class = java::fetch_class("android/media/RemoteControlClient$MetadataEditor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(IJ)Landroid/media/RemoteControlClient$MetadataEditor;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::media::RemoteControlClient_MetadataEditor _ret(ret);
    return _ret;
}

::android::media::RemoteControlClient_MetadataEditor android::media::RemoteControlClient_MetadataEditor::putBitmap(int32_t arg0, const ::android::graphics::Bitmap& arg1) const {
    if (!::android::media::RemoteControlClient_MetadataEditor::_class) ::android::media::RemoteControlClient_MetadataEditor::_class = java::fetch_class("android/media/RemoteControlClient$MetadataEditor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBitmap", "(ILandroid/graphics/Bitmap;)Landroid/media/RemoteControlClient$MetadataEditor;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::media::RemoteControlClient_MetadataEditor _ret(ret);
    return _ret;
}

void android::media::RemoteControlClient_MetadataEditor::clear() const {
    if (!::android::media::RemoteControlClient_MetadataEditor::_class) ::android::media::RemoteControlClient_MetadataEditor::_class = java::fetch_class("android/media/RemoteControlClient$MetadataEditor");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::RemoteControlClient_MetadataEditor::apply() const {
    if (!::android::media::RemoteControlClient_MetadataEditor::_class) ::android::media::RemoteControlClient_MetadataEditor::_class = java::fetch_class("android/media/RemoteControlClient$MetadataEditor");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaPlayer_OnVideoSizeChangedListener::onVideoSizeChanged(const ::android::media::MediaPlayer& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::MediaPlayer_OnVideoSizeChangedListener::_class) ::android::media::MediaPlayer_OnVideoSizeChangedListener::_class = java::fetch_class("android/media/MediaPlayer$OnVideoSizeChangedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onVideoSizeChanged", "(Landroid/media/MediaPlayer;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::MediaScannerConnection_OnScanCompletedListener::onScanCompleted(const ::java::lang::String& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::media::MediaScannerConnection_OnScanCompletedListener::_class) ::android::media::MediaScannerConnection_OnScanCompletedListener::_class = java::fetch_class("android/media/MediaScannerConnection$OnScanCompletedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScanCompleted", "(Ljava/lang/String;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::MediaRecorder::MediaRecorder() : ::java::lang::Object((jobject)0) {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::media::MediaRecorder::setCamera(const ::android::hardware::Camera& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCamera", "(Landroid/hardware/Camera;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setPreviewDisplay(const ::android::view::Surface& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewDisplay", "(Landroid/view/Surface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setAudioSource(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAudioSource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::media::MediaRecorder::getAudioSourceMax(){
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAudioSourceMax", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::media::MediaRecorder::setVideoSource(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoSource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setProfile(const ::android::media::CamcorderProfile& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProfile", "(Landroid/media/CamcorderProfile;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setCaptureRate(double arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCaptureRate", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setOrientationHint(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientationHint", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setLocation(float arg0, float arg1) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocation", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaRecorder::setOutputFormat(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutputFormat", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setVideoSize(int32_t arg0, int32_t arg1) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaRecorder::setVideoFrameRate(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoFrameRate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setMaxDuration(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setMaxFileSize(int64_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxFileSize", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setAudioEncoder(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAudioEncoder", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setVideoEncoder(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoEncoder", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setAudioSamplingRate(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAudioSamplingRate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setAudioChannels(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAudioChannels", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setAudioEncodingBitRate(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAudioEncodingBitRate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setVideoEncodingBitRate(int32_t arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoEncodingBitRate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setAuxiliaryOutputFile(const ::java::io::FileDescriptor& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuxiliaryOutputFile", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setAuxiliaryOutputFile(const ::java::lang::String& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuxiliaryOutputFile", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setOutputFile(const ::java::io::FileDescriptor& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutputFile", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setOutputFile(const ::java::lang::String& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutputFile", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::prepare() const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepare", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaRecorder::start() const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaRecorder::stop() const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaRecorder::reset() const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::media::MediaRecorder::getMaxAmplitude() const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxAmplitude", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::MediaRecorder::setOnErrorListener(const ::android::media::MediaRecorder_OnErrorListener& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnErrorListener", "(Landroid/media/MediaRecorder$OnErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::setOnInfoListener(const ::android::media::MediaRecorder_OnInfoListener& arg0) const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnInfoListener", "(Landroid/media/MediaRecorder$OnInfoListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder::release() const {
    if (!::android::media::MediaRecorder::_class) ::android::media::MediaRecorder::_class = java::fetch_class("android/media/MediaRecorder");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::MediaScannerConnection::MediaScannerConnection(const ::android::content::Context& arg0, const ::android::media::MediaScannerConnection_MediaScannerConnectionClient& arg1) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::media::MediaScannerConnection::connect() const {
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::MediaScannerConnection::disconnect() const {
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "disconnect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::media::MediaScannerConnection::isConnected() const {
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::media::MediaScannerConnection::scanFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "scanFile", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaScannerConnection::scanFile(const ::android::content::Context& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< ::java::lang::String>& arg2, const ::android::media::MediaScannerConnection_OnScanCompletedListener& arg3){
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scanFile", "(Landroid/content/Context;[Ljava/lang/String;[Ljava/lang/String;Landroid/media/MediaScannerConnection$OnScanCompletedListener;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::media::MediaScannerConnection::onServiceConnected(const ::android::content::ComponentName& arg0, const ::android::os::IBinder& arg1) const {
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceConnected", "(Landroid/content/ComponentName;Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::MediaScannerConnection::onServiceDisconnected(const ::android::content::ComponentName& arg0) const {
    if (!::android::media::MediaScannerConnection::_class) ::android::media::MediaScannerConnection::_class = java::fetch_class("android/media/MediaScannerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceDisconnected", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::AsyncPlayer::AsyncPlayer(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::AsyncPlayer::_class) ::android::media::AsyncPlayer::_class = java::fetch_class("android/media/AsyncPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::media::AsyncPlayer::play(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, bool arg2, int32_t arg3) const {
    if (!::android::media::AsyncPlayer::_class) ::android::media::AsyncPlayer::_class = java::fetch_class("android/media/AsyncPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "(Landroid/content/Context;Landroid/net/Uri;ZI)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::media::AsyncPlayer::stop() const {
    if (!::android::media::AsyncPlayer::_class) ::android::media::AsyncPlayer::_class = java::fetch_class("android/media/AsyncPlayer");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::CameraProfile::CameraProfile() : ::java::lang::Object((jobject)0) {
    if (!::android::media::CameraProfile::_class) ::android::media::CameraProfile::_class = java::fetch_class("android/media/CameraProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::media::CameraProfile::getJpegEncodingQualityParameter(int32_t arg0){
    if (!::android::media::CameraProfile::_class) ::android::media::CameraProfile::_class = java::fetch_class("android/media/CameraProfile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getJpegEncodingQualityParameter", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::media::CameraProfile::getJpegEncodingQualityParameter(int32_t arg0, int32_t arg1){
    if (!::android::media::CameraProfile::_class) ::android::media::CameraProfile::_class = java::fetch_class("android/media/CameraProfile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getJpegEncodingQualityParameter", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::RemoteControlClient::RemoteControlClient(const ::android::app::PendingIntent& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::media::RemoteControlClient::_class) ::android::media::RemoteControlClient::_class = java::fetch_class("android/media/RemoteControlClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::RemoteControlClient::RemoteControlClient(const ::android::app::PendingIntent& arg0, const ::android::os::Looper& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::media::RemoteControlClient::_class) ::android::media::RemoteControlClient::_class = java::fetch_class("android/media/RemoteControlClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/PendingIntent;Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::media::RemoteControlClient_MetadataEditor android::media::RemoteControlClient::editMetadata(bool arg0) const {
    if (!::android::media::RemoteControlClient::_class) ::android::media::RemoteControlClient::_class = java::fetch_class("android/media/RemoteControlClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "editMetadata", "(Z)Landroid/media/RemoteControlClient$MetadataEditor;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::media::RemoteControlClient_MetadataEditor _ret(ret);
    return _ret;
}

void android::media::RemoteControlClient::setPlaybackState(int32_t arg0) const {
    if (!::android::media::RemoteControlClient::_class) ::android::media::RemoteControlClient::_class = java::fetch_class("android/media/RemoteControlClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackState", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::RemoteControlClient::setTransportControlFlags(int32_t arg0) const {
    if (!::android::media::RemoteControlClient::_class) ::android::media::RemoteControlClient::_class = java::fetch_class("android/media/RemoteControlClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransportControlFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::JetPlayer_OnJetEventListener::onJetEvent(const ::android::media::JetPlayer& arg0, int16_t arg1, int8_t arg2, int8_t arg3, int8_t arg4, int8_t arg5) const {
    if (!::android::media::JetPlayer_OnJetEventListener::_class) ::android::media::JetPlayer_OnJetEventListener::_class = java::fetch_class("android/media/JetPlayer$OnJetEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJetEvent", "(Landroid/media/JetPlayer;SBBBB)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    int8_t _arg2 = arg2;
    int8_t _arg3 = arg3;
    int8_t _arg4 = arg4;
    int8_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::media::JetPlayer_OnJetEventListener::onJetUserIdUpdate(const ::android::media::JetPlayer& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::JetPlayer_OnJetEventListener::_class) ::android::media::JetPlayer_OnJetEventListener::_class = java::fetch_class("android/media/JetPlayer$OnJetEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJetUserIdUpdate", "(Landroid/media/JetPlayer;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::JetPlayer_OnJetEventListener::onJetNumQueuedSegmentUpdate(const ::android::media::JetPlayer& arg0, int32_t arg1) const {
    if (!::android::media::JetPlayer_OnJetEventListener::_class) ::android::media::JetPlayer_OnJetEventListener::_class = java::fetch_class("android/media/JetPlayer$OnJetEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJetNumQueuedSegmentUpdate", "(Landroid/media/JetPlayer;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::media::JetPlayer_OnJetEventListener::onJetPauseUpdate(const ::android::media::JetPlayer& arg0, int32_t arg1) const {
    if (!::android::media::JetPlayer_OnJetEventListener::_class) ::android::media::JetPlayer_OnJetEventListener::_class = java::fetch_class("android/media/JetPlayer$OnJetEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJetPauseUpdate", "(Landroid/media/JetPlayer;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::media::MediaPlayer_OnErrorListener::onError(const ::android::media::MediaPlayer& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::MediaPlayer_OnErrorListener::_class) ::android::media::MediaPlayer_OnErrorListener::_class = java::fetch_class("android/media/MediaPlayer$OnErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Landroid/media/MediaPlayer;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::AudioRecord_OnRecordPositionUpdateListener::onMarkerReached(const ::android::media::AudioRecord& arg0) const {
    if (!::android::media::AudioRecord_OnRecordPositionUpdateListener::_class) ::android::media::AudioRecord_OnRecordPositionUpdateListener::_class = java::fetch_class("android/media/AudioRecord$OnRecordPositionUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMarkerReached", "(Landroid/media/AudioRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioRecord_OnRecordPositionUpdateListener::onPeriodicNotification(const ::android::media::AudioRecord& arg0) const {
    if (!::android::media::AudioRecord_OnRecordPositionUpdateListener::_class) ::android::media::AudioRecord_OnRecordPositionUpdateListener::_class = java::fetch_class("android/media/AudioRecord$OnRecordPositionUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPeriodicNotification", "(Landroid/media/AudioRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::AudioRecord::AudioRecord(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void android::media::AudioRecord::release() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::media::AudioRecord::getSampleRate() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSampleRate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getAudioSource() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAudioSource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getAudioFormat() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAudioFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getChannelConfiguration() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannelConfiguration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getChannelCount() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannelCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getState() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getRecordingState() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecordingState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getNotificationMarkerPosition() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotificationMarkerPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getPositionNotificationPeriod() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionNotificationPeriod", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioRecord::getMinBufferSize(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMinBufferSize", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::media::AudioRecord::startRecording() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "startRecording", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::AudioRecord::stop() const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::media::AudioRecord::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioRecord::read(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([SII)I");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioRecord::read(const ::java::nio::ByteBuffer& arg0, int32_t arg1) const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/ByteBuffer;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::media::AudioRecord::setRecordPositionUpdateListener(const ::android::media::AudioRecord_OnRecordPositionUpdateListener& arg0) const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRecordPositionUpdateListener", "(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioRecord::setRecordPositionUpdateListener(const ::android::media::AudioRecord_OnRecordPositionUpdateListener& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRecordPositionUpdateListener", "(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::media::AudioRecord::setNotificationMarkerPosition(int32_t arg0) const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotificationMarkerPosition", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::AudioRecord::setPositionNotificationPeriod(int32_t arg0) const {
    if (!::android::media::AudioRecord::_class) ::android::media::AudioRecord::_class = java::fetch_class("android/media/AudioRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositionNotificationPeriod", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::media::MediaPlayer_OnInfoListener::onInfo(const ::android::media::MediaPlayer& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::MediaPlayer_OnInfoListener::_class) ::android::media::MediaPlayer_OnInfoListener::_class = java::fetch_class("android/media/MediaPlayer$OnInfoListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInfo", "(Landroid/media/MediaPlayer;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::MediaPlayer_OnBufferingUpdateListener::onBufferingUpdate(const ::android::media::MediaPlayer& arg0, int32_t arg1) const {
    if (!::android::media::MediaPlayer_OnBufferingUpdateListener::_class) ::android::media::MediaPlayer_OnBufferingUpdateListener::_class = java::fetch_class("android/media/MediaPlayer$OnBufferingUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBufferingUpdate", "(Landroid/media/MediaPlayer;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::media::FaceDetector_Face::confidence() const {
    if (!::android::media::FaceDetector_Face::_class) ::android::media::FaceDetector_Face::_class = java::fetch_class("android/media/FaceDetector$Face");
    static jmethodID mid = java::jni->GetMethodID(_class, "confidence", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::media::FaceDetector_Face::getMidPoint(const ::android::graphics::PointF& arg0) const {
    if (!::android::media::FaceDetector_Face::_class) ::android::media::FaceDetector_Face::_class = java::fetch_class("android/media/FaceDetector$Face");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMidPoint", "(Landroid/graphics/PointF;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::media::FaceDetector_Face::eyesDistance() const {
    if (!::android::media::FaceDetector_Face::_class) ::android::media::FaceDetector_Face::_class = java::fetch_class("android/media/FaceDetector$Face");
    static jmethodID mid = java::jni->GetMethodID(_class, "eyesDistance", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::media::FaceDetector_Face::pose(int32_t arg0) const {
    if (!::android::media::FaceDetector_Face::_class) ::android::media::FaceDetector_Face::_class = java::fetch_class("android/media/FaceDetector$Face");
    static jmethodID mid = java::jni->GetMethodID(_class, "pose", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::media::MediaPlayer_OnPreparedListener::onPrepared(const ::android::media::MediaPlayer& arg0) const {
    if (!::android::media::MediaPlayer_OnPreparedListener::_class) ::android::media::MediaPlayer_OnPreparedListener::_class = java::fetch_class("android/media/MediaPlayer$OnPreparedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepared", "(Landroid/media/MediaPlayer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::ThumbnailUtils::ThumbnailUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::media::ThumbnailUtils::_class) ::android::media::ThumbnailUtils::_class = java::fetch_class("android/media/ThumbnailUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::graphics::Bitmap android::media::ThumbnailUtils::createVideoThumbnail(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::media::ThumbnailUtils::_class) ::android::media::ThumbnailUtils::_class = java::fetch_class("android/media/ThumbnailUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createVideoThumbnail", "(Ljava/lang/String;I)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::media::ThumbnailUtils::extractThumbnail(const ::android::graphics::Bitmap& arg0, int32_t arg1, int32_t arg2){
    if (!::android::media::ThumbnailUtils::_class) ::android::media::ThumbnailUtils::_class = java::fetch_class("android/media/ThumbnailUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extractThumbnail", "(Landroid/graphics/Bitmap;II)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::media::ThumbnailUtils::extractThumbnail(const ::android::graphics::Bitmap& arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::media::ThumbnailUtils::_class) ::android::media::ThumbnailUtils::_class = java::fetch_class("android/media/ThumbnailUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extractThumbnail", "(Landroid/graphics/Bitmap;III)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

void android::media::AudioManager_OnAudioFocusChangeListener::onAudioFocusChange(int32_t arg0) const {
    if (!::android::media::AudioManager_OnAudioFocusChangeListener::_class) ::android::media::AudioManager_OnAudioFocusChangeListener::_class = java::fetch_class("android/media/AudioManager$OnAudioFocusChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAudioFocusChange", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::MediaRecorder_OnErrorListener::onError(const ::android::media::MediaRecorder& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::MediaRecorder_OnErrorListener::_class) ::android::media::MediaRecorder_OnErrorListener::_class = java::fetch_class("android/media/MediaRecorder$OnErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Landroid/media/MediaRecorder;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::AudioTrack::AudioTrack(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0) {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::media::AudioTrack::AudioTrack(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) : ::java::lang::Object((jobject)0) {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

void android::media::AudioTrack::release() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

float android::media::AudioTrack::getMinVolume(){
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMinVolume", "()F");
    return java::jni->CallStaticFloatMethod(_class, mid);
}

float android::media::AudioTrack::getMaxVolume(){
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxVolume", "()F");
    return java::jni->CallStaticFloatMethod(_class, mid);
}

int32_t android::media::AudioTrack::getSampleRate() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSampleRate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getPlaybackRate() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackRate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getAudioFormat() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAudioFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getStreamType() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStreamType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getChannelConfiguration() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannelConfiguration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getChannelCount() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannelCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getState() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getPlayState() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlayState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getNotificationMarkerPosition() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotificationMarkerPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getPositionNotificationPeriod() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionNotificationPeriod", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getPlaybackHeadPosition() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaybackHeadPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::getNativeOutputSampleRate(int32_t arg0){
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNativeOutputSampleRate", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::media::AudioTrack::getMinBufferSize(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMinBufferSize", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioTrack::getAudioSessionId() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAudioSessionId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::media::AudioTrack::setPlaybackPositionUpdateListener(const ::android::media::AudioTrack_OnPlaybackPositionUpdateListener& arg0) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackPositionUpdateListener", "(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::media::AudioTrack::setPlaybackPositionUpdateListener(const ::android::media::AudioTrack_OnPlaybackPositionUpdateListener& arg0, const ::android::os::Handler& arg1) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackPositionUpdateListener", "(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::media::AudioTrack::setStereoVolume(float arg0, float arg1) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStereoVolume", "(FF)I");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::media::AudioTrack::setPlaybackRate(int32_t arg0) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackRate", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::AudioTrack::setNotificationMarkerPosition(int32_t arg0) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotificationMarkerPosition", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::AudioTrack::setPositionNotificationPeriod(int32_t arg0) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositionNotificationPeriod", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::AudioTrack::setPlaybackHeadPosition(int32_t arg0) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaybackHeadPosition", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::AudioTrack::setLoopPoints(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoopPoints", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::media::AudioTrack::play() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::AudioTrack::stop() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::AudioTrack::pause() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::media::AudioTrack::flush() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::media::AudioTrack::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioTrack::write(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([SII)I");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::media::AudioTrack::reloadStaticData() const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "reloadStaticData", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::media::AudioTrack::attachAuxEffect(int32_t arg0) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachAuxEffect", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::media::AudioTrack::setAuxEffectSendLevel(float arg0) const {
    if (!::android::media::AudioTrack::_class) ::android::media::AudioTrack::_class = java::fetch_class("android/media/AudioTrack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuxEffectSendLevel", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

