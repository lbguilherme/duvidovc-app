#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class GraphRequestBatch; } }

namespace com {
namespace facebook {
class GraphRequestBatch_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequestBatch_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequestBatch_Callback(const ::com::facebook::GraphRequestBatch_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphRequestBatch_Callback(::com::facebook::GraphRequestBatch_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequestBatch_Callback& operator=(const ::com::facebook::GraphRequestBatch_Callback& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequestBatch_Callback& operator=(::com::facebook::GraphRequestBatch_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void onBatchCompleted(const ::com::facebook::GraphRequestBatch&) const;

};
}
}


