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
class UrlRedirectCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UrlRedirectCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UrlRedirectCache(const ::com::facebook::internal::UrlRedirectCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UrlRedirectCache(::com::facebook::internal::UrlRedirectCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::UrlRedirectCache& operator=(const ::com::facebook::internal::UrlRedirectCache& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::UrlRedirectCache& operator=(::com::facebook::internal::UrlRedirectCache&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


