#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { namespace inputmethod { class InputMethodSession; } } }

namespace android {
namespace view {
namespace inputmethod {
class InputMethod_SessionCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethod_SessionCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethod_SessionCallback(const ::android::view::inputmethod::InputMethod_SessionCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputMethod_SessionCallback(::android::view::inputmethod::InputMethod_SessionCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputMethod_SessionCallback& operator=(const ::android::view::inputmethod::InputMethod_SessionCallback& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputMethod_SessionCallback& operator=(::android::view::inputmethod::InputMethod_SessionCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void sessionCreated(const ::android::view::inputmethod::InputMethodSession&) const ;

};
}
}
}


