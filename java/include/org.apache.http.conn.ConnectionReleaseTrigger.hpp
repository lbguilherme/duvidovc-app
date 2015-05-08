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
namespace conn {
class ConnectionReleaseTrigger : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionReleaseTrigger(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionReleaseTrigger(const ::org::apache::http::conn::ConnectionReleaseTrigger& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnectionReleaseTrigger(::org::apache::http::conn::ConnectionReleaseTrigger&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ConnectionReleaseTrigger& operator=(const ::org::apache::http::conn::ConnectionReleaseTrigger& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ConnectionReleaseTrigger& operator=(::org::apache::http::conn::ConnectionReleaseTrigger&& x) {obj = std::move(x.obj); return *this;}
    
    void releaseConnection() const ;
    void abortConnection() const ;

};
}
}
}
}


