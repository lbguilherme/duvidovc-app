#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.TabHost.hpp"
#include "android.widget.TabHost_OnTabChangeListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManager; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class TabHost_OnTabChangeListener; } }
namespace android { namespace widget { class TabHost_TabSpec; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentTabHost : public virtual ::java::lang::Object,
                        public virtual ::android::widget::TabHost,
                        public virtual ::android::widget::TabHost_OnTabChangeListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentTabHost(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::ViewTreeObserver_OnTouchModeChangeListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj), ::android::widget::TabHost(_obj), ::android::widget::TabHost_OnTabChangeListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentTabHost(const ::android::support::v4::app::FragmentTabHost& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::TabHost((jobject)0), ::android::widget::TabHost_OnTabChangeListener((jobject)0) {obj = x.obj;}
    FragmentTabHost(::android::support::v4::app::FragmentTabHost&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::TabHost((jobject)0), ::android::widget::TabHost_OnTabChangeListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentTabHost& operator=(const ::android::support::v4::app::FragmentTabHost& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentTabHost& operator=(::android::support::v4::app::FragmentTabHost&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentTabHost(const ::android::content::Context&);
    FragmentTabHost(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setup() const;
    void setup(const ::android::content::Context&, const ::android::support::v4::app::FragmentManager&) const;
    void setup(const ::android::content::Context&, const ::android::support::v4::app::FragmentManager&, int32_t) const;
    void setOnTabChangedListener(const ::android::widget::TabHost_OnTabChangeListener&) const;
    void addTab(const ::android::widget::TabHost_TabSpec&, const ::java::lang::Class&, const ::android::os::Bundle&) const;
    void onTabChanged(const ::java::lang::String&) const;

};
}
}
}
}

#include "android.support.v4.app.FragmentTabHost_DummyTabFactory.hpp"
#include "android.support.v4.app.FragmentTabHost_SavedState.hpp"
#include "android.support.v4.app.FragmentTabHost_TabInfo.hpp"

