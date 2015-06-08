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
namespace android { namespace view { class ViewGroup_OnHierarchyChangeListener; } }
namespace android { namespace widget { class TableRow_LayoutParams; } }

namespace android {
namespace widget {
class TableRow : public virtual ::java::lang::Object,
                 public virtual ::android::widget::LinearLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TableRow(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::LinearLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TableRow(const ::android::widget::TableRow& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj;}
    TableRow(::android::widget::TableRow&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TableRow& operator=(const ::android::widget::TableRow& x) {obj = x.obj; return *this;}
    ::android::widget::TableRow& operator=(::android::widget::TableRow&& x) {obj = std::move(x.obj); return *this;}
    
    TableRow(const ::android::content::Context&);
    TableRow(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener&) const;
    ::android::view::View getVirtualChildAt(int32_t) const;
    int32_t getVirtualChildCount() const;
    ::android::widget::TableRow_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;

};
}
}

#include "android.widget.TableRow_LayoutParams.hpp"

