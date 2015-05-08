#include "java-core.hpp"
#include <memory>
#include "dalvik.annotation.TestTarget.hpp"
#include "dalvik.annotation.TestTargetClass.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.String.hpp"

jclass dalvik::annotation::TestTarget::_class = nullptr;
jclass dalvik::annotation::TestTargetClass::_class = nullptr;

::java::lang::String dalvik::annotation::TestTarget::methodName() const {
    if (!::dalvik::annotation::TestTarget::_class) ::dalvik::annotation::TestTarget::_class = java::fetch_class("dalvik/annotation/TestTarget");
    static jmethodID mid = java::jni->GetMethodID(_class, "methodName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String dalvik::annotation::TestTarget::conceptName() const {
    if (!::dalvik::annotation::TestTarget::_class) ::dalvik::annotation::TestTarget::_class = java::fetch_class("dalvik/annotation/TestTarget");
    static jmethodID mid = java::jni->GetMethodID(_class, "conceptName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Class> dalvik::annotation::TestTarget::methodArgs() const {
    if (!::dalvik::annotation::TestTarget::_class) ::dalvik::annotation::TestTarget::_class = java::fetch_class("dalvik/annotation/TestTarget");
    static jmethodID mid = java::jni->GetMethodID(_class, "methodArgs", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Class dalvik::annotation::TestTargetClass::value() const {
    if (!::dalvik::annotation::TestTargetClass::_class) ::dalvik::annotation::TestTargetClass::_class = java::fetch_class("dalvik/annotation/TestTargetClass");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

