#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class AlgorithmParameters; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }

namespace java {
namespace security {
class AlgorithmParameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlgorithmParameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlgorithmParameters(const ::java::security::AlgorithmParameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlgorithmParameters(::java::security::AlgorithmParameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AlgorithmParameters& operator=(const ::java::security::AlgorithmParameters& x) {obj = x.obj; return *this;}
    ::java::security::AlgorithmParameters& operator=(::java::security::AlgorithmParameters&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::security::AlgorithmParameters getInstance(const ::java::lang::String&);
    static ::java::security::AlgorithmParameters getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::AlgorithmParameters getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const ;
    ::java::lang::String getAlgorithm() const ;
    void init(const ::java::security::spec::AlgorithmParameterSpec&) const ;
    void init(const std::vector< int8_t>&) const ;
    void init(const std::vector< int8_t>&, const ::java::lang::String&) const ;
    ::java::security::spec::AlgorithmParameterSpec getParameterSpec(const ::java::lang::Class&) const ;
    std::vector< int8_t> getEncoded() const ;
    std::vector< int8_t> getEncoded(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;

};
}
}


