#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class ViewConfiguration; } }

namespace android {
namespace view {
class ViewConfiguration : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewConfiguration(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewConfiguration(const ::android::view::ViewConfiguration& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewConfiguration(::android::view::ViewConfiguration&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewConfiguration& operator=(const ::android::view::ViewConfiguration& x) {obj = x.obj; return *this;}
    ::android::view::ViewConfiguration& operator=(::android::view::ViewConfiguration&& x) {obj = std::move(x.obj); return *this;}
    
    ViewConfiguration();
    static ::android::view::ViewConfiguration get(const ::android::content::Context&);
    static int32_t getScrollBarSize();
    int32_t getScaledScrollBarSize() const;
    static int32_t getScrollBarFadeDuration();
    static int32_t getScrollDefaultDelay();
    static int32_t getFadingEdgeLength();
    int32_t getScaledFadingEdgeLength() const;
    static int32_t getPressedStateDuration();
    static int32_t getLongPressTimeout();
    static int32_t getKeyRepeatTimeout();
    static int32_t getKeyRepeatDelay();
    static int32_t getTapTimeout();
    static int32_t getJumpTapTimeout();
    static int32_t getDoubleTapTimeout();
    static int32_t getEdgeSlop();
    int32_t getScaledEdgeSlop() const;
    static int32_t getTouchSlop();
    int32_t getScaledTouchSlop() const;
    int32_t getScaledPagingTouchSlop() const;
    int32_t getScaledDoubleTapSlop() const;
    static int32_t getWindowTouchSlop();
    int32_t getScaledWindowTouchSlop() const;
    static int32_t getMinimumFlingVelocity();
    int32_t getScaledMinimumFlingVelocity() const;
    static int32_t getMaximumFlingVelocity();
    int32_t getScaledMaximumFlingVelocity() const;
    static int32_t getMaximumDrawingCacheSize();
    int32_t getScaledMaximumDrawingCacheSize() const;
    int32_t getScaledOverscrollDistance() const;
    int32_t getScaledOverflingDistance() const;
    static int64_t getZoomControlsTimeout();
    static int64_t getGlobalActionKeyTimeout();
    static float getScrollFriction();
    bool hasPermanentMenuKey() const;

};
}
}


