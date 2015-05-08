#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { class Buffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }

namespace android {
namespace opengl {
class GLES10 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLES10(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLES10(const ::android::opengl::GLES10& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLES10(::android::opengl::GLES10&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLES10& operator=(const ::android::opengl::GLES10& x) {obj = x.obj; return *this;}
    ::android::opengl::GLES10& operator=(::android::opengl::GLES10&& x) {obj = std::move(x.obj); return *this;}
    
    GLES10();
    static void glActiveTexture(int32_t);
    static void glAlphaFunc(int32_t, float);
    static void glAlphaFuncx(int32_t, int32_t);
    static void glBindTexture(int32_t, int32_t);
    static void glBlendFunc(int32_t, int32_t);
    static void glClear(int32_t);
    static void glClearColor(float, float, float, float);
    static void glClearColorx(int32_t, int32_t, int32_t, int32_t);
    static void glClearDepthf(float);
    static void glClearDepthx(int32_t);
    static void glClearStencil(int32_t);
    static void glClientActiveTexture(int32_t);
    static void glColor4f(float, float, float, float);
    static void glColor4x(int32_t, int32_t, int32_t, int32_t);
    static void glColorMask(bool, bool, bool, bool);
    static void glColorPointer(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glCompressedTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glCompressedTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glCopyTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glCopyTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glCullFace(int32_t);
    static void glDeleteTextures(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteTextures(int32_t, const ::java::nio::IntBuffer&);
    static void glDepthFunc(int32_t);
    static void glDepthMask(bool);
    static void glDepthRangef(float, float);
    static void glDepthRangex(int32_t, int32_t);
    static void glDisable(int32_t);
    static void glDisableClientState(int32_t);
    static void glDrawArrays(int32_t, int32_t, int32_t);
    static void glDrawElements(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glEnable(int32_t);
    static void glEnableClientState(int32_t);
    static void glFinish();
    static void glFlush();
    static void glFogf(int32_t, float);
    static void glFogfv(int32_t, const std::vector< float>&, int32_t);
    static void glFogfv(int32_t, const ::java::nio::FloatBuffer&);
    static void glFogx(int32_t, int32_t);
    static void glFogxv(int32_t, const std::vector< int32_t>&, int32_t);
    static void glFogxv(int32_t, const ::java::nio::IntBuffer&);
    static void glFrontFace(int32_t);
    static void glFrustumf(float, float, float, float, float, float);
    static void glFrustumx(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glGenTextures(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenTextures(int32_t, const ::java::nio::IntBuffer&);
    static int32_t glGetError();
    static void glGetIntegerv(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetIntegerv(int32_t, const ::java::nio::IntBuffer&);
    static ::java::lang::String glGetString(int32_t);
    static void glHint(int32_t, int32_t);
    static void glLightModelf(int32_t, float);
    static void glLightModelfv(int32_t, const std::vector< float>&, int32_t);
    static void glLightModelfv(int32_t, const ::java::nio::FloatBuffer&);
    static void glLightModelx(int32_t, int32_t);
    static void glLightModelxv(int32_t, const std::vector< int32_t>&, int32_t);
    static void glLightModelxv(int32_t, const ::java::nio::IntBuffer&);
    static void glLightf(int32_t, int32_t, float);
    static void glLightfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glLightfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glLightx(int32_t, int32_t, int32_t);
    static void glLightxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glLightxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glLineWidth(float);
    static void glLineWidthx(int32_t);
    static void glLoadIdentity();
    static void glLoadMatrixf(const std::vector< float>&, int32_t);
    static void glLoadMatrixf(const ::java::nio::FloatBuffer&);
    static void glLoadMatrixx(const std::vector< int32_t>&, int32_t);
    static void glLoadMatrixx(const ::java::nio::IntBuffer&);
    static void glLogicOp(int32_t);
    static void glMaterialf(int32_t, int32_t, float);
    static void glMaterialfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glMaterialfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glMaterialx(int32_t, int32_t, int32_t);
    static void glMaterialxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glMaterialxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glMatrixMode(int32_t);
    static void glMultMatrixf(const std::vector< float>&, int32_t);
    static void glMultMatrixf(const ::java::nio::FloatBuffer&);
    static void glMultMatrixx(const std::vector< int32_t>&, int32_t);
    static void glMultMatrixx(const ::java::nio::IntBuffer&);
    static void glMultiTexCoord4f(int32_t, float, float, float, float);
    static void glMultiTexCoord4x(int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glNormal3f(float, float, float);
    static void glNormal3x(int32_t, int32_t, int32_t);
    static void glNormalPointer(int32_t, int32_t, const ::java::nio::Buffer&);
    static void glOrthof(float, float, float, float, float, float);
    static void glOrthox(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glPixelStorei(int32_t, int32_t);
    static void glPointSize(float);
    static void glPointSizex(int32_t);
    static void glPolygonOffset(float, float);
    static void glPolygonOffsetx(int32_t, int32_t);
    static void glPopMatrix();
    static void glPushMatrix();
    static void glReadPixels(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glRotatef(float, float, float, float);
    static void glRotatex(int32_t, int32_t, int32_t, int32_t);
    static void glSampleCoverage(float, bool);
    static void glSampleCoveragex(int32_t, bool);
    static void glScalef(float, float, float);
    static void glScalex(int32_t, int32_t, int32_t);
    static void glScissor(int32_t, int32_t, int32_t, int32_t);
    static void glShadeModel(int32_t);
    static void glStencilFunc(int32_t, int32_t, int32_t);
    static void glStencilMask(int32_t);
    static void glStencilOp(int32_t, int32_t, int32_t);
    static void glTexCoordPointer(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glTexEnvf(int32_t, int32_t, float);
    static void glTexEnvfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glTexEnvfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glTexEnvx(int32_t, int32_t, int32_t);
    static void glTexEnvxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexEnvxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glTexParameterf(int32_t, int32_t, float);
    static void glTexParameterx(int32_t, int32_t, int32_t);
    static void glTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glTranslatef(float, float, float);
    static void glTranslatex(int32_t, int32_t, int32_t);
    static void glVertexPointer(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glViewport(int32_t, int32_t, int32_t, int32_t);

};
}
}


