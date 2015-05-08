#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.login.LoginMethodHandler.hpp"

namespace android { namespace os { class Parcel; } }

namespace com {
namespace facebook {
namespace login {
class KatanaProxyLoginMethodHandler : public virtual ::java::lang::Object,
                                      public virtual ::com::facebook::login::LoginMethodHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KatanaProxyLoginMethodHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::com::facebook::login::LoginMethodHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KatanaProxyLoginMethodHandler(const ::com::facebook::login::KatanaProxyLoginMethodHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::login::LoginMethodHandler((jobject)0) {obj = x.obj;}
    KatanaProxyLoginMethodHandler(::com::facebook::login::KatanaProxyLoginMethodHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::login::LoginMethodHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::KatanaProxyLoginMethodHandler& operator=(const ::com::facebook::login::KatanaProxyLoginMethodHandler& x) {obj = x.obj; return *this;}
    ::com::facebook::login::KatanaProxyLoginMethodHandler& operator=(::com::facebook::login::KatanaProxyLoginMethodHandler&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}


