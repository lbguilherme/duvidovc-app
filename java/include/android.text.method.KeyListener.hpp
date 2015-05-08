#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace text {
namespace method {
class KeyListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyListener(const ::android::text::method::KeyListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyListener(::android::text::method::KeyListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::KeyListener& operator=(const ::android::text::method::KeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::KeyListener& operator=(::android::text::method::KeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getInputType() const ;
    bool onKeyDown(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyOther(const ::android::view::View&, const ::android::text::Editable&, const ::android::view::KeyEvent&) const ;
    void clearMetaKeyState(const ::android::view::View&, const ::android::text::Editable&, int32_t) const ;

};
}
}
}


