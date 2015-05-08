#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class XMLReader; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class XMLReaderFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLReaderFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLReaderFactory(const ::org::xml::sax::helpers::XMLReaderFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XMLReaderFactory(::org::xml::sax::helpers::XMLReaderFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::XMLReaderFactory& operator=(const ::org::xml::sax::helpers::XMLReaderFactory& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::XMLReaderFactory& operator=(::org::xml::sax::helpers::XMLReaderFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::org::xml::sax::XMLReader createXMLReader();
    static ::org::xml::sax::XMLReader createXMLReader(const ::java::lang::String&);

};
}
}
}
}


