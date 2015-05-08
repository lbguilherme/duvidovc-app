#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ConnectionReleaseTrigger.hpp"
#include "org.apache.http.conn.EofSensorWatcher.hpp"
#include "org.apache.http.entity.HttpEntityWrapper.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }
namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class BasicManagedEntity : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::conn::ConnectionReleaseTrigger,
                           public virtual ::org::apache::http::conn::EofSensorWatcher,
                           public virtual ::org::apache::http::entity::HttpEntityWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicManagedEntity(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntity(_obj), ::org::apache::http::conn::ConnectionReleaseTrigger(_obj), ::org::apache::http::conn::EofSensorWatcher(_obj), ::org::apache::http::entity::HttpEntityWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicManagedEntity(const ::org::apache::http::conn::BasicManagedEntity& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::EofSensorWatcher((jobject)0), ::org::apache::http::entity::HttpEntityWrapper((jobject)0) {obj = x.obj;}
    BasicManagedEntity(::org::apache::http::conn::BasicManagedEntity&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::EofSensorWatcher((jobject)0), ::org::apache::http::entity::HttpEntityWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::BasicManagedEntity& operator=(const ::org::apache::http::conn::BasicManagedEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::BasicManagedEntity& operator=(::org::apache::http::conn::BasicManagedEntity&& x) {obj = std::move(x.obj); return *this;}
    
    BasicManagedEntity(const ::org::apache::http::HttpEntity&, const ::org::apache::http::conn::ManagedClientConnection&, bool);
    bool isRepeatable() const ;
    ::java::io::InputStream getContent() const ;
    void consumeContent() const ;
    void writeTo(const ::java::io::OutputStream&) const ;
    void releaseConnection() const ;
    void abortConnection() const ;
    bool eofDetected(const ::java::io::InputStream&) const ;
    bool streamClosed(const ::java::io::InputStream&) const ;
    bool streamAbort(const ::java::io::InputStream&) const ;

};
}
}
}
}


