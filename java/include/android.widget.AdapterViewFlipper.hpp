#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AdapterViewAnimator.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class Adapter; } }

namespace android {
namespace widget {
class AdapterViewFlipper : public virtual ::java::lang::Object,
                           public virtual ::android::widget::AdapterViewAnimator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AdapterViewFlipper(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AdapterView(_obj), ::android::widget::AdapterViewAnimator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AdapterViewFlipper(const ::android::widget::AdapterViewFlipper& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {obj = x.obj;}
    AdapterViewFlipper(::android::widget::AdapterViewFlipper&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AdapterViewFlipper& operator=(const ::android::widget::AdapterViewFlipper& x) {obj = x.obj; return *this;}
    ::android::widget::AdapterViewFlipper& operator=(::android::widget::AdapterViewFlipper&& x) {obj = std::move(x.obj); return *this;}
    
    AdapterViewFlipper(const ::android::content::Context&);
    AdapterViewFlipper(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setAdapter(const ::android::widget::Adapter&) const ;
    void setFlipInterval(int32_t) const ;
    void startFlipping() const ;
    void stopFlipping() const ;
    void showNext() const ;
    void showPrevious() const ;
    bool isFlipping() const ;
    void setAutoStart(bool) const ;
    bool isAutoStart() const ;
    void fyiWillBeAdvancedByHostKThx() const ;

};
}
}


