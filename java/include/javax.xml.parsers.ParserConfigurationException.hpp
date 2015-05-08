#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace xml {
namespace parsers {
class ParserConfigurationException : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParserConfigurationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParserConfigurationException(const ::javax::xml::parsers::ParserConfigurationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ParserConfigurationException(::javax::xml::parsers::ParserConfigurationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::parsers::ParserConfigurationException& operator=(const ::javax::xml::parsers::ParserConfigurationException& x) {obj = x.obj; return *this;}
    ::javax::xml::parsers::ParserConfigurationException& operator=(::javax::xml::parsers::ParserConfigurationException&& x) {obj = std::move(x.obj); return *this;}
    
    ParserConfigurationException();
    ParserConfigurationException(const ::java::lang::String&);

};
}
}
}


