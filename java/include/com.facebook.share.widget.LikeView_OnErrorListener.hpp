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
namespace share {
namespace widget {
class LikeView_OnErrorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeView_OnErrorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeView_OnErrorListener(const ::com::facebook::share::widget::LikeView_OnErrorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LikeView_OnErrorListener(::com::facebook::share::widget::LikeView_OnErrorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::LikeView_OnErrorListener& operator=(const ::com::facebook::share::widget::LikeView_OnErrorListener& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::LikeView_OnErrorListener& operator=(::com::facebook::share::widget::LikeView_OnErrorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onError(const ::com::facebook::FacebookException&) const;

};
}
}
}
}


