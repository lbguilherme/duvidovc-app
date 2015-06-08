#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace util {
namespace zip {
class Checksum : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Checksum(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Checksum(const ::java::util::zip::Checksum& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Checksum(::java::util::zip::Checksum&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::Checksum& operator=(const ::java::util::zip::Checksum& x) {obj = x.obj; return *this;}
    ::java::util::zip::Checksum& operator=(::java::util::zip::Checksum&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t getValue() const;
    void reset() const;
    void update(const std::vector< int8_t>&, int32_t, int32_t) const;
    void update(int32_t) const;

};
}
}
}


