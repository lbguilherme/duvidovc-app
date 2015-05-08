#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"
#include "org.apache.http.conn.ConnectionReleaseTrigger.hpp"

namespace java { namespace io { class InputStream; } }
namespace org { namespace apache { namespace http { namespace conn { class EofSensorWatcher; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class EofSensorInputStream : public virtual ::java::lang::Object,
                             public virtual ::java::io::InputStream,
                             public virtual ::org::apache::http::conn::ConnectionReleaseTrigger {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EofSensorInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj), ::org::apache::http::conn::ConnectionReleaseTrigger(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EofSensorInputStream(const ::org::apache::http::conn::EofSensorInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0) {obj = x.obj;}
    EofSensorInputStream(::org::apache::http::conn::EofSensorInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::EofSensorInputStream& operator=(const ::org::apache::http::conn::EofSensorInputStream& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::EofSensorInputStream& operator=(::org::apache::http::conn::EofSensorInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    EofSensorInputStream(const ::java::io::InputStream&, const ::org::apache::http::conn::EofSensorWatcher&);
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int32_t read(const std::vector< int8_t>&) const ;
    int32_t available() const ;
    void close() const ;
    void releaseConnection() const ;
    void abortConnection() const ;

};
}
}
}
}


