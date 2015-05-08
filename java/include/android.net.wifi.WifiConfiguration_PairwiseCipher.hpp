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
class WifiConfiguration_PairwiseCipher : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiConfiguration_PairwiseCipher(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiConfiguration_PairwiseCipher(const ::android::net::wifi::WifiConfiguration_PairwiseCipher& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiConfiguration_PairwiseCipher(::android::net::wifi::WifiConfiguration_PairwiseCipher&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiConfiguration_PairwiseCipher& operator=(const ::android::net::wifi::WifiConfiguration_PairwiseCipher& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiConfiguration_PairwiseCipher& operator=(::android::net::wifi::WifiConfiguration_PairwiseCipher&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


