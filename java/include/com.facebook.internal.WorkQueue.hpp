#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace internal { class WorkQueue_WorkItem; } } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class Executor; } } }

namespace com {
namespace facebook {
namespace internal {
class WorkQueue : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WorkQueue(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WorkQueue(const ::com::facebook::internal::WorkQueue& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WorkQueue(::com::facebook::internal::WorkQueue&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::WorkQueue& operator=(const ::com::facebook::internal::WorkQueue& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::WorkQueue& operator=(::com::facebook::internal::WorkQueue&& x) {obj = std::move(x.obj); return *this;}
    
    WorkQueue();
    WorkQueue(int32_t);
    WorkQueue(int32_t, const ::java::util::concurrent::Executor&);
    ::com::facebook::internal::WorkQueue_WorkItem addActiveWorkItem(const ::java::lang::Runnable&) const;
    ::com::facebook::internal::WorkQueue_WorkItem addActiveWorkItem(const ::java::lang::Runnable&, bool) const;
    void validate() const;

};
}
}
}

#include "com.facebook.internal.WorkQueue_WorkItem.hpp"
#include "com.facebook.internal.WorkQueue_WorkNode.hpp"

