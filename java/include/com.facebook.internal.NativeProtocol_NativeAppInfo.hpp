#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class NativeProtocol_NativeAppInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NativeProtocol_NativeAppInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NativeProtocol_NativeAppInfo(const ::com::facebook::internal::NativeProtocol_NativeAppInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NativeProtocol_NativeAppInfo(::com::facebook::internal::NativeProtocol_NativeAppInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::NativeProtocol_NativeAppInfo& operator=(const ::com::facebook::internal::NativeProtocol_NativeAppInfo& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::NativeProtocol_NativeAppInfo& operator=(::com::facebook::internal::NativeProtocol_NativeAppInfo&& x) {obj = std::move(x.obj); return *this;}
    
    bool validateSignature(const ::android::content::Context&, const ::java::lang::String&) const ;

};
}
}
}


