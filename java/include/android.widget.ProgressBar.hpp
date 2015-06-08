#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace animation { class Interpolator; } } }

namespace android {
namespace widget {
class ProgressBar : public virtual ::java::lang::Object,
                    public virtual ::android::view::View {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgressBar(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgressBar(const ::android::widget::ProgressBar& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    ProgressBar(::android::widget::ProgressBar&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ProgressBar& operator=(const ::android::widget::ProgressBar& x) {obj = x.obj; return *this;}
    ::android::widget::ProgressBar& operator=(::android::widget::ProgressBar&& x) {obj = std::move(x.obj); return *this;}
    
    ProgressBar(const ::android::content::Context&);
    ProgressBar(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ProgressBar(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    bool isIndeterminate() const;
    void setIndeterminate(bool) const;
    ::android::graphics::drawable::Drawable getIndeterminateDrawable() const;
    void setIndeterminateDrawable(const ::android::graphics::drawable::Drawable&) const;
    ::android::graphics::drawable::Drawable getProgressDrawable() const;
    void setProgressDrawable(const ::android::graphics::drawable::Drawable&) const;
    void jumpDrawablesToCurrentState() const;
    void postInvalidate() const;
    void setProgress(int32_t) const;
    void setSecondaryProgress(int32_t) const;
    int32_t getProgress() const;
    int32_t getSecondaryProgress() const;
    int32_t getMax() const;
    void setMax(int32_t) const;
    void incrementProgressBy(int32_t) const;
    void incrementSecondaryProgressBy(int32_t) const;
    void setInterpolator(const ::android::content::Context&, int32_t) const;
    void setInterpolator(const ::android::view::animation::Interpolator&) const;
    ::android::view::animation::Interpolator getInterpolator() const;
    void setVisibility(int32_t) const;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const;
    ::android::os::Parcelable onSaveInstanceState() const;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}


