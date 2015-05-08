#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Error.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }

namespace javax {
namespace xml {
namespace transform {
class TransformerFactoryConfigurationError : public virtual ::java::lang::Object,
                                             public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransformerFactoryConfigurationError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransformerFactoryConfigurationError(const ::javax::xml::transform::TransformerFactoryConfigurationError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    TransformerFactoryConfigurationError(::javax::xml::transform::TransformerFactoryConfigurationError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::TransformerFactoryConfigurationError& operator=(const ::javax::xml::transform::TransformerFactoryConfigurationError& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::TransformerFactoryConfigurationError& operator=(::javax::xml::transform::TransformerFactoryConfigurationError&& x) {obj = std::move(x.obj); return *this;}
    
    TransformerFactoryConfigurationError();
    TransformerFactoryConfigurationError(const ::java::lang::String&);
    TransformerFactoryConfigurationError(const ::java::lang::Exception&);
    TransformerFactoryConfigurationError(const ::java::lang::Exception&, const ::java::lang::String&);
    ::java::lang::String getMessage() const ;
    ::java::lang::Exception getException() const ;

};
}
}
}


