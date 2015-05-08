#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
class NameValuePair : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NameValuePair(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NameValuePair(const ::org::apache::http::NameValuePair& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NameValuePair(::org::apache::http::NameValuePair&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::NameValuePair& operator=(const ::org::apache::http::NameValuePair& x) {obj = x.obj; return *this;}
    ::org::apache::http::NameValuePair& operator=(::org::apache::http::NameValuePair&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const ;
    ::java::lang::String getValue() const ;

};
}
}
}


