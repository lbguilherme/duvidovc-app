#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Fragment; } }
namespace android { namespace app { class FragmentTransaction; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
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
    FragmentTransaction(const ::android::app::FragmentTransaction& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentTransaction(::android::app::FragmentTransaction&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::FragmentTransaction& operator=(const ::android::app::FragmentTransaction& x) {obj = x.obj; return *this;}
    ::android::app::FragmentTransaction& operator=(::android::app::FragmentTransaction&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentTransaction();
    ::android::app::FragmentTransaction add(const ::android::app::Fragment&, const ::java::lang::String&) const;
    ::android::app::FragmentTransaction add(int32_t, const ::android::app::Fragment&) const;
    ::android::app::FragmentTransaction add(int32_t, const ::android::app::Fragment&, const ::java::lang::String&) const;
    ::android::app::FragmentTransaction replace(int32_t, const ::android::app::Fragment&) const;
    ::android::app::FragmentTransaction replace(int32_t, const ::android::app::Fragment&, const ::java::lang::String&) const;
    ::android::app::FragmentTransaction remove(const ::android::app::Fragment&) const;
    ::android::app::FragmentTransaction hide(const ::android::app::Fragment&) const;
    ::android::app::FragmentTransaction show(const ::android::app::Fragment&) const;
    ::android::app::FragmentTransaction detach(const ::android::app::Fragment&) const;
    ::android::app::FragmentTransaction attach(const ::android::app::Fragment&) const;
    bool isEmpty() const;
    ::android::app::FragmentTransaction setCustomAnimations(int32_t, int32_t) const;
    ::android::app::FragmentTransaction setCustomAnimations(int32_t, int32_t, int32_t, int32_t) const;
    ::android::app::FragmentTransaction setTransition(int32_t) const;
    ::android::app::FragmentTransaction setTransitionStyle(int32_t) const;
    ::android::app::FragmentTransaction addToBackStack(const ::java::lang::String&) const;
    bool isAddToBackStackAllowed() const;
    ::android::app::FragmentTransaction disallowAddToBackStack() const;
    ::android::app::FragmentTransaction setBreadCrumbTitle(int32_t) const;
    ::android::app::FragmentTransaction setBreadCrumbTitle(const ::java::lang::CharSequence&) const;
    ::android::app::FragmentTransaction setBreadCrumbShortTitle(int32_t) const;
    ::android::app::FragmentTransaction setBreadCrumbShortTitle(const ::java::lang::CharSequence&) const;
    int32_t commit() const;
    int32_t commitAllowingStateLoss() const;

};
}
}


