#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class GraphRequest; } }

namespace com {
namespace facebook {
class RequestOutputStream : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RequestOutputStream(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RequestOutputStream(const ::com::facebook::RequestOutputStream& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RequestOutputStream(::com::facebook::RequestOutputStream&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::RequestOutputStream& operator=(const ::com::facebook::RequestOutputStream& x) {obj = x.obj; return *this;}
    ::com::facebook::RequestOutputStream& operator=(::com::facebook::RequestOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    void setCurrentRequest(const ::com::facebook::GraphRequest&) const ;

};
}
}


