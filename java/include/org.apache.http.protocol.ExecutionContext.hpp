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
namespace protocol {
class ExecutionContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExecutionContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExecutionContext(const ::org::apache::http::protocol::ExecutionContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExecutionContext(::org::apache::http::protocol::ExecutionContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::ExecutionContext& operator=(const ::org::apache::http::protocol::ExecutionContext& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::ExecutionContext& operator=(::org::apache::http::protocol::ExecutionContext&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


