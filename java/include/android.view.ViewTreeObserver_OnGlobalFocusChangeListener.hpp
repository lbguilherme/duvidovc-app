#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace view {
class ViewTreeObserver_OnGlobalFocusChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewTreeObserver_OnGlobalFocusChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewTreeObserver_OnGlobalFocusChangeListener(const ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewTreeObserver_OnGlobalFocusChangeListener(::android::view::ViewTreeObserver_OnGlobalFocusChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener& operator=(const ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener& x) {obj = x.obj; return *this;}
    ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener& operator=(::android::view::ViewTreeObserver_OnGlobalFocusChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGlobalFocusChanged(const ::android::view::View&, const ::android::view::View&) const;

};
}
}


