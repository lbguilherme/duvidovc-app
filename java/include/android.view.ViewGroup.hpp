#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewManager.hpp"
#include "android.view.ViewParent.hpp"

namespace android { namespace animation { class LayoutTransition; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace graphics { class Point; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class Region; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ActionMode; } }
namespace android { namespace view { class ActionMode_Callback; } }
namespace android { namespace view { class DragEvent; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class ViewGroup_OnHierarchyChangeListener; } }
namespace android { namespace view { class ViewParent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace animation { class Animation_AnimationListener; } } }
namespace android { namespace view { namespace animation { class LayoutAnimationController; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace view {
class ViewGroup : public virtual ::java::lang::Object,
                  public virtual ::android::view::View,
                  public virtual ::android::view::ViewManager,
                  public virtual ::android::view::ViewParent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroup(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroup(const ::android::view::ViewGroup& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    ViewGroup(::android::view::ViewGroup&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewGroup& operator=(const ::android::view::ViewGroup& x) {obj = x.obj; return *this;}
    ::android::view::ViewGroup& operator=(::android::view::ViewGroup&& x) {obj = std::move(x.obj); return *this;}
    
    ViewGroup(const ::android::content::Context&);
    ViewGroup(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ViewGroup(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    int32_t getDescendantFocusability() const;
    void setDescendantFocusability(int32_t) const;
    void requestChildFocus(const ::android::view::View&, const ::android::view::View&) const;
    void focusableViewAvailable(const ::android::view::View&) const;
    bool showContextMenuForChild(const ::android::view::View&) const;
    ::android::view::ActionMode startActionModeForChild(const ::android::view::View&, const ::android::view::ActionMode_Callback&) const;
    ::android::view::View focusSearch(const ::android::view::View&, int32_t) const;
    bool requestChildRectangleOnScreen(const ::android::view::View&, const ::android::graphics::Rect&, bool) const;
    bool requestSendAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    bool onRequestSendAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    bool dispatchUnhandledMove(const ::android::view::View&, int32_t) const;
    void clearChildFocus(const ::android::view::View&) const;
    void clearFocus() const;
    ::android::view::View getFocusedChild() const;
    bool hasFocus() const;
    ::android::view::View findFocus() const;
    bool hasFocusable() const;
    void addFocusables(const ::java::util::ArrayList&, int32_t) const;
    void addFocusables(const ::java::util::ArrayList&, int32_t, int32_t) const;
    void findViewsWithText(const ::java::util::ArrayList&, const ::java::lang::CharSequence&, int32_t) const;
    void dispatchWindowFocusChanged(bool) const;
    void addTouchables(const ::java::util::ArrayList&) const;
    void dispatchDisplayHint(int32_t) const;
    void dispatchWindowVisibilityChanged(int32_t) const;
    void dispatchConfigurationChanged(const ::android::content::res::Configuration&) const;
    void recomputeViewAttributes(const ::android::view::View&) const;
    void bringChildToFront(const ::android::view::View&) const;
    bool dispatchDragEvent(const ::android::view::DragEvent&) const;
    void dispatchSystemUiVisibilityChanged(int32_t) const;
    bool dispatchKeyEventPreIme(const ::android::view::KeyEvent&) const;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    bool dispatchKeyShortcutEvent(const ::android::view::KeyEvent&) const;
    bool dispatchTrackballEvent(const ::android::view::MotionEvent&) const;
    bool onInterceptHoverEvent(const ::android::view::MotionEvent&) const;
    bool dispatchTouchEvent(const ::android::view::MotionEvent&) const;
    void setMotionEventSplittingEnabled(bool) const;
    bool isMotionEventSplittingEnabled() const;
    void requestDisallowInterceptTouchEvent(bool) const;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const;
    bool requestFocus(int32_t, const ::android::graphics::Rect&) const;
    void setPadding(int32_t, int32_t, int32_t, int32_t) const;
    void setClipChildren(bool) const;
    void setClipToPadding(bool) const;
    void dispatchSetSelected(bool) const;
    void dispatchSetActivated(bool) const;
    void addView(const ::android::view::View&) const;
    void addView(const ::android::view::View&, int32_t) const;
    void addView(const ::android::view::View&, int32_t, int32_t) const;
    void addView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const;
    void updateViewLayout(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const;
    void setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener&) const;
    void removeView(const ::android::view::View&) const;
    void removeViewInLayout(const ::android::view::View&) const;
    void removeViewsInLayout(int32_t, int32_t) const;
    void removeViewAt(int32_t) const;
    void removeViews(int32_t, int32_t) const;
    void setLayoutTransition(const ::android::animation::LayoutTransition&) const;
    ::android::animation::LayoutTransition getLayoutTransition() const;
    void removeAllViews() const;
    void removeAllViewsInLayout() const;
    void invalidateChild(const ::android::view::View&, const ::android::graphics::Rect&) const;
    ::android::view::ViewParent invalidateChildInParent(const std::vector< int32_t>&, const ::android::graphics::Rect&) const;
    void offsetDescendantRectToMyCoords(const ::android::view::View&, const ::android::graphics::Rect&) const;
    void offsetRectIntoDescendantCoords(const ::android::view::View&, const ::android::graphics::Rect&) const;
    bool getChildVisibleRect(const ::android::view::View&, const ::android::graphics::Rect&, const ::android::graphics::Point&) const;
    void layout(int32_t, int32_t, int32_t, int32_t) const;
    void startLayoutAnimation() const;
    void scheduleLayoutAnimation() const;
    void setLayoutAnimation(const ::android::view::animation::LayoutAnimationController&) const;
    ::android::view::animation::LayoutAnimationController getLayoutAnimation() const;
    bool isAnimationCacheEnabled() const;
    void setAnimationCacheEnabled(bool) const;
    bool isAlwaysDrawnWithCacheEnabled() const;
    void setAlwaysDrawnWithCacheEnabled(bool) const;
    int32_t getPersistentDrawingCache() const;
    void setPersistentDrawingCache(int32_t) const;
    ::android::view::ViewGroup_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;
    int32_t indexOfChild(const ::android::view::View&) const;
    int32_t getChildCount() const;
    ::android::view::View getChildAt(int32_t) const;
    static int32_t getChildMeasureSpec(int32_t, int32_t, int32_t);
    void clearDisappearingChildren() const;
    void startViewTransition(const ::android::view::View&) const;
    void endViewTransition(const ::android::view::View&) const;
    bool gatherTransparentRegion(const ::android::graphics::Region&) const;
    void requestTransparentRegion(const ::android::view::View&) const;
    ::android::view::animation::Animation_AnimationListener getLayoutAnimationListener() const;
    void jumpDrawablesToCurrentState() const;
    void setAddStatesFromChildren(bool) const;
    bool addStatesFromChildren() const;
    void childDrawableStateChanged(const ::android::view::View&) const;
    void setLayoutAnimationListener(const ::android::view::animation::Animation_AnimationListener&) const;
    bool shouldDelayChildPressedState() const;

};
}
}

#include "android.view.ViewGroup_LayoutParams.hpp"
#include "android.view.ViewGroup_MarginLayoutParams.hpp"
#include "android.view.ViewGroup_OnHierarchyChangeListener.hpp"

