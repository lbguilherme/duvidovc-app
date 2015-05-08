#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"

namespace android { namespace os { class Message; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler : public virtual ::java::lang::Object,
                                                                           public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler(const ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler(::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler& operator=(const ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler& operator=(::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void handleMessage(const ::android::os::Message&) const ;

};
}
}
}
}


