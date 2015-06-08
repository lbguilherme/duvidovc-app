#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.microedition.khronos.opengles.GL10.hpp"

namespace java { namespace nio { class Buffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }

namespace javax {
namespace microedition {
namespace khronos {
namespace opengles {
class GL11 : public virtual ::java::lang::Object,
             public virtual ::javax::microedition::khronos::opengles::GL10 {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GL11(jobject _obj) : ::java::lang::Object(_obj), ::javax::microedition::khronos::opengles::GL(_obj), ::javax::microedition::khronos::opengles::GL10(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GL11(const ::javax::microedition::khronos::opengles::GL11& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0), ::javax::microedition::khronos::opengles::GL10((jobject)0) {obj = x.obj;}
    GL11(::javax::microedition::khronos::opengles::GL11&& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0), ::javax::microedition::khronos::opengles::GL10((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::opengles::GL11& operator=(const ::javax::microedition::khronos::opengles::GL11& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::opengles::GL11& operator=(::javax::microedition::khronos::opengles::GL11&& x) {obj = std::move(x.obj); return *this;}
    
    void glGetPointerv(int32_t, const std::vector< ::java::nio::Buffer>&) const;
    void glBindBuffer(int32_t, int32_t) const;
    void glBufferData(int32_t, int32_t, const ::java::nio::Buffer&, int32_t) const;
    void glBufferSubData(int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glClipPlanef(int32_t, const std::vector< float>&, int32_t) const;
    void glClipPlanef(int32_t, const ::java::nio::FloatBuffer&) const;
    void glClipPlanex(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glClipPlanex(int32_t, const ::java::nio::IntBuffer&) const;
    void glColor4ub(int8_t, int8_t, int8_t, int8_t) const;
    void glColorPointer(int32_t, int32_t, int32_t, int32_t) const;
    void glDeleteBuffers(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glDeleteBuffers(int32_t, const ::java::nio::IntBuffer&) const;
    void glDrawElements(int32_t, int32_t, int32_t, int32_t) const;
    void glGenBuffers(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGenBuffers(int32_t, const ::java::nio::IntBuffer&) const;
    void glGetBooleanv(int32_t, const std::vector< bool>&, int32_t) const;
    void glGetBooleanv(int32_t, const ::java::nio::IntBuffer&) const;
    void glGetBufferParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetBufferParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetClipPlanef(int32_t, const std::vector< float>&, int32_t) const;
    void glGetClipPlanef(int32_t, const ::java::nio::FloatBuffer&) const;
    void glGetClipPlanex(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetClipPlanex(int32_t, const ::java::nio::IntBuffer&) const;
    void glGetFixedv(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetFixedv(int32_t, const ::java::nio::IntBuffer&) const;
    void glGetFloatv(int32_t, const std::vector< float>&, int32_t) const;
    void glGetFloatv(int32_t, const ::java::nio::FloatBuffer&) const;
    void glGetLightfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glGetLightfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glGetLightxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetLightxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetMaterialfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glGetMaterialfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glGetMaterialxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetMaterialxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetTexEnviv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetTexEnviv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetTexEnvxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetTexEnvxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetTexParameterfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glGetTexParameterfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glGetTexParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetTexParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glGetTexParameterxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetTexParameterxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    bool glIsBuffer(int32_t) const;
    bool glIsEnabled(int32_t) const;
    bool glIsTexture(int32_t) const;
    void glNormalPointer(int32_t, int32_t, int32_t) const;
    void glPointParameterf(int32_t, float) const;
    void glPointParameterfv(int32_t, const std::vector< float>&, int32_t) const;
    void glPointParameterfv(int32_t, const ::java::nio::FloatBuffer&) const;
    void glPointParameterx(int32_t, int32_t) const;
    void glPointParameterxv(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glPointParameterxv(int32_t, const ::java::nio::IntBuffer&) const;
    void glPointSizePointerOES(int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glTexCoordPointer(int32_t, int32_t, int32_t, int32_t) const;
    void glTexEnvi(int32_t, int32_t, int32_t) const;
    void glTexEnviv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glTexEnviv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glTexParameterfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glTexParameterfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glTexParameteri(int32_t, int32_t, int32_t) const;
    void glTexParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glTexParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glTexParameterxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glTexParameterxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glVertexPointer(int32_t, int32_t, int32_t, int32_t) const;

};
}
}
}
}


