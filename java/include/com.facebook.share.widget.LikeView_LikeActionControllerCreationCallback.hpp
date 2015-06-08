#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.internal.LikeActionController_CreationCallback.hpp"

namespace com { namespace facebook { class FacebookException; } }
namespace com { namespace facebook { namespace share { namespace internal { class LikeActionController; } } } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class LikeView_LikeActionControllerCreationCallback : public virtual ::java::lang::Object,
                                                      public virtual ::com::facebook::share::internal::LikeActionController_CreationCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeView_LikeActionControllerCreationCallback(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::internal::LikeActionController_CreationCallback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeView_LikeActionControllerCreationCallback(const ::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::LikeActionController_CreationCallback((jobject)0) {obj = x.obj;}
    LikeView_LikeActionControllerCreationCallback(::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::LikeActionController_CreationCallback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback& operator=(const ::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback& operator=(::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void cancel() const;
    void onComplete(const ::com::facebook::share::internal::LikeActionController&, const ::com::facebook::FacebookException&) const;

};
}
}
}
}


