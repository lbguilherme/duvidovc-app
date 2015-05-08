#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ComponentCallbacks.hpp"
#include "android.view.View_OnCreateContextMenuListener.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment_SavedState; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentActivity; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManager; } } } }
namespace android { namespace support { namespace v4 { namespace app { class LoaderManager; } } } }
namespace android { namespace support { namespace v4 { namespace app { class SharedElementCallback; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuInflater; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { namespace animation { class Animation; } } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class Fragment : public virtual ::java::lang::Object,
                 public virtual ::android::content::ComponentCallbacks,
                 public virtual ::android::view::View_OnCreateContextMenuListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Fragment(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Fragment(const ::android::support::v4::app::Fragment& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    Fragment(::android::support::v4::app::Fragment&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::Fragment& operator=(const ::android::support::v4::app::Fragment& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::Fragment& operator=(::android::support::v4::app::Fragment&& x) {obj = std::move(x.obj); return *this;}
    
    Fragment();
    static ::android::support::v4::app::Fragment instantiate(const ::android::content::Context&, const ::java::lang::String&);
    static ::android::support::v4::app::Fragment instantiate(const ::android::content::Context&, const ::java::lang::String&, const ::android::os::Bundle&);
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    int32_t getId() const ;
    ::java::lang::String getTag() const ;
    void setArguments(const ::android::os::Bundle&) const ;
    ::android::os::Bundle getArguments() const ;
    void setInitialSavedState(const ::android::support::v4::app::Fragment_SavedState&) const ;
    void setTargetFragment(const ::android::support::v4::app::Fragment&, int32_t) const ;
    ::android::support::v4::app::Fragment getTargetFragment() const ;
    int32_t getTargetRequestCode() const ;
    ::android::support::v4::app::FragmentActivity getActivity() const ;
    ::android::content::res::Resources getResources() const ;
    ::java::lang::CharSequence getText(int32_t) const ;
    ::java::lang::String getString(int32_t) const ;
    ::java::lang::String getString(int32_t, const std::vector< ::java::lang::Object>&) const ;
    ::android::support::v4::app::FragmentManager getFragmentManager() const ;
    ::android::support::v4::app::FragmentManager getChildFragmentManager() const ;
    ::android::support::v4::app::Fragment getParentFragment() const ;
    bool isAdded() const ;
    bool isDetached() const ;
    bool isRemoving() const ;
    bool isInLayout() const ;
    bool isResumed() const ;
    bool isVisible() const ;
    bool isHidden() const ;
    bool hasOptionsMenu() const ;
    bool isMenuVisible() const ;
    void onHiddenChanged(bool) const ;
    void setRetainInstance(bool) const ;
    bool getRetainInstance() const ;
    void setHasOptionsMenu(bool) const ;
    void setMenuVisibility(bool) const ;
    void setUserVisibleHint(bool) const ;
    bool getUserVisibleHint() const ;
    ::android::support::v4::app::LoaderManager getLoaderManager() const ;
    void startActivity(const ::android::content::Intent&) const ;
    void startActivityForResult(const ::android::content::Intent&, int32_t) const ;
    void onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const ;
    ::android::view::LayoutInflater getLayoutInflater(const ::android::os::Bundle&) const ;
    void onInflate(const ::android::app::Activity&, const ::android::util::AttributeSet&, const ::android::os::Bundle&) const ;
    void onAttach(const ::android::app::Activity&) const ;
    ::android::view::animation::Animation onCreateAnimation(int32_t, bool, int32_t) const ;
    void onCreate(const ::android::os::Bundle&) const ;
    ::android::view::View onCreateView(const ::android::view::LayoutInflater&, const ::android::view::ViewGroup&, const ::android::os::Bundle&) const ;
    void onViewCreated(const ::android::view::View&, const ::android::os::Bundle&) const ;
    ::android::view::View getView() const ;
    void onActivityCreated(const ::android::os::Bundle&) const ;
    void onViewStateRestored(const ::android::os::Bundle&) const ;
    void onStart() const ;
    void onResume() const ;
    void onSaveInstanceState(const ::android::os::Bundle&) const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void onPause() const ;
    void onStop() const ;
    void onLowMemory() const ;
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
    void setEnterSharedElementCallback(const ::android::support::v4::app::SharedElementCallback&) const ;
    void setExitSharedElementCallback(const ::android::support::v4::app::SharedElementCallback&) const ;
    void setEnterTransition(const ::java::lang::Object&) const ;
    ::java::lang::Object getEnterTransition() const ;
    void setReturnTransition(const ::java::lang::Object&) const ;
    ::java::lang::Object getReturnTransition() const ;
    void setExitTransition(const ::java::lang::Object&) const ;
    ::java::lang::Object getExitTransition() const ;
    void setReenterTransition(const ::java::lang::Object&) const ;
    ::java::lang::Object getReenterTransition() const ;
    void setSharedElementEnterTransition(const ::java::lang::Object&) const ;
    ::java::lang::Object getSharedElementEnterTransition() const ;
    void setSharedElementReturnTransition(const ::java::lang::Object&) const ;
    ::java::lang::Object getSharedElementReturnTransition() const ;
    void setAllowEnterTransitionOverlap(bool) const ;
    bool getAllowEnterTransitionOverlap() const ;
    void setAllowReturnTransitionOverlap(bool) const ;
    bool getAllowReturnTransitionOverlap() const ;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const ;

};
}
}
}
}

#include "android.support.v4.app.Fragment_InstantiationException.hpp"
#include "android.support.v4.app.Fragment_SavedState.hpp"

