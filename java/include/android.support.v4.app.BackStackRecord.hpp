#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.FragmentManager_BackStackEntry.hpp"
#include "android.support.v4.app.FragmentTransaction.hpp"
#include "java.lang.Runnable.hpp"

namespace android { namespace support { namespace v4 { namespace app { class BackStackRecord_TransitionState; } } } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManagerImpl; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentTransaction; } } } }
namespace android { namespace util { class SparseArray; } }
namespace android { namespace view { class View; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class BackStackRecord : public virtual ::java::lang::Object,
                        public virtual ::android::support::v4::app::FragmentManager_BackStackEntry,
                        public virtual ::android::support::v4::app::FragmentTransaction,
                        public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackStackRecord(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::FragmentManager_BackStackEntry(_obj), ::android::support::v4::app::FragmentTransaction(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackStackRecord(const ::android::support::v4::app::BackStackRecord& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::FragmentManager_BackStackEntry((jobject)0), ::android::support::v4::app::FragmentTransaction((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    BackStackRecord(::android::support::v4::app::BackStackRecord&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::FragmentManager_BackStackEntry((jobject)0), ::android::support::v4::app::FragmentTransaction((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::BackStackRecord& operator=(const ::android::support::v4::app::BackStackRecord& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::BackStackRecord& operator=(::android::support::v4::app::BackStackRecord&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const ;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const ;
    void dump(const ::java::lang::String&, const ::java::io::PrintWriter&, bool) const ;
    BackStackRecord(const ::android::support::v4::app::FragmentManagerImpl&);
    int32_t getId() const ;
    int32_t getBreadCrumbTitleRes() const ;
    int32_t getBreadCrumbShortTitleRes() const ;
    ::java::lang::CharSequence getBreadCrumbTitle() const ;
    ::java::lang::CharSequence getBreadCrumbShortTitle() const ;
    ::android::support::v4::app::FragmentTransaction add(const ::android::support::v4::app::Fragment&, const ::java::lang::String&) const ;
    ::android::support::v4::app::FragmentTransaction add(int32_t, const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::FragmentTransaction add(int32_t, const ::android::support::v4::app::Fragment&, const ::java::lang::String&) const ;
    ::android::support::v4::app::FragmentTransaction replace(int32_t, const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::FragmentTransaction replace(int32_t, const ::android::support::v4::app::Fragment&, const ::java::lang::String&) const ;
    ::android::support::v4::app::FragmentTransaction remove(const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::FragmentTransaction hide(const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::FragmentTransaction show(const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::FragmentTransaction detach(const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::FragmentTransaction attach(const ::android::support::v4::app::Fragment&) const ;
    ::android::support::v4::app::FragmentTransaction setCustomAnimations(int32_t, int32_t) const ;
    ::android::support::v4::app::FragmentTransaction setCustomAnimations(int32_t, int32_t, int32_t, int32_t) const ;
    ::android::support::v4::app::FragmentTransaction setTransition(int32_t) const ;
    ::android::support::v4::app::FragmentTransaction addSharedElement(const ::android::view::View&, const ::java::lang::String&) const ;
    ::android::support::v4::app::FragmentTransaction setTransitionStyle(int32_t) const ;
    ::android::support::v4::app::FragmentTransaction addToBackStack(const ::java::lang::String&) const ;
    bool isAddToBackStackAllowed() const ;
    ::android::support::v4::app::FragmentTransaction disallowAddToBackStack() const ;
    ::android::support::v4::app::FragmentTransaction setBreadCrumbTitle(int32_t) const ;
    ::android::support::v4::app::FragmentTransaction setBreadCrumbTitle(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::FragmentTransaction setBreadCrumbShortTitle(int32_t) const ;
    ::android::support::v4::app::FragmentTransaction setBreadCrumbShortTitle(const ::java::lang::CharSequence&) const ;
    int32_t commit() const ;
    int32_t commitAllowingStateLoss() const ;
    void run() const ;
    void calculateBackFragments(const ::android::util::SparseArray&, const ::android::util::SparseArray&) const ;
    ::android::support::v4::app::BackStackRecord_TransitionState popFromBackStack(bool, const ::android::support::v4::app::BackStackRecord_TransitionState&, const ::android::util::SparseArray&, const ::android::util::SparseArray&) const ;
    ::java::lang::String getName() const ;
    int32_t getTransition() const ;
    int32_t getTransitionStyle() const ;
    bool isEmpty() const ;

};
}
}
}
}

#include "android.support.v4.app.BackStackRecord_Op.hpp"
#include "android.support.v4.app.BackStackRecord_TransitionState.hpp"

