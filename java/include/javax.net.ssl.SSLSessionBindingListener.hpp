#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace javax { namespace net { namespace ssl { class SSLSessionBindingEvent; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLSessionBindingListener : public virtual ::java::lang::Object,
                                  public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSessionBindingListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSessionBindingListener(const ::javax::net::ssl::SSLSessionBindingListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    SSLSessionBindingListener(::javax::net::ssl::SSLSessionBindingListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLSessionBindingListener& operator=(const ::javax::net::ssl::SSLSessionBindingListener& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLSessionBindingListener& operator=(::javax::net::ssl::SSLSessionBindingListener&& x) {obj = std::move(x.obj); return *this;}
    
    void valueBound(const ::javax::net::ssl::SSLSessionBindingEvent&) const;
    void valueUnbound(const ::javax::net::ssl::SSLSessionBindingEvent&) const;

};
}
}
}


