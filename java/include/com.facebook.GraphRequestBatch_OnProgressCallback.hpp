#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.GraphRequestBatch_Callback.hpp"

namespace com { namespace facebook { class GraphRequestBatch; } }

namespace com {
namespace facebook {
class GraphRequestBatch_OnProgressCallback : public virtual ::java::lang::Object,
                                             public virtual ::com::facebook::GraphRequestBatch_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequestBatch_OnProgressCallback(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::GraphRequestBatch_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequestBatch_OnProgressCallback(const ::com::facebook::GraphRequestBatch_OnProgressCallback& x) : ::java::lang::Object((jobject)0), ::com::facebook::GraphRequestBatch_Callback((jobject)0) {obj = x.obj;}
    GraphRequestBatch_OnProgressCallback(::com::facebook::GraphRequestBatch_OnProgressCallback&& x) : ::java::lang::Object((jobject)0), ::com::facebook::GraphRequestBatch_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequestBatch_OnProgressCallback& operator=(const ::com::facebook::GraphRequestBatch_OnProgressCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequestBatch_OnProgressCallback& operator=(::com::facebook::GraphRequestBatch_OnProgressCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onBatchProgress(const ::com::facebook::GraphRequestBatch&, int64_t, int64_t) const ;

};
}
}


