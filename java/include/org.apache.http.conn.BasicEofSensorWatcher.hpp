#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.EofSensorWatcher.hpp"

namespace java { namespace io { class InputStream; } }
namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class BasicEofSensorWatcher : public virtual ::java::lang::Object,
                              public virtual ::org::apache::http::conn::EofSensorWatcher {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicEofSensorWatcher(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::EofSensorWatcher(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicEofSensorWatcher(const ::org::apache::http::conn::BasicEofSensorWatcher& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::EofSensorWatcher((jobject)0) {obj = x.obj;}
    BasicEofSensorWatcher(::org::apache::http::conn::BasicEofSensorWatcher&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::EofSensorWatcher((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::BasicEofSensorWatcher& operator=(const ::org::apache::http::conn::BasicEofSensorWatcher& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::BasicEofSensorWatcher& operator=(::org::apache::http::conn::BasicEofSensorWatcher&& x) {obj = std::move(x.obj); return *this;}
    
    BasicEofSensorWatcher(const ::org::apache::http::conn::ManagedClientConnection&, bool);
    bool eofDetected(const ::java::io::InputStream&) const;
    bool streamClosed(const ::java::io::InputStream&) const;
    bool streamAbort(const ::java::io::InputStream&) const;

};
}
}
}
}


