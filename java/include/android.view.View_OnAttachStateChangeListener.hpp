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
class View_OnAttachStateChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnAttachStateChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnAttachStateChangeListener(const ::android::view::View_OnAttachStateChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnAttachStateChangeListener(::android::view::View_OnAttachStateChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnAttachStateChangeListener& operator=(const ::android::view::View_OnAttachStateChangeListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnAttachStateChangeListener& operator=(::android::view::View_OnAttachStateChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onViewAttachedToWindow(const ::android::view::View&) const;
    void onViewDetachedFromWindow(const ::android::view::View&) const;

};
}
}


