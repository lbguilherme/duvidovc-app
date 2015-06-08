#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace sql { class Blob; } }

namespace java {
namespace sql {
class Blob : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Blob(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Blob(const ::java::sql::Blob& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Blob(::java::sql::Blob&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Blob& operator=(const ::java::sql::Blob& x) {obj = x.obj; return *this;}
    ::java::sql::Blob& operator=(::java::sql::Blob&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::io::InputStream getBinaryStream() const;
    ::java::io::InputStream getBinaryStream(int64_t, int64_t) const;
    std::vector< int8_t> getBytes(int64_t, int32_t) const;
    int64_t length() const;
    int64_t position(const ::java::sql::Blob&, int64_t) const;
    int64_t position(const std::vector< int8_t>&, int64_t) const;
    ::java::io::OutputStream setBinaryStream(int64_t) const;
    int32_t setBytes(int64_t, const std::vector< int8_t>&) const;
    int32_t setBytes(int64_t, const std::vector< int8_t>&, int32_t, int32_t) const;
    void truncate(int64_t) const;
    void free() const;

};
}
}


