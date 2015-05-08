#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.Checksum.hpp"


namespace java {
namespace util {
namespace zip {
class CRC32 : public virtual ::java::lang::Object,
              public virtual ::java::util::zip::Checksum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CRC32(jobject _obj) : ::java::lang::Object(_obj), ::java::util::zip::Checksum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CRC32(const ::java::util::zip::CRC32& x) : ::java::lang::Object((jobject)0), ::java::util::zip::Checksum((jobject)0) {obj = x.obj;}
    CRC32(::java::util::zip::CRC32&& x) : ::java::lang::Object((jobject)0), ::java::util::zip::Checksum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::CRC32& operator=(const ::java::util::zip::CRC32& x) {obj = x.obj; return *this;}
    ::java::util::zip::CRC32& operator=(::java::util::zip::CRC32&& x) {obj = std::move(x.obj); return *this;}
    
    CRC32();
    int64_t getValue() const ;
    void reset() const ;
    void update(int32_t) const ;
    void update(const std::vector< int8_t>&) const ;
    void update(const std::vector< int8_t>&, int32_t, int32_t) const ;

};
}
}
}


