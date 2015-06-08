#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class KeyEvent; } }

namespace android {
namespace view {
class KeyEvent_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEvent_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEvent_Callback(const ::android::view::KeyEvent_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyEvent_Callback(::android::view::KeyEvent_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::KeyEvent_Callback& operator=(const ::android::view::KeyEvent_Callback& x) {obj = x.obj; return *this;}
    ::android::view::KeyEvent_Callback& operator=(::android::view::KeyEvent_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyLongPress(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const;

};
}
}


