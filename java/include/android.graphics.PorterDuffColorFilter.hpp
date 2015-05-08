#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.ColorFilter.hpp"

namespace android { namespace graphics { class PorterDuff_Mode; } }

namespace android {
namespace graphics {
class PorterDuffColorFilter : public virtual ::java::lang::Object,
                              public virtual ::android::graphics::ColorFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PorterDuffColorFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::ColorFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PorterDuffColorFilter(const ::android::graphics::PorterDuffColorFilter& x) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {obj = x.obj;}
    PorterDuffColorFilter(::android::graphics::PorterDuffColorFilter&& x) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PorterDuffColorFilter& operator=(const ::android::graphics::PorterDuffColorFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::PorterDuffColorFilter& operator=(::android::graphics::PorterDuffColorFilter&& x) {obj = std::move(x.obj); return *this;}
    
    PorterDuffColorFilter(int32_t, const ::android::graphics::PorterDuff_Mode&);

};
}
}


