#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter : public virtual ::java::lang::Object,
                                                                              public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter(const ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter(::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter& operator=(const ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter& operator=(::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const ;

};
}
}
}
}


