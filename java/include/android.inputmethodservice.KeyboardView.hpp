#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"
#include "android.view.View_OnClickListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace inputmethodservice { class Keyboard; } }
namespace android { namespace inputmethodservice { class KeyboardView_OnKeyboardActionListener; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace inputmethodservice {
class KeyboardView : public virtual ::java::lang::Object,
                     public virtual ::android::view::View,
                     public virtual ::android::view::View_OnClickListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyboardView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::View_OnClickListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyboardView(const ::android::inputmethodservice::KeyboardView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    KeyboardView(::android::inputmethodservice::KeyboardView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::KeyboardView& operator=(const ::android::inputmethodservice::KeyboardView& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::KeyboardView& operator=(::android::inputmethodservice::KeyboardView&& x) {obj = std::move(x.obj); return *this;}
    
    KeyboardView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    KeyboardView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setOnKeyboardActionListener(const ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener&) const;
    void setKeyboard(const ::android::inputmethodservice::Keyboard&) const;
    ::android::inputmethodservice::Keyboard getKeyboard() const;
    bool setShifted(bool) const;
    bool isShifted() const;
    void setPreviewEnabled(bool) const;
    bool isPreviewEnabled() const;
    void setVerticalCorrection(int32_t) const;
    void setPopupParent(const ::android::view::View&) const;
    void setPopupOffset(int32_t, int32_t) const;
    void setProximityCorrectionEnabled(bool) const;
    bool isProximityCorrectionEnabled() const;
    void onMeasure(int32_t, int32_t) const;
    void onSizeChanged(int32_t, int32_t, int32_t, int32_t) const;
    void onDraw(const ::android::graphics::Canvas&) const;
    void invalidateAllKeys() const;
    void invalidateKey(int32_t) const;
    bool onHoverEvent(const ::android::view::MotionEvent&) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    void closing() const;
    void onDetachedFromWindow() const;
    bool handleBack() const;
    void onClick(const ::android::view::View&) const;

};
}
}

#include "android.inputmethodservice.KeyboardView_OnKeyboardActionListener.hpp"

