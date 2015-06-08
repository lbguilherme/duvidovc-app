#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace validation { class SchemaFactory; } } }

namespace javax {
namespace xml {
namespace validation {
class SchemaFactoryLoader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SchemaFactoryLoader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SchemaFactoryLoader(const ::javax::xml::validation::SchemaFactoryLoader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SchemaFactoryLoader(::javax::xml::validation::SchemaFactoryLoader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::validation::SchemaFactoryLoader& operator=(const ::javax::xml::validation::SchemaFactoryLoader& x) {obj = x.obj; return *this;}
    ::javax::xml::validation::SchemaFactoryLoader& operator=(::javax::xml::validation::SchemaFactoryLoader&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::xml::validation::SchemaFactory newFactory(const ::java::lang::String&) const;

};
}
}
}


