#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.SAXException.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace xml {
namespace sax {
class SAXNotSupportedException : public virtual ::java::lang::Object,
                                 public virtual ::org::xml::sax::SAXException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXNotSupportedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::xml::sax::SAXException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXNotSupportedException(const ::org::xml::sax::SAXNotSupportedException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {obj = x.obj;}
    SAXNotSupportedException(::org::xml::sax::SAXNotSupportedException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::SAXNotSupportedException& operator=(const ::org::xml::sax::SAXNotSupportedException& x) {obj = x.obj; return *this;}
    ::org::xml::sax::SAXNotSupportedException& operator=(::org::xml::sax::SAXNotSupportedException&& x) {obj = std::move(x.obj); return *this;}
    
    SAXNotSupportedException();
    SAXNotSupportedException(const ::java::lang::String&);

};
}
}
}


