#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.OutputStream.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace channels { class FileChannel; } } }

namespace java {
namespace io {
class FileOutputStream : public virtual ::java::lang::Object,
                         public virtual ::java::io::Closeable,
                         public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileOutputStream(const ::java::io::FileOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    FileOutputStream(::java::io::FileOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FileOutputStream& operator=(const ::java::io::FileOutputStream& x) {obj = x.obj; return *this;}
    ::java::io::FileOutputStream& operator=(::java::io::FileOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    FileOutputStream(const ::java::io::File&);
    FileOutputStream(const ::java::io::File&, bool);
    FileOutputStream(const ::java::io::FileDescriptor&);
    FileOutputStream(const ::java::lang::String&);
    FileOutputStream(const ::java::lang::String&, bool);
    void close() const ;
    ::java::nio::channels::FileChannel getChannel() const ;
    ::java::io::FileDescriptor getFD() const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;

};
}
}


