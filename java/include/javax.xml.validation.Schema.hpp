#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace xml { namespace validation { class Validator; } } }
namespace javax { namespace xml { namespace validation { class ValidatorHandler; } } }

namespace javax {
namespace xml {
namespace validation {
class Schema : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Schema(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Schema(const ::javax::xml::validation::Schema& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Schema(::javax::xml::validation::Schema&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::validation::Schema& operator=(const ::javax::xml::validation::Schema& x) {obj = x.obj; return *this;}
    ::javax::xml::validation::Schema& operator=(::javax::xml::validation::Schema&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::xml::validation::Validator newValidator() const;
    ::javax::xml::validation::ValidatorHandler newValidatorHandler() const;

};
}
}
}


