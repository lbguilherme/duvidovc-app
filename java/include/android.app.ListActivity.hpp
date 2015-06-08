#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Activity.hpp"

namespace android { namespace widget { class ListAdapter; } }
namespace android { namespace widget { class ListView; } }

namespace android {
namespace app {
class ListActivity : public virtual ::java::lang::Object,
                     public virtual ::android::app::Activity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListActivity(const ::android::app::ListActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    ListActivity(::android::app::ListActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ListActivity& operator=(const ::android::app::ListActivity& x) {obj = x.obj; return *this;}
    ::android::app::ListActivity& operator=(::android::app::ListActivity&& x) {obj = std::move(x.obj); return *this;}
    
    ListActivity();
    void onContentChanged() const;
    void setListAdapter(const ::android::widget::ListAdapter&) const;
    void setSelection(int32_t) const;
    int32_t getSelectedItemPosition() const;
    int64_t getSelectedItemId() const;
    ::android::widget::ListView getListView() const;
    ::android::widget::ListAdapter getListAdapter() const;

};
}
}


