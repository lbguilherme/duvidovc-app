#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class NetworkInfo; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class ConnectivityManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectivityManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectivityManager(const ::android::net::ConnectivityManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnectivityManager(::android::net::ConnectivityManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::ConnectivityManager& operator=(const ::android::net::ConnectivityManager& x) {obj = x.obj; return *this;}
    ::android::net::ConnectivityManager& operator=(::android::net::ConnectivityManager&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isNetworkTypeValid(int32_t);
    void setNetworkPreference(int32_t) const ;
    int32_t getNetworkPreference() const ;
    ::android::net::NetworkInfo getActiveNetworkInfo() const ;
    ::android::net::NetworkInfo getNetworkInfo(int32_t) const ;
    std::vector< ::android::net::NetworkInfo> getAllNetworkInfo() const ;
    int32_t startUsingNetworkFeature(int32_t, const ::java::lang::String&) const ;
    int32_t stopUsingNetworkFeature(int32_t, const ::java::lang::String&) const ;
    bool requestRouteToHost(int32_t, int32_t) const ;
    bool getBackgroundDataSetting() const ;

};
}
}


