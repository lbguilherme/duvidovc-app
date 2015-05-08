#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipProfile : public virtual ::java::lang::Object,
                   public virtual ::android::os::Parcelable,
                   public virtual ::java::io::Serializable,
                   public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipProfile(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipProfile(const ::android::net::sip::SipProfile& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    SipProfile(::android::net::sip::SipProfile&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipProfile& operator=(const ::android::net::sip::SipProfile& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipProfile& operator=(::android::net::sip::SipProfile&& x) {obj = std::move(x.obj); return *this;}
    
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;
    ::java::lang::String getUriString() const ;
    ::java::lang::String getDisplayName() const ;
    ::java::lang::String getUserName() const ;
    ::java::lang::String getAuthUserName() const ;
    ::java::lang::String getPassword() const ;
    ::java::lang::String getSipDomain() const ;
    int32_t getPort() const ;
    ::java::lang::String getProtocol() const ;
    ::java::lang::String getProxyAddress() const ;
    ::java::lang::String getProfileName() const ;
    bool getSendKeepAlive() const ;
    bool getAutoRegistration() const ;

};
}
}
}

#include "android.net.sip.SipProfile_Builder.hpp"

