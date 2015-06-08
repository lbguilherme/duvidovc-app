#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace w3c {
namespace dom {
class TypeInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TypeInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TypeInfo(const ::org::w3c::dom::TypeInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TypeInfo(::org::w3c::dom::TypeInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::TypeInfo& operator=(const ::org::w3c::dom::TypeInfo& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::TypeInfo& operator=(::org::w3c::dom::TypeInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getTypeName() const;
    ::java::lang::String getTypeNamespace() const;
    bool isDerivedFrom(const ::java::lang::String&, const ::java::lang::String&, int32_t) const;

};
}
}
}


