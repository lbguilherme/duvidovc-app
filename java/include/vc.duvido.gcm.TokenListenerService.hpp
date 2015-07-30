#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace vc {
namespace duvido {
namespace gcm {
class TokenListenerService : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TokenListenerService(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TokenListenerService(const ::vc::duvido::gcm::TokenListenerService& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TokenListenerService(::vc::duvido::gcm::TokenListenerService&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::gcm::TokenListenerService& operator=(const ::vc::duvido::gcm::TokenListenerService& x) {obj = x.obj; return *this;}
    ::vc::duvido::gcm::TokenListenerService& operator=(::vc::duvido::gcm::TokenListenerService&& x) {obj = std::move(x.obj); return *this;}
    
    TokenListenerService();
    void onTokenRefresh() const;

};
}
}
}


