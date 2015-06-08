#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManagerFactory; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace params {
class ClientParamBean : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientParamBean(const ::org::apache::http::client::params::ClientParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    ClientParamBean(::org::apache::http::client::params::ClientParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::params::ClientParamBean& operator=(const ::org::apache::http::client::params::ClientParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::params::ClientParamBean& operator=(::org::apache::http::client::params::ClientParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    ClientParamBean(const ::org::apache::http::params::HttpParams&);
    void setConnectionManagerFactoryClassName(const ::java::lang::String&) const;
    void setConnectionManagerFactory(const ::org::apache::http::conn::ClientConnectionManagerFactory&) const;
    void setHandleRedirects(bool) const;
    void setRejectRelativeRedirect(bool) const;
    void setMaxRedirects(int32_t) const;
    void setAllowCircularRedirects(bool) const;
    void setHandleAuthentication(bool) const;
    void setCookiePolicy(const ::java::lang::String&) const;
    void setVirtualHost(const ::org::apache::http::HttpHost&) const;
    void setDefaultHeaders(const ::java::util::Collection&) const;
    void setDefaultHost(const ::org::apache::http::HttpHost&) const;

};
}
}
}
}
}


