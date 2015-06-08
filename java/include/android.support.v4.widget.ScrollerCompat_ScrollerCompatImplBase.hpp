#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.ScrollerCompat_ScrollerCompatImpl.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { namespace animation { class Interpolator; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ScrollerCompat_ScrollerCompatImplBase : public virtual ::java::lang::Object,
                                              public virtual ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScrollerCompat_ScrollerCompatImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScrollerCompat_ScrollerCompatImplBase(const ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl((jobject)0) {obj = x.obj;}
    ScrollerCompat_ScrollerCompatImplBase(::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase& operator=(const ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase& operator=(::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object createScroller(const ::android::content::Context&, const ::android::view::animation::Interpolator&) const;
    bool isFinished(const ::java::lang::Object&) const;
    int32_t getCurrX(const ::java::lang::Object&) const;
    int32_t getCurrY(const ::java::lang::Object&) const;
    float getCurrVelocity(const ::java::lang::Object&) const;
    bool computeScrollOffset(const ::java::lang::Object&) const;
    void startScroll(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t) const;
    void startScroll(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void fling(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void fling(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void abortAnimation(const ::java::lang::Object&) const;
    void notifyHorizontalEdgeReached(const ::java::lang::Object&, int32_t, int32_t, int32_t) const;
    void notifyVerticalEdgeReached(const ::java::lang::Object&, int32_t, int32_t, int32_t) const;
    bool isOverScrolled(const ::java::lang::Object&) const;
    int32_t getFinalX(const ::java::lang::Object&) const;
    int32_t getFinalY(const ::java::lang::Object&) const;

};
}
}
}
}


