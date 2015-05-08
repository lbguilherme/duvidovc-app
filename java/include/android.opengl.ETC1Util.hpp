#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace opengl { class ETC1Util_ETC1Texture; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace nio { class Buffer; } }

namespace android {
namespace opengl {
class ETC1Util : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ETC1Util(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ETC1Util(const ::android::opengl::ETC1Util& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ETC1Util(::android::opengl::ETC1Util&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::ETC1Util& operator=(const ::android::opengl::ETC1Util& x) {obj = x.obj; return *this;}
    ::android::opengl::ETC1Util& operator=(::android::opengl::ETC1Util&& x) {obj = std::move(x.obj); return *this;}
    
    ETC1Util();
    static void loadTexture(int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::io::InputStream&);
    static void loadTexture(int32_t, int32_t, int32_t, int32_t, int32_t, const ::android::opengl::ETC1Util_ETC1Texture&);
    static bool isETC1Supported();
    static ::android::opengl::ETC1Util_ETC1Texture createTexture(const ::java::io::InputStream&);
    static ::android::opengl::ETC1Util_ETC1Texture compressTexture(const ::java::nio::Buffer&, int32_t, int32_t, int32_t, int32_t);
    static void writeTexture(const ::android::opengl::ETC1Util_ETC1Texture&, const ::java::io::OutputStream&);

};
}
}

#include "android.opengl.ETC1Util_ETC1Texture.hpp"

