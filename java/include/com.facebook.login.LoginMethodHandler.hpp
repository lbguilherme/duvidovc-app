#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { class AccessToken; } }
namespace com { namespace facebook { class AccessTokenSource; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }

namespace com {
namespace facebook {
namespace login {
class LoginMethodHandler : public virtual ::java::lang::Object,
                           public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginMethodHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginMethodHandler(const ::com::facebook::login::LoginMethodHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    LoginMethodHandler(::com::facebook::login::LoginMethodHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginMethodHandler& operator=(const ::com::facebook::login::LoginMethodHandler& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginMethodHandler& operator=(::com::facebook::login::LoginMethodHandler&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::AccessToken createAccessTokenFromWebBundle(const ::java::util::Collection&, const ::android::os::Bundle&, const ::com::facebook::AccessTokenSource&, const ::java::lang::String&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


