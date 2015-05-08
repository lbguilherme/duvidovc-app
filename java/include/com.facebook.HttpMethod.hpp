#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { class HttpMethod; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class HttpMethod : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpMethod(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpMethod(const ::com::facebook::HttpMethod& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    HttpMethod(::com::facebook::HttpMethod&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::HttpMethod& operator=(const ::com::facebook::HttpMethod& x) {obj = x.obj; return *this;}
    ::com::facebook::HttpMethod& operator=(::com::facebook::HttpMethod&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::HttpMethod> values();
    static ::com::facebook::HttpMethod valueOf(const ::java::lang::String&);

};
}
}


