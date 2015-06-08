#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "org.apache.http.ProtocolVersion.hpp"

namespace org { namespace apache { namespace http { class ProtocolVersion; } } }

namespace org {
namespace apache {
namespace http {
class HttpVersion : public virtual ::java::lang::Object,
                    public virtual ::java::io::Serializable,
                    public virtual ::org::apache::http::ProtocolVersion {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpVersion(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::ProtocolVersion(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpVersion(const ::org::apache::http::HttpVersion& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::ProtocolVersion((jobject)0) {obj = x.obj;}
    HttpVersion(::org::apache::http::HttpVersion&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::ProtocolVersion((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpVersion& operator=(const ::org::apache::http::HttpVersion& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpVersion& operator=(::org::apache::http::HttpVersion&& x) {obj = std::move(x.obj); return *this;}
    
    HttpVersion(int32_t, int32_t);
    ::org::apache::http::ProtocolVersion forVersion(int32_t, int32_t) const;

};
}
}
}


