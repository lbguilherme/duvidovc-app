#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.inputmethod.InputMethodSession.hpp"

namespace android { namespace inputmethodservice { class AbstractInputMethodService; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { namespace inputmethod { class InputMethodSession_EventCallback; } } }

namespace android {
namespace inputmethodservice {
class AbstractInputMethodService_AbstractInputMethodSessionImpl : public virtual ::java::lang::Object,
                                                                  public virtual ::android::view::inputmethod::InputMethodSession {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractInputMethodService_AbstractInputMethodSessionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::view::inputmethod::InputMethodSession(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractInputMethodService_AbstractInputMethodSessionImpl(const ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl& x) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputMethodSession((jobject)0) {obj = x.obj;}
    AbstractInputMethodService_AbstractInputMethodSessionImpl(::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl&& x) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputMethodSession((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl& operator=(const ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl& operator=(::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractInputMethodService_AbstractInputMethodSessionImpl(const ::android::inputmethodservice::AbstractInputMethodService&);
    bool isEnabled() const;
    bool isRevoked() const;
    void setEnabled(bool) const;
    void revokeSelf() const;
    void dispatchKeyEvent(int32_t, const ::android::view::KeyEvent&, const ::android::view::inputmethod::InputMethodSession_EventCallback&) const;
    void dispatchTrackballEvent(int32_t, const ::android::view::MotionEvent&, const ::android::view::inputmethod::InputMethodSession_EventCallback&) const;

};
}
}


