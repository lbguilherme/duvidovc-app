#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class CharSequence : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharSequence(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharSequence(const ::java::lang::CharSequence& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CharSequence(::java::lang::CharSequence&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::CharSequence& operator=(const ::java::lang::CharSequence& x) {obj = x.obj; return *this;}
    ::java::lang::CharSequence& operator=(::java::lang::CharSequence&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t length() const;
    uint16_t charAt(int32_t) const;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const;
    ::java::lang::String toString() const;

};
}
}


