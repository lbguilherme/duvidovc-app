#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Point; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace view { class ActionMode; } }
namespace android { namespace view { class ActionMode_Callback; } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewParent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace view {
class ViewParent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewParent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewParent(const ::android::view::ViewParent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewParent(::android::view::ViewParent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewParent& operator=(const ::android::view::ViewParent& x) {obj = x.obj; return *this;}
    ::android::view::ViewParent& operator=(::android::view::ViewParent&& x) {obj = std::move(x.obj); return *this;}
    
    void requestLayout() const;
    bool isLayoutRequested() const;
    void requestTransparentRegion(const ::android::view::View&) const;
    void invalidateChild(const ::android::view::View&, const ::android::graphics::Rect&) const;
    ::android::view::ViewParent invalidateChildInParent(const std::vector< int32_t>&, const ::android::graphics::Rect&) const;
    ::android::view::ViewParent getParent() const;
    void requestChildFocus(const ::android::view::View&, const ::android::view::View&) const;
    void recomputeViewAttributes(const ::android::view::View&) const;
    void clearChildFocus(const ::android::view::View&) const;
    bool getChildVisibleRect(const ::android::view::View&, const ::android::graphics::Rect&, const ::android::graphics::Point&) const;
    ::android::view::View focusSearch(const ::android::view::View&, int32_t) const;
    void bringChildToFront(const ::android::view::View&) const;
    void focusableViewAvailable(const ::android::view::View&) const;
    bool showContextMenuForChild(const ::android::view::View&) const;
    void createContextMenu(const ::android::view::ContextMenu&) const;
    ::android::view::ActionMode startActionModeForChild(const ::android::view::View&, const ::android::view::ActionMode_Callback&) const;
    void childDrawableStateChanged(const ::android::view::View&) const;
    void requestDisallowInterceptTouchEvent(bool) const;
    bool requestChildRectangleOnScreen(const ::android::view::View&, const ::android::graphics::Rect&, bool) const;
    bool requestSendAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}


