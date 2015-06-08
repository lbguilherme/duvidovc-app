#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterInputStream.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace util { namespace zip { class Checksum; } } }

namespace java {
namespace util {
namespace zip {
class CheckedInputStream : public virtual ::java::lang::Object,
                           public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CheckedInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CheckedInputStream(const ::java::util::zip::CheckedInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    CheckedInputStream(::java::util::zip::CheckedInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::CheckedInputStream& operator=(const ::java::util::zip::CheckedInputStream& x) {obj = x.obj; return *this;}
    ::java::util::zip::CheckedInputStream& operator=(::java::util::zip::CheckedInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    CheckedInputStream(const ::java::io::InputStream&, const ::java::util::zip::Checksum&);
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    ::java::util::zip::Checksum getChecksum() const;
    int64_t skip(int64_t) const;

};
}
}
}


