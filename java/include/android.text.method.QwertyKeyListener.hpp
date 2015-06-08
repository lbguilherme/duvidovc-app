#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.BaseKeyListener.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace text { class Spannable; } }
namespace android { namespace text { namespace method { class QwertyKeyListener; } } }
namespace android { namespace text { namespace method { class TextKeyListener_Capitalize; } } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace method {
class QwertyKeyListener : public virtual ::java::lang::Object,
                          public virtual ::android::text::method::BaseKeyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit QwertyKeyListener(jobject _obj) : ::java::lang::Object(_obj), ::android::text::method::BaseKeyListener(_obj), ::android::text::method::KeyListener(_obj), ::android::text::method::MetaKeyKeyListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    QwertyKeyListener(const ::android::text::method::QwertyKeyListener& x) : ::java::lang::Object((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj;}
    QwertyKeyListener(::android::text::method::QwertyKeyListener&& x) : ::java::lang::Object((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::QwertyKeyListener& operator=(const ::android::text::method::QwertyKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::QwertyKeyListener& operator=(::android::text::method::QwertyKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    QwertyKeyListener(const ::android::text::method::TextKeyListener_Capitalize&, bool);
    static ::android::text::method::QwertyKeyListener getInstance(bool, const ::android::text::method::TextKeyListener_Capitalize&);
    static ::android::text::method::QwertyKeyListener getInstanceForFullKeyboard();
    int32_t getInputType() const;
    bool onKeyDown(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const;
    static void markAsReplaced(const ::android::text::Spannable&, int32_t, int32_t, const ::java::lang::String&);

};
}
}
}


