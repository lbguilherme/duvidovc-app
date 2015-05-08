#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.GraphRequest_Callback.hpp"


namespace com {
namespace facebook {
class GraphRequest_OnProgressCallback : public virtual ::java::lang::Object,
                                        public virtual ::com::facebook::GraphRequest_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_OnProgressCallback(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::GraphRequest_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_OnProgressCallback(const ::com::facebook::GraphRequest_OnProgressCallback& x) : ::java::lang::Object((jobject)0), ::com::facebook::GraphRequest_Callback((jobject)0) {obj = x.obj;}
    GraphRequest_OnProgressCallback(::com::facebook::GraphRequest_OnProgressCallback&& x) : ::java::lang::Object((jobject)0), ::com::facebook::GraphRequest_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_OnProgressCallback& operator=(const ::com::facebook::GraphRequest_OnProgressCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_OnProgressCallback& operator=(::com::facebook::GraphRequest_OnProgressCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onProgress(int64_t, int64_t) const ;

};
}
}


