#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace applinks { class AppLinkData; } } }

namespace com {
namespace facebook {
namespace applinks {
class AppLinkData_CompletionHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppLinkData_CompletionHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppLinkData_CompletionHandler(const ::com::facebook::applinks::AppLinkData_CompletionHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppLinkData_CompletionHandler(::com::facebook::applinks::AppLinkData_CompletionHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::applinks::AppLinkData_CompletionHandler& operator=(const ::com::facebook::applinks::AppLinkData_CompletionHandler& x) {obj = x.obj; return *this;}
    ::com::facebook::applinks::AppLinkData_CompletionHandler& operator=(::com::facebook::applinks::AppLinkData_CompletionHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void onDeferredAppLinkDataFetched(const ::com::facebook::applinks::AppLinkData&) const ;

};
}
}
}


