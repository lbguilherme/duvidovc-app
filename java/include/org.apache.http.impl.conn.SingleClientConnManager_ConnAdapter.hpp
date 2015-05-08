#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.conn.AbstractPooledConnAdapter.hpp"


namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class SingleClientConnManager_ConnAdapter : public virtual ::java::lang::Object,
                                            public virtual ::org::apache::http::impl::conn::AbstractPooledConnAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SingleClientConnManager_ConnAdapter(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::conn::ConnectionReleaseTrigger(_obj), ::org::apache::http::conn::ManagedClientConnection(_obj), ::org::apache::http::impl::conn::AbstractClientConnAdapter(_obj), ::org::apache::http::impl::conn::AbstractPooledConnAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SingleClientConnManager_ConnAdapter(const ::org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::ManagedClientConnection((jobject)0), ::org::apache::http::impl::conn::AbstractClientConnAdapter((jobject)0), ::org::apache::http::impl::conn::AbstractPooledConnAdapter((jobject)0) {obj = x.obj;}
    SingleClientConnManager_ConnAdapter(::org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::ManagedClientConnection((jobject)0), ::org::apache::http::impl::conn::AbstractClientConnAdapter((jobject)0), ::org::apache::http::impl::conn::AbstractPooledConnAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter& operator=(const ::org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter& operator=(::org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}


