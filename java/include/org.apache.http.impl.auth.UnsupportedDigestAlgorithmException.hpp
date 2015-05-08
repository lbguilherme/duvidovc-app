#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace auth {
class UnsupportedDigestAlgorithmException : public virtual ::java::lang::Object,
                                            public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnsupportedDigestAlgorithmException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnsupportedDigestAlgorithmException(const ::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    UnsupportedDigestAlgorithmException(::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException& operator=(const ::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException& operator=(::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException&& x) {obj = std::move(x.obj); return *this;}
    
    UnsupportedDigestAlgorithmException();
    UnsupportedDigestAlgorithmException(const ::java::lang::String&);
    UnsupportedDigestAlgorithmException(const ::java::lang::String&, const ::java::lang::Throwable&);

};
}
}
}
}
}


