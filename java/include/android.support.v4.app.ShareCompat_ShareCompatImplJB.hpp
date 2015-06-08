#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.ShareCompat_ShareCompatImplICS.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ShareCompat_ShareCompatImplJB : public virtual ::java::lang::Object,
                                      public virtual ::android::support::v4::app::ShareCompat_ShareCompatImplICS {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareCompat_ShareCompatImplJB(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::ShareCompat_ShareCompatImpl(_obj), ::android::support::v4::app::ShareCompat_ShareCompatImplBase(_obj), ::android::support::v4::app::ShareCompat_ShareCompatImplICS(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareCompat_ShareCompatImplJB(const ::android::support::v4::app::ShareCompat_ShareCompatImplJB& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImpl((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImplBase((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImplICS((jobject)0) {obj = x.obj;}
    ShareCompat_ShareCompatImplJB(::android::support::v4::app::ShareCompat_ShareCompatImplJB&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImpl((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImplBase((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImplICS((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ShareCompat_ShareCompatImplJB& operator=(const ::android::support::v4::app::ShareCompat_ShareCompatImplJB& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ShareCompat_ShareCompatImplJB& operator=(::android::support::v4::app::ShareCompat_ShareCompatImplJB&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String escapeHtml(const ::java::lang::CharSequence&) const;

};
}
}
}
}


