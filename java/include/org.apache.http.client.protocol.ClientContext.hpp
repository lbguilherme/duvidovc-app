#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace org {
namespace apache {
namespace http {
namespace client {
namespace protocol {
class ClientContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientContext(const ::org::apache::http::client::protocol::ClientContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClientContext(::org::apache::http::client::protocol::ClientContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::protocol::ClientContext& operator=(const ::org::apache::http::client::protocol::ClientContext& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::protocol::ClientContext& operator=(::org::apache::http::client::protocol::ClientContext&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}


