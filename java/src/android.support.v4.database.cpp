#include "java-core.hpp"
#include <memory>
#include "android.support.v4.database.DatabaseUtilsCompat.hpp"
#include "java.lang.String.hpp"

jclass android::support::v4::database::DatabaseUtilsCompat::_class = nullptr;

::java::lang::String android::support::v4::database::DatabaseUtilsCompat::concatenateWhere(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::support::v4::database::DatabaseUtilsCompat::_class) ::android::support::v4::database::DatabaseUtilsCompat::_class = java::fetch_class("android/support/v4/database/DatabaseUtilsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "concatenateWhere", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::support::v4::database::DatabaseUtilsCompat::appendSelectionArgs(const std::vector< ::java::lang::String>& arg0, const std::vector< ::java::lang::String>& arg1){
    if (!::android::support::v4::database::DatabaseUtilsCompat::_class) ::android::support::v4::database::DatabaseUtilsCompat::_class = java::fetch_class("android/support/v4/database/DatabaseUtilsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "appendSelectionArgs", "([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

