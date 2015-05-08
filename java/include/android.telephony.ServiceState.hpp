#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
class ServiceState : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServiceState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServiceState(const ::android::telephony::ServiceState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ServiceState(::android::telephony::ServiceState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::ServiceState& operator=(const ::android::telephony::ServiceState& x) {obj = x.obj; return *this;}
    ::android::telephony::ServiceState& operator=(::android::telephony::ServiceState&& x) {obj = std::move(x.obj); return *this;}
    
    ServiceState();
    ServiceState(const ::android::os::Parcel&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;
    int32_t getState() const ;
    bool getRoaming() const ;
    ::java::lang::String getOperatorAlphaLong() const ;
    ::java::lang::String getOperatorAlphaShort() const ;
    ::java::lang::String getOperatorNumeric() const ;
    bool getIsManualSelection() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;
    void setStateOutOfService() const ;
    void setStateOff() const ;
    void setState(int32_t) const ;
    void setRoaming(bool) const ;
    void setOperatorName(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void setIsManualSelection(bool) const ;

};
}
}


