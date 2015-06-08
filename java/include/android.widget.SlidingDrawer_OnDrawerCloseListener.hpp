#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class SlidingDrawer_OnDrawerCloseListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingDrawer_OnDrawerCloseListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingDrawer_OnDrawerCloseListener(const ::android::widget::SlidingDrawer_OnDrawerCloseListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SlidingDrawer_OnDrawerCloseListener(::android::widget::SlidingDrawer_OnDrawerCloseListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SlidingDrawer_OnDrawerCloseListener& operator=(const ::android::widget::SlidingDrawer_OnDrawerCloseListener& x) {obj = x.obj; return *this;}
    ::android::widget::SlidingDrawer_OnDrawerCloseListener& operator=(::android::widget::SlidingDrawer_OnDrawerCloseListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDrawerClosed() const;

};
}
}


