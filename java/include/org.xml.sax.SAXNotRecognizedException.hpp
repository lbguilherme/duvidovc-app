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
class SAXNotRecognizedException : public virtual ::java::lang::Object,
                                  public virtual ::org::xml::sax::SAXException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXNotRecognizedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::xml::sax::SAXException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXNotRecognizedException(const ::org::xml::sax::SAXNotRecognizedException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {obj = x.obj;}
    SAXNotRecognizedException(::org::xml::sax::SAXNotRecognizedException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::SAXNotRecognizedException& operator=(const ::org::xml::sax::SAXNotRecognizedException& x) {obj = x.obj; return *this;}
    ::org::xml::sax::SAXNotRecognizedException& operator=(::org::xml::sax::SAXNotRecognizedException&& x) {obj = std::move(x.obj); return *this;}
    
    SAXNotRecognizedException();
    SAXNotRecognizedException(const ::java::lang::String&);

};
}
}
}


