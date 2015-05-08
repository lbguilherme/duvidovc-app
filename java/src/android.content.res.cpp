#include "java-core.hpp"
#include <memory>
#include "android.content.res.AssetFileDescriptor.hpp"
#include "android.content.res.AssetManager.hpp"
#include "android.content.res.ColorStateList.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.ObbInfo.hpp"
#include "android.content.res.ObbScanner.hpp"
#include "android.content.res.Resources.hpp"
#include "android.content.res.TypedArray.hpp"
#include "android.content.res.XmlResourceParser.hpp"
#include "android.graphics.Movie.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.DisplayMetrics.hpp"
#include "android.util.TypedValue.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.FileInputStream.hpp"
#include "java.io.FileOutputStream.hpp"
#include "java.io.InputStream.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"

jclass android::content::res::Resources_NotFoundException::_class = nullptr;
jclass android::content::res::AssetManager::_class = nullptr;
jclass android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = nullptr;
jclass android::content::res::XmlResourceParser::_class = nullptr;
jclass android::content::res::Resources::_class = nullptr;
jclass android::content::res::ObbInfo::_class = nullptr;
jclass android::content::res::AssetManager_AssetInputStream::_class = nullptr;
jclass android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class = nullptr;
jclass android::content::res::TypedArray::_class = nullptr;
jclass android::content::res::AssetFileDescriptor::_class = nullptr;
jclass android::content::res::ColorStateList::_class = nullptr;
jclass android::content::res::Configuration::_class = nullptr;
jclass android::content::res::Resources_Theme::_class = nullptr;
jclass android::content::res::ObbScanner::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::Resources_NotFoundException::Resources_NotFoundException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::res::Resources_NotFoundException::_class) ::android::content::res::Resources_NotFoundException::_class = java::fetch_class("android/content/res/Resources$NotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::Resources_NotFoundException::Resources_NotFoundException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::res::Resources_NotFoundException::_class) ::android::content::res::Resources_NotFoundException::_class = java::fetch_class("android/content/res/Resources$NotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::res::AssetManager::close() const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::InputStream android::content::res::AssetManager::open(const ::java::lang::String& arg0) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream android::content::res::AssetManager::open(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Ljava/lang/String;I)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::res::AssetManager::openFd(const ::java::lang::String& arg0) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFd", "(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::res::AssetManager::list(const ::java::lang::String& arg0) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "list", "(Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::res::AssetManager::openNonAssetFd(const ::java::lang::String& arg0) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openNonAssetFd", "(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::res::AssetManager::openNonAssetFd(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openNonAssetFd", "(ILjava/lang/String;)Landroid/content/res/AssetFileDescriptor;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::content::res::AssetManager::openXmlResourceParser(const ::java::lang::String& arg0) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openXmlResourceParser", "(Ljava/lang/String;)Landroid/content/res/XmlResourceParser;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::content::res::AssetManager::openXmlResourceParser(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "openXmlResourceParser", "(ILjava/lang/String;)Landroid/content/res/XmlResourceParser;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::res::AssetManager::getLocales() const {
    if (!::android::content::res::AssetManager::_class) ::android::content::res::AssetManager::_class = java::fetch_class("android/content/res/AssetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocales", "()[Ljava/lang/String;");
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::AssetFileDescriptor_AutoCloseInputStream::AssetFileDescriptor_AutoCloseInputStream(const ::android::content::res::AssetFileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::android::os::ParcelFileDescriptor_AutoCloseInputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/AssetFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::content::res::AssetFileDescriptor_AutoCloseInputStream::available() const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::res::AssetFileDescriptor_AutoCloseInputStream::read() const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::res::AssetFileDescriptor_AutoCloseInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::content::res::AssetFileDescriptor_AutoCloseInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::content::res::AssetFileDescriptor_AutoCloseInputStream::skip(int64_t arg0) const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::content::res::AssetFileDescriptor_AutoCloseInputStream::mark(int32_t arg0) const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::res::AssetFileDescriptor_AutoCloseInputStream::markSupported() const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::res::AssetFileDescriptor_AutoCloseInputStream::reset() const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::res::XmlResourceParser::close() const {
    if (!::android::content::res::XmlResourceParser::_class) ::android::content::res::XmlResourceParser::_class = java::fetch_class("android/content/res/XmlResourceParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::Resources::Resources(const ::android::content::res::AssetManager& arg0, const ::android::util::DisplayMetrics& arg1, const ::android::content::res::Configuration& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::content::res::Resources android::content::res::Resources::getSystem(){
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSystem", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::res::Resources::getText(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::res::Resources::getQuantityText(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuantityText", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::Resources::getString(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::Resources::getString(int32_t arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
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

::java::lang::String android::content::res::Resources::getQuantityString(int32_t arg0, int32_t arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuantityString", "(II[Ljava/lang/Object;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::Resources::getQuantityString(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuantityString", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::res::Resources::getText(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

std::vector< ::java::lang::CharSequence> android::content::res::Resources::getTextArray(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextArray", "(I)[Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::content::res::Resources::getStringArray(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArray", "(I)[Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< int32_t> android::content::res::Resources::getIntArray(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntArray", "(I)[I");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::content::res::TypedArray android::content::res::Resources::obtainTypedArray(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainTypedArray", "(I)Landroid/content/res/TypedArray;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

float android::content::res::Resources::getDimension(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimension", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t android::content::res::Resources::getDimensionPixelOffset(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimensionPixelOffset", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::content::res::Resources::getDimensionPixelSize(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimensionPixelSize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

float android::content::res::Resources::getFraction(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFraction", "(III)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable android::content::res::Resources::getDrawable(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "(I)Landroid/graphics/drawable/Drawable;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::res::Resources::getDrawableForDensity(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawableForDensity", "(II)Landroid/graphics/drawable/Drawable;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::Movie android::content::res::Resources::getMovie(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMovie", "(I)Landroid/graphics/Movie;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Movie _ret(ret);
    return _ret;
}

int32_t android::content::res::Resources::getColor(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColor", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::content::res::ColorStateList android::content::res::Resources::getColorStateList(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorStateList", "(I)Landroid/content/res/ColorStateList;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

bool android::content::res::Resources::getBoolean(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::res::Resources::getInteger(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInteger", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::content::res::XmlResourceParser android::content::res::Resources::getLayout(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayout", "(I)Landroid/content/res/XmlResourceParser;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::content::res::Resources::getAnimation(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimation", "(I)Landroid/content/res/XmlResourceParser;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::content::res::Resources::getXml(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXml", "(I)Landroid/content/res/XmlResourceParser;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::java::io::InputStream android::content::res::Resources::openRawResource(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "openRawResource", "(I)Ljava/io/InputStream;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream android::content::res::Resources::openRawResource(int32_t arg0, const ::android::util::TypedValue& arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "openRawResource", "(ILandroid/util/TypedValue;)Ljava/io/InputStream;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::res::Resources::openRawResourceFd(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "openRawResourceFd", "(I)Landroid/content/res/AssetFileDescriptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

void android::content::res::Resources::getValue(int32_t arg0, const ::android::util::TypedValue& arg1, bool arg2) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(ILandroid/util/TypedValue;Z)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::res::Resources::getValueForDensity(int32_t arg0, int32_t arg1, const ::android::util::TypedValue& arg2, bool arg3) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValueForDensity", "(IILandroid/util/TypedValue;Z)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::content::res::Resources::getValue(const ::java::lang::String& arg0, const ::android::util::TypedValue& arg1, bool arg2) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;Landroid/util/TypedValue;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::content::res::Resources_Theme android::content::res::Resources::newTheme() const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTheme", "()Landroid/content/res/Resources$Theme;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources_Theme _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::content::res::Resources::obtainAttributes(const ::android::util::AttributeSet& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainAttributes", "(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

void android::content::res::Resources::updateConfiguration(const ::android::content::res::Configuration& arg0, const ::android::util::DisplayMetrics& arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateConfiguration", "(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::util::DisplayMetrics android::content::res::Resources::getDisplayMetrics() const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayMetrics", "()Landroid/util/DisplayMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::DisplayMetrics _ret(ret);
    return _ret;
}

::android::content::res::Configuration android::content::res::Resources::getConfiguration() const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConfiguration", "()Landroid/content/res/Configuration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Configuration _ret(ret);
    return _ret;
}

int32_t android::content::res::Resources::getIdentifier(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdentifier", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::content::res::Resources::getResourceName(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::Resources::getResourcePackageName(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcePackageName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::Resources::getResourceTypeName(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceTypeName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::Resources::getResourceEntryName(int32_t arg0) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceEntryName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::res::Resources::parseBundleExtras(const ::android::content::res::XmlResourceParser& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseBundleExtras", "(Landroid/content/res/XmlResourceParser;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::res::Resources::parseBundleExtra(const ::java::lang::String& arg0, const ::android::util::AttributeSet& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseBundleExtra", "(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::content::res::AssetManager android::content::res::Resources::getAssets() const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssets", "()Landroid/content/res/AssetManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::AssetManager _ret(ret);
    return _ret;
}

void android::content::res::Resources::flushLayoutCache() const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "flushLayoutCache", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::res::Resources::finishPreloading() const {
    if (!::android::content::res::Resources::_class) ::android::content::res::Resources::_class = java::fetch_class("android/content/res/Resources");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishPreloading", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::content::res::ObbInfo::toString() const {
    if (!::android::content::res::ObbInfo::_class) ::android::content::res::ObbInfo::_class = java::fetch_class("android/content/res/ObbInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::res::ObbInfo::describeContents() const {
    if (!::android::content::res::ObbInfo::_class) ::android::content::res::ObbInfo::_class = java::fetch_class("android/content/res/ObbInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::res::ObbInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::res::ObbInfo::_class) ::android::content::res::ObbInfo::_class = java::fetch_class("android/content/res/ObbInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::AssetManager_AssetInputStream::getAssetInt() const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssetInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::res::AssetManager_AssetInputStream::read() const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::content::res::AssetManager_AssetInputStream::markSupported() const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::content::res::AssetManager_AssetInputStream::available() const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::res::AssetManager_AssetInputStream::close() const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::res::AssetManager_AssetInputStream::mark(int32_t arg0) const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::res::AssetManager_AssetInputStream::reset() const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::content::res::AssetManager_AssetInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::content::res::AssetManager_AssetInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::content::res::AssetManager_AssetInputStream::skip(int64_t arg0) const {
    if (!::android::content::res::AssetManager_AssetInputStream::_class) ::android::content::res::AssetManager_AssetInputStream::_class = java::fetch_class("android/content/res/AssetManager$AssetInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(const ::android::content::res::AssetFileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::android::os::ParcelFileDescriptor_AutoCloseOutputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/AssetFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::res::AssetFileDescriptor_AutoCloseOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::res::AssetFileDescriptor_AutoCloseOutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::res::AssetFileDescriptor_AutoCloseOutputStream::write(int32_t arg0) const {
    if (!::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class) ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream::_class = java::fetch_class("android/content/res/AssetFileDescriptor$AutoCloseOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::res::TypedArray::length() const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::res::TypedArray::getIndexCount() const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::res::TypedArray::getIndex(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::content::res::Resources android::content::res::TypedArray::getResources() const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::res::TypedArray::getText(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::TypedArray::getString(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::TypedArray::getNonResourceString(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNonResourceString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::content::res::TypedArray::getBoolean(int32_t arg0, bool arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::TypedArray::getInt(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::content::res::TypedArray::getFloat(int32_t arg0, float arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(IF)F");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::TypedArray::getColor(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColor", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::android::content::res::ColorStateList android::content::res::TypedArray::getColorStateList(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorStateList", "(I)Landroid/content/res/ColorStateList;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

int32_t android::content::res::TypedArray::getInteger(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInteger", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::content::res::TypedArray::getDimension(int32_t arg0, float arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimension", "(IF)F");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::TypedArray::getDimensionPixelOffset(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimensionPixelOffset", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::TypedArray::getDimensionPixelSize(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimensionPixelSize", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::TypedArray::getLayoutDimension(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDimension", "(ILjava/lang/String;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::TypedArray::getLayoutDimension(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDimension", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::content::res::TypedArray::getFraction(int32_t arg0, int32_t arg1, int32_t arg2, float arg3) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFraction", "(IIIF)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::content::res::TypedArray::getResourceId(int32_t arg0, int32_t arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceId", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::drawable::Drawable android::content::res::TypedArray::getDrawable(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "(I)Landroid/graphics/drawable/Drawable;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

std::vector< ::java::lang::CharSequence> android::content::res::TypedArray::getTextArray(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextArray", "(I)[Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::content::res::TypedArray::getValue(int32_t arg0, const ::android::util::TypedValue& arg1) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(ILandroid/util/TypedValue;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::content::res::TypedArray::hasValue(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasValue", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::util::TypedValue android::content::res::TypedArray::peekValue(int32_t arg0) const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekValue", "(I)Landroid/util/TypedValue;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::TypedValue _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::TypedArray::getPositionDescription() const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::res::TypedArray::recycle() const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::content::res::TypedArray::toString() const {
    if (!::android::content::res::TypedArray::_class) ::android::content::res::TypedArray::_class = java::fetch_class("android/content/res/TypedArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::AssetFileDescriptor::AssetFileDescriptor(const ::android::os::ParcelFileDescriptor& arg0, int64_t arg1, int64_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/ParcelFileDescriptor;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::os::ParcelFileDescriptor android::content::res::AssetFileDescriptor::getParcelFileDescriptor() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelFileDescriptor", "()Landroid/os/ParcelFileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::java::io::FileDescriptor android::content::res::AssetFileDescriptor::getFileDescriptor() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileDescriptor", "()Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileDescriptor _ret(ret);
    return _ret;
}

int64_t android::content::res::AssetFileDescriptor::getStartOffset() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartOffset", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::content::res::AssetFileDescriptor::getLength() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::content::res::AssetFileDescriptor::getDeclaredLength() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::content::res::AssetFileDescriptor::close() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::FileInputStream android::content::res::AssetFileDescriptor::createInputStream() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "createInputStream", "()Ljava/io/FileInputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileInputStream _ret(ret);
    return _ret;
}

::java::io::FileOutputStream android::content::res::AssetFileDescriptor::createOutputStream() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "createOutputStream", "()Ljava/io/FileOutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileOutputStream _ret(ret);
    return _ret;
}

::java::lang::String android::content::res::AssetFileDescriptor::toString() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::res::AssetFileDescriptor::describeContents() const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::res::AssetFileDescriptor::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::res::AssetFileDescriptor::_class) ::android::content::res::AssetFileDescriptor::_class = java::fetch_class("android/content/res/AssetFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::ColorStateList::ColorStateList(const std::vector< int32_t>& arg0, const std::vector< int32_t>& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([I[I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::res::ColorStateList android::content::res::ColorStateList::valueOf(int32_t arg0){
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(I)Landroid/content/res/ColorStateList;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

::android::content::res::ColorStateList android::content::res::ColorStateList::createFromXml(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1){
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromXml", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/content/res/ColorStateList;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

::android::content::res::ColorStateList android::content::res::ColorStateList::withAlpha(int32_t arg0) const {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "withAlpha", "(I)Landroid/content/res/ColorStateList;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

bool android::content::res::ColorStateList::isStateful() const {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::content::res::ColorStateList::getColorForState(const std::vector< int32_t>& arg0, int32_t arg1) const {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorForState", "([II)I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::res::ColorStateList::getDefaultColor() const {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::res::ColorStateList::toString() const {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::res::ColorStateList::describeContents() const {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::res::ColorStateList::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::res::ColorStateList::_class) ::android::content::res::ColorStateList::_class = java::fetch_class("android/content/res/ColorStateList");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::res::Configuration::Configuration() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::content::res::Configuration::isLayoutSizeAtLeast(int32_t arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLayoutSizeAtLeast", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::content::res::Configuration::setTo(const ::android::content::res::Configuration& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTo", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::content::res::Configuration::toString() const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::res::Configuration::setToDefaults() const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToDefaults", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::content::res::Configuration::updateFrom(const ::android::content::res::Configuration& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateFrom", "(Landroid/content/res/Configuration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::content::res::Configuration::diff(const ::android::content::res::Configuration& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "diff", "(Landroid/content/res/Configuration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::content::res::Configuration::needNewResources(int32_t arg0, int32_t arg1){
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "needNewResources", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

int32_t android::content::res::Configuration::describeContents() const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::res::Configuration::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::res::Configuration::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::res::Configuration::compareTo(const ::android::content::res::Configuration& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Landroid/content/res/Configuration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::content::res::Configuration::equals(const ::android::content::res::Configuration& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Landroid/content/res/Configuration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::content::res::Configuration::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::res::Configuration::hashCode() const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::res::Configuration::compareTo(const ::java::lang::Object& arg0) const {
    if (!::android::content::res::Configuration::_class) ::android::content::res::Configuration::_class = java::fetch_class("android/content/res/Configuration");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::content::res::Resources_Theme::applyStyle(int32_t arg0, bool arg1) const {
    if (!::android::content::res::Resources_Theme::_class) ::android::content::res::Resources_Theme::_class = java::fetch_class("android/content/res/Resources$Theme");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyStyle", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::res::Resources_Theme::setTo(const ::android::content::res::Resources_Theme& arg0) const {
    if (!::android::content::res::Resources_Theme::_class) ::android::content::res::Resources_Theme::_class = java::fetch_class("android/content/res/Resources$Theme");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTo", "(Landroid/content/res/Resources$Theme;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::TypedArray android::content::res::Resources_Theme::obtainStyledAttributes(const std::vector< int32_t>& arg0) const {
    if (!::android::content::res::Resources_Theme::_class) ::android::content::res::Resources_Theme::_class = java::fetch_class("android/content/res/Resources$Theme");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainStyledAttributes", "([I)Landroid/content/res/TypedArray;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::content::res::Resources_Theme::obtainStyledAttributes(int32_t arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::content::res::Resources_Theme::_class) ::android::content::res::Resources_Theme::_class = java::fetch_class("android/content/res/Resources$Theme");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainStyledAttributes", "(I[I)Landroid/content/res/TypedArray;");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::content::res::Resources_Theme::obtainStyledAttributes(const ::android::util::AttributeSet& arg0, const std::vector< int32_t>& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::content::res::Resources_Theme::_class) ::android::content::res::Resources_Theme::_class = java::fetch_class("android/content/res/Resources$Theme");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainStyledAttributes", "(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

bool android::content::res::Resources_Theme::resolveAttribute(int32_t arg0, const ::android::util::TypedValue& arg1, bool arg2) const {
    if (!::android::content::res::Resources_Theme::_class) ::android::content::res::Resources_Theme::_class = java::fetch_class("android/content/res/Resources$Theme");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveAttribute", "(ILandroid/util/TypedValue;Z)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::res::Resources_Theme::dump(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::content::res::Resources_Theme::_class) ::android::content::res::Resources_Theme::_class = java::fetch_class("android/content/res/Resources$Theme");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(ILjava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::content::res::ObbInfo android::content::res::ObbScanner::getObbInfo(const ::java::lang::String& arg0){
    if (!::android::content::res::ObbScanner::_class) ::android::content::res::ObbScanner::_class = java::fetch_class("android/content/res/ObbScanner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getObbInfo", "(Ljava/lang/String;)Landroid/content/res/ObbInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::res::ObbInfo _ret(ret);
    return _ret;
}

