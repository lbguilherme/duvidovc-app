#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace gesture { class Gesture; } }
namespace android { namespace gesture { class GestureOverlayView_OnGestureListener; } }
namespace android { namespace gesture { class GestureOverlayView_OnGesturePerformedListener; } }
namespace android { namespace gesture { class GestureOverlayView_OnGesturingListener; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Path; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace gesture {
class GestureOverlayView : public virtual ::java::lang::Object,
                           public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureOverlayView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureOverlayView(const ::android::gesture::GestureOverlayView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    GestureOverlayView(::android::gesture::GestureOverlayView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureOverlayView& operator=(const ::android::gesture::GestureOverlayView& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureOverlayView& operator=(::android::gesture::GestureOverlayView&& x) {obj = std::move(x.obj); return *this;}
    
    GestureOverlayView(const ::android::content::Context&);
    GestureOverlayView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    GestureOverlayView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ::java::util::ArrayList getCurrentStroke() const;
    int32_t getOrientation() const;
    void setOrientation(int32_t) const;
    void setGestureColor(int32_t) const;
    void setUncertainGestureColor(int32_t) const;
    int32_t getUncertainGestureColor() const;
    int32_t getGestureColor() const;
    float getGestureStrokeWidth() const;
    void setGestureStrokeWidth(float) const;
    int32_t getGestureStrokeType() const;
    void setGestureStrokeType(int32_t) const;
    float getGestureStrokeLengthThreshold() const;
    void setGestureStrokeLengthThreshold(float) const;
    float getGestureStrokeSquarenessTreshold() const;
    void setGestureStrokeSquarenessTreshold(float) const;
    float getGestureStrokeAngleThreshold() const;
    void setGestureStrokeAngleThreshold(float) const;
    bool isEventsInterceptionEnabled() const;
    void setEventsInterceptionEnabled(bool) const;
    bool isFadeEnabled() const;
    void setFadeEnabled(bool) const;
    ::android::gesture::Gesture getGesture() const;
    void setGesture(const ::android::gesture::Gesture&) const;
    ::android::graphics::Path getGesturePath() const;
    ::android::graphics::Path getGesturePath(const ::android::graphics::Path&) const;
    bool isGestureVisible() const;
    void setGestureVisible(bool) const;
    int64_t getFadeOffset() const;
    void setFadeOffset(int64_t) const;
    void addOnGestureListener(const ::android::gesture::GestureOverlayView_OnGestureListener&) const;
    void removeOnGestureListener(const ::android::gesture::GestureOverlayView_OnGestureListener&) const;
    void removeAllOnGestureListeners() const;
    void addOnGesturePerformedListener(const ::android::gesture::GestureOverlayView_OnGesturePerformedListener&) const;
    void removeOnGesturePerformedListener(const ::android::gesture::GestureOverlayView_OnGesturePerformedListener&) const;
    void removeAllOnGesturePerformedListeners() const;
    void addOnGesturingListener(const ::android::gesture::GestureOverlayView_OnGesturingListener&) const;
    void removeOnGesturingListener(const ::android::gesture::GestureOverlayView_OnGesturingListener&) const;
    void removeAllOnGesturingListeners() const;
    bool isGesturing() const;
    void draw(const ::android::graphics::Canvas&) const;
    void clear(bool) const;
    void cancelClearAnimation() const;
    void cancelGesture() const;
    bool dispatchTouchEvent(const ::android::view::MotionEvent&) const;

};
}
}

#include "android.gesture.GestureOverlayView_OnGestureListener.hpp"
#include "android.gesture.GestureOverlayView_OnGesturePerformedListener.hpp"
#include "android.gesture.GestureOverlayView_OnGesturingListener.hpp"

