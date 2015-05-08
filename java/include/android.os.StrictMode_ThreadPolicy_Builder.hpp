#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class StrictMode_ThreadPolicy; } }
namespace android { namespace os { class StrictMode_ThreadPolicy_Builder; } }

namespace android {
namespace os {
class StrictMode_ThreadPolicy_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StrictMode_ThreadPolicy_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StrictMode_ThreadPolicy_Builder(const ::android::os::StrictMode_ThreadPolicy_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StrictMode_ThreadPolicy_Builder(::android::os::StrictMode_ThreadPolicy_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::StrictMode_ThreadPolicy_Builder& operator=(const ::android::os::StrictMode_ThreadPolicy_Builder& x) {obj = x.obj; return *this;}
    ::android::os::StrictMode_ThreadPolicy_Builder& operator=(::android::os::StrictMode_ThreadPolicy_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    StrictMode_ThreadPolicy_Builder();
    StrictMode_ThreadPolicy_Builder(const ::android::os::StrictMode_ThreadPolicy&);
    ::android::os::StrictMode_ThreadPolicy_Builder detectAll() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder permitAll() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder detectNetwork() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder permitNetwork() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder detectDiskReads() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder permitDiskReads() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder detectCustomSlowCalls() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder permitCustomSlowCalls() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder detectDiskWrites() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder permitDiskWrites() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder penaltyDialog() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder penaltyDeath() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder penaltyDeathOnNetwork() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder penaltyFlashScreen() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder penaltyLog() const ;
    ::android::os::StrictMode_ThreadPolicy_Builder penaltyDropBox() const ;
    ::android::os::StrictMode_ThreadPolicy build() const ;

};
}
}


