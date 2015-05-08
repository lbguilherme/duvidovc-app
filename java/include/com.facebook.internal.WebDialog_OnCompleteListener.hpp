#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { class FacebookException; } }

namespace com {
namespace facebook {
namespace internal {
class WebDialog_OnCompleteListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebDialog_OnCompleteListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebDialog_OnCompleteListener(const ::com::facebook::internal::WebDialog_OnCompleteListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebDialog_OnCompleteListener(::com::facebook::internal::WebDialog_OnCompleteListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::WebDialog_OnCompleteListener& operator=(const ::com::facebook::internal::WebDialog_OnCompleteListener& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::WebDialog_OnCompleteListener& operator=(::com::facebook::internal::WebDialog_OnCompleteListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onComplete(const ::android::os::Bundle&, const ::com::facebook::FacebookException&) const ;

};
}
}
}


