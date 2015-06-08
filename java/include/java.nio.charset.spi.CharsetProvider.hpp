#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace charset { class Charset; } } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace nio {
namespace charset {
namespace spi {
class CharsetProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharsetProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharsetProvider(const ::java::nio::charset::spi::CharsetProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CharsetProvider(::java::nio::charset::spi::CharsetProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::spi::CharsetProvider& operator=(const ::java::nio::charset::spi::CharsetProvider& x) {obj = x.obj; return *this;}
    ::java::nio::charset::spi::CharsetProvider& operator=(::java::nio::charset::spi::CharsetProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Iterator charsets() const;
    ::java::nio::charset::Charset charsetForName(const ::java::lang::String&) const;

};
}
}
}
}


