#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewTreeObserver_OnPreDrawListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace content { namespace res { class TypedArray; } } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class Typeface; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace text { class Editable; } }
namespace android { namespace text { class Editable_Factory; } }
namespace android { namespace text { class InputFilter; } }
namespace android { namespace text { class Layout; } }
namespace android { namespace text { class Spannable_Factory; } }
namespace android { namespace text { class TextPaint; } }
namespace android { namespace text { class TextUtils_TruncateAt; } }
namespace android { namespace text { class TextWatcher; } }
namespace android { namespace text { namespace method { class KeyListener; } } }
namespace android { namespace text { namespace method { class MovementMethod; } } }
namespace android { namespace text { namespace method { class TransformationMethod; } } }
namespace android { namespace text { namespace style { class URLSpan; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ActionMode_Callback; } }
namespace android { namespace view { class DragEvent; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace view { namespace inputmethod { class CorrectionInfo; } } }
namespace android { namespace view { namespace inputmethod { class EditorInfo; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedTextRequest; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace android { namespace widget { class Scroller; } }
namespace android { namespace widget { class TextView_BufferType; } }
namespace android { namespace widget { class TextView_OnEditorActionListener; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace widget {
class TextView : public virtual ::java::lang::Object,
                 public virtual ::android::view::View,
                 public virtual ::android::view::ViewTreeObserver_OnPreDrawListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextView(const ::android::widget::TextView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    TextView(::android::widget::TextView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TextView& operator=(const ::android::widget::TextView& x) {obj = x.obj; return *this;}
    ::android::widget::TextView& operator=(::android::widget::TextView&& x) {obj = std::move(x.obj); return *this;}
    
    TextView(const ::android::content::Context&);
    TextView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    TextView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setEnabled(bool) const ;
    void setTypeface(const ::android::graphics::Typeface&, int32_t) const ;
    ::java::lang::CharSequence getText() const ;
    int32_t length() const ;
    ::android::text::Editable getEditableText() const ;
    int32_t getLineHeight() const ;
    ::android::text::Layout getLayout() const ;
    ::android::text::method::KeyListener getKeyListener() const ;
    void setKeyListener(const ::android::text::method::KeyListener&) const ;
    ::android::text::method::MovementMethod getMovementMethod() const ;
    void setMovementMethod(const ::android::text::method::MovementMethod&) const ;
    ::android::text::method::TransformationMethod getTransformationMethod() const ;
    void setTransformationMethod(const ::android::text::method::TransformationMethod&) const ;
    int32_t getCompoundPaddingTop() const ;
    int32_t getCompoundPaddingBottom() const ;
    int32_t getCompoundPaddingLeft() const ;
    int32_t getCompoundPaddingRight() const ;
    int32_t getExtendedPaddingTop() const ;
    int32_t getExtendedPaddingBottom() const ;
    int32_t getTotalPaddingLeft() const ;
    int32_t getTotalPaddingRight() const ;
    int32_t getTotalPaddingTop() const ;
    int32_t getTotalPaddingBottom() const ;
    void setCompoundDrawables(const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&) const ;
    void setCompoundDrawablesWithIntrinsicBounds(int32_t, int32_t, int32_t, int32_t) const ;
    void setCompoundDrawablesWithIntrinsicBounds(const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&, const ::android::graphics::drawable::Drawable&) const ;
    std::vector< ::android::graphics::drawable::Drawable> getCompoundDrawables() const ;
    void setCompoundDrawablePadding(int32_t) const ;
    int32_t getCompoundDrawablePadding() const ;
    void setPadding(int32_t, int32_t, int32_t, int32_t) const ;
    int32_t getAutoLinkMask() const ;
    void setTextAppearance(const ::android::content::Context&, int32_t) const ;
    float getTextSize() const ;
    void setTextSize(float) const ;
    void setTextSize(int32_t, float) const ;
    float getTextScaleX() const ;
    void setTextScaleX(float) const ;
    void setTypeface(const ::android::graphics::Typeface&) const ;
    ::android::graphics::Typeface getTypeface() const ;
    void setTextColor(int32_t) const ;
    void setTextColor(const ::android::content::res::ColorStateList&) const ;
    ::android::content::res::ColorStateList getTextColors() const ;
    int32_t getCurrentTextColor() const ;
    void setHighlightColor(int32_t) const ;
    void setShadowLayer(float, float, float, int32_t) const ;
    ::android::text::TextPaint getPaint() const ;
    void setAutoLinkMask(int32_t) const ;
    void setLinksClickable(bool) const ;
    bool getLinksClickable() const ;
    std::vector< ::android::text::style::URLSpan> getUrls() const ;
    void setHintTextColor(int32_t) const ;
    void setHintTextColor(const ::android::content::res::ColorStateList&) const ;
    ::android::content::res::ColorStateList getHintTextColors() const ;
    int32_t getCurrentHintTextColor() const ;
    void setLinkTextColor(int32_t) const ;
    void setLinkTextColor(const ::android::content::res::ColorStateList&) const ;
    ::android::content::res::ColorStateList getLinkTextColors() const ;
    void setGravity(int32_t) const ;
    int32_t getGravity() const ;
    int32_t getPaintFlags() const ;
    void setPaintFlags(int32_t) const ;
    void setHorizontallyScrolling(bool) const ;
    void setMinLines(int32_t) const ;
    void setMinHeight(int32_t) const ;
    void setMaxLines(int32_t) const ;
    void setMaxHeight(int32_t) const ;
    void setLines(int32_t) const ;
    void setHeight(int32_t) const ;
    void setMinEms(int32_t) const ;
    void setMinWidth(int32_t) const ;
    void setMaxEms(int32_t) const ;
    void setMaxWidth(int32_t) const ;
    void setEms(int32_t) const ;
    void setWidth(int32_t) const ;
    void setLineSpacing(float, float) const ;
    void append(const ::java::lang::CharSequence&) const ;
    void append(const ::java::lang::CharSequence&, int32_t, int32_t) const ;
    ::android::os::Parcelable onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const ;
    void setFreezesText(bool) const ;
    bool getFreezesText() const ;
    void setEditableFactory(const ::android::text::Editable_Factory&) const ;
    void setSpannableFactory(const ::android::text::Spannable_Factory&) const ;
    void setText(const ::java::lang::CharSequence&) const ;
    void setTextKeepState(const ::java::lang::CharSequence&) const ;
    void setText(const ::java::lang::CharSequence&, const ::android::widget::TextView_BufferType&) const ;
    void setText(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void setTextKeepState(const ::java::lang::CharSequence&, const ::android::widget::TextView_BufferType&) const ;
    void setText(int32_t) const ;
    void setText(int32_t, const ::android::widget::TextView_BufferType&) const ;
    void setHint(const ::java::lang::CharSequence&) const ;
    void setHint(int32_t) const ;
    ::java::lang::CharSequence getHint() const ;
    void setInputType(int32_t) const ;
    void setRawInputType(int32_t) const ;
    int32_t getInputType() const ;
    void setImeOptions(int32_t) const ;
    int32_t getImeOptions() const ;
    void setImeActionLabel(const ::java::lang::CharSequence&, int32_t) const ;
    ::java::lang::CharSequence getImeActionLabel() const ;
    int32_t getImeActionId() const ;
    void setOnEditorActionListener(const ::android::widget::TextView_OnEditorActionListener&) const ;
    void onEditorAction(int32_t) const ;
    void setPrivateImeOptions(const ::java::lang::String&) const ;
    ::java::lang::String getPrivateImeOptions() const ;
    void setInputExtras(int32_t) const ;
    ::android::os::Bundle getInputExtras(bool) const ;
    ::java::lang::CharSequence getError() const ;
    void setError(const ::java::lang::CharSequence&) const ;
    void setError(const ::java::lang::CharSequence&, const ::android::graphics::drawable::Drawable&) const ;
    void setFilters(const std::vector< ::android::text::InputFilter>&) const ;
    std::vector< ::android::text::InputFilter> getFilters() const ;
    bool onPreDraw() const ;
    void jumpDrawablesToCurrentState() const ;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const ;
    bool isTextSelectable() const ;
    void setTextIsSelectable(bool) const ;
    void getFocusedRect(const ::android::graphics::Rect&) const ;
    int32_t getLineCount() const ;
    int32_t getLineBounds(int32_t, const ::android::graphics::Rect&) const ;
    int32_t getBaseline() const ;
    bool onKeyPreIme(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    bool onCheckIsTextEditor() const ;
    ::android::view::inputmethod::InputConnection onCreateInputConnection(const ::android::view::inputmethod::EditorInfo&) const ;
    bool extractText(const ::android::view::inputmethod::ExtractedTextRequest&, const ::android::view::inputmethod::ExtractedText&) const ;
    void setExtractedText(const ::android::view::inputmethod::ExtractedText&) const ;
    void onCommitCompletion(const ::android::view::inputmethod::CompletionInfo&) const ;
    void onCommitCorrection(const ::android::view::inputmethod::CorrectionInfo&) const ;
    void beginBatchEdit() const ;
    void endBatchEdit() const ;
    void onBeginBatchEdit() const ;
    void onEndBatchEdit() const ;
    bool onPrivateIMECommand(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void setIncludeFontPadding(bool) const ;
    bool bringPointIntoView(int32_t) const ;
    bool moveCursorToVisibleOffset() const ;
    void computeScroll() const ;
    void debug(int32_t) const ;
    int32_t getSelectionStart() const ;
    int32_t getSelectionEnd() const ;
    bool hasSelection() const ;
    void setSingleLine() const ;
    void setAllCaps(bool) const ;
    void setSingleLine(bool) const ;
    void setEllipsize(const ::android::text::TextUtils_TruncateAt&) const ;
    void setMarqueeRepeatLimit(int32_t) const ;
    ::android::text::TextUtils_TruncateAt getEllipsize() const ;
    void setSelectAllOnFocus(bool) const ;
    void setCursorVisible(bool) const ;
    void addTextChangedListener(const ::android::text::TextWatcher&) const ;
    void removeTextChangedListener(const ::android::text::TextWatcher&) const ;
    void onStartTemporaryDetach() const ;
    void onFinishTemporaryDetach() const ;
    void onWindowFocusChanged(bool) const ;
    void clearComposingText() const ;
    void setSelected(bool) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const ;
    bool didTouchFocusSelect() const ;
    void cancelLongPress() const ;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const ;
    void setScroller(const ::android::widget::Scroller&) const ;
    void findViewsWithText(const ::java::util::ArrayList&, const ::java::lang::CharSequence&, int32_t) const ;
    static ::android::content::res::ColorStateList getTextColors(const ::android::content::Context&, const ::android::content::res::TypedArray&);
    static int32_t getTextColor(const ::android::content::Context&, const ::android::content::res::TypedArray&, int32_t);
    bool onKeyShortcut(int32_t, const ::android::view::KeyEvent&) const ;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo&) const ;
    void sendAccessibilityEvent(int32_t) const ;
    bool isInputMethodTarget() const ;
    bool onTextContextMenuItem(int32_t) const ;
    bool performLongClick() const ;
    bool isSuggestionsEnabled() const ;
    void setCustomSelectionActionModeCallback(const ::android::view::ActionMode_Callback&) const ;
    ::android::view::ActionMode_Callback getCustomSelectionActionModeCallback() const ;
    int32_t getOffsetForPosition(float, float) const ;
    bool onDragEvent(const ::android::view::DragEvent&) const ;

};
}
}

#include "android.widget.TextView_BufferType.hpp"
#include "android.widget.TextView_OnEditorActionListener.hpp"
#include "android.widget.TextView_SavedState.hpp"

