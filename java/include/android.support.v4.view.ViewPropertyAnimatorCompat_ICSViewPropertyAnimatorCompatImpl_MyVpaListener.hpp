#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener(const ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener(::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener& operator=(const ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener& operator=(::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onAnimationStart(const ::android::view::View&) const ;
    void onAnimationEnd(const ::android::view::View&) const ;
    void onAnimationCancel(const ::android::view::View&) const ;

};
}
}
}
}


