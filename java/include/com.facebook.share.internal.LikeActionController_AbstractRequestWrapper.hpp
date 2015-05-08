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
class LikeActionController_AbstractRequestWrapper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeActionController_AbstractRequestWrapper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeActionController_AbstractRequestWrapper(const ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LikeActionController_AbstractRequestWrapper(::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper& operator=(const ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper& operator=(::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


