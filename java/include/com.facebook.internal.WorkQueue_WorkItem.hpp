#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace internal {
class WorkQueue_WorkItem : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WorkQueue_WorkItem(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WorkQueue_WorkItem(const ::com::facebook::internal::WorkQueue_WorkItem& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WorkQueue_WorkItem(::com::facebook::internal::WorkQueue_WorkItem&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::WorkQueue_WorkItem& operator=(const ::com::facebook::internal::WorkQueue_WorkItem& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::WorkQueue_WorkItem& operator=(::com::facebook::internal::WorkQueue_WorkItem&& x) {obj = std::move(x.obj); return *this;}
    
    bool cancel() const;
    bool isRunning() const;
    void moveToFront() const;

};
}
}
}


