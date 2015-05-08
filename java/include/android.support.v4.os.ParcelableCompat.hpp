#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace os {
class ParcelableCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParcelableCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParcelableCompat(const ::android::support::v4::os::ParcelableCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ParcelableCompat(::android::support::v4::os::ParcelableCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::os::ParcelableCompat& operator=(const ::android::support::v4::os::ParcelableCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::os::ParcelableCompat& operator=(::android::support::v4::os::ParcelableCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ParcelableCompat();

};
}
}
}
}

#include "android.support.v4.os.ParcelableCompat_CompatCreator.hpp"

