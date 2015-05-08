#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace nio { class CharBuffer; } }
namespace java { namespace nio { namespace charset { class Charset; } } }
namespace java { namespace nio { namespace charset { class CharsetDecoder; } } }
namespace java { namespace nio { namespace charset { class CharsetEncoder; } } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { class SortedMap; } }

namespace java {
namespace nio {
namespace charset {
class Charset : public virtual ::java::lang::Object,
                public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Charset(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Charset(const ::java::nio::charset::Charset& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Charset(::java::nio::charset::Charset&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::Charset& operator=(const ::java::nio::charset::Charset& x) {obj = x.obj; return *this;}
    ::java::nio::charset::Charset& operator=(::java::nio::charset::Charset&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::SortedMap availableCharsets();
    static ::java::nio::charset::Charset forName(const ::java::lang::String&);
    static bool isSupported(const ::java::lang::String&);
    bool contains(const ::java::nio::charset::Charset&) const ;
    ::java::nio::charset::CharsetEncoder newEncoder() const ;
    ::java::nio::charset::CharsetDecoder newDecoder() const ;
    ::java::lang::String name() const ;
    ::java::util::Set aliases() const ;
    ::java::lang::String displayName() const ;
    ::java::lang::String displayName(const ::java::util::Locale&) const ;
    bool isRegistered() const ;
    bool canEncode() const ;
    ::java::nio::ByteBuffer encode(const ::java::nio::CharBuffer&) const ;
    ::java::nio::ByteBuffer encode(const ::java::lang::String&) const ;
    ::java::nio::CharBuffer decode(const ::java::nio::ByteBuffer&) const ;
    int32_t compareTo(const ::java::nio::charset::Charset&) const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    static ::java::nio::charset::Charset defaultCharset();
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}
}


