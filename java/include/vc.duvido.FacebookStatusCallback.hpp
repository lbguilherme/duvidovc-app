#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.FacebookCallback.hpp"

namespace com { namespace facebook { class FacebookException; } }
namespace java { namespace lang { class Object; } }

namespace vc {
namespace duvido {
class FacebookStatusCallback : public virtual ::java::lang::Object,
                               public virtual ::com::facebook::FacebookCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookStatusCallback(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookCallback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookStatusCallback(const ::vc::duvido::FacebookStatusCallback& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookCallback((jobject)0) {obj = x.obj;}
    FacebookStatusCallback(::vc::duvido::FacebookStatusCallback&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookCallback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::FacebookStatusCallback& operator=(const ::vc::duvido::FacebookStatusCallback& x) {obj = x.obj; return *this;}
    ::vc::duvido::FacebookStatusCallback& operator=(::vc::duvido::FacebookStatusCallback&& x) {obj = std::move(x.obj); return *this;}
    
    static void jniInitializeNative();
    FacebookStatusCallback();
    void onSuccess(const ::java::lang::Object&);
    void onCancel();
    void onError(const ::com::facebook::FacebookException&);

};
}
}


