#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class Space : public virtual ::java::lang::Object,
              public virtual ::android::view::View {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Space(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Space(const ::android::support::v4::widget::Space& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    Space(::android::support::v4::widget::Space&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::Space& operator=(const ::android::support::v4::widget::Space& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::Space& operator=(::android::support::v4::widget::Space&& x) {obj = std::move(x.obj); return *this;}
    
    Space(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    Space(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Space(const ::android::content::Context&);
    void draw(const ::android::graphics::Canvas&) const;

};
}
}
}
}


