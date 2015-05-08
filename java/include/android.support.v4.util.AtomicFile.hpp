#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class FileInputStream; } }
namespace java { namespace io { class FileOutputStream; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class AtomicFile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicFile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicFile(const ::android::support::v4::util::AtomicFile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AtomicFile(::android::support::v4::util::AtomicFile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::AtomicFile& operator=(const ::android::support::v4::util::AtomicFile& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::AtomicFile& operator=(::android::support::v4::util::AtomicFile&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicFile(const ::java::io::File&);
    ::java::io::File getBaseFile() const ;
    void delete_() const ;
    ::java::io::FileOutputStream startWrite() const ;
    void finishWrite(const ::java::io::FileOutputStream&) const ;
    void failWrite(const ::java::io::FileOutputStream&) const ;
    ::java::io::FileInputStream openRead() const ;
    std::vector< int8_t> readFully() const ;

};
}
}
}
}


