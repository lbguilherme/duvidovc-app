#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } }
namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class CredentialsProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CredentialsProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CredentialsProvider(const ::org::apache::http::client::CredentialsProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CredentialsProvider(::org::apache::http::client::CredentialsProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::CredentialsProvider& operator=(const ::org::apache::http::client::CredentialsProvider& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::CredentialsProvider& operator=(::org::apache::http::client::CredentialsProvider&& x) {obj = std::move(x.obj); return *this;}
    
    void setCredentials(const ::org::apache::http::auth::AuthScope&, const ::org::apache::http::auth::Credentials&) const ;
    ::org::apache::http::auth::Credentials getCredentials(const ::org::apache::http::auth::AuthScope&) const ;
    void clear() const ;

};
}
}
}
}


