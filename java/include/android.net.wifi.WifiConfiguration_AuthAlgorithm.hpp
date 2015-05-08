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
class WifiConfiguration_AuthAlgorithm : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiConfiguration_AuthAlgorithm(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiConfiguration_AuthAlgorithm(const ::android::net::wifi::WifiConfiguration_AuthAlgorithm& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiConfiguration_AuthAlgorithm(::android::net::wifi::WifiConfiguration_AuthAlgorithm&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiConfiguration_AuthAlgorithm& operator=(const ::android::net::wifi::WifiConfiguration_AuthAlgorithm& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiConfiguration_AuthAlgorithm& operator=(::android::net::wifi::WifiConfiguration_AuthAlgorithm&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


