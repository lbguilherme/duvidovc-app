#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace net {
namespace wifi {
class WifiConfiguration_Status : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiConfiguration_Status(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiConfiguration_Status(const ::android::net::wifi::WifiConfiguration_Status& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiConfiguration_Status(::android::net::wifi::WifiConfiguration_Status&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiConfiguration_Status& operator=(const ::android::net::wifi::WifiConfiguration_Status& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiConfiguration_Status& operator=(::android::net::wifi::WifiConfiguration_Status&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


