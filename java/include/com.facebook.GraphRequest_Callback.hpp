#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class GraphResponse; } }

namespace com {
namespace facebook {
class GraphRequest_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_Callback(const ::com::facebook::GraphRequest_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphRequest_Callback(::com::facebook::GraphRequest_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_Callback& operator=(const ::com::facebook::GraphRequest_Callback& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_Callback& operator=(::com::facebook::GraphRequest_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void onCompleted(const ::com::facebook::GraphResponse&) const ;

};
}
}


