#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.telephony.CellLocation.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
namespace cdma {
class CdmaCellLocation : public virtual ::java::lang::Object,
                         public virtual ::android::telephony::CellLocation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CdmaCellLocation(jobject _obj) : ::java::lang::Object(_obj), ::android::telephony::CellLocation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CdmaCellLocation(const ::android::telephony::cdma::CdmaCellLocation& x) : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {obj = x.obj;}
    CdmaCellLocation(::android::telephony::cdma::CdmaCellLocation&& x) : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::cdma::CdmaCellLocation& operator=(const ::android::telephony::cdma::CdmaCellLocation& x) {obj = x.obj; return *this;}
    ::android::telephony::cdma::CdmaCellLocation& operator=(::android::telephony::cdma::CdmaCellLocation&& x) {obj = std::move(x.obj); return *this;}
    
    CdmaCellLocation();
    CdmaCellLocation(const ::android::os::Bundle&);
    int32_t getBaseStationId() const;
    int32_t getBaseStationLatitude() const;
    int32_t getBaseStationLongitude() const;
    int32_t getSystemId() const;
    int32_t getNetworkId() const;
    void setStateInvalid() const;
    void setCellLocationData(int32_t, int32_t, int32_t) const;
    void setCellLocationData(int32_t, int32_t, int32_t, int32_t, int32_t) const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    void fillInNotifierBundle(const ::android::os::Bundle&) const;

};
}
}
}


