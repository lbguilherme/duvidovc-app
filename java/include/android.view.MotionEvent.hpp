#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "android.view.InputEvent.hpp"

namespace android { namespace graphics { class Matrix; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class MotionEvent_PointerCoords; } }
namespace android { namespace view { class MotionEvent_PointerProperties; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class MotionEvent : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable,
                    public virtual ::android::view::InputEvent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MotionEvent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::InputEvent(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MotionEvent(const ::android::view::MotionEvent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {obj = x.obj;}
    MotionEvent(::android::view::MotionEvent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::MotionEvent& operator=(const ::android::view::MotionEvent& x) {obj = x.obj; return *this;}
    ::android::view::MotionEvent& operator=(::android::view::MotionEvent&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::MotionEvent obtain(int64_t, int64_t, int32_t, int32_t, const std::vector< ::android::view::MotionEvent_PointerProperties>&, const std::vector< ::android::view::MotionEvent_PointerCoords>&, int32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t);
    static ::android::view::MotionEvent obtain(int64_t, int64_t, int32_t, int32_t, const std::vector< int32_t>&, const std::vector< ::android::view::MotionEvent_PointerCoords>&, int32_t, float, float, int32_t, int32_t, int32_t, int32_t);
    static ::android::view::MotionEvent obtain(int64_t, int64_t, int32_t, float, float, float, float, int32_t, float, float, int32_t, int32_t);
    static ::android::view::MotionEvent obtain(int64_t, int64_t, int32_t, int32_t, float, float, float, float, int32_t, float, float, int32_t, int32_t);
    static ::android::view::MotionEvent obtain(int64_t, int64_t, int32_t, float, float, int32_t);
    static ::android::view::MotionEvent obtain(const ::android::view::MotionEvent&);
    static ::android::view::MotionEvent obtainNoHistory(const ::android::view::MotionEvent&);
    void recycle() const ;
    int32_t getDeviceId() const ;
    int32_t getSource() const ;
    void setSource(int32_t) const ;
    int32_t getAction() const ;
    int32_t getActionMasked() const ;
    int32_t getActionIndex() const ;
    int32_t getFlags() const ;
    int64_t getDownTime() const ;
    int64_t getEventTime() const ;
    float getX() const ;
    float getY() const ;
    float getPressure() const ;
    float getSize() const ;
    float getTouchMajor() const ;
    float getTouchMinor() const ;
    float getToolMajor() const ;
    float getToolMinor() const ;
    float getOrientation() const ;
    float getAxisValue(int32_t) const ;
    int32_t getPointerCount() const ;
    int32_t getPointerId(int32_t) const ;
    int32_t getToolType(int32_t) const ;
    int32_t findPointerIndex(int32_t) const ;
    float getX(int32_t) const ;
    float getY(int32_t) const ;
    float getPressure(int32_t) const ;
    float getSize(int32_t) const ;
    float getTouchMajor(int32_t) const ;
    float getTouchMinor(int32_t) const ;
    float getToolMajor(int32_t) const ;
    float getToolMinor(int32_t) const ;
    float getOrientation(int32_t) const ;
    float getAxisValue(int32_t, int32_t) const ;
    void getPointerCoords(int32_t, const ::android::view::MotionEvent_PointerCoords&) const ;
    void getPointerProperties(int32_t, const ::android::view::MotionEvent_PointerProperties&) const ;
    int32_t getMetaState() const ;
    int32_t getButtonState() const ;
    float getRawX() const ;
    float getRawY() const ;
    float getXPrecision() const ;
    float getYPrecision() const ;
    int32_t getHistorySize() const ;
    int64_t getHistoricalEventTime(int32_t) const ;
    float getHistoricalX(int32_t) const ;
    float getHistoricalY(int32_t) const ;
    float getHistoricalPressure(int32_t) const ;
    float getHistoricalSize(int32_t) const ;
    float getHistoricalTouchMajor(int32_t) const ;
    float getHistoricalTouchMinor(int32_t) const ;
    float getHistoricalToolMajor(int32_t) const ;
    float getHistoricalToolMinor(int32_t) const ;
    float getHistoricalOrientation(int32_t) const ;
    float getHistoricalAxisValue(int32_t, int32_t) const ;
    float getHistoricalX(int32_t, int32_t) const ;
    float getHistoricalY(int32_t, int32_t) const ;
    float getHistoricalPressure(int32_t, int32_t) const ;
    float getHistoricalSize(int32_t, int32_t) const ;
    float getHistoricalTouchMajor(int32_t, int32_t) const ;
    float getHistoricalTouchMinor(int32_t, int32_t) const ;
    float getHistoricalToolMajor(int32_t, int32_t) const ;
    float getHistoricalToolMinor(int32_t, int32_t) const ;
    float getHistoricalOrientation(int32_t, int32_t) const ;
    float getHistoricalAxisValue(int32_t, int32_t, int32_t) const ;
    void getHistoricalPointerCoords(int32_t, int32_t, const ::android::view::MotionEvent_PointerCoords&) const ;
    int32_t getEdgeFlags() const ;
    void setEdgeFlags(int32_t) const ;
    void setAction(int32_t) const ;
    void offsetLocation(float, float) const ;
    void setLocation(float, float) const ;
    void transform(const ::android::graphics::Matrix&) const ;
    void addBatch(int64_t, float, float, float, float, int32_t) const ;
    void addBatch(int64_t, const std::vector< ::android::view::MotionEvent_PointerCoords>&, int32_t) const ;
    ::java::lang::String toString() const ;
    static ::java::lang::String axisToString(int32_t);
    static int32_t axisFromString(const ::java::lang::String&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}

#include "android.view.MotionEvent_PointerCoords.hpp"
#include "android.view.MotionEvent_PointerProperties.hpp"

