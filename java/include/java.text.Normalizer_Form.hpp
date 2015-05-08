#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace text { class Normalizer_Form; } }

namespace java {
namespace text {
class Normalizer_Form : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Normalizer_Form(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Normalizer_Form(const ::java::text::Normalizer_Form& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Normalizer_Form(::java::text::Normalizer_Form&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::Normalizer_Form& operator=(const ::java::text::Normalizer_Form& x) {obj = x.obj; return *this;}
    ::java::text::Normalizer_Form& operator=(::java::text::Normalizer_Form&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::text::Normalizer_Form> values();
    static ::java::text::Normalizer_Form valueOf(const ::java::lang::String&);

};
}
}


