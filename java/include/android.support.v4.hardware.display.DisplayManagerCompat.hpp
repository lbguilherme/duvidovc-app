#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace support { namespace v4 { namespace hardware { namespace display { class DisplayManagerCompat; } } } } }
namespace android { namespace view { class Display; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace hardware {
namespace display {
class DisplayManagerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DisplayManagerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DisplayManagerCompat(const ::android::support::v4::hardware::display::DisplayManagerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DisplayManagerCompat(::android::support::v4::hardware::display::DisplayManagerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::hardware::display::DisplayManagerCompat& operator=(const ::android::support::v4::hardware::display::DisplayManagerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::hardware::display::DisplayManagerCompat& operator=(::android::support::v4::hardware::display::DisplayManagerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::hardware::display::DisplayManagerCompat getInstance(const ::android::content::Context&);
    ::android::view::Display getDisplay(int32_t) const;
    std::vector< ::android::view::Display> getDisplays() const;
    std::vector< ::android::view::Display> getDisplays(const ::java::lang::String&) const;

};
}
}
}
}
}

#include "android.support.v4.hardware.display.DisplayManagerCompat_JellybeanMr1Impl.hpp"
#include "android.support.v4.hardware.display.DisplayManagerCompat_LegacyImpl.hpp"

