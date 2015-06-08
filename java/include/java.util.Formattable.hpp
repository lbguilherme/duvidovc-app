#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class Formatter; } }

namespace java {
namespace util {
class Formattable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Formattable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Formattable(const ::java::util::Formattable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Formattable(::java::util::Formattable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Formattable& operator=(const ::java::util::Formattable& x) {obj = x.obj; return *this;}
    ::java::util::Formattable& operator=(::java::util::Formattable&& x) {obj = std::move(x.obj); return *this;}
    
    void formatTo(const ::java::util::Formatter&, int32_t, int32_t, int32_t) const;

};
}
}


