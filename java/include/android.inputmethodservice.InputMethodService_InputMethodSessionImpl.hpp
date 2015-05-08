#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.inputmethodservice.AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace inputmethodservice { class InputMethodService; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace inputmethodservice {
class InputMethodService_InputMethodSessionImpl : public virtual ::java::lang::Object,
                                                  public virtual ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodService_InputMethodSessionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl(_obj), ::android::view::inputmethod::InputMethodSession(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodService_InputMethodSessionImpl(const ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl& x) : ::java::lang::Object((jobject)0), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl((jobject)0), ::android::view::inputmethod::InputMethodSession((jobject)0) {obj = x.obj;}
    InputMethodService_InputMethodSessionImpl(::android::inputmethodservice::InputMethodService_InputMethodSessionImpl&& x) : ::java::lang::Object((jobject)0), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl((jobject)0), ::android::view::inputmethod::InputMethodSession((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl& operator=(const ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl& operator=(::android::inputmethodservice::InputMethodService_InputMethodSessionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    InputMethodService_InputMethodSessionImpl(const ::android::inputmethodservice::InputMethodService&);
    void finishInput() const ;
    void displayCompletions(const std::vector< ::android::view::inputmethod::CompletionInfo>&) const ;
    void updateExtractedText(int32_t, const ::android::view::inputmethod::ExtractedText&) const ;
    void updateSelection(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void viewClicked(bool) const ;
    void updateCursor(const ::android::graphics::Rect&) const ;
    void appPrivateCommand(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void toggleSoftInput(int32_t, int32_t) const ;

};
}
}


