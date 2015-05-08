#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.hardware.display.DisplayManagerCompat.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class Display; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace hardware {
namespace display {
class DisplayManagerCompat_LegacyImpl : public virtual ::java::lang::Object,
                                        public virtual ::android::support::v4::hardware::display::DisplayManagerCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DisplayManagerCompat_LegacyImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::hardware::display::DisplayManagerCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DisplayManagerCompat_LegacyImpl(const ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::hardware::display::DisplayManagerCompat((jobject)0) {obj = x.obj;}
    DisplayManagerCompat_LegacyImpl(::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::hardware::display::DisplayManagerCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl& operator=(const ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl& operator=(::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl&& x) {obj = std::move(x.obj); return *this;}
    
    DisplayManagerCompat_LegacyImpl(const ::android::content::Context&);
    ::android::view::Display getDisplay(int32_t) const ;
    std::vector< ::android::view::Display> getDisplays() const ;
    std::vector< ::android::view::Display> getDisplays(const ::java::lang::String&) const ;

};
}
}
}
}
}


