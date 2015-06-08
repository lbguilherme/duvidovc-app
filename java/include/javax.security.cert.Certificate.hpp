#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class PublicKey; } }

namespace javax {
namespace security {
namespace cert {
class Certificate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Certificate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Certificate(const ::javax::security::cert::Certificate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Certificate(::javax::security::cert::Certificate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::cert::Certificate& operator=(const ::javax::security::cert::Certificate& x) {obj = x.obj; return *this;}
    ::javax::security::cert::Certificate& operator=(::javax::security::cert::Certificate&& x) {obj = std::move(x.obj); return *this;}
    
    Certificate();
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    std::vector< int8_t> getEncoded() const;
    void verify(const ::java::security::PublicKey&) const;
    void verify(const ::java::security::PublicKey&, const ::java::lang::String&) const;
    ::java::lang::String toString() const;
    ::java::security::PublicKey getPublicKey() const;

};
}
}
}


