#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { class AccessTokenSource; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class AccessTokenSource : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenSource(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenSource(const ::com::facebook::AccessTokenSource& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    AccessTokenSource(::com::facebook::AccessTokenSource&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenSource& operator=(const ::com::facebook::AccessTokenSource& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenSource& operator=(::com::facebook::AccessTokenSource&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::AccessTokenSource> values();
    static ::com::facebook::AccessTokenSource valueOf(const ::java::lang::String&);

};
}
}


