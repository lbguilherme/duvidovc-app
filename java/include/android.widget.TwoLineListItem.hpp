#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.RelativeLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace widget {
class TwoLineListItem : public virtual ::java::lang::Object,
                        public virtual ::android::widget::RelativeLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TwoLineListItem(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::RelativeLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TwoLineListItem(const ::android::widget::TwoLineListItem& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {obj = x.obj;}
    TwoLineListItem(::android::widget::TwoLineListItem&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TwoLineListItem& operator=(const ::android::widget::TwoLineListItem& x) {obj = x.obj; return *this;}
    ::android::widget::TwoLineListItem& operator=(::android::widget::TwoLineListItem&& x) {obj = std::move(x.obj); return *this;}
    
    TwoLineListItem(const ::android::content::Context&);
    TwoLineListItem(const ::android::content::Context&, const ::android::util::AttributeSet&);
    TwoLineListItem(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ::android::widget::TextView getText1() const;
    ::android::widget::TextView getText2() const;

};
}
}


