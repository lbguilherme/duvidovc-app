#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.microedition.khronos.opengles.GL.hpp"

namespace java { namespace nio { class Buffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }

namespace javax {
namespace microedition {
namespace khronos {
namespace opengles {
class GL11ExtensionPack : public virtual ::java::lang::Object,
                          public virtual ::javax::microedition::khronos::opengles::GL {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GL11ExtensionPack(jobject _obj) : ::java::lang::Object(_obj), ::javax::microedition::khronos::opengles::GL(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GL11ExtensionPack(const ::javax::microedition::khronos::opengles::GL11ExtensionPack& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj;}
    GL11ExtensionPack(::javax::microedition::khronos::opengles::GL11ExtensionPack&& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::opengles::GL11ExtensionPack& operator=(const ::javax::microedition::khronos::opengles::GL11ExtensionPack& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::opengles::GL11ExtensionPack& operator=(::javax::microedition::khronos::opengles::GL11ExtensionPack&& x) {obj = std::move(x.obj); return *this;}
    
    void glBindFramebufferOES(int32_t, int32_t) const;
    void glBindRenderbufferOES(int32_t, int32_t) const;
    void glBindTexture(int32_t, int32_t) const;
    void glBlendEquation(int32_t) const;
    void glBlendEquationSeparate(int32_t, int32_t) const;
    void glBlendFuncSeparate(int32_t, int32_t, int32_t, int32_t) const;
    int32_t glCheckFramebufferStatusOES(int32_t) const;
    void glCompressedTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glCopyTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void glDeleteFramebuffersOES(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glDeleteFramebuffersOES(int32_t, const ::java::nio::IntBuffer&) const;
    void glDeleteRenderbuffersOES(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glDeleteRenderbuffersOES(int32_t, const ::java::nio::IntBuffer&) const;
    void glEnable(int32_t) const;
    void glFramebufferRenderbufferOES(int32_t, int32_t, int32_t, int32_t) const;
    void glFramebufferTexture2DOES(int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void glGenerateMipmapOES(int32_t) const;
    void glGenFramebuffersOES(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGenFramebuffersOES(int32_t, const ::java::nio::IntBuffer&) const;
    void glGenRenderbuffersOES(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGenRenderbuffersOES(int32_t, const ::java::nio::IntBuffer&) const;
    void glGetFramebufferAttachmentParameterivOES(int32_t, int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetFramebufferAttachmentParameterivOES(int32_t, int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetIntegerv(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetIntegerv(int32_t, const ::java::nio::IntBuffer&) const;
    void glGetRenderbufferParameterivOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetRenderbufferParameterivOES(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetTexGenfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glGetTexGenfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glGetTexGeniv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetTexGeniv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetTexGenxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetTexGenxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    bool glIsFramebufferOES(int32_t) const;
    bool glIsRenderbufferOES(int32_t) const;
    void glRenderbufferStorageOES(int32_t, int32_t, int32_t, int32_t) const;
    void glStencilOp(int32_t, int32_t, int32_t) const;
    void glTexEnvf(int32_t, int32_t, float) const;
    void glTexEnvfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glTexEnvfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glTexEnvx(int32_t, int32_t, int32_t) const;
    void glTexEnvxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glTexEnvxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glTexGenf(int32_t, int32_t, float) const;
    void glTexGenfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glTexGenfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glTexGeni(int32_t, int32_t, int32_t) const;
    void glTexGeniv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glTexGeniv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glTexGenx(int32_t, int32_t, int32_t) const;
    void glTexGenxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glTexGenxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glTexParameterf(int32_t, int32_t, float) const;

};
}
}
}
}


