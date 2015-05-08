#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.ProtocolException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class MalformedChallengeException : public virtual ::java::lang::Object,
                                    public virtual ::org::apache::http::ProtocolException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MalformedChallengeException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::apache::http::HttpException(_obj), ::org::apache::http::ProtocolException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MalformedChallengeException(const ::org::apache::http::auth::MalformedChallengeException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {obj = x.obj;}
    MalformedChallengeException(::org::apache::http::auth::MalformedChallengeException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::MalformedChallengeException& operator=(const ::org::apache::http::auth::MalformedChallengeException& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::MalformedChallengeException& operator=(::org::apache::http::auth::MalformedChallengeException&& x) {obj = std::move(x.obj); return *this;}
    
    MalformedChallengeException();
    MalformedChallengeException(const ::java::lang::String&);
    MalformedChallengeException(const ::java::lang::String&, const ::java::lang::Throwable&);

};
}
}
}
}


