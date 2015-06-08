#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.InputStream.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace channels { class FileChannel; } } }

namespace java {
namespace io {
class FileInputStream : public virtual ::java::lang::Object,
                        public virtual ::java::io::Closeable,
                        public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileInputStream(const ::java::io::FileInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    FileInputStream(::java::io::FileInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FileInputStream& operator=(const ::java::io::FileInputStream& x) {obj = x.obj; return *this;}
    ::java::io::FileInputStream& operator=(::java::io::FileInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    FileInputStream(const ::java::io::File&);
    FileInputStream(const ::java::io::FileDescriptor&);
    FileInputStream(const ::java::lang::String&);
    int32_t available() const;
    void close() const;
    ::java::nio::channels::FileChannel getChannel() const;
    ::java::io::FileDescriptor getFD() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int64_t skip(int64_t) const;

};
}
}


