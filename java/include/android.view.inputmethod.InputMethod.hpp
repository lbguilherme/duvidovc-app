#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class ResultReceiver; } }
namespace android { namespace view { namespace inputmethod { class EditorInfo; } } }
namespace android { namespace view { namespace inputmethod { class InputBinding; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace android { namespace view { namespace inputmethod { class InputMethod_SessionCallback; } } }
namespace android { namespace view { namespace inputmethod { class InputMethodSession; } } }
namespace android { namespace view { namespace inputmethod { class InputMethodSubtype; } } }

namespace android {
namespace view {
namespace inputmethod {
class InputMethod : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethod(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethod(const ::android::view::inputmethod::InputMethod& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputMethod(::android::view::inputmethod::InputMethod&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputMethod& operator=(const ::android::view::inputmethod::InputMethod& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputMethod& operator=(::android::view::inputmethod::InputMethod&& x) {obj = std::move(x.obj); return *this;}
    
    void attachToken(const ::android::os::IBinder&) const ;
    void bindInput(const ::android::view::inputmethod::InputBinding&) const ;
    void unbindInput() const ;
    void startInput(const ::android::view::inputmethod::InputConnection&, const ::android::view::inputmethod::EditorInfo&) const ;
    void restartInput(const ::android::view::inputmethod::InputConnection&, const ::android::view::inputmethod::EditorInfo&) const ;
    void createSession(const ::android::view::inputmethod::InputMethod_SessionCallback&) const ;
    void setSessionEnabled(const ::android::view::inputmethod::InputMethodSession&, bool) const ;
    void revokeSession(const ::android::view::inputmethod::InputMethodSession&) const ;
    void showSoftInput(int32_t, const ::android::os::ResultReceiver&) const ;
    void hideSoftInput(int32_t, const ::android::os::ResultReceiver&) const ;
    void changeInputMethodSubtype(const ::android::view::inputmethod::InputMethodSubtype&) const ;

};
}
}
}

#include "android.view.inputmethod.InputMethod_SessionCallback.hpp"

