#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AbsSeekBar.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class RatingBar_OnRatingBarChangeListener; } }

namespace android {
namespace widget {
class RatingBar : public virtual ::java::lang::Object,
                  public virtual ::android::widget::AbsSeekBar {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RatingBar(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsSeekBar(_obj), ::android::widget::ProgressBar(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RatingBar(const ::android::widget::RatingBar& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj;}
    RatingBar(::android::widget::RatingBar&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RatingBar& operator=(const ::android::widget::RatingBar& x) {obj = x.obj; return *this;}
    ::android::widget::RatingBar& operator=(::android::widget::RatingBar&& x) {obj = std::move(x.obj); return *this;}
    
    RatingBar(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    RatingBar(const ::android::content::Context&, const ::android::util::AttributeSet&);
    RatingBar(const ::android::content::Context&);
    void setOnRatingBarChangeListener(const ::android::widget::RatingBar_OnRatingBarChangeListener&) const;
    ::android::widget::RatingBar_OnRatingBarChangeListener getOnRatingBarChangeListener() const;
    void setIsIndicator(bool) const;
    bool isIndicator() const;
    void setNumStars(int32_t) const;
    int32_t getNumStars() const;
    void setRating(float) const;
    float getRating() const;
    void setStepSize(float) const;
    float getStepSize() const;
    void setMax(int32_t) const;

};
}
}

#include "android.widget.RatingBar_OnRatingBarChangeListener.hpp"

