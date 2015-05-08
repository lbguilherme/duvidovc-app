#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.LinearLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class ViewGroup_OnHierarchyChangeListener; } }
namespace android { namespace widget { class TableLayout_LayoutParams; } }

namespace android {
namespace widget {
class TableLayout : public virtual ::java::lang::Object,
                    public virtual ::android::widget::LinearLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TableLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::LinearLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TableLayout(const ::android::widget::TableLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj;}
    TableLayout(::android::widget::TableLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TableLayout& operator=(const ::android::widget::TableLayout& x) {obj = x.obj; return *this;}
    ::android::widget::TableLayout& operator=(::android::widget::TableLayout&& x) {obj = std::move(x.obj); return *this;}
    
    TableLayout(const ::android::content::Context&);
    TableLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener&) const ;
    void requestLayout() const ;
    bool isShrinkAllColumns() const ;
    void setShrinkAllColumns(bool) const ;
    bool isStretchAllColumns() const ;
    void setStretchAllColumns(bool) const ;
    void setColumnCollapsed(int32_t, bool) const ;
    bool isColumnCollapsed(int32_t) const ;
    void setColumnStretchable(int32_t, bool) const ;
    bool isColumnStretchable(int32_t) const ;
    void setColumnShrinkable(int32_t, bool) const ;
    bool isColumnShrinkable(int32_t) const ;
    void addView(const ::android::view::View&) const ;
    void addView(const ::android::view::View&, int32_t) const ;
    void addView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const ;
    ::android::widget::TableLayout_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const ;

};
}
}

#include "android.widget.TableLayout_LayoutParams.hpp"

