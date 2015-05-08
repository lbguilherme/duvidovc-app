#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.CredentialsProvider.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } }
namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class BasicCredentialsProvider : public virtual ::java::lang::Object,
                                 public virtual ::org::apache::http::client::CredentialsProvider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicCredentialsProvider(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::CredentialsProvider(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicCredentialsProvider(const ::org::apache::http::impl::client::BasicCredentialsProvider& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::CredentialsProvider((jobject)0) {obj = x.obj;}
    BasicCredentialsProvider(::org::apache::http::impl::client::BasicCredentialsProvider&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::CredentialsProvider((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::BasicCredentialsProvider& operator=(const ::org::apache::http::impl::client::BasicCredentialsProvider& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::BasicCredentialsProvider& operator=(::org::apache::http::impl::client::BasicCredentialsProvider&& x) {obj = std::move(x.obj); return *this;}
    
    BasicCredentialsProvider();
    void setCredentials(const ::org::apache::http::auth::AuthScope&, const ::org::apache::http::auth::Credentials&) const ;
    ::org::apache::http::auth::Credentials getCredentials(const ::org::apache::http::auth::AuthScope&) const ;
    ::java::lang::String toString() const ;
    void clear() const ;

};
}
}
}
}
}


