#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AdapterView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class Adapter; } }
namespace android { namespace widget { class SpinnerAdapter; } }

namespace android {
namespace widget {
class AbsSpinner : public virtual ::java::lang::Object,
                   public virtual ::android::widget::AdapterView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsSpinner(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AdapterView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsSpinner(const ::android::widget::AbsSpinner& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj;}
    AbsSpinner(::android::widget::AbsSpinner&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsSpinner& operator=(const ::android::widget::AbsSpinner& x) {obj = x.obj; return *this;}
    ::android::widget::AbsSpinner& operator=(::android::widget::AbsSpinner&& x) {obj = std::move(x.obj); return *this;}
    
    AbsSpinner(const ::android::content::Context&);
    AbsSpinner(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AbsSpinner(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setAdapter(const ::android::widget::SpinnerAdapter&) const ;
    void setSelection(int32_t, bool) const ;
    void setSelection(int32_t) const ;
    ::android::view::View getSelectedView() const ;
    void requestLayout() const ;
    ::android::widget::SpinnerAdapter getAdapter() const ;
    int32_t getCount() const ;
    int32_t pointToPosition(int32_t, int32_t) const ;
    ::android::os::Parcelable onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const ;
    void setAdapter(const ::android::widget::Adapter&) const ;

};
}
}


