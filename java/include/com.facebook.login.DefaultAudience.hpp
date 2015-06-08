#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace login { class DefaultAudience; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace login {
class DefaultAudience : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultAudience(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultAudience(const ::com::facebook::login::DefaultAudience& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    DefaultAudience(::com::facebook::login::DefaultAudience&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::DefaultAudience& operator=(const ::com::facebook::login::DefaultAudience& x) {obj = x.obj; return *this;}
    ::com::facebook::login::DefaultAudience& operator=(::com::facebook::login::DefaultAudience&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::login::DefaultAudience> values();
    static ::com::facebook::login::DefaultAudience valueOf(const ::java::lang::String&);
    ::java::lang::String getNativeProtocolAudience() const;

};
}
}
}


