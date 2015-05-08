#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace database {
class CharArrayBuffer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharArrayBuffer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharArrayBuffer(const ::android::database::CharArrayBuffer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CharArrayBuffer(::android::database::CharArrayBuffer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::CharArrayBuffer& operator=(const ::android::database::CharArrayBuffer& x) {obj = x.obj; return *this;}
    ::android::database::CharArrayBuffer& operator=(::android::database::CharArrayBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    CharArrayBuffer(int32_t);
    CharArrayBuffer(const std::vector< uint16_t>&);

};
}
}


