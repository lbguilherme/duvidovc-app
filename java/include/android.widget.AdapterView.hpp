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
namespace android { namespace view { class View; } }
namespace android { namespace view { class View_OnClickListener; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }
namespace android { namespace widget { class Adapter; } }
namespace android { namespace widget { class AdapterView_OnItemClickListener; } }
namespace android { namespace widget { class AdapterView_OnItemLongClickListener; } }
namespace android { namespace widget { class AdapterView_OnItemSelectedListener; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class AdapterView : public virtual ::java::lang::Object,
                    public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AdapterView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AdapterView(const ::android::widget::AdapterView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    AdapterView(::android::widget::AdapterView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AdapterView& operator=(const ::android::widget::AdapterView& x) {obj = x.obj; return *this;}
    ::android::widget::AdapterView& operator=(::android::widget::AdapterView&& x) {obj = std::move(x.obj); return *this;}
    
    AdapterView(const ::android::content::Context&);
    AdapterView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AdapterView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener&) const;
    ::android::widget::AdapterView_OnItemClickListener getOnItemClickListener() const;
    bool performItemClick(const ::android::view::View&, int32_t, int64_t) const;
    void setOnItemLongClickListener(const ::android::widget::AdapterView_OnItemLongClickListener&) const;
    ::android::widget::AdapterView_OnItemLongClickListener getOnItemLongClickListener() const;
    void setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener&) const;
    ::android::widget::AdapterView_OnItemSelectedListener getOnItemSelectedListener() const;
    ::android::widget::Adapter getAdapter() const;
    void setAdapter(const ::android::widget::Adapter&) const;
    void addView(const ::android::view::View&) const;
    void addView(const ::android::view::View&, int32_t) const;
    void addView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const;
    void removeView(const ::android::view::View&) const;
    void removeViewAt(int32_t) const;
    void removeAllViews() const;
    int32_t getSelectedItemPosition() const;
    int64_t getSelectedItemId() const;
    ::android::view::View getSelectedView() const;
    ::java::lang::Object getSelectedItem() const;
    int32_t getCount() const;
    int32_t getPositionForView(const ::android::view::View&) const;
    int32_t getFirstVisiblePosition() const;
    int32_t getLastVisiblePosition() const;
    void setSelection(int32_t) const;
    void setEmptyView(const ::android::view::View&) const;
    ::android::view::View getEmptyView() const;
    void setFocusable(bool) const;
    void setFocusableInTouchMode(bool) const;
    ::java::lang::Object getItemAtPosition(int32_t) const;
    int64_t getItemIdAtPosition(int32_t) const;
    void setOnClickListener(const ::android::view::View_OnClickListener&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    bool onRequestSendAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo&) const;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}

#include "android.widget.AdapterView_AdapterContextMenuInfo.hpp"
#include "android.widget.AdapterView_OnItemClickListener.hpp"
#include "android.widget.AdapterView_OnItemLongClickListener.hpp"
#include "android.widget.AdapterView_OnItemSelectedListener.hpp"

