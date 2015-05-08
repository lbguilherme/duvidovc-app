#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace text {
class AndroidCharacter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidCharacter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidCharacter(const ::android::text::AndroidCharacter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AndroidCharacter(::android::text::AndroidCharacter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::AndroidCharacter& operator=(const ::android::text::AndroidCharacter& x) {obj = x.obj; return *this;}
    ::android::text::AndroidCharacter& operator=(::android::text::AndroidCharacter&& x) {obj = std::move(x.obj); return *this;}
    
    AndroidCharacter();
    static void getDirectionalities(const std::vector< uint16_t>&, const std::vector< int8_t>&, int32_t);
    static int32_t getEastAsianWidth(uint16_t);
    static void getEastAsianWidths(const std::vector< uint16_t>&, int32_t, int32_t, const std::vector< int8_t>&);
    static bool mirror(const std::vector< uint16_t>&, int32_t, int32_t);
    static uint16_t getMirror(uint16_t);

};
}
}


