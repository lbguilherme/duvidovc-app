#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.auth.params.AuthPNames.hpp"
#include "org.apache.http.client.params.ClientPNames.hpp"
#include "org.apache.http.conn.params.ConnConnectionPNames.hpp"
#include "org.apache.http.conn.params.ConnManagerPNames.hpp"
#include "org.apache.http.conn.params.ConnRoutePNames.hpp"
#include "org.apache.http.cookie.params.CookieSpecPNames.hpp"
#include "org.apache.http.params.CoreConnectionPNames.hpp"
#include "org.apache.http.params.CoreProtocolPNames.hpp"


namespace org {
namespace apache {
namespace http {
namespace client {
namespace params {
class AllClientPNames : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::auth::params::AuthPNames,
                        public virtual ::org::apache::http::client::params::ClientPNames,
                        public virtual ::org::apache::http::conn::params::ConnConnectionPNames,
                        public virtual ::org::apache::http::conn::params::ConnManagerPNames,
                        public virtual ::org::apache::http::conn::params::ConnRoutePNames,
                        public virtual ::org::apache::http::cookie::params::CookieSpecPNames,
                        public virtual ::org::apache::http::params::CoreConnectionPNames,
                        public virtual ::org::apache::http::params::CoreProtocolPNames {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AllClientPNames(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::auth::params::AuthPNames(_obj), ::org::apache::http::client::params::ClientPNames(_obj), ::org::apache::http::conn::params::ConnConnectionPNames(_obj), ::org::apache::http::conn::params::ConnManagerPNames(_obj), ::org::apache::http::conn::params::ConnRoutePNames(_obj), ::org::apache::http::cookie::params::CookieSpecPNames(_obj), ::org::apache::http::params::CoreConnectionPNames(_obj), ::org::apache::http::params::CoreProtocolPNames(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AllClientPNames(const ::org::apache::http::client::params::AllClientPNames& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::params::AuthPNames((jobject)0), ::org::apache::http::client::params::ClientPNames((jobject)0), ::org::apache::http::conn::params::ConnConnectionPNames((jobject)0), ::org::apache::http::conn::params::ConnManagerPNames((jobject)0), ::org::apache::http::conn::params::ConnRoutePNames((jobject)0), ::org::apache::http::cookie::params::CookieSpecPNames((jobject)0), ::org::apache::http::params::CoreConnectionPNames((jobject)0), ::org::apache::http::params::CoreProtocolPNames((jobject)0) {obj = x.obj;}
    AllClientPNames(::org::apache::http::client::params::AllClientPNames&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::params::AuthPNames((jobject)0), ::org::apache::http::client::params::ClientPNames((jobject)0), ::org::apache::http::conn::params::ConnConnectionPNames((jobject)0), ::org::apache::http::conn::params::ConnManagerPNames((jobject)0), ::org::apache::http::conn::params::ConnRoutePNames((jobject)0), ::org::apache::http::cookie::params::CookieSpecPNames((jobject)0), ::org::apache::http::params::CoreConnectionPNames((jobject)0), ::org::apache::http::params::CoreProtocolPNames((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::params::AllClientPNames& operator=(const ::org::apache::http::client::params::AllClientPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::params::AllClientPNames& operator=(::org::apache::http::client::params::AllClientPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}


