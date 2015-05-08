#include "java-core.hpp"
#include <memory>
#include "android.net.rtp.AudioCodec.hpp"
#include "android.net.rtp.AudioGroup.hpp"
#include "android.net.rtp.AudioStream.hpp"
#include "android.net.rtp.RtpStream.hpp"
#include "java.lang.String.hpp"
#include "java.net.InetAddress.hpp"

jclass android::net::rtp::AudioStream::_class = nullptr;
jclass android::net::rtp::RtpStream::_class = nullptr;
jclass android::net::rtp::AudioCodec::_class = nullptr;
jclass android::net::rtp::AudioGroup::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::rtp::AudioStream::AudioStream(const ::java::net::InetAddress& arg0) : ::java::lang::Object((jobject)0), ::android::net::rtp::RtpStream((jobject)0) {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::net::rtp::AudioStream::isBusy() const {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBusy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::net::rtp::AudioGroup android::net::rtp::AudioStream::getGroup() const {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "()Landroid/net/rtp/AudioGroup;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::rtp::AudioGroup _ret(ret);
    return _ret;
}

void android::net::rtp::AudioStream::join(const ::android::net::rtp::AudioGroup& arg0) const {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "join", "(Landroid/net/rtp/AudioGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::net::rtp::AudioCodec android::net::rtp::AudioStream::getCodec() const {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCodec", "()Landroid/net/rtp/AudioCodec;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::rtp::AudioCodec _ret(ret);
    return _ret;
}

void android::net::rtp::AudioStream::setCodec(const ::android::net::rtp::AudioCodec& arg0) const {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCodec", "(Landroid/net/rtp/AudioCodec;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::net::rtp::AudioStream::getDtmfType() const {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDtmfType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::rtp::AudioStream::setDtmfType(int32_t arg0) const {
    if (!::android::net::rtp::AudioStream::_class) ::android::net::rtp::AudioStream::_class = java::fetch_class("android/net/rtp/AudioStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDtmfType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::net::InetAddress android::net::rtp::RtpStream::getLocalAddress() const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t android::net::rtp::RtpStream::getLocalPort() const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::InetAddress android::net::rtp::RtpStream::getRemoteAddress() const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t android::net::rtp::RtpStream::getRemotePort() const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemotePort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::net::rtp::RtpStream::isBusy() const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBusy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::net::rtp::RtpStream::getMode() const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::rtp::RtpStream::setMode(int32_t arg0) const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::rtp::RtpStream::associate(const ::java::net::InetAddress& arg0, int32_t arg1) const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "associate", "(Ljava/net/InetAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::rtp::RtpStream::release() const {
    if (!::android::net::rtp::RtpStream::_class) ::android::net::rtp::RtpStream::_class = java::fetch_class("android/net/rtp/RtpStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::android::net::rtp::AudioCodec> android::net::rtp::AudioCodec::getCodecs(){
    if (!::android::net::rtp::AudioCodec::_class) ::android::net::rtp::AudioCodec::_class = java::fetch_class("android/net/rtp/AudioCodec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCodecs", "()[Landroid/net/rtp/AudioCodec;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::net::rtp::AudioCodec> _ret(rets, ::android::net::rtp::AudioCodec((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::net::rtp::AudioCodec retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::net::rtp::AudioCodec android::net::rtp::AudioCodec::getCodec(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::net::rtp::AudioCodec::_class) ::android::net::rtp::AudioCodec::_class = java::fetch_class("android/net/rtp/AudioCodec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCodec", "(ILjava/lang/String;Ljava/lang/String;)Landroid/net/rtp/AudioCodec;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::net::rtp::AudioCodec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::rtp::AudioGroup::AudioGroup() : ::java::lang::Object((jobject)0) {
    if (!::android::net::rtp::AudioGroup::_class) ::android::net::rtp::AudioGroup::_class = java::fetch_class("android/net/rtp/AudioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< ::android::net::rtp::AudioStream> android::net::rtp::AudioGroup::getStreams() const {
    if (!::android::net::rtp::AudioGroup::_class) ::android::net::rtp::AudioGroup::_class = java::fetch_class("android/net/rtp/AudioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStreams", "()[Landroid/net/rtp/AudioStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::net::rtp::AudioStream> _ret(rets, ::android::net::rtp::AudioStream((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::net::rtp::AudioStream retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::net::rtp::AudioGroup::getMode() const {
    if (!::android::net::rtp::AudioGroup::_class) ::android::net::rtp::AudioGroup::_class = java::fetch_class("android/net/rtp/AudioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::rtp::AudioGroup::setMode(int32_t arg0) const {
    if (!::android::net::rtp::AudioGroup::_class) ::android::net::rtp::AudioGroup::_class = java::fetch_class("android/net/rtp/AudioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::rtp::AudioGroup::sendDtmf(int32_t arg0) const {
    if (!::android::net::rtp::AudioGroup::_class) ::android::net::rtp::AudioGroup::_class = java::fetch_class("android/net/rtp/AudioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendDtmf", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::rtp::AudioGroup::clear() const {
    if (!::android::net::rtp::AudioGroup::_class) ::android::net::rtp::AudioGroup::_class = java::fetch_class("android/net/rtp/AudioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

