#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Clob; } }

namespace java {
namespace sql {
class Clob : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Clob(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Clob(const ::java::sql::Clob& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Clob(::java::sql::Clob&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Clob& operator=(const ::java::sql::Clob& x) {obj = x.obj; return *this;}
    ::java::sql::Clob& operator=(::java::sql::Clob&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::io::InputStream getAsciiStream() const;
    ::java::io::Reader getCharacterStream() const;
    ::java::lang::String getSubString(int64_t, int32_t) const;
    int64_t length() const;
    int64_t position(const ::java::sql::Clob&, int64_t) const;
    int64_t position(const ::java::lang::String&, int64_t) const;
    ::java::io::OutputStream setAsciiStream(int64_t) const;
    ::java::io::Writer setCharacterStream(int64_t) const;
    int32_t setString(int64_t, const ::java::lang::String&) const;
    int32_t setString(int64_t, const ::java::lang::String&, int32_t, int32_t) const;
    void truncate(int64_t) const;
    void free() const;
    ::java::io::Reader getCharacterStream(int64_t, int64_t) const;

};
}
}


