#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { class Buffer; } }

namespace android {
namespace opengl {
class ETC1 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ETC1(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ETC1(const ::android::opengl::ETC1& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ETC1(::android::opengl::ETC1&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::ETC1& operator=(const ::android::opengl::ETC1& x) {obj = x.obj; return *this;}
    ::android::opengl::ETC1& operator=(::android::opengl::ETC1&& x) {obj = std::move(x.obj); return *this;}
    
    ETC1();
    static void encodeBlock(const ::java::nio::Buffer&, int32_t, const ::java::nio::Buffer&);
    static void decodeBlock(const ::java::nio::Buffer&, const ::java::nio::Buffer&);
    static int32_t getEncodedDataSize(int32_t, int32_t);
    static void encodeImage(const ::java::nio::Buffer&, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void decodeImage(const ::java::nio::Buffer&, const ::java::nio::Buffer&, int32_t, int32_t, int32_t, int32_t);
    static void formatHeader(const ::java::nio::Buffer&, int32_t, int32_t);
    static bool isValid(const ::java::nio::Buffer&);
    static int32_t getWidth(const ::java::nio::Buffer&);
    static int32_t getHeight(const ::java::nio::Buffer&);

};
}
}


