#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable_Callback.hpp"
#include "android.view.KeyEvent_Callback.hpp"
#include "android.view.accessibility.AccessibilityEventSource.hpp"

namespace android { namespace content { class ClipData; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Point; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Handler; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class SparseArray; } }
namespace android { namespace view { class ActionMode; } }
namespace android { namespace view { class ActionMode_Callback; } }
namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class DragEvent; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class KeyEvent_DispatcherState; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class TouchDelegate; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class View_AccessibilityDelegate; } }
namespace android { namespace view { class View_DragShadowBuilder; } }
namespace android { namespace view { class View_OnAttachStateChangeListener; } }
namespace android { namespace view { class View_OnClickListener; } }
namespace android { namespace view { class View_OnCreateContextMenuListener; } }
namespace android { namespace view { class View_OnDragListener; } }
namespace android { namespace view { class View_OnFocusChangeListener; } }
namespace android { namespace view { class View_OnGenericMotionListener; } }
namespace android { namespace view { class View_OnHoverListener; } }
namespace android { namespace view { class View_OnKeyListener; } }
namespace android { namespace view { class View_OnLayoutChangeListener; } }
namespace android { namespace view { class View_OnLongClickListener; } }
namespace android { namespace view { class View_OnSystemUiVisibilityChangeListener; } }
namespace android { namespace view { class View_OnTouchListener; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class ViewParent; } }
namespace android { namespace view { class ViewPropertyAnimator; } }
namespace android { namespace view { class ViewTreeObserver; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }
namespace android { namespace view { namespace animation { class Animation; } } }
namespace android { namespace view { namespace inputmethod { class EditorInfo; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace view {
class View : public virtual ::java::lang::Object,
             public virtual ::android::graphics::drawable::Drawable_Callback,
             public virtual ::android::view::KeyEvent_Callback,
             public virtual ::android::view::accessibility::AccessibilityEventSource {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View(const ::android::view::View& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    View(::android::view::View&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View& operator=(const ::android::view::View& x) {obj = x.obj; return *this;}
    ::android::view::View& operator=(::android::view::View&& x) {obj = std::move(x.obj); return *this;}
    
    View(const ::android::content::Context&);
    View(const ::android::content::Context&, const ::android::util::AttributeSet&);
    View(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    int32_t getVerticalFadingEdgeLength() const;
    void setFadingEdgeLength(int32_t) const;
    int32_t getHorizontalFadingEdgeLength() const;
    int32_t getVerticalScrollbarWidth() const;
    void setVerticalScrollbarPosition(int32_t) const;
    int32_t getVerticalScrollbarPosition() const;
    void setOnFocusChangeListener(const ::android::view::View_OnFocusChangeListener&) const;
    void addOnLayoutChangeListener(const ::android::view::View_OnLayoutChangeListener&) const;
    void removeOnLayoutChangeListener(const ::android::view::View_OnLayoutChangeListener&) const;
    void addOnAttachStateChangeListener(const ::android::view::View_OnAttachStateChangeListener&) const;
    void removeOnAttachStateChangeListener(const ::android::view::View_OnAttachStateChangeListener&) const;
    ::android::view::View_OnFocusChangeListener getOnFocusChangeListener() const;
    void setOnClickListener(const ::android::view::View_OnClickListener&) const;
    bool hasOnClickListeners() const;
    void setOnLongClickListener(const ::android::view::View_OnLongClickListener&) const;
    void setOnCreateContextMenuListener(const ::android::view::View_OnCreateContextMenuListener&) const;
    bool performClick() const;
    bool callOnClick() const;
    bool performLongClick() const;
    bool showContextMenu() const;
    ::android::view::ActionMode startActionMode(const ::android::view::ActionMode_Callback&) const;
    void setOnKeyListener(const ::android::view::View_OnKeyListener&) const;
    void setOnTouchListener(const ::android::view::View_OnTouchListener&) const;
    void setOnGenericMotionListener(const ::android::view::View_OnGenericMotionListener&) const;
    void setOnHoverListener(const ::android::view::View_OnHoverListener&) const;
    void setOnDragListener(const ::android::view::View_OnDragListener&) const;
    bool requestRectangleOnScreen(const ::android::graphics::Rect&) const;
    bool requestRectangleOnScreen(const ::android::graphics::Rect&, bool) const;
    void clearFocus() const;
    bool hasFocus() const;
    bool hasFocusable() const;
    void sendAccessibilityEvent(int32_t) const;
    void sendAccessibilityEventUnchecked(const ::android::view::accessibility::AccessibilityEvent&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    ::android::view::accessibility::AccessibilityNodeInfo createAccessibilityNodeInfo() const;
    void onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo&) const;
    void setAccessibilityDelegate(const ::android::view::View_AccessibilityDelegate&) const;
    ::java::lang::CharSequence getContentDescription() const;
    void setContentDescription(const ::java::lang::CharSequence&) const;
    bool isFocused() const;
    ::android::view::View findFocus() const;
    void setScrollContainer(bool) const;
    int32_t getDrawingCacheQuality() const;
    void setDrawingCacheQuality(int32_t) const;
    bool getKeepScreenOn() const;
    void setKeepScreenOn(bool) const;
    int32_t getNextFocusLeftId() const;
    void setNextFocusLeftId(int32_t) const;
    int32_t getNextFocusRightId() const;
    void setNextFocusRightId(int32_t) const;
    int32_t getNextFocusUpId() const;
    void setNextFocusUpId(int32_t) const;
    int32_t getNextFocusDownId() const;
    void setNextFocusDownId(int32_t) const;
    int32_t getNextFocusForwardId() const;
    void setNextFocusForwardId(int32_t) const;
    bool isShown() const;
    void setFitsSystemWindows(bool) const;
    bool fitsSystemWindows() const;
    int32_t getVisibility() const;
    void setVisibility(int32_t) const;
    bool isEnabled() const;
    void setEnabled(bool) const;
    void setFocusable(bool) const;
    void setFocusableInTouchMode(bool) const;
    void setSoundEffectsEnabled(bool) const;
    bool isSoundEffectsEnabled() const;
    void setHapticFeedbackEnabled(bool) const;
    bool isHapticFeedbackEnabled() const;
    void setWillNotDraw(bool) const;
    bool willNotDraw() const;
    void setWillNotCacheDrawing(bool) const;
    bool willNotCacheDrawing() const;
    bool isClickable() const;
    void setClickable(bool) const;
    bool isLongClickable() const;
    void setLongClickable(bool) const;
    void setPressed(bool) const;
    bool isPressed() const;
    bool isSaveEnabled() const;
    void setSaveEnabled(bool) const;
    bool getFilterTouchesWhenObscured() const;
    void setFilterTouchesWhenObscured(bool) const;
    bool isSaveFromParentEnabled() const;
    void setSaveFromParentEnabled(bool) const;
    bool isFocusable() const;
    bool isFocusableInTouchMode() const;
    ::android::view::View focusSearch(int32_t) const;
    bool dispatchUnhandledMove(const ::android::view::View&, int32_t) const;
    ::java::util::ArrayList getFocusables(int32_t) const;
    void addFocusables(const ::java::util::ArrayList&, int32_t) const;
    void addFocusables(const ::java::util::ArrayList&, int32_t, int32_t) const;
    void findViewsWithText(const ::java::util::ArrayList&, const ::java::lang::CharSequence&, int32_t) const;
    ::java::util::ArrayList getTouchables() const;
    void addTouchables(const ::java::util::ArrayList&) const;
    bool requestFocus() const;
    bool requestFocus(int32_t) const;
    bool requestFocus(int32_t, const ::android::graphics::Rect&) const;
    bool requestFocusFromTouch() const;
    void onStartTemporaryDetach() const;
    void onFinishTemporaryDetach() const;
    ::android::view::KeyEvent_DispatcherState getKeyDispatcherState() const;
    bool dispatchKeyEventPreIme(const ::android::view::KeyEvent&) const;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    bool dispatchKeyShortcutEvent(const ::android::view::KeyEvent&) const;
    bool dispatchTouchEvent(const ::android::view::MotionEvent&) const;
    bool onFilterTouchEventForSecurity(const ::android::view::MotionEvent&) const;
    bool dispatchTrackballEvent(const ::android::view::MotionEvent&) const;
    bool dispatchGenericMotionEvent(const ::android::view::MotionEvent&) const;
    void dispatchWindowFocusChanged(bool) const;
    void onWindowFocusChanged(bool) const;
    bool hasWindowFocus() const;
    void dispatchDisplayHint(int32_t) const;
    void dispatchWindowVisibilityChanged(int32_t) const;
    int32_t getWindowVisibility() const;
    void getWindowVisibleDisplayFrame(const ::android::graphics::Rect&) const;
    void dispatchConfigurationChanged(const ::android::content::res::Configuration&) const;
    bool isInTouchMode() const;
    ::android::content::Context getContext() const;
    bool onKeyPreIme(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyLongPress(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyShortcut(int32_t, const ::android::view::KeyEvent&) const;
    bool onCheckIsTextEditor() const;
    ::android::view::inputmethod::InputConnection onCreateInputConnection(const ::android::view::inputmethod::EditorInfo&) const;
    bool checkInputConnectionProxy(const ::android::view::View&) const;
    void createContextMenu(const ::android::view::ContextMenu&) const;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const;
    bool onHoverEvent(const ::android::view::MotionEvent&) const;
    bool isHovered() const;
    void setHovered(bool) const;
    void onHoverChanged(bool) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    void cancelLongPress() const;
    void setTouchDelegate(const ::android::view::TouchDelegate&) const;
    ::android::view::TouchDelegate getTouchDelegate() const;
    void bringToFront() const;
    ::android::view::ViewParent getParent() const;
    void setScrollX(int32_t) const;
    void setScrollY(int32_t) const;
    int32_t getScrollX() const;
    int32_t getScrollY() const;
    int32_t getWidth() const;
    int32_t getHeight() const;
    void getDrawingRect(const ::android::graphics::Rect&) const;
    int32_t getMeasuredWidth() const;
    int32_t getMeasuredWidthAndState() const;
    int32_t getMeasuredHeight() const;
    int32_t getMeasuredHeightAndState() const;
    int32_t getMeasuredState() const;
    ::android::graphics::Matrix getMatrix() const;
    void setCameraDistance(float) const;
    float getRotation() const;
    void setRotation(float) const;
    float getRotationY() const;
    void setRotationY(float) const;
    float getRotationX() const;
    void setRotationX(float) const;
    float getScaleX() const;
    void setScaleX(float) const;
    float getScaleY() const;
    void setScaleY(float) const;
    float getPivotX() const;
    void setPivotX(float) const;
    float getPivotY() const;
    void setPivotY(float) const;
    float getAlpha() const;
    void setAlpha(float) const;
    int32_t getTop() const;
    void setTop(int32_t) const;
    int32_t getBottom() const;
    bool isDirty() const;
    void setBottom(int32_t) const;
    int32_t getLeft() const;
    void setLeft(int32_t) const;
    int32_t getRight() const;
    void setRight(int32_t) const;
    float getX() const;
    void setX(float) const;
    float getY() const;
    void setY(float) const;
    float getTranslationX() const;
    void setTranslationX(float) const;
    float getTranslationY() const;
    void setTranslationY(float) const;
    void getHitRect(const ::android::graphics::Rect&) const;
    void getFocusedRect(const ::android::graphics::Rect&) const;
    bool getGlobalVisibleRect(const ::android::graphics::Rect&, const ::android::graphics::Point&) const;
    bool getGlobalVisibleRect(const ::android::graphics::Rect&) const;
    bool getLocalVisibleRect(const ::android::graphics::Rect&) const;
    void offsetTopAndBottom(int32_t) const;
    void offsetLeftAndRight(int32_t) const;
    ::android::view::ViewGroup_LayoutParams getLayoutParams() const;
    void setLayoutParams(const ::android::view::ViewGroup_LayoutParams&) const;
    void scrollTo(int32_t, int32_t) const;
    void scrollBy(int32_t, int32_t) const;
    void invalidate(const ::android::graphics::Rect&) const;
    void invalidate(int32_t, int32_t, int32_t, int32_t) const;
    void invalidate() const;
    bool isOpaque() const;
    ::android::os::Handler getHandler() const;
    bool post(const ::java::lang::Runnable&) const;
    bool postDelayed(const ::java::lang::Runnable&, int64_t) const;
    bool removeCallbacks(const ::java::lang::Runnable&) const;
    void postInvalidate() const;
    void postInvalidate(int32_t, int32_t, int32_t, int32_t) const;
    void postInvalidateDelayed(int64_t) const;
    void postInvalidateDelayed(int64_t, int32_t, int32_t, int32_t, int32_t) const;
    void computeScroll() const;
    bool isHorizontalFadingEdgeEnabled() const;
    void setHorizontalFadingEdgeEnabled(bool) const;
    bool isVerticalFadingEdgeEnabled() const;
    void setVerticalFadingEdgeEnabled(bool) const;
    bool isHorizontalScrollBarEnabled() const;
    void setHorizontalScrollBarEnabled(bool) const;
    bool isVerticalScrollBarEnabled() const;
    void setVerticalScrollBarEnabled(bool) const;
    void setScrollbarFadingEnabled(bool) const;
    bool isScrollbarFadingEnabled() const;
    void setScrollBarStyle(int32_t) const;
    int32_t getScrollBarStyle() const;
    bool canScrollHorizontally(int32_t) const;
    bool canScrollVertically(int32_t) const;
    ::android::os::IBinder getWindowToken() const;
    ::android::os::IBinder getApplicationWindowToken() const;
    void saveHierarchyState(const ::android::util::SparseArray&) const;
    void restoreHierarchyState(const ::android::util::SparseArray&) const;
    int64_t getDrawingTime() const;
    void setDuplicateParentStateEnabled(bool) const;
    bool isDuplicateParentStateEnabled() const;
    void setLayerType(int32_t, const ::android::graphics::Paint&) const;
    int32_t getLayerType() const;
    void buildLayer() const;
    void setDrawingCacheEnabled(bool) const;
    bool isDrawingCacheEnabled() const;
    ::android::graphics::Bitmap getDrawingCache() const;
    ::android::graphics::Bitmap getDrawingCache(bool) const;
    void destroyDrawingCache() const;
    void setDrawingCacheBackgroundColor(int32_t) const;
    int32_t getDrawingCacheBackgroundColor() const;
    void buildDrawingCache() const;
    void buildDrawingCache(bool) const;
    bool isInEditMode() const;
    bool isHardwareAccelerated() const;
    void draw(const ::android::graphics::Canvas&) const;
    int32_t getSolidColor() const;
    bool isLayoutRequested() const;
    void layout(int32_t, int32_t, int32_t, int32_t) const;
    ::android::content::res::Resources getResources() const;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const;
    void scheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&, int64_t) const;
    void unscheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&) const;
    void unscheduleDrawable(const ::android::graphics::drawable::Drawable&) const;
    void refreshDrawableState() const;
    std::vector< int32_t> getDrawableState() const;
    void jumpDrawablesToCurrentState() const;
    void setBackgroundColor(int32_t) const;
    void setBackgroundResource(int32_t) const;
    void setBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    ::android::graphics::drawable::Drawable getBackground() const;
    void setPadding(int32_t, int32_t, int32_t, int32_t) const;
    int32_t getPaddingTop() const;
    int32_t getPaddingBottom() const;
    int32_t getPaddingLeft() const;
    int32_t getPaddingRight() const;
    void setSelected(bool) const;
    bool isSelected() const;
    void setActivated(bool) const;
    bool isActivated() const;
    ::android::view::ViewTreeObserver getViewTreeObserver() const;
    ::android::view::View getRootView() const;
    void getLocationOnScreen(const std::vector< int32_t>&) const;
    void getLocationInWindow(const std::vector< int32_t>&) const;
    ::android::view::View findViewById(int32_t) const;
    ::android::view::View findViewWithTag(const ::java::lang::Object&) const;
    void setId(int32_t) const;
    int32_t getId() const;
    ::java::lang::Object getTag() const;
    void setTag(const ::java::lang::Object&) const;
    ::java::lang::Object getTag(int32_t) const;
    void setTag(int32_t, const ::java::lang::Object&) const;
    int32_t getBaseline() const;
    void requestLayout() const;
    void forceLayout() const;
    void measure(int32_t, int32_t) const;
    static int32_t combineMeasuredStates(int32_t, int32_t);
    static int32_t resolveSize(int32_t, int32_t);
    static int32_t resolveSizeAndState(int32_t, int32_t, int32_t);
    static int32_t getDefaultSize(int32_t, int32_t);
    void setMinimumHeight(int32_t) const;
    void setMinimumWidth(int32_t) const;
    ::android::view::animation::Animation getAnimation() const;
    void startAnimation(const ::android::view::animation::Animation&) const;
    void clearAnimation() const;
    void setAnimation(const ::android::view::animation::Animation&) const;
    void playSoundEffect(int32_t) const;
    bool performHapticFeedback(int32_t) const;
    bool performHapticFeedback(int32_t, int32_t) const;
    void setSystemUiVisibility(int32_t) const;
    int32_t getSystemUiVisibility() const;
    void setOnSystemUiVisibilityChangeListener(const ::android::view::View_OnSystemUiVisibilityChangeListener&) const;
    void dispatchSystemUiVisibilityChanged(int32_t) const;
    bool startDrag(const ::android::content::ClipData&, const ::android::view::View_DragShadowBuilder&, const ::java::lang::Object&, int32_t) const;
    bool onDragEvent(const ::android::view::DragEvent&) const;
    bool dispatchDragEvent(const ::android::view::DragEvent&) const;
    static ::android::view::View inflate(const ::android::content::Context&, int32_t, const ::android::view::ViewGroup&);
    int32_t getOverScrollMode() const;
    void setOverScrollMode(int32_t) const;
    ::android::view::ViewPropertyAnimator animate() const;

};
}
}

#include "android.view.View_AccessibilityDelegate.hpp"
#include "android.view.View_BaseSavedState.hpp"
#include "android.view.View_DragShadowBuilder.hpp"
#include "android.view.View_MeasureSpec.hpp"
#include "android.view.View_OnAttachStateChangeListener.hpp"
#include "android.view.View_OnClickListener.hpp"
#include "android.view.View_OnCreateContextMenuListener.hpp"
#include "android.view.View_OnDragListener.hpp"
#include "android.view.View_OnFocusChangeListener.hpp"
#include "android.view.View_OnGenericMotionListener.hpp"
#include "android.view.View_OnHoverListener.hpp"
#include "android.view.View_OnKeyListener.hpp"
#include "android.view.View_OnLayoutChangeListener.hpp"
#include "android.view.View_OnLongClickListener.hpp"
#include "android.view.View_OnSystemUiVisibilityChangeListener.hpp"
#include "android.view.View_OnTouchListener.hpp"

