#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.xpath.XPathException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace javax {
namespace xml {
namespace xpath {
class XPathExpressionException : public virtual ::java::lang::Object,
                                 public virtual ::javax::xml::xpath::XPathException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathExpressionException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::javax::xml::xpath::XPathException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathExpressionException(const ::javax::xml::xpath::XPathExpressionException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {obj = x.obj;}
    XPathExpressionException(::javax::xml::xpath::XPathExpressionException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathExpressionException& operator=(const ::javax::xml::xpath::XPathExpressionException& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathExpressionException& operator=(::javax::xml::xpath::XPathExpressionException&& x) {obj = std::move(x.obj); return *this;}
    
    XPathExpressionException(const ::java::lang::String&);
    XPathExpressionException(const ::java::lang::Throwable&);

};
}
}
}


