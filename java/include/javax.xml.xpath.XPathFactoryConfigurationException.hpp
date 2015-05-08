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
class XPathFactoryConfigurationException : public virtual ::java::lang::Object,
                                           public virtual ::javax::xml::xpath::XPathException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathFactoryConfigurationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::javax::xml::xpath::XPathException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathFactoryConfigurationException(const ::javax::xml::xpath::XPathFactoryConfigurationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {obj = x.obj;}
    XPathFactoryConfigurationException(::javax::xml::xpath::XPathFactoryConfigurationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::xpath::XPathException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathFactoryConfigurationException& operator=(const ::javax::xml::xpath::XPathFactoryConfigurationException& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathFactoryConfigurationException& operator=(::javax::xml::xpath::XPathFactoryConfigurationException&& x) {obj = std::move(x.obj); return *this;}
    
    XPathFactoryConfigurationException(const ::java::lang::String&);
    XPathFactoryConfigurationException(const ::java::lang::Throwable&);

};
}
}
}


