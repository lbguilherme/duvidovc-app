#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace w3c { namespace dom { class TypeInfo; } } }

namespace javax {
namespace xml {
namespace validation {
class TypeInfoProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TypeInfoProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TypeInfoProvider(const ::javax::xml::validation::TypeInfoProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TypeInfoProvider(::javax::xml::validation::TypeInfoProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::validation::TypeInfoProvider& operator=(const ::javax::xml::validation::TypeInfoProvider& x) {obj = x.obj; return *this;}
    ::javax::xml::validation::TypeInfoProvider& operator=(::javax::xml::validation::TypeInfoProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::TypeInfo getElementTypeInfo() const;
    ::org::w3c::dom::TypeInfo getAttributeTypeInfo(int32_t) const;
    bool isIdAttribute(int32_t) const;
    bool isSpecified(int32_t) const;

};
}
}
}


