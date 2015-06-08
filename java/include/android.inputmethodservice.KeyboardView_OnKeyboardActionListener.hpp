#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace inputmethodservice {
class KeyboardView_OnKeyboardActionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyboardView_OnKeyboardActionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyboardView_OnKeyboardActionListener(const ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyboardView_OnKeyboardActionListener(::android::inputmethodservice::KeyboardView_OnKeyboardActionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener& operator=(const ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener& operator=(::android::inputmethodservice::KeyboardView_OnKeyboardActionListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onPress(int32_t) const;
    void onRelease(int32_t) const;
    void onKey(int32_t, const std::vector< int32_t>&) const;
    void onText(const ::java::lang::CharSequence&) const;
    void swipeLeft() const;
    void swipeRight() const;
    void swipeDown() const;
    void swipeUp() const;

};
}
}


