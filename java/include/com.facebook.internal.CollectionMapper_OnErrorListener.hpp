#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookException; } }

namespace com {
namespace facebook {
namespace internal {
class CollectionMapper_OnErrorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollectionMapper_OnErrorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollectionMapper_OnErrorListener(const ::com::facebook::internal::CollectionMapper_OnErrorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CollectionMapper_OnErrorListener(::com::facebook::internal::CollectionMapper_OnErrorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::CollectionMapper_OnErrorListener& operator=(const ::com::facebook::internal::CollectionMapper_OnErrorListener& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::CollectionMapper_OnErrorListener& operator=(::com::facebook::internal::CollectionMapper_OnErrorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onError(const ::com::facebook::FacebookException&) const ;

};
}
}
}


