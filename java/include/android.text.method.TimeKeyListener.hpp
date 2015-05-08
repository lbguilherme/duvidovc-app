#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.NumberKeyListener.hpp"

namespace android { namespace text { namespace method { class TimeKeyListener; } } }

namespace android {
namespace text {
namespace method {
class TimeKeyListener : public virtual ::java::lang::Object,
                        public virtual ::android::text::method::NumberKeyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimeKeyListener(jobject _obj) : ::java::lang::Object(_obj), ::android::text::InputFilter(_obj), ::android::text::method::BaseKeyListener(_obj), ::android::text::method::KeyListener(_obj), ::android::text::method::MetaKeyKeyListener(_obj), ::android::text::method::NumberKeyListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimeKeyListener(const ::android::text::method::TimeKeyListener& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {obj = x.obj;}
    TimeKeyListener(::android::text::method::TimeKeyListener&& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::TimeKeyListener& operator=(const ::android::text::method::TimeKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::TimeKeyListener& operator=(::android::text::method::TimeKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    TimeKeyListener();
    int32_t getInputType() const ;
    static ::android::text::method::TimeKeyListener getInstance();

};
}
}
}


