#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class Base64 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Base64(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Base64(const ::android::util::Base64& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Base64(::android::util::Base64&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Base64& operator=(const ::android::util::Base64& x) {obj = x.obj; return *this;}
    ::android::util::Base64& operator=(::android::util::Base64&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< int8_t> decode(const ::java::lang::String&, int32_t);
    static std::vector< int8_t> decode(const std::vector< int8_t>&, int32_t);
    static std::vector< int8_t> decode(const std::vector< int8_t>&, int32_t, int32_t, int32_t);
    static ::java::lang::String encodeToString(const std::vector< int8_t>&, int32_t);
    static ::java::lang::String encodeToString(const std::vector< int8_t>&, int32_t, int32_t, int32_t);
    static std::vector< int8_t> encode(const std::vector< int8_t>&, int32_t);
    static std::vector< int8_t> encode(const std::vector< int8_t>&, int32_t, int32_t, int32_t);

};
}
}


