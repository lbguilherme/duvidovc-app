#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.inputmethodservice.AbstractInputMethodService.hpp"

namespace android { namespace app { class Dialog; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace inputmethodservice { class AbstractInputMethodService_AbstractInputMethodImpl; } }
namespace android { namespace inputmethodservice { class AbstractInputMethodService_AbstractInputMethodSessionImpl; } }
namespace android { namespace inputmethodservice { class InputMethodService_Insets; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class Window; } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace view { namespace inputmethod { class EditorInfo; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }
namespace android { namespace view { namespace inputmethod { class InputBinding; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace inputmethodservice {
class InputMethodService : public virtual ::java::lang::Object,
                           public virtual ::android::inputmethodservice::AbstractInputMethodService {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::inputmethodservice::AbstractInputMethodService(_obj), ::android::view::KeyEvent_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodService(const ::android::inputmethodservice::InputMethodService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::inputmethodservice::AbstractInputMethodService((jobject)0), ::android::view::KeyEvent_Callback((jobject)0) {obj = x.obj;}
    InputMethodService(::android::inputmethodservice::InputMethodService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::inputmethodservice::AbstractInputMethodService((jobject)0), ::android::view::KeyEvent_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::InputMethodService& operator=(const ::android::inputmethodservice::InputMethodService& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::InputMethodService& operator=(::android::inputmethodservice::InputMethodService&& x) {obj = std::move(x.obj); return *this;}
    
    InputMethodService();
    void setTheme(int32_t) const ;
    void onCreate() const ;
    void onInitializeInterface() const ;
    void onDestroy() const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl onCreateInputMethodInterface() const ;
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl onCreateInputMethodSessionInterface() const ;
    ::android::view::LayoutInflater getLayoutInflater() const ;
    ::android::app::Dialog getWindow() const ;
    void setBackDisposition(int32_t) const ;
    int32_t getBackDisposition() const ;
    int32_t getMaxWidth() const ;
    ::android::view::inputmethod::InputBinding getCurrentInputBinding() const ;
    ::android::view::inputmethod::InputConnection getCurrentInputConnection() const ;
    bool getCurrentInputStarted() const ;
    ::android::view::inputmethod::EditorInfo getCurrentInputEditorInfo() const ;
    void updateFullscreenMode() const ;
    void onConfigureWindow(const ::android::view::Window&, bool, bool) const ;
    bool isFullscreenMode() const ;
    bool onEvaluateFullscreenMode() const ;
    void setExtractViewShown(bool) const ;
    bool isExtractViewShown() const ;
    void onComputeInsets(const ::android::inputmethodservice::InputMethodService_Insets&) const ;
    void updateInputViewShown() const ;
    bool isShowInputRequested() const ;
    bool isInputViewShown() const ;
    bool onEvaluateInputViewShown() const ;
    void setCandidatesViewShown(bool) const ;
    int32_t getCandidatesHiddenVisibility() const ;
    void showStatusIcon(int32_t) const ;
    void hideStatusIcon() const ;
    void switchInputMethod(const ::java::lang::String&) const ;
    void setExtractView(const ::android::view::View&) const ;
    void setCandidatesView(const ::android::view::View&) const ;
    void setInputView(const ::android::view::View&) const ;
    ::android::view::View onCreateExtractTextView() const ;
    ::android::view::View onCreateCandidatesView() const ;
    ::android::view::View onCreateInputView() const ;
    void onStartInputView(const ::android::view::inputmethod::EditorInfo&, bool) const ;
    void onFinishInputView(bool) const ;
    void onStartCandidatesView(const ::android::view::inputmethod::EditorInfo&, bool) const ;
    void onFinishCandidatesView(bool) const ;
    bool onShowInputRequested(int32_t, bool) const ;
    void showWindow(bool) const ;
    void hideWindow() const ;
    void onWindowShown() const ;
    void onWindowHidden() const ;
    void onBindInput() const ;
    void onUnbindInput() const ;
    void onStartInput(const ::android::view::inputmethod::EditorInfo&, bool) const ;
    void onFinishInput() const ;
    void onDisplayCompletions(const std::vector< ::android::view::inputmethod::CompletionInfo>&) const ;
    void onUpdateExtractedText(int32_t, const ::android::view::inputmethod::ExtractedText&) const ;
    void onUpdateSelection(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void onViewClicked(bool) const ;
    void onUpdateCursor(const ::android::graphics::Rect&) const ;
    void requestHideSelf(int32_t) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyLongPress(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const ;
    void onAppPrivateCommand(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void sendDownUpKeyEvents(int32_t) const ;
    bool sendDefaultEditorAction(bool) const ;
    void sendKeyChar(uint16_t) const ;
    void onExtractedSelectionChanged(int32_t, int32_t) const ;
    void onExtractedTextClicked() const ;
    void onExtractedCursorMovement(int32_t, int32_t) const ;
    bool onExtractTextContextMenuItem(int32_t) const ;
    ::java::lang::CharSequence getTextForImeAction(int32_t) const ;
    void onUpdateExtractingVisibility(const ::android::view::inputmethod::EditorInfo&) const ;
    void onUpdateExtractingViews(const ::android::view::inputmethod::EditorInfo&) const ;
    void onExtractingInputChanged(const ::android::view::inputmethod::EditorInfo&) const ;

};
}
}

#include "android.inputmethodservice.InputMethodService_InputMethodImpl.hpp"
#include "android.inputmethodservice.InputMethodService_InputMethodSessionImpl.hpp"
#include "android.inputmethodservice.InputMethodService_Insets.hpp"

