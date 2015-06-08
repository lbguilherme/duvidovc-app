#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.microedition.khronos.opengles.GL.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { class Buffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }

namespace javax {
namespace microedition {
namespace khronos {
namespace opengles {
class GL10 : public virtual ::java::lang::Object,
             public virtual ::javax::microedition::khronos::opengles::GL {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GL10(jobject _obj) : ::java::lang::Object(_obj), ::javax::microedition::khronos::opengles::GL(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GL10(const ::javax::microedition::khronos::opengles::GL10& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj;}
    GL10(::javax::microedition::khronos::opengles::GL10&& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::opengles::GL10& operator=(const ::javax::microedition::khronos::opengles::GL10& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::opengles::GL10& operator=(::javax::microedition::khronos::opengles::GL10&& x) {obj = std::move(x.obj); return *this;}
    
    void glActiveTexture(int32_t) const;
    void glAlphaFunc(int32_t, float) const;
    void glAlphaFuncx(int32_t, int32_t) const;
    void glBindTexture(int32_t, int32_t) const;
    void glBlendFunc(int32_t, int32_t) const;
    void glClear(int32_t) const;
    void glClearColor(float, float, float, float) const;
    void glClearColorx(int32_t, int32_t, int32_t, int32_t) const;
    void glClearDepthf(float) const;
    void glClearDepthx(int32_t) const;
    void glClearStencil(int32_t) const;
    void glClientActiveTexture(int32_t) const;
    void glColor4f(float, float, float, float) const;
    void glColor4x(int32_t, int32_t, int32_t, int32_t) const;
    void glColorMask(bool, bool, bool, bool) const;
    void glColorPointer(int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glCompressedTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glCompressedTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glCopyTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void glCopyTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void glCullFace(int32_t) const;
    void glDeleteTextures(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glDeleteTextures(int32_t, const ::java::nio::IntBuffer&) const;
    void glDepthFunc(int32_t) const;
    void glDepthMask(bool) const;
    void glDepthRangef(float, float) const;
    void glDepthRangex(int32_t, int32_t) const;
    void glDisable(int32_t) const;
    void glDisableClientState(int32_t) const;
    void glDrawArrays(int32_t, int32_t, int32_t) const;
    void glDrawElements(int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glEnable(int32_t) const;
    void glEnableClientState(int32_t) const;
    void glFinish() const;
    void glFlush() const;
    void glFogf(int32_t, float) const;
    void glFogfv(int32_t, const std::vector< float>&, int32_t) const;
    void glFogfv(int32_t, const ::java::nio::FloatBuffer&) const;
    void glFogx(int32_t, int32_t) const;
    void glFogxv(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glFogxv(int32_t, const ::java::nio::IntBuffer&) const;
    void glFrontFace(int32_t) const;
    void glFrustumf(float, float, float, float, float, float) const;
    void glFrustumx(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void glGenTextures(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGenTextures(int32_t, const ::java::nio::IntBuffer&) const;
    int32_t glGetError() const;
    void glGetIntegerv(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glGetIntegerv(int32_t, const ::java::nio::IntBuffer&) const;
    ::java::lang::String glGetString(int32_t) const;
    void glHint(int32_t, int32_t) const;
    void glLightModelf(int32_t, float) const;
    void glLightModelfv(int32_t, const std::vector< float>&, int32_t) const;
    void glLightModelfv(int32_t, const ::java::nio::FloatBuffer&) const;
    void glLightModelx(int32_t, int32_t) const;
    void glLightModelxv(int32_t, const std::vector< int32_t>&, int32_t) const;
    void glLightModelxv(int32_t, const ::java::nio::IntBuffer&) const;
    void glLightf(int32_t, int32_t, float) const;
    void glLightfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glLightfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glLightx(int32_t, int32_t, int32_t) const;
    void glLightxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glLightxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glLineWidth(float) const;
    void glLineWidthx(int32_t) const;
    void glLoadIdentity() const;
    void glLoadMatrixf(const std::vector< float>&, int32_t) const;
    void glLoadMatrixf(const ::java::nio::FloatBuffer&) const;
    void glLoadMatrixx(const std::vector< int32_t>&, int32_t) const;
    void glLoadMatrixx(const ::java::nio::IntBuffer&) const;
    void glLogicOp(int32_t) const;
    void glMaterialf(int32_t, int32_t, float) const;
    void glMaterialfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glMaterialfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glMaterialx(int32_t, int32_t, int32_t) const;
    void glMaterialxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glMaterialxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glMatrixMode(int32_t) const;
    void glMultMatrixf(const std::vector< float>&, int32_t) const;
    void glMultMatrixf(const ::java::nio::FloatBuffer&) const;
    void glMultMatrixx(const std::vector< int32_t>&, int32_t) const;
    void glMultMatrixx(const ::java::nio::IntBuffer&) const;
    void glMultiTexCoord4f(int32_t, float, float, float, float) const;
    void glMultiTexCoord4x(int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void glNormal3f(float, float, float) const;
    void glNormal3x(int32_t, int32_t, int32_t) const;
    void glNormalPointer(int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glOrthof(float, float, float, float, float, float) const;
    void glOrthox(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void glPixelStorei(int32_t, int32_t) const;
    void glPointSize(float) const;
    void glPointSizex(int32_t) const;
    void glPolygonOffset(float, float) const;
    void glPolygonOffsetx(int32_t, int32_t) const;
    void glPopMatrix() const;
    void glPushMatrix() const;
    void glReadPixels(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glRotatef(float, float, float, float) const;
    void glRotatex(int32_t, int32_t, int32_t, int32_t) const;
    void glSampleCoverage(float, bool) const;
    void glSampleCoveragex(int32_t, bool) const;
    void glScalef(float, float, float) const;
    void glScalex(int32_t, int32_t, int32_t) const;
    void glScissor(int32_t, int32_t, int32_t, int32_t) const;
    void glShadeModel(int32_t) const;
    void glStencilFunc(int32_t, int32_t, int32_t) const;
    void glStencilMask(int32_t) const;
    void glStencilOp(int32_t, int32_t, int32_t) const;
    void glTexCoordPointer(int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glTexEnvf(int32_t, int32_t, float) const;
    void glTexEnvfv(int32_t, int32_t, const std::vector< float>&, int32_t) const;
    void glTexEnvfv(int32_t, int32_t, const ::java::nio::FloatBuffer&) const;
    void glTexEnvx(int32_t, int32_t, int32_t) const;
    void glTexEnvxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t) const;
    void glTexEnvxv(int32_t, int32_t, const ::java::nio::IntBuffer&) const;
    void glTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glTexParameterf(int32_t, int32_t, float) const;
    void glTexParameterx(int32_t, int32_t, int32_t) const;
    void glTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glTranslatef(float, float, float) const;
    void glTranslatex(int32_t, int32_t, int32_t) const;
    void glVertexPointer(int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const;
    void glViewport(int32_t, int32_t, int32_t, int32_t) const;

};
}
}
}
}


