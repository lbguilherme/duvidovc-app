#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Fragment; } }
namespace android { namespace app { class Fragment_SavedState; } }
namespace android { namespace app { class FragmentManager_BackStackEntry; } }
namespace android { namespace app { class FragmentManager_OnBackStackChangedListener; } }
namespace android { namespace app { class FragmentTransaction; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class FragmentManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentManager(const ::android::app::FragmentManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentManager(::android::app::FragmentManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::FragmentManager& operator=(const ::android::app::FragmentManager& x) {obj = x.obj; return *this;}
    ::android::app::FragmentManager& operator=(::android::app::FragmentManager&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentManager();
    ::android::app::FragmentTransaction beginTransaction() const ;
    bool executePendingTransactions() const ;
    ::android::app::Fragment findFragmentById(int32_t) const ;
    ::android::app::Fragment findFragmentByTag(const ::java::lang::String&) const ;
    void popBackStack() const ;
    bool popBackStackImmediate() const ;
    void popBackStack(const ::java::lang::String&, int32_t) const ;
    bool popBackStackImmediate(const ::java::lang::String&, int32_t) const ;
    void popBackStack(int32_t, int32_t) const ;
    bool popBackStackImmediate(int32_t, int32_t) const ;
    int32_t getBackStackEntryCount() const ;
    ::android::app::FragmentManager_BackStackEntry getBackStackEntryAt(int32_t) const ;
    void addOnBackStackChangedListener(const ::android::app::FragmentManager_OnBackStackChangedListener&) const ;
    void removeOnBackStackChangedListener(const ::android::app::FragmentManager_OnBackStackChangedListener&) const ;
    void putFragment(const ::android::os::Bundle&, const ::java::lang::String&, const ::android::app::Fragment&) const ;
    ::android::app::Fragment getFragment(const ::android::os::Bundle&, const ::java::lang::String&) const ;
    ::android::app::Fragment_SavedState saveFragmentInstanceState(const ::android::app::Fragment&) const ;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const ;
    static void enableDebugLogging(bool);
    void invalidateOptionsMenu() const ;

};
}
}

#include "android.app.FragmentManager_BackStackEntry.hpp"
#include "android.app.FragmentManager_OnBackStackChangedListener.hpp"

