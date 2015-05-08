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
class WifiConfiguration_KeyMgmt : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiConfiguration_KeyMgmt(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiConfiguration_KeyMgmt(const ::android::net::wifi::WifiConfiguration_KeyMgmt& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiConfiguration_KeyMgmt(::android::net::wifi::WifiConfiguration_KeyMgmt&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiConfiguration_KeyMgmt& operator=(const ::android::net::wifi::WifiConfiguration_KeyMgmt& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiConfiguration_KeyMgmt& operator=(::android::net::wifi::WifiConfiguration_KeyMgmt&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


