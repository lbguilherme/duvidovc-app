#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace com { namespace facebook { namespace login { class LoginClient_Request; } } }

namespace com {
namespace facebook {
namespace login {
class LoginClient : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginClient(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginClient(const ::com::facebook::login::LoginClient& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    LoginClient(::com::facebook::login::LoginClient&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginClient& operator=(const ::com::facebook::login::LoginClient& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginClient& operator=(::com::facebook::login::LoginClient&& x) {obj = std::move(x.obj); return *this;}
    
    LoginClient(const ::android::support::v4::app::Fragment&);
    ::android::support::v4::app::Fragment getFragment() const;
    ::com::facebook::login::LoginClient_Request getPendingRequest() const;
    static int32_t getLoginRequestCode();
    bool onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const;
    LoginClient(const ::android::os::Parcel&);
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}

#include "com.facebook.login.LoginClient_BackgroundProcessingListener.hpp"
#include "com.facebook.login.LoginClient_OnCompletedListener.hpp"
#include "com.facebook.login.LoginClient_PermissionsPair.hpp"
#include "com.facebook.login.LoginClient_Request.hpp"
#include "com.facebook.login.LoginClient_Result.hpp"
#include "com.facebook.login.LoginClient_Result_Code.hpp"

