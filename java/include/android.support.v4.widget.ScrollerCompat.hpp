#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace support { namespace v4 { namespace widget { class ScrollerCompat; } } } }
namespace android { namespace view { namespace animation { class Interpolator; } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ScrollerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScrollerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScrollerCompat(const ::android::support::v4::widget::ScrollerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ScrollerCompat(::android::support::v4::widget::ScrollerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ScrollerCompat& operator=(const ::android::support::v4::widget::ScrollerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ScrollerCompat& operator=(::android::support::v4::widget::ScrollerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::widget::ScrollerCompat create(const ::android::content::Context&);
    static ::android::support::v4::widget::ScrollerCompat create(const ::android::content::Context&, const ::android::view::animation::Interpolator&);
    bool isFinished() const ;
    int32_t getCurrX() const ;
    int32_t getCurrY() const ;
    int32_t getFinalX() const ;
    int32_t getFinalY() const ;
    float getCurrVelocity() const ;
    bool computeScrollOffset() const ;
    void startScroll(int32_t, int32_t, int32_t, int32_t) const ;
    void startScroll(int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void fling(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void fling(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void abortAnimation() const ;
    void notifyHorizontalEdgeReached(int32_t, int32_t, int32_t) const ;
    void notifyVerticalEdgeReached(int32_t, int32_t, int32_t) const ;
    bool isOverScrolled() const ;

};
}
}
}
}

#include "android.support.v4.widget.ScrollerCompat_ScrollerCompatImpl.hpp"
#include "android.support.v4.widget.ScrollerCompat_ScrollerCompatImplBase.hpp"
#include "android.support.v4.widget.ScrollerCompat_ScrollerCompatImplGingerbread.hpp"
#include "android.support.v4.widget.ScrollerCompat_ScrollerCompatImplIcs.hpp"

