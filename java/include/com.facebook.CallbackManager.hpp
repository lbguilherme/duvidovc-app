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
class CallbackManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallbackManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallbackManager(const ::com::facebook::CallbackManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CallbackManager(::com::facebook::CallbackManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::CallbackManager& operator=(const ::com::facebook::CallbackManager& x) {obj = x.obj; return *this;}
    ::com::facebook::CallbackManager& operator=(::com::facebook::CallbackManager&& x) {obj = std::move(x.obj); return *this;}
    
    bool onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const;

};
}
}

#include "com.facebook.CallbackManager_Factory.hpp"

