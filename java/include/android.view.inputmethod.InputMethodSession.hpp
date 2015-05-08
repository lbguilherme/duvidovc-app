#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }
namespace android { namespace view { namespace inputmethod { class InputMethodSession_EventCallback; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace inputmethod {
class InputMethodSession : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodSession(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodSession(const ::android::view::inputmethod::InputMethodSession& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputMethodSession(::android::view::inputmethod::InputMethodSession&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputMethodSession& operator=(const ::android::view::inputmethod::InputMethodSession& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputMethodSession& operator=(::android::view::inputmethod::InputMethodSession&& x) {obj = std::move(x.obj); return *this;}
    
    void finishInput() const ;
    void updateSelection(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void viewClicked(bool) const ;
    void updateCursor(const ::android::graphics::Rect&) const ;
    void displayCompletions(const std::vector< ::android::view::inputmethod::CompletionInfo>&) const ;
    void updateExtractedText(int32_t, const ::android::view::inputmethod::ExtractedText&) const ;
    void dispatchKeyEvent(int32_t, const ::android::view::KeyEvent&, const ::android::view::inputmethod::InputMethodSession_EventCallback&) const ;
    void dispatchTrackballEvent(int32_t, const ::android::view::MotionEvent&, const ::android::view::inputmethod::InputMethodSession_EventCallback&) const ;
    void appPrivateCommand(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void toggleSoftInput(int32_t, int32_t) const ;

};
}
}
}

#include "android.view.inputmethod.InputMethodSession_EventCallback.hpp"

