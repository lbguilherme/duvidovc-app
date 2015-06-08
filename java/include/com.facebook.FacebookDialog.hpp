#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class CallbackManager; } }
namespace com { namespace facebook { class FacebookCallback; } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
class FacebookDialog : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookDialog(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookDialog(const ::com::facebook::FacebookDialog& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookDialog(::com::facebook::FacebookDialog&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookDialog& operator=(const ::com::facebook::FacebookDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookDialog& operator=(::com::facebook::FacebookDialog&& x) {obj = std::move(x.obj); return *this;}
    
    bool canShow(const ::java::lang::Object&) const;
    void show(const ::java::lang::Object&) const;
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&) const;
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&, int32_t) const;

};
}
}


