#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Activity.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManager; } } } }
namespace android { namespace support { namespace v4 { namespace app { class LoaderManager; } } } }
namespace android { namespace support { namespace v4 { namespace app { class SharedElementCallback; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentActivity : public virtual ::java::lang::Object,
                         public virtual ::android::app::Activity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentActivity(const ::android::support::v4::app::FragmentActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    FragmentActivity(::android::support::v4::app::FragmentActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentActivity& operator=(const ::android::support::v4::app::FragmentActivity& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentActivity& operator=(::android::support::v4::app::FragmentActivity&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentActivity();
    void onBackPressed() const;
    void supportFinishAfterTransition() const;
    void setEnterSharedElementCallback(const ::android::support::v4::app::SharedElementCallback&) const;
    void setExitSharedElementCallback(const ::android::support::v4::app::SharedElementCallback&) const;
    void supportPostponeEnterTransition() const;
    void supportStartPostponedEnterTransition() const;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const;
    bool onCreatePanelMenu(int32_t, const ::android::view::Menu&) const;
    ::android::view::View onCreateView(const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    void onLowMemory() const;
    bool onMenuItemSelected(int32_t, const ::android::view::MenuItem&) const;
    void onPanelClosed(int32_t, const ::android::view::Menu&) const;
    bool onPreparePanel(int32_t, const ::android::view::View&, const ::android::view::Menu&) const;
    ::java::lang::Object onRetainNonConfigurationInstance() const;
    ::java::lang::Object onRetainCustomNonConfigurationInstance() const;
    ::java::lang::Object getLastCustomNonConfigurationInstance() const;
    void supportInvalidateOptionsMenu() const;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const;
    void onAttachFragment(const ::android::support::v4::app::Fragment&) const;
    ::android::support::v4::app::FragmentManager getSupportFragmentManager() const;
    void startActivityForResult(const ::android::content::Intent&, int32_t) const;
    void startActivityFromFragment(const ::android::support::v4::app::Fragment&, const ::android::content::Intent&, int32_t) const;
    ::android::support::v4::app::LoaderManager getSupportLoaderManager() const;

};
}
}
}
}

#include "android.support.v4.app.FragmentActivity_NonConfigurationInstances.hpp"

