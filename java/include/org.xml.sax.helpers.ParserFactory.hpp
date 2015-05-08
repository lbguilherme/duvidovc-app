#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Parser; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class ParserFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParserFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParserFactory(const ::org::xml::sax::helpers::ParserFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ParserFactory(::org::xml::sax::helpers::ParserFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::ParserFactory& operator=(const ::org::xml::sax::helpers::ParserFactory& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::ParserFactory& operator=(::org::xml::sax::helpers::ParserFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::org::xml::sax::Parser makeParser();
    static ::org::xml::sax::Parser makeParser(const ::java::lang::String&);

};
}
}
}
}


