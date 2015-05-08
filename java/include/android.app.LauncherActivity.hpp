#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.ListActivity.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace util { class List; } }

namespace android {
namespace app {
class LauncherActivity : public virtual ::java::lang::Object,
                         public virtual ::android::app::ListActivity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LauncherActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::app::ListActivity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LauncherActivity(const ::android::app::LauncherActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ListActivity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    LauncherActivity(::android::app::LauncherActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ListActivity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::LauncherActivity& operator=(const ::android::app::LauncherActivity& x) {obj = x.obj; return *this;}
    ::android::app::LauncherActivity& operator=(::android::app::LauncherActivity&& x) {obj = std::move(x.obj); return *this;}
    
    LauncherActivity();
    void setTitle(const ::java::lang::CharSequence&) const ;
    void setTitle(int32_t) const ;
    ::java::util::List makeListItems() const ;

};
}
}

#include "android.app.LauncherActivity_IconResizer.hpp"
#include "android.app.LauncherActivity_ListItem.hpp"

