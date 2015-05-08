#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable_Callback.hpp"
#include "android.graphics.drawable.InsetDrawable.hpp"

namespace android { namespace graphics { class Canvas; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActionBarDrawerToggle_SlideDrawable : public virtual ::java::lang::Object,
                                            public virtual ::android::graphics::drawable::Drawable_Callback,
                                            public virtual ::android::graphics::drawable::InsetDrawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBarDrawerToggle_SlideDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::graphics::drawable::InsetDrawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBarDrawerToggle_SlideDrawable(const ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::InsetDrawable((jobject)0) {obj = x.obj;}
    ActionBarDrawerToggle_SlideDrawable(::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::InsetDrawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable& operator=(const ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable& operator=(::android::support::v4::app::ActionBarDrawerToggle_SlideDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    void setPosition(float) const ;
    float getPosition() const ;
    void setOffset(float) const ;
    void draw(const ::android::graphics::Canvas&) const ;

};
}
}
}
}


