#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable_Callback.hpp"
#include "android.graphics.drawable.LayerDrawable.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace graphics {
namespace drawable {
class TransitionDrawable : public virtual ::java::lang::Object,
                           public virtual ::android::graphics::drawable::Drawable_Callback,
                           public virtual ::android::graphics::drawable::LayerDrawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransitionDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::graphics::drawable::LayerDrawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransitionDrawable(const ::android::graphics::drawable::TransitionDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::LayerDrawable((jobject)0) {obj = x.obj;}
    TransitionDrawable(::android::graphics::drawable::TransitionDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::LayerDrawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::TransitionDrawable& operator=(const ::android::graphics::drawable::TransitionDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::TransitionDrawable& operator=(::android::graphics::drawable::TransitionDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    TransitionDrawable(const std::vector< ::android::graphics::drawable::Drawable>&);
    void startTransition(int32_t) const;
    void resetTransition() const;
    void reverseTransition(int32_t) const;
    void draw(const ::android::graphics::Canvas&) const;
    void setCrossFadeEnabled(bool) const;
    bool isCrossFadeEnabled() const;

};
}
}
}


