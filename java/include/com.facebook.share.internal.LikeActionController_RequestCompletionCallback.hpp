#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeActionController_RequestCompletionCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeActionController_RequestCompletionCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeActionController_RequestCompletionCallback(const ::com::facebook::share::internal::LikeActionController_RequestCompletionCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LikeActionController_RequestCompletionCallback(::com::facebook::share::internal::LikeActionController_RequestCompletionCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeActionController_RequestCompletionCallback& operator=(const ::com::facebook::share::internal::LikeActionController_RequestCompletionCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeActionController_RequestCompletionCallback& operator=(::com::facebook::share::internal::LikeActionController_RequestCompletionCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onComplete() const ;

};
}
}
}
}


