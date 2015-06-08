#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class Cursor; } }
namespace android { namespace view { class View; } }

namespace android {
namespace widget {
class SimpleCursorTreeAdapter_ViewBinder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleCursorTreeAdapter_ViewBinder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleCursorTreeAdapter_ViewBinder(const ::android::widget::SimpleCursorTreeAdapter_ViewBinder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SimpleCursorTreeAdapter_ViewBinder(::android::widget::SimpleCursorTreeAdapter_ViewBinder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SimpleCursorTreeAdapter_ViewBinder& operator=(const ::android::widget::SimpleCursorTreeAdapter_ViewBinder& x) {obj = x.obj; return *this;}
    ::android::widget::SimpleCursorTreeAdapter_ViewBinder& operator=(::android::widget::SimpleCursorTreeAdapter_ViewBinder&& x) {obj = std::move(x.obj); return *this;}
    
    bool setViewValue(const ::android::view::View&, const ::android::database::Cursor&, int32_t) const;

};
}
}


