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
class WifiConfiguration_GroupCipher : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiConfiguration_GroupCipher(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiConfiguration_GroupCipher(const ::android::net::wifi::WifiConfiguration_GroupCipher& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiConfiguration_GroupCipher(::android::net::wifi::WifiConfiguration_GroupCipher&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiConfiguration_GroupCipher& operator=(const ::android::net::wifi::WifiConfiguration_GroupCipher& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiConfiguration_GroupCipher& operator=(::android::net::wifi::WifiConfiguration_GroupCipher&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


