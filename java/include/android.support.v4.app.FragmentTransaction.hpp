#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentTransaction; } } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentTransaction : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentTransaction(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentTransaction(const ::android::support::v4::app::FragmentTransaction& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentTransaction(::android::support::v4::app::FragmentTransaction&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentTransaction& operator=(const ::android::support::v4::app::FragmentTransaction& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentTransaction& operator=(::android::support::v4::app::FragmentTransaction&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentTransaction();
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
    bool isEmpty() const ;
    ::android::support::v4::app::FragmentTransaction setCustomAnimations(int32_t, int32_t) const ;
    ::android::support::v4::app::FragmentTransaction setCustomAnimations(int32_t, int32_t, int32_t, int32_t) const ;
    ::android::support::v4::app::FragmentTransaction addSharedElement(const ::android::view::View&, const ::java::lang::String&) const ;
    ::android::support::v4::app::FragmentTransaction setTransition(int32_t) const ;
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

};
}
}
}
}

#include "android.support.v4.app.FragmentTransaction_Transit.hpp"

