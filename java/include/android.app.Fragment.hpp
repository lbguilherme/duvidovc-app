#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ComponentCallbacks2.hpp"
#include "android.view.View_OnCreateContextMenuListener.hpp"

namespace android { namespace animation { class Animator; } }
namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Fragment; } }
namespace android { namespace app { class Fragment_SavedState; } }
namespace android { namespace app { class FragmentManager; } }
namespace android { namespace app { class LoaderManager; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuInflater; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class Fragment : public virtual ::java::lang::Object,
                 public virtual ::android::content::ComponentCallbacks2,
                 public virtual ::android::view::View_OnCreateContextMenuListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Fragment(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Fragment(const ::android::app::Fragment& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    Fragment(::android::app::Fragment&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Fragment& operator=(const ::android::app::Fragment& x) {obj = x.obj; return *this;}
    ::android::app::Fragment& operator=(::android::app::Fragment&& x) {obj = std::move(x.obj); return *this;}
    
    Fragment();
    static ::android::app::Fragment instantiate(const ::android::content::Context&, const ::java::lang::String&);
    static ::android::app::Fragment instantiate(const ::android::content::Context&, const ::java::lang::String&, const ::android::os::Bundle&);
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    int32_t getId() const ;
    ::java::lang::String getTag() const ;
    void setArguments(const ::android::os::Bundle&) const ;
    ::android::os::Bundle getArguments() const ;
    void setInitialSavedState(const ::android::app::Fragment_SavedState&) const ;
    void setTargetFragment(const ::android::app::Fragment&, int32_t) const ;
    ::android::app::Fragment getTargetFragment() const ;
    int32_t getTargetRequestCode() const ;
    ::android::app::Activity getActivity() const ;
    ::android::content::res::Resources getResources() const ;
    ::java::lang::CharSequence getText(int32_t) const ;
    ::java::lang::String getString(int32_t) const ;
    ::java::lang::String getString(int32_t, const std::vector< ::java::lang::Object>&) const ;
    ::android::app::FragmentManager getFragmentManager() const ;
    bool isAdded() const ;
    bool isDetached() const ;
    bool isRemoving() const ;
    bool isInLayout() const ;
    bool isResumed() const ;
    bool isVisible() const ;
    bool isHidden() const ;
    void onHiddenChanged(bool) const ;
    void setRetainInstance(bool) const ;
    bool getRetainInstance() const ;
    void setHasOptionsMenu(bool) const ;
    void setMenuVisibility(bool) const ;
    void setUserVisibleHint(bool) const ;
    bool getUserVisibleHint() const ;
    ::android::app::LoaderManager getLoaderManager() const ;
    void startActivity(const ::android::content::Intent&) const ;
    void startActivityForResult(const ::android::content::Intent&, int32_t) const ;
    void onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const ;
    void onInflate(const ::android::util::AttributeSet&, const ::android::os::Bundle&) const ;
    void onInflate(const ::android::app::Activity&, const ::android::util::AttributeSet&, const ::android::os::Bundle&) const ;
    void onAttach(const ::android::app::Activity&) const ;
    ::android::animation::Animator onCreateAnimator(int32_t, bool, int32_t) const ;
    void onCreate(const ::android::os::Bundle&) const ;
    void onViewCreated(const ::android::view::View&, const ::android::os::Bundle&) const ;
    ::android::view::View onCreateView(const ::android::view::LayoutInflater&, const ::android::view::ViewGroup&, const ::android::os::Bundle&) const ;
    ::android::view::View getView() const ;
    void onActivityCreated(const ::android::os::Bundle&) const ;
    void onStart() const ;
    void onResume() const ;
    void onSaveInstanceState(const ::android::os::Bundle&) const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void onPause() const ;
    void onStop() const ;
    void onLowMemory() const ;
    void onTrimMemory(int32_t) const ;
    void onDestroyView() const ;
    void onDestroy() const ;
    void onDetach() const ;
    void onCreateOptionsMenu(const ::android::view::Menu&, const ::android::view::MenuInflater&) const ;
    void onPrepareOptionsMenu(const ::android::view::Menu&) const ;
    void onDestroyOptionsMenu() const ;
    bool onOptionsItemSelected(const ::android::view::MenuItem&) const ;
    void onOptionsMenuClosed(const ::android::view::Menu&) const ;
    void onCreateContextMenu(const ::android::view::ContextMenu&, const ::android::view::View&, const ::android::view::ContextMenu_ContextMenuInfo&) const ;
    void registerForContextMenu(const ::android::view::View&) const ;
    void unregisterForContextMenu(const ::android::view::View&) const ;
    bool onContextItemSelected(const ::android::view::MenuItem&) const ;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const ;

};
}
}

#include "android.app.Fragment_InstantiationException.hpp"
#include "android.app.Fragment_SavedState.hpp"

