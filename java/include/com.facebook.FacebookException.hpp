#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace com {
namespace facebook {
class FacebookException : public virtual ::java::lang::Object,
                          public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookException(const ::com::facebook::FacebookException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    FacebookException(::com::facebook::FacebookException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookException& operator=(const ::com::facebook::FacebookException& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookException& operator=(::com::facebook::FacebookException&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookException();
    FacebookException(const ::java::lang::String&);
    FacebookException(const ::java::lang::String&, const std::vector< ::java::lang::Object>&);
    FacebookException(const ::java::lang::String&, const ::java::lang::Throwable&);
    FacebookException(const ::java::lang::Throwable&);
    ::java::lang::String toString() const ;

};
}
}


