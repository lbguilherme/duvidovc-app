#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace accounts { class AuthenticatorDescription; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace accounts {
class AuthenticatorDescription : public virtual ::java::lang::Object,
                                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthenticatorDescription(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthenticatorDescription(const ::android::accounts::AuthenticatorDescription& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    AuthenticatorDescription(::android::accounts::AuthenticatorDescription&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::AuthenticatorDescription& operator=(const ::android::accounts::AuthenticatorDescription& x) {obj = x.obj; return *this;}
    ::android::accounts::AuthenticatorDescription& operator=(::android::accounts::AuthenticatorDescription&& x) {obj = std::move(x.obj); return *this;}
    
    AuthenticatorDescription(const ::java::lang::String&, const ::java::lang::String&, int32_t, int32_t, int32_t, int32_t, bool);
    AuthenticatorDescription(const ::java::lang::String&, const ::java::lang::String&, int32_t, int32_t, int32_t, int32_t);
    static ::android::accounts::AuthenticatorDescription newKey(const ::java::lang::String&);
    int32_t describeContents() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}


