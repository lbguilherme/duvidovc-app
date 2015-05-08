#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookException; } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
class FacebookCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookCallback(const ::com::facebook::FacebookCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookCallback(::com::facebook::FacebookCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookCallback& operator=(const ::com::facebook::FacebookCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookCallback& operator=(::com::facebook::FacebookCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onSuccess(const ::java::lang::Object&) const ;
    void onCancel() const ;
    void onError(const ::com::facebook::FacebookException&) const ;

};
}
}


