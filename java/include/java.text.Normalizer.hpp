#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class Normalizer_Form; } }

namespace java {
namespace text {
class Normalizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Normalizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Normalizer(const ::java::text::Normalizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Normalizer(::java::text::Normalizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::Normalizer& operator=(const ::java::text::Normalizer& x) {obj = x.obj; return *this;}
    ::java::text::Normalizer& operator=(::java::text::Normalizer&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isNormalized(const ::java::lang::CharSequence&, const ::java::text::Normalizer_Form&);
    static ::java::lang::String normalize(const ::java::lang::CharSequence&, const ::java::text::Normalizer_Form&);

};
}
}

#include "java.text.Normalizer_Form.hpp"

