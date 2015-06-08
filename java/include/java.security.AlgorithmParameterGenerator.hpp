#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class AlgorithmParameterGenerator; } }
namespace java { namespace security { class AlgorithmParameters; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }

namespace java {
namespace security {
class AlgorithmParameterGenerator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlgorithmParameterGenerator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlgorithmParameterGenerator(const ::java::security::AlgorithmParameterGenerator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlgorithmParameterGenerator(::java::security::AlgorithmParameterGenerator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AlgorithmParameterGenerator& operator=(const ::java::security::AlgorithmParameterGenerator& x) {obj = x.obj; return *this;}
    ::java::security::AlgorithmParameterGenerator& operator=(::java::security::AlgorithmParameterGenerator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const;
    static ::java::security::AlgorithmParameterGenerator getInstance(const ::java::lang::String&);
    static ::java::security::AlgorithmParameterGenerator getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::AlgorithmParameterGenerator getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const;
    void init(int32_t) const;
    void init(int32_t, const ::java::security::SecureRandom&) const;
    void init(const ::java::security::spec::AlgorithmParameterSpec&) const;
    void init(const ::java::security::spec::AlgorithmParameterSpec&, const ::java::security::SecureRandom&) const;
    ::java::security::AlgorithmParameters generateParameters() const;

};
}
}


