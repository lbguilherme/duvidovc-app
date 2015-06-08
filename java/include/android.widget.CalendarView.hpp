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
namespace android { namespace widget { class CalendarView_OnDateChangeListener; } }

namespace android {
namespace widget {
class CalendarView : public virtual ::java::lang::Object,
                     public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarView(const ::android::widget::CalendarView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    CalendarView(::android::widget::CalendarView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::CalendarView& operator=(const ::android::widget::CalendarView& x) {obj = x.obj; return *this;}
    ::android::widget::CalendarView& operator=(::android::widget::CalendarView&& x) {obj = std::move(x.obj); return *this;}
    
    CalendarView(const ::android::content::Context&);
    CalendarView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    CalendarView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setEnabled(bool) const;
    bool isEnabled() const;
    int64_t getMinDate() const;
    void setMinDate(int64_t) const;
    int64_t getMaxDate() const;
    void setMaxDate(int64_t) const;
    void setShowWeekNumber(bool) const;
    bool getShowWeekNumber() const;
    int32_t getFirstDayOfWeek() const;
    void setFirstDayOfWeek(int32_t) const;
    void setOnDateChangeListener(const ::android::widget::CalendarView_OnDateChangeListener&) const;
    int64_t getDate() const;
    void setDate(int64_t) const;
    void setDate(int64_t, bool, bool) const;

};
}
}

#include "android.widget.CalendarView_OnDateChangeListener.hpp"

