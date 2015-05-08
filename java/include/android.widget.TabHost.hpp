#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewTreeObserver_OnTouchModeChangeListener.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace app { class LocalActivityManager; } }
namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class FrameLayout; } }
namespace android { namespace widget { class TabHost_OnTabChangeListener; } }
namespace android { namespace widget { class TabHost_TabSpec; } }
namespace android { namespace widget { class TabWidget; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class TabHost : public virtual ::java::lang::Object,
                public virtual ::android::view::ViewTreeObserver_OnTouchModeChangeListener,
                public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabHost(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::ViewTreeObserver_OnTouchModeChangeListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabHost(const ::android::widget::TabHost& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    TabHost(::android::widget::TabHost&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TabHost& operator=(const ::android::widget::TabHost& x) {obj = x.obj; return *this;}
    ::android::widget::TabHost& operator=(::android::widget::TabHost&& x) {obj = std::move(x.obj); return *this;}
    
    TabHost(const ::android::content::Context&);
    TabHost(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ::android::widget::TabHost_TabSpec newTabSpec(const ::java::lang::String&) const ;
    void setup() const ;
    void sendAccessibilityEvent(int32_t) const ;
    void setup(const ::android::app::LocalActivityManager&) const ;
    void onTouchModeChanged(bool) const ;
    void addTab(const ::android::widget::TabHost_TabSpec&) const ;
    void clearAllTabs() const ;
    ::android::widget::TabWidget getTabWidget() const ;
    int32_t getCurrentTab() const ;
    ::java::lang::String getCurrentTabTag() const ;
    ::android::view::View getCurrentTabView() const ;
    ::android::view::View getCurrentView() const ;
    void setCurrentTabByTag(const ::java::lang::String&) const ;
    ::android::widget::FrameLayout getTabContentView() const ;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    void dispatchWindowFocusChanged(bool) const ;
    void setCurrentTab(int32_t) const ;
    void setOnTabChangedListener(const ::android::widget::TabHost_OnTabChangeListener&) const ;

};
}
}

#include "android.widget.TabHost_OnTabChangeListener.hpp"
#include "android.widget.TabHost_TabContentFactory.hpp"
#include "android.widget.TabHost_TabSpec.hpp"

