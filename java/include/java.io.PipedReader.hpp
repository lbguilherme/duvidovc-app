#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Reader.hpp"

namespace java { namespace io { class PipedWriter; } }

namespace java {
namespace io {
class PipedReader : public virtual ::java::lang::Object,
                    public virtual ::java::io::Reader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PipedReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PipedReader(const ::java::io::PipedReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    PipedReader(::java::io::PipedReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PipedReader& operator=(const ::java::io::PipedReader& x) {obj = x.obj; return *this;}
    ::java::io::PipedReader& operator=(::java::io::PipedReader&& x) {obj = std::move(x.obj); return *this;}
    
    PipedReader();
    PipedReader(const ::java::io::PipedWriter&);
    PipedReader(int32_t);
    PipedReader(const ::java::io::PipedWriter&, int32_t);
    void close() const;
    void connect(const ::java::io::PipedWriter&) const;
    int32_t read() const;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const;
    bool ready() const;

};
}
}


