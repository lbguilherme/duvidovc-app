#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace utils {
class CloneUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CloneUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CloneUtils(const ::org::apache::http::client::utils::CloneUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CloneUtils(::org::apache::http::client::utils::CloneUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::utils::CloneUtils& operator=(const ::org::apache::http::client::utils::CloneUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::utils::CloneUtils& operator=(::org::apache::http::client::utils::CloneUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::Object clone(const ::java::lang::Object&);

};
}
}
}
}
}


