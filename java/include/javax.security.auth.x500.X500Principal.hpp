#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.Principal.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace javax {
namespace security {
namespace auth {
namespace x500 {
class X500Principal : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::security::Principal {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X500Principal(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Principal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X500Principal(const ::javax::security::auth::x500::X500Principal& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj;}
    X500Principal(::javax::security::auth::x500::X500Principal&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::x500::X500Principal& operator=(const ::javax::security::auth::x500::X500Principal& x) {obj = x.obj; return *this;}
    ::javax::security::auth::x500::X500Principal& operator=(::javax::security::auth::x500::X500Principal&& x) {obj = std::move(x.obj); return *this;}
    
    X500Principal(const std::vector< int8_t>&);
    X500Principal(const ::java::io::InputStream&);
    X500Principal(const ::java::lang::String&);
    X500Principal(const ::java::lang::String&, const ::java::util::Map&);
    bool equals(const ::java::lang::Object&) const;
    std::vector< int8_t> getEncoded() const;
    ::java::lang::String getName() const;
    ::java::lang::String getName(const ::java::lang::String&) const;
    ::java::lang::String getName(const ::java::lang::String&, const ::java::util::Map&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;

};
}
}
}
}


