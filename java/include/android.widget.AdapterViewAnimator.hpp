#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AdapterView.hpp"

namespace android { namespace animation { class ObjectAnimator; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class Adapter; } }

namespace android {
namespace widget {
class AdapterViewAnimator : public virtual ::java::lang::Object,
                            public virtual ::android::widget::AdapterView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AdapterViewAnimator(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AdapterView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AdapterViewAnimator(const ::android::widget::AdapterViewAnimator& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj;}
    AdapterViewAnimator(::android::widget::AdapterViewAnimator&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AdapterViewAnimator& operator=(const ::android::widget::AdapterViewAnimator& x) {obj = x.obj; return *this;}
    ::android::widget::AdapterViewAnimator& operator=(::android::widget::AdapterViewAnimator&& x) {obj = std::move(x.obj); return *this;}
    
    AdapterViewAnimator(const ::android::content::Context&);
    AdapterViewAnimator(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AdapterViewAnimator(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setDisplayedChild(int32_t) const ;
    int32_t getDisplayedChild() const ;
    void showNext() const ;
    void showPrevious() const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    ::android::os::Parcelable onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const ;
    ::android::view::View getCurrentView() const ;
    ::android::animation::ObjectAnimator getInAnimation() const ;
    void setInAnimation(const ::android::animation::ObjectAnimator&) const ;
    ::android::animation::ObjectAnimator getOutAnimation() const ;
    void setOutAnimation(const ::android::animation::ObjectAnimator&) const ;
    void setInAnimation(const ::android::content::Context&, int32_t) const ;
    void setOutAnimation(const ::android::content::Context&, int32_t) const ;
    void setAnimateFirstView(bool) const ;
    int32_t getBaseline() const ;
    ::android::widget::Adapter getAdapter() const ;
    void setAdapter(const ::android::widget::Adapter&) const ;
    void setRemoteViewsAdapter(const ::android::content::Intent&) const ;
    void setSelection(int32_t) const ;
    ::android::view::View getSelectedView() const ;
    void deferNotifyDataSetChanged() const ;
    bool onRemoteAdapterConnected() const ;
    void onRemoteAdapterDisconnected() const ;
    void advance() const ;
    void fyiWillBeAdvancedByHostKThx() const ;

};
}
}


