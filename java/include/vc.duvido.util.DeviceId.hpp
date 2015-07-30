#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class UUID; } }

namespace vc {
namespace duvido {
namespace util {
class DeviceId : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DeviceId(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DeviceId(const ::vc::duvido::util::DeviceId& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DeviceId(::vc::duvido::util::DeviceId&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::util::DeviceId& operator=(const ::vc::duvido::util::DeviceId& x) {obj = x.obj; return *this;}
    ::vc::duvido::util::DeviceId& operator=(::vc::duvido::util::DeviceId&& x) {obj = std::move(x.obj); return *this;}
    
    DeviceId();
    static ::java::util::UUID getUuid();
    static ::java::lang::String getString();

};
}
}
}


