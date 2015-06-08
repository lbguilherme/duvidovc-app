#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }

namespace android {
namespace util {
class Base64OutputStream : public virtual ::java::lang::Object,
                           public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Base64OutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Base64OutputStream(const ::android::util::Base64OutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    Base64OutputStream(::android::util::Base64OutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Base64OutputStream& operator=(const ::android::util::Base64OutputStream& x) {obj = x.obj; return *this;}
    ::android::util::Base64OutputStream& operator=(::android::util::Base64OutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    Base64OutputStream(const ::java::io::OutputStream&, int32_t);
    void write(int32_t) const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void close() const;

};
}
}


