#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.ActivityGroup.hpp"

namespace android { namespace widget { class TabHost; } }
namespace android { namespace widget { class TabWidget; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class TabActivity : public virtual ::java::lang::Object,
                    public virtual ::android::app::ActivityGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::app::ActivityGroup(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabActivity(const ::android::app::TabActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ActivityGroup((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    TabActivity(::android::app::TabActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ActivityGroup((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::TabActivity& operator=(const ::android::app::TabActivity& x) {obj = x.obj; return *this;}
    ::android::app::TabActivity& operator=(::android::app::TabActivity&& x) {obj = std::move(x.obj); return *this;}
    
    TabActivity();
    void setDefaultTab(const ::java::lang::String&) const;
    void setDefaultTab(int32_t) const;
    void onContentChanged() const;
    ::android::widget::TabHost getTabHost() const;
    ::android::widget::TabWidget getTabWidget() const;

};
}
}


