#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace support { namespace v4 { namespace widget { class SwipeRefreshLayout_OnRefreshListener; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SwipeRefreshLayout : public virtual ::java::lang::Object,
                           public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SwipeRefreshLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SwipeRefreshLayout(const ::android::support::v4::widget::SwipeRefreshLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    SwipeRefreshLayout(::android::support::v4::widget::SwipeRefreshLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SwipeRefreshLayout& operator=(const ::android::support::v4::widget::SwipeRefreshLayout& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SwipeRefreshLayout& operator=(::android::support::v4::widget::SwipeRefreshLayout&& x) {obj = std::move(x.obj); return *this;}
    
    void setProgressViewOffset(bool, int32_t, int32_t) const ;
    void setProgressViewEndTarget(bool, int32_t) const ;
    void setSize(int32_t) const ;
    SwipeRefreshLayout(const ::android::content::Context&);
    SwipeRefreshLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setOnRefreshListener(const ::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener&) const ;
    void setRefreshing(bool) const ;
    void setProgressBackgroundColor(int32_t) const ;
    void setProgressBackgroundColorSchemeResource(int32_t) const ;
    void setProgressBackgroundColorSchemeColor(int32_t) const ;
    void setColorScheme(const std::vector< int32_t>&) const ;
    void setColorSchemeResources(const std::vector< int32_t>&) const ;
    void setColorSchemeColors(const std::vector< int32_t>&) const ;
    bool isRefreshing() const ;
    void setDistanceToTriggerSync(int32_t) const ;
    void onMeasure(int32_t, int32_t) const ;
    int32_t getProgressCircleDiameter() const ;
    bool canChildScrollUp() const ;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const ;
    void requestDisallowInterceptTouchEvent(bool) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;

};
}
}
}
}

#include "android.support.v4.widget.SwipeRefreshLayout_OnRefreshListener.hpp"

