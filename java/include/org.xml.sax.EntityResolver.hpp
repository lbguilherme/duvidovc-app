#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace org {
namespace xml {
namespace sax {
class EntityResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EntityResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EntityResolver(const ::org::xml::sax::EntityResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EntityResolver(::org::xml::sax::EntityResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::EntityResolver& operator=(const ::org::xml::sax::EntityResolver& x) {obj = x.obj; return *this;}
    ::org::xml::sax::EntityResolver& operator=(::org::xml::sax::EntityResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::xml::sax::InputSource resolveEntity(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}


