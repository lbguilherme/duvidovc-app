#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.ScrollerCompat_ScrollerCompatImplGingerbread.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ScrollerCompat_ScrollerCompatImplIcs : public virtual ::java::lang::Object,
                                             public virtual ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScrollerCompat_ScrollerCompatImplIcs(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl(_obj), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScrollerCompat_ScrollerCompatImplIcs(const ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl((jobject)0), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread((jobject)0) {obj = x.obj;}
    ScrollerCompat_ScrollerCompatImplIcs(::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl((jobject)0), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs& operator=(const ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs& operator=(::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs&& x) {obj = std::move(x.obj); return *this;}
    
    float getCurrVelocity(const ::java::lang::Object&) const;

};
}
}
}
}


