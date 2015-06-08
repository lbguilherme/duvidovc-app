#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace crypto { namespace spec { class DHParameterSpec; } } }

namespace javax {
namespace crypto {
namespace interfaces {
class DHKey : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DHKey(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DHKey(const ::javax::crypto::interfaces::DHKey& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DHKey(::javax::crypto::interfaces::DHKey&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::interfaces::DHKey& operator=(const ::javax::crypto::interfaces::DHKey& x) {obj = x.obj; return *this;}
    ::javax::crypto::interfaces::DHKey& operator=(::javax::crypto::interfaces::DHKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::crypto::spec::DHParameterSpec getParams() const;

};
}
}
}


