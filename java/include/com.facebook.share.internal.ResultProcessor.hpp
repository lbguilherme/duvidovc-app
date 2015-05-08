#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { class FacebookCallback; } }
namespace com { namespace facebook { class FacebookException; } }
namespace com { namespace facebook { namespace internal { class AppCall; } } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class ResultProcessor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResultProcessor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResultProcessor(const ::com::facebook::share::internal::ResultProcessor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ResultProcessor(::com::facebook::share::internal::ResultProcessor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::ResultProcessor& operator=(const ::com::facebook::share::internal::ResultProcessor& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::ResultProcessor& operator=(::com::facebook::share::internal::ResultProcessor&& x) {obj = std::move(x.obj); return *this;}
    
    ResultProcessor(const ::com::facebook::FacebookCallback&);
    void onSuccess(const ::com::facebook::internal::AppCall&, const ::android::os::Bundle&) const ;
    void onCancel(const ::com::facebook::internal::AppCall&) const ;
    void onError(const ::com::facebook::internal::AppCall&, const ::com::facebook::FacebookException&) const ;

};
}
}
}
}


