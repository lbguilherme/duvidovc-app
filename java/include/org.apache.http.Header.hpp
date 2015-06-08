#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HeaderElement; } } }

namespace org {
namespace apache {
namespace http {
class Header : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Header(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Header(const ::org::apache::http::Header& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Header(::org::apache::http::Header&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::Header& operator=(const ::org::apache::http::Header& x) {obj = x.obj; return *this;}
    ::org::apache::http::Header& operator=(::org::apache::http::Header&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    ::java::lang::String getValue() const;
    std::vector< ::org::apache::http::HeaderElement> getElements() const;

};
}
}
}


