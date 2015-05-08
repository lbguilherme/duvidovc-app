#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class SlidingDrawer_OnDrawerOpenListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingDrawer_OnDrawerOpenListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingDrawer_OnDrawerOpenListener(const ::android::widget::SlidingDrawer_OnDrawerOpenListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SlidingDrawer_OnDrawerOpenListener(::android::widget::SlidingDrawer_OnDrawerOpenListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SlidingDrawer_OnDrawerOpenListener& operator=(const ::android::widget::SlidingDrawer_OnDrawerOpenListener& x) {obj = x.obj; return *this;}
    ::android::widget::SlidingDrawer_OnDrawerOpenListener& operator=(::android::widget::SlidingDrawer_OnDrawerOpenListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDrawerOpened() const ;

};
}
}


