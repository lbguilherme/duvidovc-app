#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class EofSensorWatcher : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EofSensorWatcher(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EofSensorWatcher(const ::org::apache::http::conn::EofSensorWatcher& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EofSensorWatcher(::org::apache::http::conn::EofSensorWatcher&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::EofSensorWatcher& operator=(const ::org::apache::http::conn::EofSensorWatcher& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::EofSensorWatcher& operator=(::org::apache::http::conn::EofSensorWatcher&& x) {obj = std::move(x.obj); return *this;}
    
    bool eofDetected(const ::java::io::InputStream&) const ;
    bool streamClosed(const ::java::io::InputStream&) const ;
    bool streamAbort(const ::java::io::InputStream&) const ;

};
}
}
}
}


