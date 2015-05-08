#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Intent; } }

namespace com {
namespace facebook {
namespace login {
class StartActivityDelegate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StartActivityDelegate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StartActivityDelegate(const ::com::facebook::login::StartActivityDelegate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StartActivityDelegate(::com::facebook::login::StartActivityDelegate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::StartActivityDelegate& operator=(const ::com::facebook::login::StartActivityDelegate& x) {obj = x.obj; return *this;}
    ::com::facebook::login::StartActivityDelegate& operator=(::com::facebook::login::StartActivityDelegate&& x) {obj = std::move(x.obj); return *this;}
    
    void startActivityForResult(const ::android::content::Intent&, int32_t) const ;
    ::android::app::Activity getActivityContext() const ;

};
}
}
}


