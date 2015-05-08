#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class IOException; } }
namespace java { namespace net { class ProxySelector; } }
namespace java { namespace net { class SocketAddress; } }
namespace java { namespace net { class URI; } }
namespace java { namespace util { class List; } }

namespace java {
namespace net {
class ProxySelector : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProxySelector(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProxySelector(const ::java::net::ProxySelector& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProxySelector(::java::net::ProxySelector&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::ProxySelector& operator=(const ::java::net::ProxySelector& x) {obj = x.obj; return *this;}
    ::java::net::ProxySelector& operator=(::java::net::ProxySelector&& x) {obj = std::move(x.obj); return *this;}
    
    ProxySelector();
    static ::java::net::ProxySelector getDefault();
    static void setDefault(const ::java::net::ProxySelector&);
    ::java::util::List select(const ::java::net::URI&) const ;
    void connectFailed(const ::java::net::URI&, const ::java::net::SocketAddress&, const ::java::io::IOException&) const ;

};
}
}


