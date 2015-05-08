#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class ViewTreeObserver_OnPreDrawListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewTreeObserver_OnPreDrawListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewTreeObserver_OnPreDrawListener(const ::android::view::ViewTreeObserver_OnPreDrawListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewTreeObserver_OnPreDrawListener(::android::view::ViewTreeObserver_OnPreDrawListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewTreeObserver_OnPreDrawListener& operator=(const ::android::view::ViewTreeObserver_OnPreDrawListener& x) {obj = x.obj; return *this;}
    ::android::view::ViewTreeObserver_OnPreDrawListener& operator=(::android::view::ViewTreeObserver_OnPreDrawListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onPreDraw() const ;

};
}
}


