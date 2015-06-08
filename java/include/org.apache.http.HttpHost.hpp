#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
class HttpHost : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpHost(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpHost(const ::org::apache::http::HttpHost& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    HttpHost(::org::apache::http::HttpHost&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpHost& operator=(const ::org::apache::http::HttpHost& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpHost& operator=(::org::apache::http::HttpHost&& x) {obj = std::move(x.obj); return *this;}
    
    HttpHost(const ::java::lang::String&, int32_t, const ::java::lang::String&);
    HttpHost(const ::java::lang::String&, int32_t);
    HttpHost(const ::java::lang::String&);
    ::java::lang::String getHostName() const;
    int32_t getPort() const;
    ::java::lang::String getSchemeName() const;
    ::java::lang::String toURI() const;
    ::java::lang::String toHostString() const;
    ::java::lang::String toString() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::Object clone() const;

};
}
}
}


