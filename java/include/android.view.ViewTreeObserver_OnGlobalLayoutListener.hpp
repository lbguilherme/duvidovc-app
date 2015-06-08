#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class ViewTreeObserver_OnGlobalLayoutListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewTreeObserver_OnGlobalLayoutListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewTreeObserver_OnGlobalLayoutListener(const ::android::view::ViewTreeObserver_OnGlobalLayoutListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewTreeObserver_OnGlobalLayoutListener(::android::view::ViewTreeObserver_OnGlobalLayoutListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewTreeObserver_OnGlobalLayoutListener& operator=(const ::android::view::ViewTreeObserver_OnGlobalLayoutListener& x) {obj = x.obj; return *this;}
    ::android::view::ViewTreeObserver_OnGlobalLayoutListener& operator=(::android::view::ViewTreeObserver_OnGlobalLayoutListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGlobalLayout() const;

};
}
}


