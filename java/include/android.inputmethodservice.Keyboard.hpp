#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace util { class List; } }

namespace android {
namespace inputmethodservice {
class Keyboard : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Keyboard(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Keyboard(const ::android::inputmethodservice::Keyboard& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Keyboard(::android::inputmethodservice::Keyboard&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::Keyboard& operator=(const ::android::inputmethodservice::Keyboard& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::Keyboard& operator=(::android::inputmethodservice::Keyboard&& x) {obj = std::move(x.obj); return *this;}
    
    Keyboard(const ::android::content::Context&, int32_t);
    Keyboard(const ::android::content::Context&, int32_t, int32_t, int32_t, int32_t);
    Keyboard(const ::android::content::Context&, int32_t, int32_t);
    Keyboard(const ::android::content::Context&, int32_t, const ::java::lang::CharSequence&, int32_t, int32_t);
    ::java::util::List getKeys() const;
    ::java::util::List getModifierKeys() const;
    int32_t getHeight() const;
    int32_t getMinWidth() const;
    bool setShifted(bool) const;
    bool isShifted() const;
    int32_t getShiftKeyIndex() const;
    std::vector< int32_t> getNearestKeys(int32_t, int32_t) const;

};
}
}

#include "android.inputmethodservice.Keyboard_Key.hpp"
#include "android.inputmethodservice.Keyboard_Row.hpp"

