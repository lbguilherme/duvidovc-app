#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace util {
class EncodingUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EncodingUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EncodingUtils(const ::org::apache::http::util::EncodingUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EncodingUtils(::org::apache::http::util::EncodingUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::util::EncodingUtils& operator=(const ::org::apache::http::util::EncodingUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::util::EncodingUtils& operator=(::org::apache::http::util::EncodingUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getString(const std::vector< int8_t>&, int32_t, int32_t, const ::java::lang::String&);
    static ::java::lang::String getString(const std::vector< int8_t>&, const ::java::lang::String&);
    static std::vector< int8_t> getBytes(const ::java::lang::String&, const ::java::lang::String&);
    static std::vector< int8_t> getAsciiBytes(const ::java::lang::String&);
    static ::java::lang::String getAsciiString(const std::vector< int8_t>&, int32_t, int32_t);
    static ::java::lang::String getAsciiString(const std::vector< int8_t>&);

};
}
}
}
}


