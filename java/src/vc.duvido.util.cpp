#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.util.UUID.hpp"
#include "vc.duvido.util.DeviceId.hpp"

jclass vc::duvido::util::DeviceId::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::util::DeviceId::DeviceId() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::util::DeviceId::_class) ::vc::duvido::util::DeviceId::_class = java::fetch_class("vc/duvido/util/DeviceId");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::UUID vc::duvido::util::DeviceId::getUuid(){
    if (!::vc::duvido::util::DeviceId::_class) ::vc::duvido::util::DeviceId::_class = java::fetch_class("vc/duvido/util/DeviceId");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUuid", "()Ljava/util/UUID;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::UUID _ret(ret);
    return _ret;
}

::java::lang::String vc::duvido::util::DeviceId::getString(){
    if (!::vc::duvido::util::DeviceId::_class) ::vc::duvido::util::DeviceId::_class = java::fetch_class("vc/duvido/util/DeviceId");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

