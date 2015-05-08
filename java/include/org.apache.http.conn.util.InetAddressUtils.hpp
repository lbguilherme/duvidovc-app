#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace util {
class InetAddressUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InetAddressUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InetAddressUtils(const ::org::apache::http::conn::util::InetAddressUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InetAddressUtils(::org::apache::http::conn::util::InetAddressUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::util::InetAddressUtils& operator=(const ::org::apache::http::conn::util::InetAddressUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::util::InetAddressUtils& operator=(::org::apache::http::conn::util::InetAddressUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isIPv4Address(const ::java::lang::String&);
    static bool isIPv6StdAddress(const ::java::lang::String&);
    static bool isIPv6HexCompressedAddress(const ::java::lang::String&);
    static bool isIPv6Address(const ::java::lang::String&);

};
}
}
}
}
}


