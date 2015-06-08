#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { class ByteBuffer; } }

namespace android {
namespace opengl {
class ETC1Util_ETC1Texture : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ETC1Util_ETC1Texture(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ETC1Util_ETC1Texture(const ::android::opengl::ETC1Util_ETC1Texture& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ETC1Util_ETC1Texture(::android::opengl::ETC1Util_ETC1Texture&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::ETC1Util_ETC1Texture& operator=(const ::android::opengl::ETC1Util_ETC1Texture& x) {obj = x.obj; return *this;}
    ::android::opengl::ETC1Util_ETC1Texture& operator=(::android::opengl::ETC1Util_ETC1Texture&& x) {obj = std::move(x.obj); return *this;}
    
    ETC1Util_ETC1Texture(int32_t, int32_t, const ::java::nio::ByteBuffer&);
    int32_t getWidth() const;
    int32_t getHeight() const;
    ::java::nio::ByteBuffer getData() const;

};
}
}


