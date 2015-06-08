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
namespace java { namespace lang { class String; } }

namespace android {
namespace accounts {
class AccountAuthenticatorResponse : public virtual ::java::lang::Object,
                                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccountAuthenticatorResponse(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccountAuthenticatorResponse(const ::android::accounts::AccountAuthenticatorResponse& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    AccountAuthenticatorResponse(::android::accounts::AccountAuthenticatorResponse&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::AccountAuthenticatorResponse& operator=(const ::android::accounts::AccountAuthenticatorResponse& x) {obj = x.obj; return *this;}
    ::android::accounts::AccountAuthenticatorResponse& operator=(::android::accounts::AccountAuthenticatorResponse&& x) {obj = std::move(x.obj); return *this;}
    
    AccountAuthenticatorResponse(const ::android::os::Parcel&);
    void onResult(const ::android::os::Bundle&) const;
    void onRequestContinued() const;
    void onError(int32_t, const ::java::lang::String&) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


