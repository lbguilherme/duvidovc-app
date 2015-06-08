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
namespace login {
namespace widget {
class ProfilePictureView_OnErrorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProfilePictureView_OnErrorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProfilePictureView_OnErrorListener(const ::com::facebook::login::widget::ProfilePictureView_OnErrorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProfilePictureView_OnErrorListener(::com::facebook::login::widget::ProfilePictureView_OnErrorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::ProfilePictureView_OnErrorListener& operator=(const ::com::facebook::login::widget::ProfilePictureView_OnErrorListener& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::ProfilePictureView_OnErrorListener& operator=(::com::facebook::login::widget::ProfilePictureView_OnErrorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onError(const ::com::facebook::FacebookException&) const;

};
}
}
}
}


