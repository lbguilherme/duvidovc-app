#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.inputmethod.InputMethod.hpp"

namespace android { namespace inputmethodservice { class AbstractInputMethodService; } }
namespace android { namespace view { namespace inputmethod { class InputMethod_SessionCallback; } } }
namespace android { namespace view { namespace inputmethod { class InputMethodSession; } } }

namespace android {
namespace inputmethodservice {
class AbstractInputMethodService_AbstractInputMethodImpl : public virtual ::java::lang::Object,
                                                           public virtual ::android::view::inputmethod::InputMethod {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractInputMethodService_AbstractInputMethodImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::view::inputmethod::InputMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractInputMethodService_AbstractInputMethodImpl(const ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl& x) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputMethod((jobject)0) {obj = x.obj;}
    AbstractInputMethodService_AbstractInputMethodImpl(::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl&& x) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl& operator=(const ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl& operator=(::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractInputMethodService_AbstractInputMethodImpl(const ::android::inputmethodservice::AbstractInputMethodService&);
    void createSession(const ::android::view::inputmethod::InputMethod_SessionCallback&) const;
    void setSessionEnabled(const ::android::view::inputmethod::InputMethodSession&, bool) const;
    void revokeSession(const ::android::view::inputmethod::InputMethodSession&) const;

};
}
}


