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
namespace parsers {
class FactoryConfigurationError : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FactoryConfigurationError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FactoryConfigurationError(const ::javax::xml::parsers::FactoryConfigurationError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    FactoryConfigurationError(::javax::xml::parsers::FactoryConfigurationError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::parsers::FactoryConfigurationError& operator=(const ::javax::xml::parsers::FactoryConfigurationError& x) {obj = x.obj; return *this;}
    ::javax::xml::parsers::FactoryConfigurationError& operator=(::javax::xml::parsers::FactoryConfigurationError&& x) {obj = std::move(x.obj); return *this;}
    
    FactoryConfigurationError();
    FactoryConfigurationError(const ::java::lang::String&);
    FactoryConfigurationError(const ::java::lang::Exception&);
    FactoryConfigurationError(const ::java::lang::Exception&, const ::java::lang::String&);
    ::java::lang::String getMessage() const;
    ::java::lang::Exception getException() const;

};
}
}
}


