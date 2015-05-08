#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class ViewTreeObserver_OnScrollChangedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewTreeObserver_OnScrollChangedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewTreeObserver_OnScrollChangedListener(const ::android::view::ViewTreeObserver_OnScrollChangedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewTreeObserver_OnScrollChangedListener(::android::view::ViewTreeObserver_OnScrollChangedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewTreeObserver_OnScrollChangedListener& operator=(const ::android::view::ViewTreeObserver_OnScrollChangedListener& x) {obj = x.obj; return *this;}
    ::android::view::ViewTreeObserver_OnScrollChangedListener& operator=(::android::view::ViewTreeObserver_OnScrollChangedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onScrollChanged() const ;

};
}
}


