#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class MemoryFile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MemoryFile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MemoryFile(const ::android::os::MemoryFile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MemoryFile(::android::os::MemoryFile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::MemoryFile& operator=(const ::android::os::MemoryFile& x) {obj = x.obj; return *this;}
    ::android::os::MemoryFile& operator=(::android::os::MemoryFile&& x) {obj = std::move(x.obj); return *this;}
    
    MemoryFile(const ::java::lang::String&, int32_t);
    void close() const;
    int32_t length() const;
    bool isPurgingAllowed() const;
    bool allowPurging(bool) const;
    ::java::io::InputStream getInputStream() const;
    ::java::io::OutputStream getOutputStream() const;
    int32_t readBytes(const std::vector< int8_t>&, int32_t, int32_t, int32_t) const;
    void writeBytes(const std::vector< int8_t>&, int32_t, int32_t, int32_t) const;

};
}
}


