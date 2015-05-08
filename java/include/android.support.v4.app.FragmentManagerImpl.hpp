#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.FragmentManager.hpp"
#include "android.view.LayoutInflater_Factory.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class BackStackRecord; } } } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment_SavedState; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentActivity; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentContainer; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManager_BackStackEntry; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManager_OnBackStackChangedListener; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentTransaction; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuInflater; } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentManagerImpl : public virtual ::java::lang::Object,
                            public virtual ::android::support::v4::app::FragmentManager,
                            public virtual ::android::view::LayoutInflater_Factory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentManagerImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::FragmentManager(_obj), ::android::view::LayoutInflater_Factory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentManagerImpl(const ::android::support::v4::app::FragmentManagerImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::FragmentManager((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0) {obj = x.obj;}
    FragmentManagerImpl(::android::support::v4::app::FragmentManagerImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::FragmentManager((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentManagerImpl& operator=(const ::android::support::v4::app::FragmentManagerImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentManagerImpl& operator=(::android::support::v4::app::FragmentManagerImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::app::FragmentTransaction beginTransaction() const ;
    bool executePendingTransactions() const ;
    void popBackStack() const ;
    bool popBackStackImmediate() const ;
    void popBackStack(const ::java::lang::String&, int32_t) const ;
    bool popBackStackImmediate(const ::java::lang::String&, int32_t) const ;
    void popBackStack(int32_t, int32_t) const ;
    bool popBackStackImmediate(int32_t, int32_t) const ;
    int32_t getBackStackEntryCount() const ;
    ::android::support::v4::app::FragmentManager_BackStackEntry getBackStackEntryAt(int32_t) const ;
    void addOnBackStackChangedListener(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener&) const ;
    void removeOnBackStackChangedListener(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener&) const ;
    void putFragment(const ::android::os::Bundle&, const ::java::lang::String&, const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::Fragment getFragment(const ::android::os::Bundle&, const ::java::lang::String&) const ;
    ::java::util::List getFragments() const ;
    ::android::support::v4::app::Fragment_SavedState saveFragmentInstanceState(const ::android::support::v4::app::Fragment&) const ;
    bool isDestroyed() const ;
    ::java::lang::String toString() const ;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const ;
    void performPendingDeferredStart(const ::android::support::v4::app::Fragment&) const ;
    void addFragment(const ::android::support::v4::app::Fragment&, bool) const ;
    void removeFragment(const ::android::support::v4::app::Fragment&, int32_t, int32_t) const ;
    void hideFragment(const ::android::support::v4::app::Fragment&, int32_t, int32_t) const ;
    void showFragment(const ::android::support::v4::app::Fragment&, int32_t, int32_t) const ;
    void detachFragment(const ::android::support::v4::app::Fragment&, int32_t, int32_t) const ;
    void attachFragment(const ::android::support::v4::app::Fragment&, int32_t, int32_t) const ;
    ::android::support::v4::app::Fragment findFragmentById(int32_t) const ;
    ::android::support::v4::app::Fragment findFragmentByTag(const ::java::lang::String&) const ;
    ::android::support::v4::app::Fragment findFragmentByWho(const ::java::lang::String&) const ;
    void enqueueAction(const ::java::lang::Runnable&, bool) const ;
    int32_t allocBackStackIndex(const ::android::support::v4::app::BackStackRecord&) const ;
    void setBackStackIndex(int32_t, const ::android::support::v4::app::BackStackRecord&) const ;
    void freeBackStackIndex(int32_t) const ;
    bool execPendingActions() const ;
    void attachActivity(const ::android::support::v4::app::FragmentActivity&, const ::android::support::v4::app::FragmentContainer&, const ::android::support::v4::app::Fragment&) const ;
    void noteStateNotSaved() const ;
    void dispatchCreate() const ;
    void dispatchActivityCreated() const ;
    void dispatchStart() const ;
    void dispatchResume() const ;
    void dispatchPause() const ;
    void dispatchStop() const ;
    void dispatchReallyStop() const ;
    void dispatchDestroyView() const ;
    void dispatchDestroy() const ;
    void dispatchConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void dispatchLowMemory() const ;
    bool dispatchCreateOptionsMenu(const ::android::view::Menu&, const ::android::view::MenuInflater&) const ;
    bool dispatchPrepareOptionsMenu(const ::android::view::Menu&) const ;
    bool dispatchOptionsItemSelected(const ::android::view::MenuItem&) const ;
    bool dispatchContextItemSelected(const ::android::view::MenuItem&) const ;
    void dispatchOptionsMenuClosed(const ::android::view::Menu&) const ;
    static int32_t reverseTransit(int32_t);
    static int32_t transitToStyleIndex(int32_t, bool);
    ::android::view::View onCreateView(const ::java::lang::String&, const ::android::content::Context&, const ::android::util::AttributeSet&) const ;

};
}
}
}
}

#include "android.support.v4.app.FragmentManagerImpl_FragmentTag.hpp"

