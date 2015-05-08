#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.Filter.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class CursorFilter : public virtual ::java::lang::Object,
                     public virtual ::android::widget::Filter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Filter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorFilter(const ::android::support::v4::widget::CursorFilter& x) : ::java::lang::Object((jobject)0), ::android::widget::Filter((jobject)0) {obj = x.obj;}
    CursorFilter(::android::support::v4::widget::CursorFilter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Filter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::CursorFilter& operator=(const ::android::support::v4::widget::CursorFilter& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::CursorFilter& operator=(::android::support::v4::widget::CursorFilter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::CharSequence convertResultToString(const ::java::lang::Object&) const ;

};
}
}
}
}

#include "android.support.v4.widget.CursorFilter_CursorFilterClient.hpp"

