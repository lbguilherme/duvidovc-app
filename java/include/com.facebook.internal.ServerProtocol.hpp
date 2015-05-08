#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class ServerProtocol : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServerProtocol(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServerProtocol(const ::com::facebook::internal::ServerProtocol& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ServerProtocol(::com::facebook::internal::ServerProtocol&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ServerProtocol& operator=(const ::com::facebook::internal::ServerProtocol& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ServerProtocol& operator=(::com::facebook::internal::ServerProtocol&& x) {obj = std::move(x.obj); return *this;}
    
    ServerProtocol();
    static ::java::lang::String getDialogAuthority();
    static ::java::lang::String getGraphUrlBase();
    static ::java::lang::String getGraphVideoUrlBase();
    static ::java::lang::String getAPIVersion();
    static ::android::os::Bundle getQueryParamsForPlatformActivityIntentWebFallback(const ::java::lang::String&, int32_t, const ::android::os::Bundle&);

};
}
}
}


