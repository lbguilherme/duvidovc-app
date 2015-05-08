#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.shapes.OvalShape.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace support { namespace v4 { namespace widget { class CircleImageView; } } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class CircleImageView_OvalShadow : public virtual ::java::lang::Object,
                                   public virtual ::android::graphics::drawable::shapes::OvalShape {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CircleImageView_OvalShadow(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::shapes::OvalShape(_obj), ::android::graphics::drawable::shapes::RectShape(_obj), ::android::graphics::drawable::shapes::Shape(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CircleImageView_OvalShadow(const ::android::support::v4::widget::CircleImageView_OvalShadow& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::OvalShape((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    CircleImageView_OvalShadow(::android::support::v4::widget::CircleImageView_OvalShadow&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::OvalShape((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::CircleImageView_OvalShadow& operator=(const ::android::support::v4::widget::CircleImageView_OvalShadow& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::CircleImageView_OvalShadow& operator=(::android::support::v4::widget::CircleImageView_OvalShadow&& x) {obj = std::move(x.obj); return *this;}
    
    CircleImageView_OvalShadow(const ::android::support::v4::widget::CircleImageView&, int32_t, int32_t);
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Paint&) const ;

};
}
}
}
}


