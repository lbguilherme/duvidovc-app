#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.KeyListener.hpp"
#include "android.text.method.MetaKeyKeyListener.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace text {
namespace method {
class BaseKeyListener : public virtual ::java::lang::Object,
                        public virtual ::android::text::method::KeyListener,
                        public virtual ::android::text::method::MetaKeyKeyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseKeyListener(jobject _obj) : ::java::lang::Object(_obj), ::android::text::method::KeyListener(_obj), ::android::text::method::MetaKeyKeyListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseKeyListener(const ::android::text::method::BaseKeyListener& x) : ::java::lang::Object((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj;}
    BaseKeyListener(::android::text::method::BaseKeyListener&& x) : ::java::lang::Object((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::BaseKeyListener& operator=(const ::android::text::method::BaseKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::BaseKeyListener& operator=(::android::text::method::BaseKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    BaseKeyListener();
    bool backspace(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const;
    bool forwardDelete(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyDown(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyOther(const ::android::view::View&, const ::android::text::Editable&, const ::android::view::KeyEvent&) const;

};
}
}
}


