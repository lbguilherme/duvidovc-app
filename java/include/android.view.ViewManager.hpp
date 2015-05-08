#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }

namespace android {
namespace view {
class ViewManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewManager(const ::android::view::ViewManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewManager(::android::view::ViewManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewManager& operator=(const ::android::view::ViewManager& x) {obj = x.obj; return *this;}
    ::android::view::ViewManager& operator=(::android::view::ViewManager&& x) {obj = std::move(x.obj); return *this;}
    
    void addView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    void updateViewLayout(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    void removeView(const ::android::view::View&) const ;

};
}
}


