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
class GLES20 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLES20(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLES20(const ::android::opengl::GLES20& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLES20(::android::opengl::GLES20&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLES20& operator=(const ::android::opengl::GLES20& x) {obj = x.obj; return *this;}
    ::android::opengl::GLES20& operator=(::android::opengl::GLES20&& x) {obj = std::move(x.obj); return *this;}
    
    GLES20();
    static void glActiveTexture(int32_t);
    static void glAttachShader(int32_t, int32_t);
    static void glBindAttribLocation(int32_t, int32_t, const ::java::lang::String&);
    static void glBindBuffer(int32_t, int32_t);
    static void glBindFramebuffer(int32_t, int32_t);
    static void glBindRenderbuffer(int32_t, int32_t);
    static void glBindTexture(int32_t, int32_t);
    static void glBlendColor(float, float, float, float);
    static void glBlendEquation(int32_t);
    static void glBlendEquationSeparate(int32_t, int32_t);
    static void glBlendFunc(int32_t, int32_t);
    static void glBlendFuncSeparate(int32_t, int32_t, int32_t, int32_t);
    static void glBufferData(int32_t, int32_t, const ::java::nio::Buffer&, int32_t);
    static void glBufferSubData(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static int32_t glCheckFramebufferStatus(int32_t);
    static void glClear(int32_t);
    static void glClearColor(float, float, float, float);
    static void glClearDepthf(float);
    static void glClearStencil(int32_t);
    static void glColorMask(bool, bool, bool, bool);
    static void glCompileShader(int32_t);
    static void glCompressedTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glCompressedTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glCopyTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glCopyTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static int32_t glCreateProgram();
    static int32_t glCreateShader(int32_t);
    static void glCullFace(int32_t);
    static void glDeleteBuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteBuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glDeleteFramebuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteFramebuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glDeleteProgram(int32_t);
    static void glDeleteRenderbuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteRenderbuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glDeleteShader(int32_t);
    static void glDeleteTextures(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteTextures(int32_t, const ::java::nio::IntBuffer&);
    static void glDepthFunc(int32_t);
    static void glDepthMask(bool);
    static void glDepthRangef(float, float);
    static void glDetachShader(int32_t, int32_t);
    static void glDisable(int32_t);
    static void glDisableVertexAttribArray(int32_t);
    static void glDrawArrays(int32_t, int32_t, int32_t);
    static void glDrawElements(int32_t, int32_t, int32_t, int32_t);
    static void glDrawElements(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glEnable(int32_t);
    static void glEnableVertexAttribArray(int32_t);
    static void glFinish();
    static void glFlush();
    static void glFramebufferRenderbuffer(int32_t, int32_t, int32_t, int32_t);
    static void glFramebufferTexture2D(int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glFrontFace(int32_t);
    static void glGenBuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenBuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glGenerateMipmap(int32_t);
    static void glGenFramebuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenFramebuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glGenRenderbuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenRenderbuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glGenTextures(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenTextures(int32_t, const ::java::nio::IntBuffer&);
    static void glGetActiveAttrib(int32_t, int32_t, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int8_t>&, int32_t);
    static void glGetActiveAttrib(int32_t, int32_t, int32_t, const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&, int8_t);
    static void glGetActiveUniform(int32_t, int32_t, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int8_t>&, int32_t);
    static void glGetActiveUniform(int32_t, int32_t, int32_t, const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&, int8_t);
    static void glGetAttachedShaders(int32_t, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetAttachedShaders(int32_t, int32_t, const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&);
    static int32_t glGetAttribLocation(int32_t, const ::java::lang::String&);
    static void glGetBooleanv(int32_t, const std::vector< bool>&, int32_t);
    static void glGetBooleanv(int32_t, const ::java::nio::IntBuffer&);
    static void glGetBufferParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetBufferParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static int32_t glGetError();
    static void glGetFloatv(int32_t, const std::vector< float>&, int32_t);
    static void glGetFloatv(int32_t, const ::java::nio::FloatBuffer&);
    static void glGetFramebufferAttachmentParameteriv(int32_t, int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetFramebufferAttachmentParameteriv(int32_t, int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetIntegerv(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetIntegerv(int32_t, const ::java::nio::IntBuffer&);
    static void glGetProgramiv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetProgramiv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static ::java::lang::String glGetProgramInfoLog(int32_t);
    static void glGetRenderbufferParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetRenderbufferParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetShaderiv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetShaderiv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static ::java::lang::String glGetShaderInfoLog(int32_t);
    static void glGetShaderPrecisionFormat(int32_t, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetShaderPrecisionFormat(int32_t, int32_t, const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&);
    static void glGetShaderSource(int32_t, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int8_t>&, int32_t);
    static void glGetShaderSource(int32_t, int32_t, const ::java::nio::IntBuffer&, int8_t);
    static ::java::lang::String glGetString(int32_t);
    static void glGetTexParameterfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetTexParameterfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetTexParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetUniformfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetUniformfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetUniformiv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetUniformiv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static int32_t glGetUniformLocation(int32_t, const ::java::lang::String&);
    static void glGetVertexAttribfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetVertexAttribfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetVertexAttribiv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetVertexAttribiv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glHint(int32_t, int32_t);
    static bool glIsBuffer(int32_t);
    static bool glIsEnabled(int32_t);
    static bool glIsFramebuffer(int32_t);
    static bool glIsProgram(int32_t);
    static bool glIsRenderbuffer(int32_t);
    static bool glIsShader(int32_t);
    static bool glIsTexture(int32_t);
    static void glLineWidth(float);
    static void glLinkProgram(int32_t);
    static void glPixelStorei(int32_t, int32_t);
    static void glPolygonOffset(float, float);
    static void glReadPixels(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glReleaseShaderCompiler();
    static void glRenderbufferStorage(int32_t, int32_t, int32_t, int32_t);
    static void glSampleCoverage(float, bool);
    static void glScissor(int32_t, int32_t, int32_t, int32_t);
    static void glShaderBinary(int32_t, const std::vector< int32_t>&, int32_t, int32_t, const ::java::nio::Buffer&, int32_t);
    static void glShaderBinary(int32_t, const ::java::nio::IntBuffer&, int32_t, const ::java::nio::Buffer&, int32_t);
    static void glShaderSource(int32_t, const ::java::lang::String&);
    static void glStencilFunc(int32_t, int32_t, int32_t);
    static void glStencilFuncSeparate(int32_t, int32_t, int32_t, int32_t);
    static void glStencilMask(int32_t);
    static void glStencilMaskSeparate(int32_t, int32_t);
    static void glStencilOp(int32_t, int32_t, int32_t);
    static void glStencilOpSeparate(int32_t, int32_t, int32_t, int32_t);
    static void glTexImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glTexParameterf(int32_t, int32_t, float);
    static void glTexParameterfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glTexParameterfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glTexParameteri(int32_t, int32_t, int32_t);
    static void glTexParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glTexSubImage2D(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glUniform1f(int32_t, float);
    static void glUniform1fv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glUniform1fv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glUniform1i(int32_t, int32_t);
    static void glUniform1iv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glUniform1iv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glUniform2f(int32_t, float, float);
    static void glUniform2fv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glUniform2fv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glUniform2i(int32_t, int32_t, int32_t);
    static void glUniform2iv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glUniform2iv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glUniform3f(int32_t, float, float, float);
    static void glUniform3fv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glUniform3fv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glUniform3i(int32_t, int32_t, int32_t, int32_t);
    static void glUniform3iv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glUniform3iv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glUniform4f(int32_t, float, float, float, float);
    static void glUniform4fv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glUniform4fv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glUniform4i(int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glUniform4iv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glUniform4iv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glUniformMatrix2fv(int32_t, int32_t, bool, const std::vector< float>&, int32_t);
    static void glUniformMatrix2fv(int32_t, int32_t, bool, const ::java::nio::FloatBuffer&);
    static void glUniformMatrix3fv(int32_t, int32_t, bool, const std::vector< float>&, int32_t);
    static void glUniformMatrix3fv(int32_t, int32_t, bool, const ::java::nio::FloatBuffer&);
    static void glUniformMatrix4fv(int32_t, int32_t, bool, const std::vector< float>&, int32_t);
    static void glUniformMatrix4fv(int32_t, int32_t, bool, const ::java::nio::FloatBuffer&);
    static void glUseProgram(int32_t);
    static void glValidateProgram(int32_t);
    static void glVertexAttrib1f(int32_t, float);
    static void glVertexAttrib1fv(int32_t, const std::vector< float>&, int32_t);
    static void glVertexAttrib1fv(int32_t, const ::java::nio::FloatBuffer&);
    static void glVertexAttrib2f(int32_t, float, float);
    static void glVertexAttrib2fv(int32_t, const std::vector< float>&, int32_t);
    static void glVertexAttrib2fv(int32_t, const ::java::nio::FloatBuffer&);
    static void glVertexAttrib3f(int32_t, float, float, float);
    static void glVertexAttrib3fv(int32_t, const std::vector< float>&, int32_t);
    static void glVertexAttrib3fv(int32_t, const ::java::nio::FloatBuffer&);
    static void glVertexAttrib4f(int32_t, float, float, float, float);
    static void glVertexAttrib4fv(int32_t, const std::vector< float>&, int32_t);
    static void glVertexAttrib4fv(int32_t, const ::java::nio::FloatBuffer&);
    static void glVertexAttribPointer(int32_t, int32_t, int32_t, bool, int32_t, int32_t);
    static void glVertexAttribPointer(int32_t, int32_t, int32_t, bool, int32_t, const ::java::nio::Buffer&);
    static void glViewport(int32_t, int32_t, int32_t, int32_t);

};
}
}


