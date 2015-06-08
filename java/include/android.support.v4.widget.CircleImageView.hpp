#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ImageView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { namespace animation { class Animation_AnimationListener; } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class CircleImageView : public virtual ::java::lang::Object,
                        public virtual ::android::widget::ImageView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CircleImageView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::ImageView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CircleImageView(const ::android::support::v4::widget::CircleImageView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj;}
    CircleImageView(::android::support::v4::widget::CircleImageView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::CircleImageView& operator=(const ::android::support::v4::widget::CircleImageView& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::CircleImageView& operator=(::android::support::v4::widget::CircleImageView&& x) {obj = std::move(x.obj); return *this;}
    
    CircleImageView(const ::android::content::Context&, int32_t, float);
    void setAnimationListener(const ::android::view::animation::Animation_AnimationListener&) const;
    void onAnimationStart() const;
    void onAnimationEnd() const;
    void setBackgroundColorRes(int32_t) const;
    void setBackgroundColor(int32_t) const;

};
}
}
}
}

#include "android.support.v4.widget.CircleImageView_OvalShadow.hpp"

