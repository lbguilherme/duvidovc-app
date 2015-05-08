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
class AnalyticsEvents : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnalyticsEvents(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnalyticsEvents(const ::com::facebook::internal::AnalyticsEvents& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AnalyticsEvents(::com::facebook::internal::AnalyticsEvents&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::AnalyticsEvents& operator=(const ::com::facebook::internal::AnalyticsEvents& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::AnalyticsEvents& operator=(::com::facebook::internal::AnalyticsEvents&& x) {obj = std::move(x.obj); return *this;}
    
    AnalyticsEvents();

};
}
}
}


