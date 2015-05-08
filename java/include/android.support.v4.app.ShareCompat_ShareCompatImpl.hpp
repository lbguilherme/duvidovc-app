#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace app { class ShareCompat_IntentBuilder; } } } }
namespace android { namespace view { class MenuItem; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ShareCompat_ShareCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareCompat_ShareCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareCompat_ShareCompatImpl(const ::android::support::v4::app::ShareCompat_ShareCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareCompat_ShareCompatImpl(::android::support::v4::app::ShareCompat_ShareCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ShareCompat_ShareCompatImpl& operator=(const ::android::support::v4::app::ShareCompat_ShareCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ShareCompat_ShareCompatImpl& operator=(::android::support::v4::app::ShareCompat_ShareCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void configureMenuItem(const ::android::view::MenuItem&, const ::android::support::v4::app::ShareCompat_IntentBuilder&) const ;
    ::java::lang::String escapeHtml(const ::java::lang::CharSequence&) const ;

};
}
}
}
}


