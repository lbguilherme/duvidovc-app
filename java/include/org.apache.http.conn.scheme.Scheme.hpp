#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SocketFactory; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace scheme {
class Scheme : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Scheme(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Scheme(const ::org::apache::http::conn::scheme::Scheme& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Scheme(::org::apache::http::conn::scheme::Scheme&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::scheme::Scheme& operator=(const ::org::apache::http::conn::scheme::Scheme& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::scheme::Scheme& operator=(::org::apache::http::conn::scheme::Scheme&& x) {obj = std::move(x.obj); return *this;}
    
    Scheme(const ::java::lang::String&, const ::org::apache::http::conn::scheme::SocketFactory&, int32_t);
    int32_t getDefaultPort() const;
    ::org::apache::http::conn::scheme::SocketFactory getSocketFactory() const;
    ::java::lang::String getName() const;
    bool isLayered() const;
    int32_t resolvePort(int32_t) const;
    ::java::lang::String toString() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;

};
}
}
}
}
}


