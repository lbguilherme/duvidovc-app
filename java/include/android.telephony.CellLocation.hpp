#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace telephony { class CellLocation; } }

namespace android {
namespace telephony {
class CellLocation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CellLocation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CellLocation(const ::android::telephony::CellLocation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CellLocation(::android::telephony::CellLocation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::CellLocation& operator=(const ::android::telephony::CellLocation& x) {obj = x.obj; return *this;}
    ::android::telephony::CellLocation& operator=(::android::telephony::CellLocation&& x) {obj = std::move(x.obj); return *this;}
    
    CellLocation();
    static void requestLocationUpdate();
    static ::android::telephony::CellLocation getEmpty();

};
}
}


