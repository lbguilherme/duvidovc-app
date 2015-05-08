#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace commons { namespace logging { class Log; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class Wire : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Wire(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Wire(const ::org::apache::http::impl::conn::Wire& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Wire(::org::apache::http::impl::conn::Wire&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::Wire& operator=(const ::org::apache::http::impl::conn::Wire& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::Wire& operator=(::org::apache::http::impl::conn::Wire&& x) {obj = std::move(x.obj); return *this;}
    
    Wire(const ::org::apache::commons::logging::Log&);
    bool enabled() const ;
    void output(const ::java::io::InputStream&) const ;
    void input(const ::java::io::InputStream&) const ;
    void output(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void input(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void output(const std::vector< int8_t>&) const ;
    void input(const std::vector< int8_t>&) const ;
    void output(int32_t) const ;
    void input(int32_t) const ;
    void output(const ::java::lang::String&) const ;
    void input(const ::java::lang::String&) const ;

};
}
}
}
}
}


