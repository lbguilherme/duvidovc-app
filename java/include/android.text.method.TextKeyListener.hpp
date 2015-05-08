#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.SpanWatcher.hpp"
#include "android.text.method.BaseKeyListener.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace text { class Spannable; } }
namespace android { namespace text { namespace method { class TextKeyListener; } } }
namespace android { namespace text { namespace method { class TextKeyListener_Capitalize; } } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
namespace method {
class TextKeyListener : public virtual ::java::lang::Object,
                        public virtual ::android::text::SpanWatcher,
                        public virtual ::android::text::method::BaseKeyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextKeyListener(jobject _obj) : ::java::lang::Object(_obj), ::android::text::NoCopySpan(_obj), ::android::text::SpanWatcher(_obj), ::android::text::method::BaseKeyListener(_obj), ::android::text::method::KeyListener(_obj), ::android::text::method::MetaKeyKeyListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextKeyListener(const ::android::text::method::TextKeyListener& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::SpanWatcher((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj;}
    TextKeyListener(::android::text::method::TextKeyListener&& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::SpanWatcher((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::TextKeyListener& operator=(const ::android::text::method::TextKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::TextKeyListener& operator=(::android::text::method::TextKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    TextKeyListener(const ::android::text::method::TextKeyListener_Capitalize&, bool);
    static ::android::text::method::TextKeyListener getInstance(bool, const ::android::text::method::TextKeyListener_Capitalize&);
    static ::android::text::method::TextKeyListener getInstance();
    static bool shouldCap(const ::android::text::method::TextKeyListener_Capitalize&, const ::java::lang::CharSequence&, int32_t);
    int32_t getInputType() const ;
    bool onKeyDown(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyOther(const ::android::view::View&, const ::android::text::Editable&, const ::android::view::KeyEvent&) const ;
    static void clear(const ::android::text::Editable&);
    void onSpanAdded(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t) const ;
    void onSpanRemoved(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t) const ;
    void onSpanChanged(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t) const ;
    void release() const ;

};
}
}
}

#include "android.text.method.TextKeyListener_Capitalize.hpp"

