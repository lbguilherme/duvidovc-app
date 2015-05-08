#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.EntityResolver.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace org {
namespace xml {
namespace sax {
namespace ext {
class EntityResolver2 : public virtual ::java::lang::Object,
                        public virtual ::org::xml::sax::EntityResolver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EntityResolver2(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::EntityResolver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EntityResolver2(const ::org::xml::sax::ext::EntityResolver2& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::EntityResolver((jobject)0) {obj = x.obj;}
    EntityResolver2(::org::xml::sax::ext::EntityResolver2&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::EntityResolver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::EntityResolver2& operator=(const ::org::xml::sax::ext::EntityResolver2& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::EntityResolver2& operator=(::org::xml::sax::ext::EntityResolver2&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::xml::sax::InputSource getExternalSubset(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::xml::sax::InputSource resolveEntity(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}
}


