#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class SimpleAdapter_ViewBinder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleAdapter_ViewBinder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleAdapter_ViewBinder(const ::android::widget::SimpleAdapter_ViewBinder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SimpleAdapter_ViewBinder(::android::widget::SimpleAdapter_ViewBinder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SimpleAdapter_ViewBinder& operator=(const ::android::widget::SimpleAdapter_ViewBinder& x) {obj = x.obj; return *this;}
    ::android::widget::SimpleAdapter_ViewBinder& operator=(::android::widget::SimpleAdapter_ViewBinder&& x) {obj = std::move(x.obj); return *this;}
    
    bool setViewValue(const ::android::view::View&, const ::java::lang::Object&, const ::java::lang::String&) const;

};
}
}


