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
namespace widget {
class AutoScrollHelper_ScrollAnimationRunnable : public virtual ::java::lang::Object,
                                                 public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AutoScrollHelper_ScrollAnimationRunnable(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AutoScrollHelper_ScrollAnimationRunnable(const ::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    AutoScrollHelper_ScrollAnimationRunnable(::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable& operator=(const ::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable& operator=(::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const ;

};
}
}
}
}


