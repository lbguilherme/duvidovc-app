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
namespace impl {
namespace auth {
class NTLMEngine : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NTLMEngine(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NTLMEngine(const ::org::apache::http::impl::auth::NTLMEngine& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NTLMEngine(::org::apache::http::impl::auth::NTLMEngine&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::NTLMEngine& operator=(const ::org::apache::http::impl::auth::NTLMEngine& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::NTLMEngine& operator=(::org::apache::http::impl::auth::NTLMEngine&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String generateType1Msg(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String generateType3Msg(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}
}
}


