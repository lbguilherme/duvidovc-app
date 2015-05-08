#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace security { class Key; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }
namespace javax { namespace crypto { class Mac; } }

namespace javax {
namespace crypto {
class Mac : public virtual ::java::lang::Object,
            public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Mac(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Mac(const ::javax::crypto::Mac& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Mac(::javax::crypto::Mac&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::Mac& operator=(const ::javax::crypto::Mac& x) {obj = x.obj; return *this;}
    ::javax::crypto::Mac& operator=(::javax::crypto::Mac&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const ;
    ::java::security::Provider getProvider() const ;
    static ::javax::crypto::Mac getInstance(const ::java::lang::String&);
    static ::javax::crypto::Mac getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::crypto::Mac getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    int32_t getMacLength() const ;
    void init(const ::java::security::Key&, const ::java::security::spec::AlgorithmParameterSpec&) const ;
    void init(const ::java::security::Key&) const ;
    void update(int8_t) const ;
    void update(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void update(const std::vector< int8_t>&) const ;
    void update(const ::java::nio::ByteBuffer&) const ;
    std::vector< int8_t> doFinal() const ;
    void doFinal(const std::vector< int8_t>&, int32_t) const ;
    std::vector< int8_t> doFinal(const std::vector< int8_t>&) const ;
    void reset() const ;
    ::java::lang::Object clone() const ;

};
}
}


