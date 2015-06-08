#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.WorkQueue_WorkItem.hpp"


namespace com {
namespace facebook {
namespace internal {
class WorkQueue_WorkNode : public virtual ::java::lang::Object,
                           public virtual ::com::facebook::internal::WorkQueue_WorkItem {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WorkQueue_WorkNode(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::internal::WorkQueue_WorkItem(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WorkQueue_WorkNode(const ::com::facebook::internal::WorkQueue_WorkNode& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::WorkQueue_WorkItem((jobject)0) {obj = x.obj;}
    WorkQueue_WorkNode(::com::facebook::internal::WorkQueue_WorkNode&& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::WorkQueue_WorkItem((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::WorkQueue_WorkNode& operator=(const ::com::facebook::internal::WorkQueue_WorkNode& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::WorkQueue_WorkNode& operator=(::com::facebook::internal::WorkQueue_WorkNode&& x) {obj = std::move(x.obj); return *this;}
    
    bool cancel() const;
    void moveToFront() const;
    bool isRunning() const;

};
}
}
}


