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
class HTTP : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HTTP(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HTTP(const ::org::apache::http::protocol::HTTP& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HTTP(::org::apache::http::protocol::HTTP&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HTTP& operator=(const ::org::apache::http::protocol::HTTP& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HTTP& operator=(::org::apache::http::protocol::HTTP&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isWhitespace(uint16_t);

};
}
}
}
}


