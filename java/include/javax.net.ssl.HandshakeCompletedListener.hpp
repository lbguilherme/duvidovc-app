#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace javax { namespace net { namespace ssl { class HandshakeCompletedEvent; } } }

namespace javax {
namespace net {
namespace ssl {
class HandshakeCompletedListener : public virtual ::java::lang::Object,
                                   public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HandshakeCompletedListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HandshakeCompletedListener(const ::javax::net::ssl::HandshakeCompletedListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    HandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::HandshakeCompletedListener& operator=(const ::javax::net::ssl::HandshakeCompletedListener& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::HandshakeCompletedListener& operator=(::javax::net::ssl::HandshakeCompletedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void handshakeCompleted(const ::javax::net::ssl::HandshakeCompletedEvent&) const ;

};
}
}
}


