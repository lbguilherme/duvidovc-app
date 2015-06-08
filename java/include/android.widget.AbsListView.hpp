#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.TextWatcher.hpp"
#include "android.view.ViewTreeObserver_OnGlobalLayoutListener.hpp"
#include "android.view.ViewTreeObserver_OnTouchModeChangeListener.hpp"
#include "android.widget.AdapterView.hpp"
#include "android.widget.Filter_FilterListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace text { class Editable; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class SparseBooleanArray; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace inputmethod { class EditorInfo; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace android { namespace widget { class AbsListView_LayoutParams; } }
namespace android { namespace widget { class AbsListView_MultiChoiceModeListener; } }
namespace android { namespace widget { class AbsListView_OnScrollListener; } }
namespace android { namespace widget { class AbsListView_RecyclerListener; } }
namespace android { namespace widget { class Adapter; } }
namespace android { namespace widget { class ListAdapter; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class List; } }

namespace android {
namespace widget {
class AbsListView : public virtual ::java::lang::Object,
                    public virtual ::android::text::TextWatcher,
                    public virtual ::android::view::ViewTreeObserver_OnGlobalLayoutListener,
                    public virtual ::android::view::ViewTreeObserver_OnTouchModeChangeListener,
                    public virtual ::android::widget::AdapterView,
                    public virtual ::android::widget::Filter_FilterListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsListView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::text::NoCopySpan(_obj), ::android::text::TextWatcher(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::ViewTreeObserver_OnGlobalLayoutListener(_obj), ::android::view::ViewTreeObserver_OnTouchModeChangeListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AdapterView(_obj), ::android::widget::Filter_FilterListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsListView(const ::android::widget::AbsListView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {obj = x.obj;}
    AbsListView(::android::widget::AbsListView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsListView& operator=(const ::android::widget::AbsListView& x) {obj = x.obj; return *this;}
    ::android::widget::AbsListView& operator=(::android::widget::AbsListView&& x) {obj = std::move(x.obj); return *this;}
    
    AbsListView(const ::android::content::Context&);
    AbsListView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AbsListView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setOverScrollMode(int32_t) const;
    void setAdapter(const ::android::widget::ListAdapter&) const;
    int32_t getCheckedItemCount() const;
    bool isItemChecked(int32_t) const;
    int32_t getCheckedItemPosition() const;
    ::android::util::SparseBooleanArray getCheckedItemPositions() const;
    std::vector< int64_t> getCheckedItemIds() const;
    void clearChoices() const;
    void setItemChecked(int32_t, bool) const;
    bool performItemClick(const ::android::view::View&, int32_t, int64_t) const;
    int32_t getChoiceMode() const;
    void setChoiceMode(int32_t) const;
    void setMultiChoiceModeListener(const ::android::widget::AbsListView_MultiChoiceModeListener&) const;
    void setFastScrollEnabled(bool) const;
    void setFastScrollAlwaysVisible(bool) const;
    bool isFastScrollAlwaysVisible() const;
    int32_t getVerticalScrollbarWidth() const;
    bool isFastScrollEnabled() const;
    void setVerticalScrollbarPosition(int32_t) const;
    void setSmoothScrollbarEnabled(bool) const;
    bool isSmoothScrollbarEnabled() const;
    void setOnScrollListener(const ::android::widget::AbsListView_OnScrollListener&) const;
    void sendAccessibilityEvent(int32_t) const;
    bool isScrollingCacheEnabled() const;
    void setScrollingCacheEnabled(bool) const;
    void setTextFilterEnabled(bool) const;
    bool isTextFilterEnabled() const;
    void getFocusedRect(const ::android::graphics::Rect&) const;
    bool isStackFromBottom() const;
    void setStackFromBottom(bool) const;
    ::android::os::Parcelable onSaveInstanceState() const;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const;
    void setFilterText(const ::java::lang::String&) const;
    ::java::lang::CharSequence getTextFilter() const;
    void requestLayout() const;
    ::android::view::View getSelectedView() const;
    int32_t getListPaddingTop() const;
    int32_t getListPaddingBottom() const;
    int32_t getListPaddingLeft() const;
    int32_t getListPaddingRight() const;
    void setDrawSelectorOnTop(bool) const;
    void setSelector(int32_t) const;
    void setSelector(const ::android::graphics::drawable::Drawable&) const;
    ::android::graphics::drawable::Drawable getSelector() const;
    void setScrollIndicators(const ::android::view::View&, const ::android::view::View&) const;
    bool verifyDrawable(const ::android::graphics::drawable::Drawable&) const;
    void jumpDrawablesToCurrentState() const;
    void onWindowFocusChanged(bool) const;
    bool showContextMenuForChild(const ::android::view::View&) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    int32_t pointToPosition(int32_t, int32_t) const;
    int64_t pointToRowId(int32_t, int32_t) const;
    void onTouchModeChanged(bool) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const;
    void draw(const ::android::graphics::Canvas&) const;
    void requestDisallowInterceptTouchEvent(bool) const;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const;
    void addTouchables(const ::java::util::ArrayList&) const;
    void setFriction(float) const;
    void setVelocityScale(float) const;
    void smoothScrollToPosition(int32_t) const;
    void smoothScrollToPositionFromTop(int32_t, int32_t, int32_t) const;
    void smoothScrollToPositionFromTop(int32_t, int32_t) const;
    void smoothScrollToPosition(int32_t, int32_t) const;
    void smoothScrollBy(int32_t, int32_t) const;
    void invalidateViews() const;
    ::android::view::inputmethod::InputConnection onCreateInputConnection(const ::android::view::inputmethod::EditorInfo&) const;
    bool checkInputConnectionProxy(const ::android::view::View&) const;
    void clearTextFilter() const;
    bool hasTextFilter() const;
    void onGlobalLayout() const;
    void beforeTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const;
    void onTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const;
    void afterTextChanged(const ::android::text::Editable&) const;
    void onFilterComplete(int32_t) const;
    ::android::widget::AbsListView_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;
    void setTranscriptMode(int32_t) const;
    int32_t getTranscriptMode() const;
    int32_t getSolidColor() const;
    void setCacheColorHint(int32_t) const;
    int32_t getCacheColorHint() const;
    void reclaimViews(const ::java::util::List&) const;
    void setRemoteViewsAdapter(const ::android::content::Intent&) const;
    void deferNotifyDataSetChanged() const;
    bool onRemoteAdapterConnected() const;
    void onRemoteAdapterDisconnected() const;
    void setRecyclerListener(const ::android::widget::AbsListView_RecyclerListener&) const;
    void setAdapter(const ::android::widget::Adapter&) const;

};
}
}

#include "android.widget.AbsListView_LayoutParams.hpp"
#include "android.widget.AbsListView_MultiChoiceModeListener.hpp"
#include "android.widget.AbsListView_OnScrollListener.hpp"
#include "android.widget.AbsListView_RecyclerListener.hpp"
#include "android.widget.AbsListView_SelectionBoundsAdjuster.hpp"

