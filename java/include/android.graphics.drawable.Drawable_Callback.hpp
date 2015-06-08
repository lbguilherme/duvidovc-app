#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace java { namespace lang { class Runnable; } }

namespace android {
namespace graphics {
namespace drawable {
class Drawable_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Drawable_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Drawable_Callback(const ::android::graphics::drawable::Drawable_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Drawable_Callback(::android::graphics::drawable::Drawable_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::Drawable_Callback& operator=(const ::android::graphics::drawable::Drawable_Callback& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::Drawable_Callback& operator=(::android::graphics::drawable::Drawable_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const;
    void scheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&, int64_t) const;
    void unscheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&) const;

};
}
}
}


