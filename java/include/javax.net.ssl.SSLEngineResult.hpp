#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace net { namespace ssl { class SSLEngineResult_HandshakeStatus; } } }
namespace javax { namespace net { namespace ssl { class SSLEngineResult_Status; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLEngineResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLEngineResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLEngineResult(const ::javax::net::ssl::SSLEngineResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLEngineResult(::javax::net::ssl::SSLEngineResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLEngineResult& operator=(const ::javax::net::ssl::SSLEngineResult& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLEngineResult& operator=(::javax::net::ssl::SSLEngineResult&& x) {obj = std::move(x.obj); return *this;}
    
    SSLEngineResult(const ::javax::net::ssl::SSLEngineResult_Status&, const ::javax::net::ssl::SSLEngineResult_HandshakeStatus&, int32_t, int32_t);
    ::javax::net::ssl::SSLEngineResult_Status getStatus() const;
    ::javax::net::ssl::SSLEngineResult_HandshakeStatus getHandshakeStatus() const;
    int32_t bytesConsumed() const;
    int32_t bytesProduced() const;
    ::java::lang::String toString() const;

};
}
}
}

#include "javax.net.ssl.SSLEngineResult_HandshakeStatus.hpp"
#include "javax.net.ssl.SSLEngineResult_Status.hpp"

