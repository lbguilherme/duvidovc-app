#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.CallbackManager.hpp"

namespace android { namespace content { class Intent; } }
namespace com { namespace facebook { namespace internal { class CallbackManagerImpl_Callback; } } }

namespace com {
namespace facebook {
namespace internal {
class CallbackManagerImpl : public virtual ::java::lang::Object,
                            public virtual ::com::facebook::CallbackManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallbackManagerImpl(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::CallbackManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallbackManagerImpl(const ::com::facebook::internal::CallbackManagerImpl& x) : ::java::lang::Object((jobject)0), ::com::facebook::CallbackManager((jobject)0) {obj = x.obj;}
    CallbackManagerImpl(::com::facebook::internal::CallbackManagerImpl&& x) : ::java::lang::Object((jobject)0), ::com::facebook::CallbackManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::CallbackManagerImpl& operator=(const ::com::facebook::internal::CallbackManagerImpl& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::CallbackManagerImpl& operator=(::com::facebook::internal::CallbackManagerImpl&& x) {obj = std::move(x.obj); return *this;}
    
    CallbackManagerImpl();
    static void registerStaticCallback(int32_t, const ::com::facebook::internal::CallbackManagerImpl_Callback&);
    void registerCallback(int32_t, const ::com::facebook::internal::CallbackManagerImpl_Callback&) const ;
    bool onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const ;

};
}
}
}

#include "com.facebook.internal.CallbackManagerImpl_Callback.hpp"
#include "com.facebook.internal.CallbackManagerImpl_RequestCodeOffset.hpp"

