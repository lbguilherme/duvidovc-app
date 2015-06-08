#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventObject.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLSessionBindingEvent : public virtual ::java::lang::Object,
                               public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSessionBindingEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSessionBindingEvent(const ::javax::net::ssl::SSLSessionBindingEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    SSLSessionBindingEvent(::javax::net::ssl::SSLSessionBindingEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLSessionBindingEvent& operator=(const ::javax::net::ssl::SSLSessionBindingEvent& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLSessionBindingEvent& operator=(::javax::net::ssl::SSLSessionBindingEvent&& x) {obj = std::move(x.obj); return *this;}
    
    SSLSessionBindingEvent(const ::javax::net::ssl::SSLSession&, const ::java::lang::String&);
    ::java::lang::String getName() const;
    ::javax::net::ssl::SSLSession getSession() const;

};
}
}
}


