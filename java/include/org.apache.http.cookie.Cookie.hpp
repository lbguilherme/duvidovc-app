#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class Cookie : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Cookie(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Cookie(const ::org::apache::http::cookie::Cookie& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Cookie(::org::apache::http::cookie::Cookie&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::Cookie& operator=(const ::org::apache::http::cookie::Cookie& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::Cookie& operator=(::org::apache::http::cookie::Cookie&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const ;
    ::java::lang::String getValue() const ;
    ::java::lang::String getComment() const ;
    ::java::lang::String getCommentURL() const ;
    ::java::util::Date getExpiryDate() const ;
    bool isPersistent() const ;
    ::java::lang::String getDomain() const ;
    ::java::lang::String getPath() const ;
    std::vector< int32_t> getPorts() const ;
    bool isSecure() const ;
    int32_t getVersion() const ;
    bool isExpired(const ::java::util::Date&) const ;

};
}
}
}
}


