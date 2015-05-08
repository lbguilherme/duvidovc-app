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
class JsonUtil : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JsonUtil(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JsonUtil(const ::com::facebook::internal::JsonUtil& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JsonUtil(::com::facebook::internal::JsonUtil&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::JsonUtil& operator=(const ::com::facebook::internal::JsonUtil& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::JsonUtil& operator=(::com::facebook::internal::JsonUtil&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}

#include "com.facebook.internal.JsonUtil_JSONObjectEntry.hpp"

