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
namespace gsm {
class GsmCellLocation : public virtual ::java::lang::Object,
                        public virtual ::android::telephony::CellLocation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GsmCellLocation(jobject _obj) : ::java::lang::Object(_obj), ::android::telephony::CellLocation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GsmCellLocation(const ::android::telephony::gsm::GsmCellLocation& x) : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {obj = x.obj;}
    GsmCellLocation(::android::telephony::gsm::GsmCellLocation&& x) : ::java::lang::Object((jobject)0), ::android::telephony::CellLocation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::gsm::GsmCellLocation& operator=(const ::android::telephony::gsm::GsmCellLocation& x) {obj = x.obj; return *this;}
    ::android::telephony::gsm::GsmCellLocation& operator=(::android::telephony::gsm::GsmCellLocation&& x) {obj = std::move(x.obj); return *this;}
    
    GsmCellLocation();
    GsmCellLocation(const ::android::os::Bundle&);
    int32_t getLac() const;
    int32_t getCid() const;
    int32_t getPsc() const;
    void setStateInvalid() const;
    void setLacAndCid(int32_t, int32_t) const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    void fillInNotifierBundle(const ::android::os::Bundle&) const;

};
}
}
}


