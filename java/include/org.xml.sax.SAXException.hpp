#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace xml {
namespace sax {
class SAXException : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXException(const ::org::xml::sax::SAXException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SAXException(::org::xml::sax::SAXException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::SAXException& operator=(const ::org::xml::sax::SAXException& x) {obj = x.obj; return *this;}
    ::org::xml::sax::SAXException& operator=(::org::xml::sax::SAXException&& x) {obj = std::move(x.obj); return *this;}
    
    SAXException();
    SAXException(const ::java::lang::String&);
    SAXException(const ::java::lang::Exception&);
    SAXException(const ::java::lang::String&, const ::java::lang::Exception&);
    ::java::lang::String getMessage() const ;
    ::java::lang::Exception getException() const ;
    ::java::lang::String toString() const ;

};
}
}
}


