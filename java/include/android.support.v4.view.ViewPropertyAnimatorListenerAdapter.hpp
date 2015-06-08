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
class ViewPropertyAnimatorListenerAdapter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimatorListenerAdapter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimatorListenerAdapter(const ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewPropertyAnimatorListenerAdapter(::android::support::v4::view::ViewPropertyAnimatorListenerAdapter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter& operator=(const ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter& operator=(::android::support::v4::view::ViewPropertyAnimatorListenerAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ViewPropertyAnimatorListenerAdapter();
    void onAnimationStart(const ::android::view::View&) const;
    void onAnimationEnd(const ::android::view::View&) const;
    void onAnimationCancel(const ::android::view::View&) const;

};
}
}
}
}


