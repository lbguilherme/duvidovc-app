#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }

namespace com {
namespace facebook {
namespace internal {
class CallbackManagerImpl_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallbackManagerImpl_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallbackManagerImpl_Callback(const ::com::facebook::internal::CallbackManagerImpl_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CallbackManagerImpl_Callback(::com::facebook::internal::CallbackManagerImpl_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::CallbackManagerImpl_Callback& operator=(const ::com::facebook::internal::CallbackManagerImpl_Callback& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::CallbackManagerImpl_Callback& operator=(::com::facebook::internal::CallbackManagerImpl_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    bool onActivityResult(int32_t, const ::android::content::Intent&) const ;

};
}
}
}


