#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.net.Uri.hpp"
#include "android.support.v4.provider.DocumentFile.hpp"
#include "android.support.v4.provider.RawDocumentFile.hpp"
#include "android.support.v4.provider.SingleDocumentFile.hpp"
#include "android.support.v4.provider.TreeDocumentFile.hpp"
#include "java.io.File.hpp"
#include "java.lang.String.hpp"

jclass android::support::v4::provider::RawDocumentFile::_class = nullptr;
jclass android::support::v4::provider::DocumentFile::_class = nullptr;
jclass android::support::v4::provider::SingleDocumentFile::_class = nullptr;
jclass android::support::v4::provider::TreeDocumentFile::_class = nullptr;

::android::support::v4::provider::DocumentFile android::support::v4::provider::RawDocumentFile::createFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFile", "(Ljava/lang/String;Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::RawDocumentFile::createDirectory(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDirectory", "(Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::provider::RawDocumentFile::getUri() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::RawDocumentFile::getName() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::RawDocumentFile::getType() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::provider::RawDocumentFile::isDirectory() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirectory", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::RawDocumentFile::isFile() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFile", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t android::support::v4::provider::RawDocumentFile::lastModified() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastModified", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::provider::RawDocumentFile::length() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::support::v4::provider::RawDocumentFile::canRead() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canRead", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::RawDocumentFile::canWrite() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canWrite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::RawDocumentFile::delete_() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::RawDocumentFile::exists() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "exists", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::android::support::v4::provider::DocumentFile> android::support::v4::provider::RawDocumentFile::listFiles() const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "listFiles", "()[Landroid/support/v4/provider/DocumentFile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::provider::DocumentFile> _ret(rets, ::android::support::v4::provider::DocumentFile((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::provider::DocumentFile retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::provider::RawDocumentFile::renameTo(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::RawDocumentFile::_class) ::android::support::v4::provider::RawDocumentFile::_class = java::fetch_class("android/support/v4/provider/RawDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "renameTo", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::DocumentFile::fromFile(const ::java::io::File& arg0){
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromFile", "(Ljava/io/File;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::DocumentFile::fromSingleUri(const ::android::content::Context& arg0, const ::android::net::Uri& arg1){
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromSingleUri", "(Landroid/content/Context;Landroid/net/Uri;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::DocumentFile::fromTreeUri(const ::android::content::Context& arg0, const ::android::net::Uri& arg1){
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromTreeUri", "(Landroid/content/Context;Landroid/net/Uri;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

bool android::support::v4::provider::DocumentFile::isDocumentUri(const ::android::content::Context& arg0, const ::android::net::Uri& arg1){
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDocumentUri", "(Landroid/content/Context;Landroid/net/Uri;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::DocumentFile::createFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFile", "(Ljava/lang/String;Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::DocumentFile::createDirectory(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDirectory", "(Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::provider::DocumentFile::getUri() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::DocumentFile::getName() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::DocumentFile::getType() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::DocumentFile::getParentFile() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentFile", "()Landroid/support/v4/provider/DocumentFile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

bool android::support::v4::provider::DocumentFile::isDirectory() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirectory", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::DocumentFile::isFile() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFile", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t android::support::v4::provider::DocumentFile::lastModified() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastModified", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::provider::DocumentFile::length() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::support::v4::provider::DocumentFile::canRead() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canRead", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::DocumentFile::canWrite() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canWrite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::DocumentFile::delete_() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::DocumentFile::exists() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "exists", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::android::support::v4::provider::DocumentFile> android::support::v4::provider::DocumentFile::listFiles() const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "listFiles", "()[Landroid/support/v4/provider/DocumentFile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::provider::DocumentFile> _ret(rets, ::android::support::v4::provider::DocumentFile((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::provider::DocumentFile retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::DocumentFile::findFile(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFile", "(Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

bool android::support::v4::provider::DocumentFile::renameTo(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::DocumentFile::_class) ::android::support::v4::provider::DocumentFile::_class = java::fetch_class("android/support/v4/provider/DocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "renameTo", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::SingleDocumentFile::createFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFile", "(Ljava/lang/String;Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::SingleDocumentFile::createDirectory(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDirectory", "(Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::provider::SingleDocumentFile::getUri() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::SingleDocumentFile::getName() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::SingleDocumentFile::getType() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::provider::SingleDocumentFile::isDirectory() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirectory", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::SingleDocumentFile::isFile() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFile", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t android::support::v4::provider::SingleDocumentFile::lastModified() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastModified", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::provider::SingleDocumentFile::length() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::support::v4::provider::SingleDocumentFile::canRead() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canRead", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::SingleDocumentFile::canWrite() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canWrite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::SingleDocumentFile::delete_() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::SingleDocumentFile::exists() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "exists", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::android::support::v4::provider::DocumentFile> android::support::v4::provider::SingleDocumentFile::listFiles() const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "listFiles", "()[Landroid/support/v4/provider/DocumentFile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::provider::DocumentFile> _ret(rets, ::android::support::v4::provider::DocumentFile((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::provider::DocumentFile retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::provider::SingleDocumentFile::renameTo(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::SingleDocumentFile::_class) ::android::support::v4::provider::SingleDocumentFile::_class = java::fetch_class("android/support/v4/provider/SingleDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "renameTo", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::TreeDocumentFile::createFile(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFile", "(Ljava/lang/String;Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::support::v4::provider::DocumentFile android::support::v4::provider::TreeDocumentFile::createDirectory(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDirectory", "(Ljava/lang/String;)Landroid/support/v4/provider/DocumentFile;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::provider::DocumentFile _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::provider::TreeDocumentFile::getUri() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::TreeDocumentFile::getName() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::provider::TreeDocumentFile::getType() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::provider::TreeDocumentFile::isDirectory() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirectory", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::TreeDocumentFile::isFile() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFile", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t android::support::v4::provider::TreeDocumentFile::lastModified() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastModified", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::support::v4::provider::TreeDocumentFile::length() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::support::v4::provider::TreeDocumentFile::canRead() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canRead", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::TreeDocumentFile::canWrite() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "canWrite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::TreeDocumentFile::delete_() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::provider::TreeDocumentFile::exists() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "exists", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::android::support::v4::provider::DocumentFile> android::support::v4::provider::TreeDocumentFile::listFiles() const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "listFiles", "()[Landroid/support/v4/provider/DocumentFile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::provider::DocumentFile> _ret(rets, ::android::support::v4::provider::DocumentFile((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::provider::DocumentFile retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::support::v4::provider::TreeDocumentFile::renameTo(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::provider::TreeDocumentFile::_class) ::android::support::v4::provider::TreeDocumentFile::_class = java::fetch_class("android/support/v4/provider/TreeDocumentFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "renameTo", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

