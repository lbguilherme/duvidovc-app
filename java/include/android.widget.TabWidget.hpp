#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_OnFocusChangeListener.hpp"
#include "android.widget.LinearLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace widget {
class TabWidget : public virtual ::java::lang::Object,
                  public virtual ::android::view::View_OnFocusChangeListener,
                  public virtual ::android::widget::LinearLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabWidget(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::View_OnFocusChangeListener(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::LinearLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabWidget(const ::android::widget::TabWidget& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnFocusChangeListener((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj;}
    TabWidget(::android::widget::TabWidget&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnFocusChangeListener((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TabWidget& operator=(const ::android::widget::TabWidget& x) {obj = x.obj; return *this;}
    ::android::widget::TabWidget& operator=(::android::widget::TabWidget&& x) {obj = std::move(x.obj); return *this;}
    
    TabWidget(const ::android::content::Context&);
    TabWidget(const ::android::content::Context&, const ::android::util::AttributeSet&);
    TabWidget(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ::android::view::View getChildTabViewAt(int32_t) const ;
    int32_t getTabCount() const ;
    void setDividerDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setDividerDrawable(int32_t) const ;
    void setLeftStripDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setLeftStripDrawable(int32_t) const ;
    void setRightStripDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setRightStripDrawable(int32_t) const ;
    void setStripEnabled(bool) const ;
    bool isStripEnabled() const ;
    void childDrawableStateChanged(const ::android::view::View&) const ;
    void dispatchDraw(const ::android::graphics::Canvas&) const ;
    void setCurrentTab(int32_t) const ;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void focusCurrentTab(int32_t) const ;
    void setEnabled(bool) const ;
    void addView(const ::android::view::View&) const ;
    void removeAllViews() const ;
    void sendAccessibilityEventUnchecked(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onFocusChange(const ::android::view::View&, bool) const ;

};
}
}


