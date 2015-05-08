#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.inputmethodservice.AbstractInputMethodService_AbstractInputMethodImpl.hpp"

namespace android { namespace inputmethodservice { class InputMethodService; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class ResultReceiver; } }
namespace android { namespace view { namespace inputmethod { class EditorInfo; } } }
namespace android { namespace view { namespace inputmethod { class InputBinding; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace android { namespace view { namespace inputmethod { class InputMethodSubtype; } } }

namespace android {
namespace inputmethodservice {
class InputMethodService_InputMethodImpl : public virtual ::java::lang::Object,
                                           public virtual ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodService_InputMethodImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl(_obj), ::android::view::inputmethod::InputMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodService_InputMethodImpl(const ::android::inputmethodservice::InputMethodService_InputMethodImpl& x) : ::java::lang::Object((jobject)0), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl((jobject)0), ::android::view::inputmethod::InputMethod((jobject)0) {obj = x.obj;}
    InputMethodService_InputMethodImpl(::android::inputmethodservice::InputMethodService_InputMethodImpl&& x) : ::java::lang::Object((jobject)0), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl((jobject)0), ::android::view::inputmethod::InputMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::InputMethodService_InputMethodImpl& operator=(const ::android::inputmethodservice::InputMethodService_InputMethodImpl& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::InputMethodService_InputMethodImpl& operator=(::android::inputmethodservice::InputMethodService_InputMethodImpl&& x) {obj = std::move(x.obj); return *this;}
    
    InputMethodService_InputMethodImpl(const ::android::inputmethodservice::InputMethodService&);
    void attachToken(const ::android::os::IBinder&) const ;
    void bindInput(const ::android::view::inputmethod::InputBinding&) const ;
    void unbindInput() const ;
    void startInput(const ::android::view::inputmethod::InputConnection&, const ::android::view::inputmethod::EditorInfo&) const ;
    void restartInput(const ::android::view::inputmethod::InputConnection&, const ::android::view::inputmethod::EditorInfo&) const ;
    void hideSoftInput(int32_t, const ::android::os::ResultReceiver&) const ;
    void showSoftInput(int32_t, const ::android::os::ResultReceiver&) const ;
    void changeInputMethodSubtype(const ::android::view::inputmethod::InputMethodSubtype&) const ;

};
}
}


