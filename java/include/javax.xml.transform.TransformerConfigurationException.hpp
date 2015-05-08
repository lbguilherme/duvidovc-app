#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.TransformerException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace javax { namespace xml { namespace transform { class SourceLocator; } } }

namespace javax {
namespace xml {
namespace transform {
class TransformerConfigurationException : public virtual ::java::lang::Object,
                                          public virtual ::javax::xml::transform::TransformerException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransformerConfigurationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::javax::xml::transform::TransformerException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransformerConfigurationException(const ::javax::xml::transform::TransformerConfigurationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {obj = x.obj;}
    TransformerConfigurationException(::javax::xml::transform::TransformerConfigurationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::xml::transform::TransformerException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::TransformerConfigurationException& operator=(const ::javax::xml::transform::TransformerConfigurationException& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::TransformerConfigurationException& operator=(::javax::xml::transform::TransformerConfigurationException&& x) {obj = std::move(x.obj); return *this;}
    
    TransformerConfigurationException();
    TransformerConfigurationException(const ::java::lang::String&);
    TransformerConfigurationException(const ::java::lang::Throwable&);
    TransformerConfigurationException(const ::java::lang::String&, const ::java::lang::Throwable&);
    TransformerConfigurationException(const ::java::lang::String&, const ::javax::xml::transform::SourceLocator&);
    TransformerConfigurationException(const ::java::lang::String&, const ::javax::xml::transform::SourceLocator&, const ::java::lang::Throwable&);

};
}
}
}


