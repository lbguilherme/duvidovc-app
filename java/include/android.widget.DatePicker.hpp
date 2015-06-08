#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace widget { class CalendarView; } }
namespace android { namespace widget { class DatePicker_OnDateChangedListener; } }

namespace android {
namespace widget {
class DatePicker : public virtual ::java::lang::Object,
                   public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatePicker(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatePicker(const ::android::widget::DatePicker& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    DatePicker(::android::widget::DatePicker&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::DatePicker& operator=(const ::android::widget::DatePicker& x) {obj = x.obj; return *this;}
    ::android::widget::DatePicker& operator=(::android::widget::DatePicker&& x) {obj = std::move(x.obj); return *this;}
    
    DatePicker(const ::android::content::Context&);
    DatePicker(const ::android::content::Context&, const ::android::util::AttributeSet&);
    DatePicker(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    int64_t getMinDate() const;
    void setMinDate(int64_t) const;
    int64_t getMaxDate() const;
    void setMaxDate(int64_t) const;
    void setEnabled(bool) const;
    bool isEnabled() const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    bool getCalendarViewShown() const;
    ::android::widget::CalendarView getCalendarView() const;
    void setCalendarViewShown(bool) const;
    bool getSpinnersShown() const;
    void setSpinnersShown(bool) const;
    void updateDate(int32_t, int32_t, int32_t) const;
    void init(int32_t, int32_t, int32_t, const ::android::widget::DatePicker_OnDateChangedListener&) const;
    int32_t getYear() const;
    int32_t getMonth() const;
    int32_t getDayOfMonth() const;

};
}
}

#include "android.widget.DatePicker_OnDateChangedListener.hpp"

