#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Point; } }
namespace android { namespace view { class View; } }

namespace android {
namespace view {
class View_DragShadowBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_DragShadowBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_DragShadowBuilder(const ::android::view::View_DragShadowBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_DragShadowBuilder(::android::view::View_DragShadowBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_DragShadowBuilder& operator=(const ::android::view::View_DragShadowBuilder& x) {obj = x.obj; return *this;}
    ::android::view::View_DragShadowBuilder& operator=(::android::view::View_DragShadowBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    View_DragShadowBuilder(const ::android::view::View&);
    View_DragShadowBuilder();
    ::android::view::View getView() const ;
    void onProvideShadowMetrics(const ::android::graphics::Point&, const ::android::graphics::Point&) const ;
    void onDrawShadow(const ::android::graphics::Canvas&) const ;

};
}
}


