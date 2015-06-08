#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
namespace inputmethod {
class InputMethodSession_EventCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodSession_EventCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodSession_EventCallback(const ::android::view::inputmethod::InputMethodSession_EventCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputMethodSession_EventCallback(::android::view::inputmethod::InputMethodSession_EventCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputMethodSession_EventCallback& operator=(const ::android::view::inputmethod::InputMethodSession_EventCallback& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputMethodSession_EventCallback& operator=(::android::view::inputmethod::InputMethodSession_EventCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void finishedEvent(int32_t, bool) const;

};
}
}
}


