#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace appwidget { class AppWidgetProviderInfo; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class FrameLayout_LayoutParams; } }
namespace android { namespace widget { class RemoteViews; } }

namespace android {
namespace appwidget {
class AppWidgetHostView : public virtual ::java::lang::Object,
                          public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppWidgetHostView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppWidgetHostView(const ::android::appwidget::AppWidgetHostView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    AppWidgetHostView(::android::appwidget::AppWidgetHostView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::appwidget::AppWidgetHostView& operator=(const ::android::appwidget::AppWidgetHostView& x) {obj = x.obj; return *this;}
    ::android::appwidget::AppWidgetHostView& operator=(::android::appwidget::AppWidgetHostView&& x) {obj = std::move(x.obj); return *this;}
    
    AppWidgetHostView(const ::android::content::Context&);
    AppWidgetHostView(const ::android::content::Context&, int32_t, int32_t);
    void setAppWidget(int32_t, const ::android::appwidget::AppWidgetProviderInfo&) const ;
    static ::android::graphics::Rect getDefaultPaddingForWidget(const ::android::content::Context&, const ::android::content::ComponentName&, const ::android::graphics::Rect&);
    int32_t getAppWidgetId() const ;
    ::android::appwidget::AppWidgetProviderInfo getAppWidgetInfo() const ;
    ::android::widget::FrameLayout_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const ;
    void updateAppWidget(const ::android::widget::RemoteViews&) const ;

};
}
}


