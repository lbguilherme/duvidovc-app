#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace app {
namespace backup {
class BackupDataInputStream : public virtual ::java::lang::Object,
                              public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackupDataInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackupDataInputStream(const ::android::app::backup::BackupDataInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    BackupDataInputStream(::android::app::backup::BackupDataInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::BackupDataInputStream& operator=(const ::android::app::backup::BackupDataInputStream& x) {obj = x.obj; return *this;}
    ::android::app::backup::BackupDataInputStream& operator=(::android::app::backup::BackupDataInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int32_t read(const std::vector< int8_t>&) const ;
    ::java::lang::String getKey() const ;
    int32_t size() const ;

};
}
}
}


