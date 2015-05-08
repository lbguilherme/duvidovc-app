#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.Flushable.hpp"
#include "java.lang.Appendable.hpp"

namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class Writer : public virtual ::java::lang::Object,
               public virtual ::java::io::Closeable,
               public virtual ::java::io::Flushable,
               public virtual ::java::lang::Appendable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Writer(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Writer(const ::java::io::Writer& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    Writer(::java::io::Writer&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::Writer& operator=(const ::java::io::Writer& x) {obj = x.obj; return *this;}
    ::java::io::Writer& operator=(::java::io::Writer&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;
    void flush() const ;
    void write(const std::vector< uint16_t>&) const ;
    void write(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;
    void write(const ::java::lang::String&) const ;
    void write(const ::java::lang::String&, int32_t, int32_t) const ;
    ::java::io::Writer append(uint16_t) const ;
    ::java::io::Writer append(const ::java::lang::CharSequence&) const ;
    ::java::io::Writer append(const ::java::lang::CharSequence&, int32_t, int32_t) const ;

};
}
}


