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
namespace android { namespace text { namespace method { class MultiTapKeyListener; } } }
namespace android { namespace text { namespace method { class TextKeyListener_Capitalize; } } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
namespace method {
class MultiTapKeyListener : public virtual ::java::lang::Object,
                            public virtual ::android::text::SpanWatcher,
                            public virtual ::android::text::method::BaseKeyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MultiTapKeyListener(jobject _obj) : ::java::lang::Object(_obj), ::android::text::NoCopySpan(_obj), ::android::text::SpanWatcher(_obj), ::android::text::method::BaseKeyListener(_obj), ::android::text::method::KeyListener(_obj), ::android::text::method::MetaKeyKeyListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MultiTapKeyListener(const ::android::text::method::MultiTapKeyListener& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::SpanWatcher((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj;}
    MultiTapKeyListener(::android::text::method::MultiTapKeyListener&& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::SpanWatcher((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::MultiTapKeyListener& operator=(const ::android::text::method::MultiTapKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::MultiTapKeyListener& operator=(::android::text::method::MultiTapKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    MultiTapKeyListener(const ::android::text::method::TextKeyListener_Capitalize&, bool);
    static ::android::text::method::MultiTapKeyListener getInstance(bool, const ::android::text::method::TextKeyListener_Capitalize&);
    int32_t getInputType() const ;
    bool onKeyDown(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const ;
    void onSpanChanged(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t) const ;
    void onSpanAdded(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t) const ;
    void onSpanRemoved(const ::android::text::Spannable&, const ::java::lang::Object&, int32_t, int32_t) const ;

};
}
}
}


