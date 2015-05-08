#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class CallbackManager; } }

namespace com {
namespace facebook {
class CallbackManager_Factory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallbackManager_Factory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallbackManager_Factory(const ::com::facebook::CallbackManager_Factory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CallbackManager_Factory(::com::facebook::CallbackManager_Factory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::CallbackManager_Factory& operator=(const ::com::facebook::CallbackManager_Factory& x) {obj = x.obj; return *this;}
    ::com::facebook::CallbackManager_Factory& operator=(::com::facebook::CallbackManager_Factory&& x) {obj = std::move(x.obj); return *this;}
    
    CallbackManager_Factory();
    static ::com::facebook::CallbackManager create();

};
}
}


