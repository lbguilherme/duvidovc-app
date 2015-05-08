#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.internal.LikeActionController_AbstractRequestWrapper.hpp"


namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeActionController_PublishLikeRequestWrapper : public virtual ::java::lang::Object,
                                                       public virtual ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeActionController_PublishLikeRequestWrapper(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeActionController_PublishLikeRequestWrapper(const ::com::facebook::share::internal::LikeActionController_PublishLikeRequestWrapper& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper((jobject)0) {obj = x.obj;}
    LikeActionController_PublishLikeRequestWrapper(::com::facebook::share::internal::LikeActionController_PublishLikeRequestWrapper&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::LikeActionController_AbstractRequestWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeActionController_PublishLikeRequestWrapper& operator=(const ::com::facebook::share::internal::LikeActionController_PublishLikeRequestWrapper& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeActionController_PublishLikeRequestWrapper& operator=(::com::facebook::share::internal::LikeActionController_PublishLikeRequestWrapper&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


