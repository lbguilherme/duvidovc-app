#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace graphics {
namespace drawable {
class Drawable_ConstantState : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Drawable_ConstantState(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Drawable_ConstantState(const ::android::graphics::drawable::Drawable_ConstantState& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Drawable_ConstantState(::android::graphics::drawable::Drawable_ConstantState&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::Drawable_ConstantState& operator=(const ::android::graphics::drawable::Drawable_ConstantState& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::Drawable_ConstantState& operator=(::android::graphics::drawable::Drawable_ConstantState&& x) {obj = std::move(x.obj); return *this;}
    
    Drawable_ConstantState();
    ::android::graphics::drawable::Drawable newDrawable() const;
    ::android::graphics::drawable::Drawable newDrawable(const ::android::content::res::Resources&) const;
    int32_t getChangingConfigurations() const;

};
}
}
}


