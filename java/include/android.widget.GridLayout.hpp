#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class GridLayout_Alignment; } }
namespace android { namespace widget { class GridLayout_LayoutParams; } }
namespace android { namespace widget { class GridLayout_Spec; } }

namespace android {
namespace widget {
class GridLayout : public virtual ::java::lang::Object,
                   public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GridLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GridLayout(const ::android::widget::GridLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    GridLayout(::android::widget::GridLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::GridLayout& operator=(const ::android::widget::GridLayout& x) {obj = x.obj; return *this;}
    ::android::widget::GridLayout& operator=(::android::widget::GridLayout&& x) {obj = std::move(x.obj); return *this;}
    
    GridLayout(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    GridLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    GridLayout(const ::android::content::Context&);
    int32_t getOrientation() const ;
    void setOrientation(int32_t) const ;
    int32_t getRowCount() const ;
    void setRowCount(int32_t) const ;
    int32_t getColumnCount() const ;
    void setColumnCount(int32_t) const ;
    bool getUseDefaultMargins() const ;
    void setUseDefaultMargins(bool) const ;
    int32_t getAlignmentMode() const ;
    void setAlignmentMode(int32_t) const ;
    bool isRowOrderPreserved() const ;
    void setRowOrderPreserved(bool) const ;
    bool isColumnOrderPreserved() const ;
    void setColumnOrderPreserved(bool) const ;
    ::android::widget::GridLayout_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const ;
    void requestLayout() const ;
    static ::android::widget::GridLayout_Spec spec(int32_t, int32_t, const ::android::widget::GridLayout_Alignment&);
    static ::android::widget::GridLayout_Spec spec(int32_t, const ::android::widget::GridLayout_Alignment&);
    static ::android::widget::GridLayout_Spec spec(int32_t, int32_t);
    static ::android::widget::GridLayout_Spec spec(int32_t);

};
}
}

#include "android.widget.GridLayout_Alignment.hpp"
#include "android.widget.GridLayout_LayoutParams.hpp"
#include "android.widget.GridLayout_Spec.hpp"

