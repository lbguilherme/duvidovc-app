#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Appendable; } }
namespace java { namespace lang { class CharSequence; } }

namespace java {
namespace lang {
class Appendable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Appendable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Appendable(const ::java::lang::Appendable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Appendable(::java::lang::Appendable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Appendable& operator=(const ::java::lang::Appendable& x) {obj = x.obj; return *this;}
    ::java::lang::Appendable& operator=(::java::lang::Appendable&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Appendable append(uint16_t) const;
    ::java::lang::Appendable append(const ::java::lang::CharSequence&) const;
    ::java::lang::Appendable append(const ::java::lang::CharSequence&, int32_t, int32_t) const;

};
}
}


