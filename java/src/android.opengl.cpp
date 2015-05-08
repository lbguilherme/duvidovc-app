#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.opengl.ETC1.hpp"
#include "android.opengl.ETC1Util.hpp"
#include "android.opengl.GLDebugHelper.hpp"
#include "android.opengl.GLES10.hpp"
#include "android.opengl.GLES10Ext.hpp"
#include "android.opengl.GLES11.hpp"
#include "android.opengl.GLES11Ext.hpp"
#include "android.opengl.GLES20.hpp"
#include "android.opengl.GLException.hpp"
#include "android.opengl.GLSurfaceView.hpp"
#include "android.opengl.GLU.hpp"
#include "android.opengl.GLUtils.hpp"
#include "android.opengl.Matrix.hpp"
#include "android.opengl.Visibility.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.SurfaceHolder.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.nio.Buffer.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.nio.FloatBuffer.hpp"
#include "java.nio.IntBuffer.hpp"
#include "java.nio.ShortBuffer.hpp"
#include "javax.microedition.khronos.egl.EGL.hpp"
#include "javax.microedition.khronos.egl.EGL10.hpp"
#include "javax.microedition.khronos.egl.EGLConfig.hpp"
#include "javax.microedition.khronos.egl.EGLContext.hpp"
#include "javax.microedition.khronos.egl.EGLDisplay.hpp"
#include "javax.microedition.khronos.egl.EGLSurface.hpp"
#include "javax.microedition.khronos.opengles.GL.hpp"
#include "javax.microedition.khronos.opengles.GL10.hpp"

jclass android::opengl::GLES10Ext::_class = nullptr;
jclass android::opengl::GLSurfaceView_EGLWindowSurfaceFactory::_class = nullptr;
jclass android::opengl::GLES20::_class = nullptr;
jclass android::opengl::GLException::_class = nullptr;
jclass android::opengl::GLSurfaceView_EGLContextFactory::_class = nullptr;
jclass android::opengl::GLES11::_class = nullptr;
jclass android::opengl::GLSurfaceView_GLWrapper::_class = nullptr;
jclass android::opengl::ETC1::_class = nullptr;
jclass android::opengl::GLDebugHelper::_class = nullptr;
jclass android::opengl::Matrix::_class = nullptr;
jclass android::opengl::GLUtils::_class = nullptr;
jclass android::opengl::GLSurfaceView_EGLConfigChooser::_class = nullptr;
jclass android::opengl::GLES11Ext::_class = nullptr;
jclass android::opengl::Visibility::_class = nullptr;
jclass android::opengl::GLSurfaceView_Renderer::_class = nullptr;
jclass android::opengl::GLES10::_class = nullptr;
jclass android::opengl::GLSurfaceView::_class = nullptr;
jclass android::opengl::GLU::_class = nullptr;
jclass android::opengl::ETC1Util_ETC1Texture::_class = nullptr;
jclass android::opengl::ETC1Util::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLES10Ext::GLES10Ext() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::GLES10Ext::_class) ::android::opengl::GLES10Ext::_class = java::fetch_class("android/opengl/GLES10Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::opengl::GLES10Ext::glQueryMatrixxOES(const std::vector< int32_t>& arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES10Ext::_class) ::android::opengl::GLES10Ext::_class = java::fetch_class("android/opengl/GLES10Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glQueryMatrixxOES", "([II[II)I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::opengl::GLES10Ext::glQueryMatrixxOES(const ::java::nio::IntBuffer& arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES10Ext::_class) ::android::opengl::GLES10Ext::_class = java::fetch_class("android/opengl/GLES10Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glQueryMatrixxOES", "(Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::javax::microedition::khronos::egl::EGLSurface android::opengl::GLSurfaceView_EGLWindowSurfaceFactory::createWindowSurface(const ::javax::microedition::khronos::egl::EGL10& arg0, const ::javax::microedition::khronos::egl::EGLDisplay& arg1, const ::javax::microedition::khronos::egl::EGLConfig& arg2, const ::java::lang::Object& arg3) const {
    if (!::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory::_class) ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory::_class = java::fetch_class("android/opengl/GLSurfaceView$EGLWindowSurfaceFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createWindowSurface", "(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;Ljava/lang/Object;)Ljavax/microedition/khronos/egl/EGLSurface;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::microedition::khronos::egl::EGLSurface _ret(ret);
    return _ret;
}

void android::opengl::GLSurfaceView_EGLWindowSurfaceFactory::destroySurface(const ::javax::microedition::khronos::egl::EGL10& arg0, const ::javax::microedition::khronos::egl::EGLDisplay& arg1, const ::javax::microedition::khronos::egl::EGLSurface& arg2) const {
    if (!::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory::_class) ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory::_class = java::fetch_class("android/opengl/GLSurfaceView$EGLWindowSurfaceFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroySurface", "(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLES20::GLES20() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::opengl::GLES20::glActiveTexture(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glActiveTexture", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glAttachShader(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glAttachShader", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glBindAttribLocation(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindAttribLocation", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glBindBuffer(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindBuffer", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glBindFramebuffer(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindFramebuffer", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glBindRenderbuffer(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindRenderbuffer", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glBindTexture(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindTexture", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glBlendColor(float arg0, float arg1, float arg2, float arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendColor", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glBlendEquation(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendEquation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glBlendEquationSeparate(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendEquationSeparate", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glBlendFunc(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendFunc", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glBlendFuncSeparate(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendFuncSeparate", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glBufferData(int32_t arg0, int32_t arg1, const ::java::nio::Buffer& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBufferData", "(IILjava/nio/Buffer;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glBufferSubData(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBufferSubData", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::opengl::GLES20::glCheckFramebufferStatus(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCheckFramebufferStatus", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glClear(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glClearColor(float arg0, float arg1, float arg2, float arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearColor", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glClearDepthf(float arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearDepthf", "(F)V");
    float _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glClearStencil(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearStencil", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glColorMask(bool arg0, bool arg1, bool arg2, bool arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColorMask", "(ZZZZ)V");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glCompileShader(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCompileShader", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glCompressedTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::nio::Buffer& arg7){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCompressedTexImage2D", "(IIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::GLES20::glCompressedTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCompressedTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::opengl::GLES20::glCopyTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCopyTexImage2D", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::GLES20::glCopyTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCopyTexSubImage2D", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

int32_t android::opengl::GLES20::glCreateProgram(){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCreateProgram", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::opengl::GLES20::glCreateShader(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCreateShader", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glCullFace(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCullFace", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glDeleteBuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteBuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glDeleteBuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteBuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glDeleteFramebuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteFramebuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glDeleteFramebuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteFramebuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glDeleteProgram(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteProgram", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glDeleteRenderbuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteRenderbuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glDeleteRenderbuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteRenderbuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glDeleteShader(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteShader", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glDeleteTextures(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteTextures", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glDeleteTextures(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteTextures", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glDepthFunc(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthFunc", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glDepthMask(bool arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthMask", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glDepthRangef(float arg0, float arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthRangef", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glDetachShader(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDetachShader", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glDisable(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDisable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glDisableVertexAttribArray(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDisableVertexAttribArray", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glDrawArrays(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawArrays", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glDrawElements(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawElements", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glDrawElements(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawElements", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glEnable(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glEnable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glEnableVertexAttribArray(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glEnableVertexAttribArray", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glFinish(){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFinish", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES20::glFlush(){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFlush", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES20::glFramebufferRenderbuffer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFramebufferRenderbuffer", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glFramebufferTexture2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFramebufferTexture2D", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glFrontFace(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFrontFace", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glGenBuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenBuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGenBuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenBuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGenerateMipmap(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenerateMipmap", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glGenFramebuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenFramebuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGenFramebuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenFramebuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGenRenderbuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenRenderbuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGenRenderbuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenRenderbuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGenTextures(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenTextures", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGenTextures(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenTextures", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGetActiveAttrib(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< int32_t>& arg3, int32_t arg4, const std::vector< int32_t>& arg5, int32_t arg6, const std::vector< int32_t>& arg7, int32_t arg8, const std::vector< int8_t>& arg9, int32_t arg10){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetActiveAttrib", "(III[II[II[II[BI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    jintArray _arg7 = java::jni->NewIntArray(arg7.size());
    java::jni->SetIntArrayRegion(_arg7, 0, arg7.size(), arg7.data());
    int32_t _arg8 = arg8;
    jbyteArray _arg9 = java::jni->NewByteArray(arg9.size());
    java::jni->SetByteArrayRegion(_arg9, 0, arg9.size(), arg9.data());
    int32_t _arg10 = arg10;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

void android::opengl::GLES20::glGetActiveAttrib(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::IntBuffer& arg3, const ::java::nio::IntBuffer& arg4, const ::java::nio::IntBuffer& arg5, int8_t arg6){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetActiveAttrib", "(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;B)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    int8_t _arg6 = arg6;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::opengl::GLES20::glGetActiveUniform(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< int32_t>& arg3, int32_t arg4, const std::vector< int32_t>& arg5, int32_t arg6, const std::vector< int32_t>& arg7, int32_t arg8, const std::vector< int8_t>& arg9, int32_t arg10){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetActiveUniform", "(III[II[II[II[BI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    jintArray _arg7 = java::jni->NewIntArray(arg7.size());
    java::jni->SetIntArrayRegion(_arg7, 0, arg7.size(), arg7.data());
    int32_t _arg8 = arg8;
    jbyteArray _arg9 = java::jni->NewByteArray(arg9.size());
    java::jni->SetByteArrayRegion(_arg9, 0, arg9.size(), arg9.data());
    int32_t _arg10 = arg10;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

void android::opengl::GLES20::glGetActiveUniform(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::IntBuffer& arg3, const ::java::nio::IntBuffer& arg4, const ::java::nio::IntBuffer& arg5, int8_t arg6){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetActiveUniform", "(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;B)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    int8_t _arg6 = arg6;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::opengl::GLES20::glGetAttachedShaders(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3, const std::vector< int32_t>& arg4, int32_t arg5){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetAttachedShaders", "(II[II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES20::glGetAttachedShaders(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2, const ::java::nio::IntBuffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetAttachedShaders", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::opengl::GLES20::glGetAttribLocation(int32_t arg0, const ::java::lang::String& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetAttribLocation", "(ILjava/lang/String;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGetBooleanv(int32_t arg0, const std::vector< bool>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBooleanv", "(I[ZI)V");
    int32_t _arg0 = arg0;
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetBooleanv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBooleanv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGetBufferParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBufferParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetBufferParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBufferParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::opengl::GLES20::glGetError(){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetError", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::opengl::GLES20::glGetFloatv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFloatv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetFloatv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFloatv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGetFramebufferAttachmentParameteriv(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< int32_t>& arg3, int32_t arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFramebufferAttachmentParameteriv", "(III[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glGetFramebufferAttachmentParameteriv(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::IntBuffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFramebufferAttachmentParameteriv", "(IIILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetIntegerv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetIntegerv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetIntegerv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetIntegerv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGetProgramiv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetProgramiv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetProgramiv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetProgramiv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::opengl::GLES20::glGetProgramInfoLog(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetProgramInfoLog", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::opengl::GLES20::glGetRenderbufferParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetRenderbufferParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetRenderbufferParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetRenderbufferParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetShaderiv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetShaderiv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetShaderiv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetShaderiv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::opengl::GLES20::glGetShaderInfoLog(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetShaderInfoLog", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::opengl::GLES20::glGetShaderPrecisionFormat(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3, const std::vector< int32_t>& arg4, int32_t arg5){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetShaderPrecisionFormat", "(II[II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES20::glGetShaderPrecisionFormat(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2, const ::java::nio::IntBuffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetShaderPrecisionFormat", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetShaderSource(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3, const std::vector< int8_t>& arg4, int32_t arg5){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetShaderSource", "(II[II[BI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    jbyteArray _arg4 = java::jni->NewByteArray(arg4.size());
    java::jni->SetByteArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES20::glGetShaderSource(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2, int8_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetShaderSource", "(IILjava/nio/IntBuffer;B)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int8_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::String android::opengl::GLES20::glGetString(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::opengl::GLES20::glGetTexParameterfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetTexParameterfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetTexParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetTexParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetUniformfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetUniformfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetUniformfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetUniformfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetUniformiv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetUniformiv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetUniformiv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetUniformiv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::opengl::GLES20::glGetUniformLocation(int32_t arg0, const ::java::lang::String& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetUniformLocation", "(ILjava/lang/String;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glGetVertexAttribfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetVertexAttribfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetVertexAttribfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetVertexAttribfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glGetVertexAttribiv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetVertexAttribiv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glGetVertexAttribiv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetVertexAttribiv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glHint(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glHint", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::opengl::GLES20::glIsBuffer(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsBuffer", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES20::glIsEnabled(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsEnabled", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES20::glIsFramebuffer(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsFramebuffer", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES20::glIsProgram(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsProgram", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES20::glIsRenderbuffer(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsRenderbuffer", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES20::glIsShader(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsShader", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES20::glIsTexture(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsTexture", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glLineWidth(float arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLineWidth", "(F)V");
    float _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glLinkProgram(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLinkProgram", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glPixelStorei(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPixelStorei", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glPolygonOffset(float arg0, float arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPolygonOffset", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glReadPixels(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, const ::java::nio::Buffer& arg6){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glReadPixels", "(IIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::opengl::GLES20::glReleaseShaderCompiler(){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glReleaseShaderCompiler", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES20::glRenderbufferStorage(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glRenderbufferStorage", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glSampleCoverage(float arg0, bool arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glSampleCoverage", "(FZ)V");
    float _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glScissor(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glScissor", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glShaderBinary(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2, int32_t arg3, const ::java::nio::Buffer& arg4, int32_t arg5){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glShaderBinary", "(I[IIILjava/nio/Buffer;I)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES20::glShaderBinary(int32_t arg0, const ::java::nio::IntBuffer& arg1, int32_t arg2, const ::java::nio::Buffer& arg3, int32_t arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glShaderBinary", "(ILjava/nio/IntBuffer;ILjava/nio/Buffer;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glShaderSource(int32_t arg0, const ::java::lang::String& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glShaderSource", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glStencilFunc(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilFunc", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glStencilFuncSeparate(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilFuncSeparate", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glStencilMask(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilMask", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glStencilMaskSeparate(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilMaskSeparate", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glStencilOp(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilOp", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glStencilOpSeparate(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilOpSeparate", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::opengl::GLES20::glTexParameterf(int32_t arg0, int32_t arg1, float arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glTexParameterfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glTexParameterfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glTexParameteri(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameteri", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glTexParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glTexParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::opengl::GLES20::glUniform1f(int32_t arg0, float arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform1f", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glUniform1fv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform1fv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform1fv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform1fv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform1i(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform1i", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glUniform1iv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform1iv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform1iv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform1iv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform2f(int32_t arg0, float arg1, float arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform2f", "(IFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform2fv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform2fv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform2fv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform2fv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform2i(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform2i", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform2iv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform2iv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform2iv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform2iv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform3f(int32_t arg0, float arg1, float arg2, float arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform3f", "(IFFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform3fv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform3fv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform3fv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform3fv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform3i(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform3i", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform3iv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform3iv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform3iv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform3iv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform4f(int32_t arg0, float arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform4f", "(IFFFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glUniform4fv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform4fv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform4fv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform4fv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniform4i(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform4i", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glUniform4iv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform4iv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniform4iv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniform4iv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glUniformMatrix2fv(int32_t arg0, int32_t arg1, bool arg2, const std::vector< float>& arg3, int32_t arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniformMatrix2fv", "(IIZ[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glUniformMatrix2fv(int32_t arg0, int32_t arg1, bool arg2, const ::java::nio::FloatBuffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniformMatrix2fv", "(IIZLjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniformMatrix3fv(int32_t arg0, int32_t arg1, bool arg2, const std::vector< float>& arg3, int32_t arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniformMatrix3fv", "(IIZ[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glUniformMatrix3fv(int32_t arg0, int32_t arg1, bool arg2, const ::java::nio::FloatBuffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniformMatrix3fv", "(IIZLjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUniformMatrix4fv(int32_t arg0, int32_t arg1, bool arg2, const std::vector< float>& arg3, int32_t arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniformMatrix4fv", "(IIZ[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glUniformMatrix4fv(int32_t arg0, int32_t arg1, bool arg2, const ::java::nio::FloatBuffer& arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUniformMatrix4fv", "(IIZLjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glUseProgram(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glUseProgram", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glValidateProgram(int32_t arg0){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glValidateProgram", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES20::glVertexAttrib1f(int32_t arg0, float arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib1f", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glVertexAttrib1fv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib1fv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glVertexAttrib1fv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib1fv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glVertexAttrib2f(int32_t arg0, float arg1, float arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib2f", "(IFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glVertexAttrib2fv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib2fv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glVertexAttrib2fv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib2fv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glVertexAttrib3f(int32_t arg0, float arg1, float arg2, float arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib3f", "(IFFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES20::glVertexAttrib3fv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib3fv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glVertexAttrib3fv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib3fv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glVertexAttrib4f(int32_t arg0, float arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib4f", "(IFFFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES20::glVertexAttrib4fv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib4fv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES20::glVertexAttrib4fv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttrib4fv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES20::glVertexAttribPointer(int32_t arg0, int32_t arg1, int32_t arg2, bool arg3, int32_t arg4, int32_t arg5){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttribPointer", "(IIIZII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES20::glVertexAttribPointer(int32_t arg0, int32_t arg1, int32_t arg2, bool arg3, int32_t arg4, const ::java::nio::Buffer& arg5){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexAttribPointer", "(IIIZILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES20::glViewport(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES20::_class) ::android::opengl::GLES20::_class = java::fetch_class("android/opengl/GLES20");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glViewport", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLException::GLException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::opengl::GLException::_class) ::android::opengl::GLException::_class = java::fetch_class("android/opengl/GLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLException::GLException(int32_t arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::opengl::GLException::_class) ::android::opengl::GLException::_class = java::fetch_class("android/opengl/GLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::javax::microedition::khronos::egl::EGLContext android::opengl::GLSurfaceView_EGLContextFactory::createContext(const ::javax::microedition::khronos::egl::EGL10& arg0, const ::javax::microedition::khronos::egl::EGLDisplay& arg1, const ::javax::microedition::khronos::egl::EGLConfig& arg2) const {
    if (!::android::opengl::GLSurfaceView_EGLContextFactory::_class) ::android::opengl::GLSurfaceView_EGLContextFactory::_class = java::fetch_class("android/opengl/GLSurfaceView$EGLContextFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createContext", "(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)Ljavax/microedition/khronos/egl/EGLContext;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::javax::microedition::khronos::egl::EGLContext _ret(ret);
    return _ret;
}

void android::opengl::GLSurfaceView_EGLContextFactory::destroyContext(const ::javax::microedition::khronos::egl::EGL10& arg0, const ::javax::microedition::khronos::egl::EGLDisplay& arg1, const ::javax::microedition::khronos::egl::EGLContext& arg2) const {
    if (!::android::opengl::GLSurfaceView_EGLContextFactory::_class) ::android::opengl::GLSurfaceView_EGLContextFactory::_class = java::fetch_class("android/opengl/GLSurfaceView$EGLContextFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyContext", "(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLES11::GLES11() : ::java::lang::Object((jobject)0), ::android::opengl::GLES10((jobject)0) {
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::opengl::GLES11::glBindBuffer(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindBuffer", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glBufferData(int32_t arg0, int32_t arg1, const ::java::nio::Buffer& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBufferData", "(IILjava/nio/Buffer;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glBufferSubData(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBufferSubData", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glClipPlanef(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanef", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glClipPlanef(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanef", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glClipPlanex(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanex", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glClipPlanex(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanex", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glColor4ub(int8_t arg0, int8_t arg1, int8_t arg2, int8_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColor4ub", "(BBBB)V");
    int8_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    int8_t _arg2 = arg2;
    int8_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glColorPointer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColorPointer", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glDeleteBuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteBuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glDeleteBuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteBuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glDrawElements(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawElements", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGenBuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenBuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGenBuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenBuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glGetBooleanv(int32_t arg0, const std::vector< bool>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBooleanv", "(I[ZI)V");
    int32_t _arg0 = arg0;
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetBooleanv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBooleanv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glGetBufferParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBufferParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetBufferParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetBufferParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetClipPlanef(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanef", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetClipPlanef(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanef", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glGetClipPlanex(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanex", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetClipPlanex(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanex", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glGetFixedv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFixedv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetFixedv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFixedv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glGetFloatv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFloatv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetFloatv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFloatv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glGetLightfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetLightfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetLightfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetLightfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetLightxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetLightxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetLightxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetLightxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetMaterialfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetMaterialfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetMaterialfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetMaterialfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetMaterialxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetMaterialxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetMaterialxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetMaterialxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetTexEnvfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnvfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetTexEnvfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnvfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetTexEnviv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnviv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetTexEnviv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnviv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetTexEnvxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnvxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetTexEnvxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnvxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetTexParameterfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetTexParameterfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetTexParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetTexParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glGetTexParameterxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glGetTexParameterxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::opengl::GLES11::glIsBuffer(int32_t arg0){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsBuffer", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES11::glIsEnabled(int32_t arg0){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsEnabled", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::opengl::GLES11::glIsTexture(int32_t arg0){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsTexture", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::opengl::GLES11::glNormalPointer(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glNormalPointer", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glPointParameterf(int32_t arg0, float arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterf", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glPointParameterfv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterfv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glPointParameterfv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterfv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glPointParameterx(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glPointParameterxv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterxv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glPointParameterxv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterxv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11::glPointSizePointerOES(int32_t arg0, int32_t arg1, const ::java::nio::Buffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointSizePointerOES", "(IILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glTexCoordPointer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexCoordPointer", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glTexEnvi(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvi", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glTexEnviv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnviv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glTexEnviv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnviv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glTexParameterfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glTexParameterfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glTexParameteri(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameteri", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glTexParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glTexParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glTexParameterxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11::glTexParameterxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11::glVertexPointer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11::_class) ::android::opengl::GLES11::_class = java::fetch_class("android/opengl/GLES11");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexPointer", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

::javax::microedition::khronos::opengles::GL android::opengl::GLSurfaceView_GLWrapper::wrap(const ::javax::microedition::khronos::opengles::GL& arg0) const {
    if (!::android::opengl::GLSurfaceView_GLWrapper::_class) ::android::opengl::GLSurfaceView_GLWrapper::_class = java::fetch_class("android/opengl/GLSurfaceView$GLWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Ljavax/microedition/khronos/opengles/GL;)Ljavax/microedition/khronos/opengles/GL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::microedition::khronos::opengles::GL _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::ETC1::ETC1() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::opengl::ETC1::encodeBlock(const ::java::nio::Buffer& arg0, int32_t arg1, const ::java::nio::Buffer& arg2){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encodeBlock", "(Ljava/nio/Buffer;ILjava/nio/Buffer;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::ETC1::decodeBlock(const ::java::nio::Buffer& arg0, const ::java::nio::Buffer& arg1){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeBlock", "(Ljava/nio/Buffer;Ljava/nio/Buffer;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::opengl::ETC1::getEncodedDataSize(int32_t arg0, int32_t arg1){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEncodedDataSize", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::ETC1::encodeImage(const ::java::nio::Buffer& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::java::nio::Buffer& arg5){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encodeImage", "(Ljava/nio/Buffer;IIIILjava/nio/Buffer;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::ETC1::decodeImage(const ::java::nio::Buffer& arg0, const ::java::nio::Buffer& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeImage", "(Ljava/nio/Buffer;Ljava/nio/Buffer;IIII)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::ETC1::formatHeader(const ::java::nio::Buffer& arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatHeader", "(Ljava/nio/Buffer;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::opengl::ETC1::isValid(const ::java::nio::Buffer& arg0){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isValid", "(Ljava/nio/Buffer;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::opengl::ETC1::getWidth(const ::java::nio::Buffer& arg0){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWidth", "(Ljava/nio/Buffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::opengl::ETC1::getHeight(const ::java::nio::Buffer& arg0){
    if (!::android::opengl::ETC1::_class) ::android::opengl::ETC1::_class = java::fetch_class("android/opengl/ETC1");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getHeight", "(Ljava/nio/Buffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLDebugHelper::GLDebugHelper() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::GLDebugHelper::_class) ::android::opengl::GLDebugHelper::_class = java::fetch_class("android/opengl/GLDebugHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::javax::microedition::khronos::opengles::GL android::opengl::GLDebugHelper::wrap(const ::javax::microedition::khronos::opengles::GL& arg0, int32_t arg1, const ::java::io::Writer& arg2){
    if (!::android::opengl::GLDebugHelper::_class) ::android::opengl::GLDebugHelper::_class = java::fetch_class("android/opengl/GLDebugHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "(Ljavax/microedition/khronos/opengles/GL;ILjava/io/Writer;)Ljavax/microedition/khronos/opengles/GL;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::javax::microedition::khronos::opengles::GL _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGL android::opengl::GLDebugHelper::wrap(const ::javax::microedition::khronos::egl::EGL& arg0, int32_t arg1, const ::java::io::Writer& arg2){
    if (!::android::opengl::GLDebugHelper::_class) ::android::opengl::GLDebugHelper::_class = java::fetch_class("android/opengl/GLDebugHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "(Ljavax/microedition/khronos/egl/EGL;ILjava/io/Writer;)Ljavax/microedition/khronos/egl/EGL;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::javax::microedition::khronos::egl::EGL _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::Matrix::Matrix() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::opengl::Matrix::multiplyMM(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, const std::vector< float>& arg4, int32_t arg5){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "multiplyMM", "([FI[FI[FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    jfloatArray _arg4 = java::jni->NewFloatArray(arg4.size());
    java::jni->SetFloatArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::Matrix::multiplyMV(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, const std::vector< float>& arg4, int32_t arg5){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "multiplyMV", "([FI[FI[FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    jfloatArray _arg4 = java::jni->NewFloatArray(arg4.size());
    java::jni->SetFloatArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::Matrix::transposeM(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "transposeM", "([FI[FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::opengl::Matrix::invertM(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invertM", "([FI[FI)Z");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::Matrix::orthoM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "orthoM", "([FIFFFFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    float _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::Matrix::frustumM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "frustumM", "([FIFFFFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    float _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::Matrix::perspectiveM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4, float arg5){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "perspectiveM", "([FIFFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

float android::opengl::Matrix::length(float arg0, float arg1, float arg2){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "length", "(FFF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::Matrix::setIdentityM(const std::vector< float>& arg0, int32_t arg1){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setIdentityM", "([FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::Matrix::scaleM(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, float arg4, float arg5, float arg6){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scaleM", "([FI[FIFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::opengl::Matrix::scaleM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scaleM", "([FIFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::Matrix::translateM(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, float arg4, float arg5, float arg6){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "translateM", "([FI[FIFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::opengl::Matrix::translateM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "translateM", "([FIFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::Matrix::rotateM(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, float arg4, float arg5, float arg6, float arg7){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rotateM", "([FI[FIFFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    float _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::Matrix::rotateM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4, float arg5){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rotateM", "([FIFFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::Matrix::setRotateM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4, float arg5){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setRotateM", "([FIFFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::Matrix::setRotateEulerM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setRotateEulerM", "([FIFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::Matrix::setLookAtM(const std::vector< float>& arg0, int32_t arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10){
    if (!::android::opengl::Matrix::_class) ::android::opengl::Matrix::_class = java::fetch_class("android/opengl/Matrix");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLookAtM", "([FIFFFFFFFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    float _arg7 = arg7;
    float _arg8 = arg8;
    float _arg9 = arg9;
    float _arg10 = arg10;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

int32_t android::opengl::GLUtils::getInternalFormat(const ::android::graphics::Bitmap& arg0){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInternalFormat", "(Landroid/graphics/Bitmap;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::opengl::GLUtils::getType(const ::android::graphics::Bitmap& arg0){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getType", "(Landroid/graphics/Bitmap;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::opengl::GLUtils::texImage2D(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Bitmap& arg3, int32_t arg4){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "texImage2D", "(IIILandroid/graphics/Bitmap;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLUtils::texImage2D(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Bitmap& arg3, int32_t arg4, int32_t arg5){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "texImage2D", "(IIILandroid/graphics/Bitmap;II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLUtils::texImage2D(int32_t arg0, int32_t arg1, const ::android::graphics::Bitmap& arg2, int32_t arg3){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "texImage2D", "(IILandroid/graphics/Bitmap;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLUtils::texSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::android::graphics::Bitmap& arg4){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "texSubImage2D", "(IIIILandroid/graphics/Bitmap;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLUtils::texSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::android::graphics::Bitmap& arg4, int32_t arg5, int32_t arg6){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "texSubImage2D", "(IIIILandroid/graphics/Bitmap;II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

::java::lang::String android::opengl::GLUtils::getEGLErrorString(int32_t arg0){
    if (!::android::opengl::GLUtils::_class) ::android::opengl::GLUtils::_class = java::fetch_class("android/opengl/GLUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEGLErrorString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGLConfig android::opengl::GLSurfaceView_EGLConfigChooser::chooseConfig(const ::javax::microedition::khronos::egl::EGL10& arg0, const ::javax::microedition::khronos::egl::EGLDisplay& arg1) const {
    if (!::android::opengl::GLSurfaceView_EGLConfigChooser::_class) ::android::opengl::GLSurfaceView_EGLConfigChooser::_class = java::fetch_class("android/opengl/GLSurfaceView$EGLConfigChooser");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseConfig", "(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::microedition::khronos::egl::EGLConfig _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLES11Ext::GLES11Ext() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::opengl::GLES11Ext::glBlendEquationSeparateOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendEquationSeparateOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glBlendFuncSeparateOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendFuncSeparateOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glBlendEquationOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendEquationOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glDrawTexsOES(int16_t arg0, int16_t arg1, int16_t arg2, int16_t arg3, int16_t arg4){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexsOES", "(SSSSS)V");
    int16_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    int16_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    int16_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES11Ext::glDrawTexiOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexiOES", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES11Ext::glDrawTexxOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexxOES", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES11Ext::glDrawTexsvOES(const std::vector< int16_t>& arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexsvOES", "([SI)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glDrawTexsvOES(const ::java::nio::ShortBuffer& arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexsvOES", "(Ljava/nio/ShortBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glDrawTexivOES(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexivOES", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glDrawTexivOES(const ::java::nio::IntBuffer& arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexivOES", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glDrawTexxvOES(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexxvOES", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glDrawTexxvOES(const ::java::nio::IntBuffer& arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexxvOES", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glDrawTexfOES(float arg0, float arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexfOES", "(FFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES11Ext::glDrawTexfvOES(const std::vector< float>& arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexfvOES", "([FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glDrawTexfvOES(const ::java::nio::FloatBuffer& arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawTexfvOES", "(Ljava/nio/FloatBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glEGLImageTargetTexture2DOES(int32_t arg0, const ::java::nio::Buffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glEGLImageTargetTexture2DOES", "(ILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glEGLImageTargetRenderbufferStorageOES(int32_t arg0, const ::java::nio::Buffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glEGLImageTargetRenderbufferStorageOES", "(ILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glAlphaFuncxOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glAlphaFuncxOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glClearColorxOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearColorxOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glClearDepthxOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearDepthxOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glClipPlanexOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanexOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glClipPlanexOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanexOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glColor4xOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColor4xOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glDepthRangexOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthRangexOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glFogxOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogxOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glFogxvOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogxvOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glFogxvOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogxvOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glFrustumxOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFrustumxOES", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES11Ext::glGetClipPlanexOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanexOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetClipPlanexOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanexOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glGetFixedvOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFixedvOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetFixedvOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFixedvOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glGetLightxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetLightxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetLightxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetLightxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetMaterialxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetMaterialxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetMaterialxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetMaterialxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetTexEnvxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnvxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetTexEnvxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexEnvxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetTexParameterxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetTexParameterxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexParameterxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glLightModelxOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelxOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glLightModelxvOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelxvOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glLightModelxvOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelxvOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glLightxOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightxOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glLightxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glLightxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glLineWidthxOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLineWidthxOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glLoadMatrixxOES(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadMatrixxOES", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glLoadMatrixxOES(const ::java::nio::IntBuffer& arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadMatrixxOES", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glMaterialxOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialxOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glMaterialxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glMaterialxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glMultMatrixxOES(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultMatrixxOES", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glMultMatrixxOES(const ::java::nio::IntBuffer& arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultMatrixxOES", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glMultiTexCoord4xOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultiTexCoord4xOES", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES11Ext::glNormal3xOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glNormal3xOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glOrthoxOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glOrthoxOES", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES11Ext::glPointParameterxOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterxOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glPointParameterxvOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterxvOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glPointParameterxvOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointParameterxvOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glPointSizexOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointSizexOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glPolygonOffsetxOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPolygonOffsetxOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glRotatexOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glRotatexOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glSampleCoveragexOES(int32_t arg0, bool arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glSampleCoveragexOES", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glScalexOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glScalexOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexEnvxOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvxOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexEnvxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glTexEnvxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexParameterxOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterxOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexParameterxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glTexParameterxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTranslatexOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTranslatexOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::opengl::GLES11Ext::glIsRenderbufferOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsRenderbufferOES", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glBindRenderbufferOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindRenderbufferOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glDeleteRenderbuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteRenderbuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glDeleteRenderbuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteRenderbuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glGenRenderbuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenRenderbuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGenRenderbuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenRenderbuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glRenderbufferStorageOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glRenderbufferStorageOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetRenderbufferParameterivOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetRenderbufferParameterivOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetRenderbufferParameterivOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetRenderbufferParameterivOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::opengl::GLES11Ext::glIsFramebufferOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glIsFramebufferOES", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glBindFramebufferOES(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindFramebufferOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glDeleteFramebuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteFramebuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glDeleteFramebuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteFramebuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glGenFramebuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenFramebuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGenFramebuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenFramebuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::opengl::GLES11Ext::glCheckFramebufferStatusOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCheckFramebufferStatusOES", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glFramebufferRenderbufferOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFramebufferRenderbufferOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glFramebufferTexture2DOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFramebufferTexture2DOES", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES11Ext::glGetFramebufferAttachmentParameterivOES(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< int32_t>& arg3, int32_t arg4){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFramebufferAttachmentParameterivOES", "(III[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES11Ext::glGetFramebufferAttachmentParameterivOES(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::IntBuffer& arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetFramebufferAttachmentParameterivOES", "(IIILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGenerateMipmapOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenerateMipmapOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glCurrentPaletteMatrixOES(int32_t arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCurrentPaletteMatrixOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glLoadPaletteFromModelViewMatrixOES(){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadPaletteFromModelViewMatrixOES", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES11Ext::glMatrixIndexPointerOES(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMatrixIndexPointerOES", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glWeightPointerOES(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glWeightPointerOES", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glDepthRangefOES(float arg0, float arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthRangefOES", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glFrustumfOES(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFrustumfOES", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES11Ext::glOrthofOES(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glOrthofOES", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES11Ext::glClipPlanefOES(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanefOES", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glClipPlanefOES(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClipPlanefOES", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glGetClipPlanefOES(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanefOES", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetClipPlanefOES(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetClipPlanefOES", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES11Ext::glClearDepthfOES(float arg0){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearDepthfOES", "(F)V");
    float _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES11Ext::glTexGenfOES(int32_t arg0, int32_t arg1, float arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenfOES", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexGenfvOES(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenfvOES", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glTexGenfvOES(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenfvOES", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexGeniOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGeniOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexGenivOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenivOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glTexGenivOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenivOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexGenxOES(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenxOES", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glTexGenxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glTexGenxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexGenxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetTexGenfvOES(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexGenfvOES", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetTexGenfvOES(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexGenfvOES", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetTexGenivOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexGenivOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetTexGenivOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexGenivOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES11Ext::glGetTexGenxvOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexGenxvOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES11Ext::glGetTexGenxvOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES11Ext::_class) ::android::opengl::GLES11Ext::_class = java::fetch_class("android/opengl/GLES11Ext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetTexGenxvOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::Visibility::Visibility() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::Visibility::_class) ::android::opengl::Visibility::_class = java::fetch_class("android/opengl/Visibility");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::opengl::Visibility::visibilityTest(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, const std::vector< uint16_t>& arg4, int32_t arg5, int32_t arg6){
    if (!::android::opengl::Visibility::_class) ::android::opengl::Visibility::_class = java::fetch_class("android/opengl/Visibility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "visibilityTest", "([FI[FI[CII)I");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    jcharArray _arg4 = java::jni->NewCharArray(arg4.size());
    java::jni->SetCharArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

int32_t android::opengl::Visibility::frustumCullSpheres(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, int32_t arg4, const std::vector< int32_t>& arg5, int32_t arg6, int32_t arg7){
    if (!::android::opengl::Visibility::_class) ::android::opengl::Visibility::_class = java::fetch_class("android/opengl/Visibility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "frustumCullSpheres", "([FI[FII[III)I");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::Visibility::computeBoundingSphere(const std::vector< float>& arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3, int32_t arg4){
    if (!::android::opengl::Visibility::_class) ::android::opengl::Visibility::_class = java::fetch_class("android/opengl/Visibility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "computeBoundingSphere", "([FII[FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLSurfaceView_Renderer::onSurfaceCreated(const ::javax::microedition::khronos::opengles::GL10& arg0, const ::javax::microedition::khronos::egl::EGLConfig& arg1) const {
    if (!::android::opengl::GLSurfaceView_Renderer::_class) ::android::opengl::GLSurfaceView_Renderer::_class = java::fetch_class("android/opengl/GLSurfaceView$Renderer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceCreated", "(Ljavax/microedition/khronos/opengles/GL10;Ljavax/microedition/khronos/egl/EGLConfig;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::opengl::GLSurfaceView_Renderer::onSurfaceChanged(const ::javax::microedition::khronos::opengles::GL10& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::opengl::GLSurfaceView_Renderer::_class) ::android::opengl::GLSurfaceView_Renderer::_class = java::fetch_class("android/opengl/GLSurfaceView$Renderer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceChanged", "(Ljavax/microedition/khronos/opengles/GL10;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLSurfaceView_Renderer::onDrawFrame(const ::javax::microedition::khronos::opengles::GL10& arg0) const {
    if (!::android::opengl::GLSurfaceView_Renderer::_class) ::android::opengl::GLSurfaceView_Renderer::_class = java::fetch_class("android/opengl/GLSurfaceView$Renderer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawFrame", "(Ljavax/microedition/khronos/opengles/GL10;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLES10::GLES10() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::opengl::GLES10::glActiveTexture(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glActiveTexture", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glAlphaFunc(int32_t arg0, float arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glAlphaFunc", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glAlphaFuncx(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glAlphaFuncx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glBindTexture(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBindTexture", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glBlendFunc(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glBlendFunc", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glClear(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glClearColor(float arg0, float arg1, float arg2, float arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearColor", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glClearColorx(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearColorx", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glClearDepthf(float arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearDepthf", "(F)V");
    float _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glClearDepthx(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearDepthx", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glClearStencil(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClearStencil", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glClientActiveTexture(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glClientActiveTexture", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glColor4f(float arg0, float arg1, float arg2, float arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColor4f", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glColor4x(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColor4x", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glColorMask(bool arg0, bool arg1, bool arg2, bool arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColorMask", "(ZZZZ)V");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glColorPointer(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glColorPointer", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glCompressedTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::nio::Buffer& arg7){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCompressedTexImage2D", "(IIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::GLES10::glCompressedTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCompressedTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::opengl::GLES10::glCopyTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCopyTexImage2D", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::GLES10::glCopyTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCopyTexSubImage2D", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::opengl::GLES10::glCullFace(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glCullFace", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glDeleteTextures(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteTextures", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glDeleteTextures(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDeleteTextures", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glDepthFunc(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthFunc", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glDepthMask(bool arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthMask", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glDepthRangef(float arg0, float arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthRangef", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glDepthRangex(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDepthRangex", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glDisable(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDisable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glDisableClientState(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDisableClientState", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glDrawArrays(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawArrays", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glDrawElements(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glDrawElements", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glEnable(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glEnable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glEnableClientState(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glEnableClientState", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glFinish(){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFinish", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES10::glFlush(){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFlush", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES10::glFogf(int32_t arg0, float arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogf", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glFogfv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogfv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glFogfv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogfv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glFogx(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glFogxv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogxv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glFogxv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFogxv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glFrontFace(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFrontFace", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glFrustumf(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFrustumf", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES10::glFrustumx(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glFrustumx", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES10::glGenTextures(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenTextures", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glGenTextures(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGenTextures", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::opengl::GLES10::glGetError(){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetError", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::opengl::GLES10::glGetIntegerv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetIntegerv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glGetIntegerv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetIntegerv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::opengl::GLES10::glGetString(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glGetString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::opengl::GLES10::glHint(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glHint", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glLightModelf(int32_t arg0, float arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelf", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glLightModelfv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelfv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glLightModelfv(int32_t arg0, const ::java::nio::FloatBuffer& arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelfv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glLightModelx(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glLightModelxv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelxv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glLightModelxv(int32_t arg0, const ::java::nio::IntBuffer& arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightModelxv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glLightf(int32_t arg0, int32_t arg1, float arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glLightfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glLightfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glLightx(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glLightxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glLightxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLightxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glLineWidth(float arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLineWidth", "(F)V");
    float _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glLineWidthx(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLineWidthx", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glLoadIdentity(){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadIdentity", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES10::glLoadMatrixf(const std::vector< float>& arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadMatrixf", "([FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glLoadMatrixf(const ::java::nio::FloatBuffer& arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadMatrixf", "(Ljava/nio/FloatBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glLoadMatrixx(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadMatrixx", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glLoadMatrixx(const ::java::nio::IntBuffer& arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLoadMatrixx", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glLogicOp(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glLogicOp", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glMaterialf(int32_t arg0, int32_t arg1, float arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glMaterialfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glMaterialfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glMaterialx(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glMaterialxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glMaterialxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMaterialxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glMatrixMode(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMatrixMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glMultMatrixf(const std::vector< float>& arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultMatrixf", "([FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glMultMatrixf(const ::java::nio::FloatBuffer& arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultMatrixf", "(Ljava/nio/FloatBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glMultMatrixx(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultMatrixx", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glMultMatrixx(const ::java::nio::IntBuffer& arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultMatrixx", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glMultiTexCoord4f(int32_t arg0, float arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultiTexCoord4f", "(IFFFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES10::glMultiTexCoord4x(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glMultiTexCoord4x", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLES10::glNormal3f(float arg0, float arg1, float arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glNormal3f", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glNormal3x(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glNormal3x", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glNormalPointer(int32_t arg0, int32_t arg1, const ::java::nio::Buffer& arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glNormalPointer", "(IILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glOrthof(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glOrthof", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES10::glOrthox(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glOrthox", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLES10::glPixelStorei(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPixelStorei", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glPointSize(float arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointSize", "(F)V");
    float _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glPointSizex(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPointSizex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glPolygonOffset(float arg0, float arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPolygonOffset", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glPolygonOffsetx(int32_t arg0, int32_t arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPolygonOffsetx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glPopMatrix(){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPopMatrix", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES10::glPushMatrix(){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glPushMatrix", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::opengl::GLES10::glReadPixels(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, const ::java::nio::Buffer& arg6){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glReadPixels", "(IIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::opengl::GLES10::glRotatef(float arg0, float arg1, float arg2, float arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glRotatef", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glRotatex(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glRotatex", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glSampleCoverage(float arg0, bool arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glSampleCoverage", "(FZ)V");
    float _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glSampleCoveragex(int32_t arg0, bool arg1){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glSampleCoveragex", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::opengl::GLES10::glScalef(float arg0, float arg1, float arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glScalef", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glScalex(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glScalex", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glScissor(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glScissor", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glShadeModel(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glShadeModel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glStencilFunc(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilFunc", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glStencilMask(int32_t arg0){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilMask", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::opengl::GLES10::glStencilOp(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glStencilOp", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTexCoordPointer(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexCoordPointer", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glTexEnvf(int32_t arg0, int32_t arg1, float arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTexEnvfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glTexEnvfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTexEnvx(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTexEnvxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glTexEnvxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexEnvxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::opengl::GLES10::glTexParameterf(int32_t arg0, int32_t arg1, float arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTexParameterx(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexParameterx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::opengl::GLES10::glTranslatef(float arg0, float arg1, float arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTranslatef", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glTranslatex(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glTranslatex", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::opengl::GLES10::glVertexPointer(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glVertexPointer", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLES10::glViewport(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::opengl::GLES10::_class) ::android::opengl::GLES10::_class = java::fetch_class("android/opengl/GLES10");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "glViewport", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLSurfaceView::GLSurfaceView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLSurfaceView::GLSurfaceView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::opengl::GLSurfaceView::setGLWrapper(const ::android::opengl::GLSurfaceView_GLWrapper& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGLWrapper", "(Landroid/opengl/GLSurfaceView$GLWrapper;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::setDebugFlags(int32_t arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDebugFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::opengl::GLSurfaceView::getDebugFlags() const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDebugFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::opengl::GLSurfaceView::setPreserveEGLContextOnPause(bool arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreserveEGLContextOnPause", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::opengl::GLSurfaceView::getPreserveEGLContextOnPause() const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreserveEGLContextOnPause", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::opengl::GLSurfaceView::setRenderer(const ::android::opengl::GLSurfaceView_Renderer& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRenderer", "(Landroid/opengl/GLSurfaceView$Renderer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::setEGLContextFactory(const ::android::opengl::GLSurfaceView_EGLContextFactory& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEGLContextFactory", "(Landroid/opengl/GLSurfaceView$EGLContextFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::setEGLWindowSurfaceFactory(const ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEGLWindowSurfaceFactory", "(Landroid/opengl/GLSurfaceView$EGLWindowSurfaceFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::setEGLConfigChooser(const ::android::opengl::GLSurfaceView_EGLConfigChooser& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEGLConfigChooser", "(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::setEGLConfigChooser(bool arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEGLConfigChooser", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::setEGLConfigChooser(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEGLConfigChooser", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::GLSurfaceView::setEGLContextClientVersion(int32_t arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEGLContextClientVersion", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::setRenderMode(int32_t arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRenderMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::opengl::GLSurfaceView::getRenderMode() const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRenderMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::opengl::GLSurfaceView::requestRender() const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestRender", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::opengl::GLSurfaceView::surfaceCreated(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceCreated", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::surfaceDestroyed(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceDestroyed", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::opengl::GLSurfaceView::surfaceChanged(const ::android::view::SurfaceHolder& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceChanged", "(Landroid/view/SurfaceHolder;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::opengl::GLSurfaceView::onPause() const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::opengl::GLSurfaceView::onResume() const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::opengl::GLSurfaceView::queueEvent(const ::java::lang::Runnable& arg0) const {
    if (!::android::opengl::GLSurfaceView::_class) ::android::opengl::GLSurfaceView::_class = java::fetch_class("android/opengl/GLSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "queueEvent", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::GLU::GLU() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::GLU::_class) ::android::opengl::GLU::_class = java::fetch_class("android/opengl/GLU");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::opengl::GLU::gluErrorString(int32_t arg0){
    if (!::android::opengl::GLU::_class) ::android::opengl::GLU::_class = java::fetch_class("android/opengl/GLU");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "gluErrorString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::opengl::GLU::gluLookAt(const ::javax::microedition::khronos::opengles::GL10& arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9){
    if (!::android::opengl::GLU::_class) ::android::opengl::GLU::_class = java::fetch_class("android/opengl/GLU");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "gluLookAt", "(Ljavax/microedition/khronos/opengles/GL10;FFFFFFFFF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    float _arg7 = arg7;
    float _arg8 = arg8;
    float _arg9 = arg9;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}

void android::opengl::GLU::gluOrtho2D(const ::javax::microedition::khronos::opengles::GL10& arg0, float arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::GLU::_class) ::android::opengl::GLU::_class = java::fetch_class("android/opengl/GLU");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "gluOrtho2D", "(Ljavax/microedition/khronos/opengles/GL10;FFFF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::opengl::GLU::gluPerspective(const ::javax::microedition::khronos::opengles::GL10& arg0, float arg1, float arg2, float arg3, float arg4){
    if (!::android::opengl::GLU::_class) ::android::opengl::GLU::_class = java::fetch_class("android/opengl/GLU");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "gluPerspective", "(Ljavax/microedition/khronos/opengles/GL10;FFFF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::opengl::GLU::gluProject(float arg0, float arg1, float arg2, const std::vector< float>& arg3, int32_t arg4, const std::vector< float>& arg5, int32_t arg6, const std::vector< int32_t>& arg7, int32_t arg8, const std::vector< float>& arg9, int32_t arg10){
    if (!::android::opengl::GLU::_class) ::android::opengl::GLU::_class = java::fetch_class("android/opengl/GLU");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "gluProject", "(FFF[FI[FI[II[FI)I");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    jfloatArray _arg5 = java::jni->NewFloatArray(arg5.size());
    java::jni->SetFloatArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    jintArray _arg7 = java::jni->NewIntArray(arg7.size());
    java::jni->SetIntArrayRegion(_arg7, 0, arg7.size(), arg7.data());
    int32_t _arg8 = arg8;
    jfloatArray _arg9 = java::jni->NewFloatArray(arg9.size());
    java::jni->SetFloatArrayRegion(_arg9, 0, arg9.size(), arg9.data());
    int32_t _arg10 = arg10;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

int32_t android::opengl::GLU::gluUnProject(float arg0, float arg1, float arg2, const std::vector< float>& arg3, int32_t arg4, const std::vector< float>& arg5, int32_t arg6, const std::vector< int32_t>& arg7, int32_t arg8, const std::vector< float>& arg9, int32_t arg10){
    if (!::android::opengl::GLU::_class) ::android::opengl::GLU::_class = java::fetch_class("android/opengl/GLU");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "gluUnProject", "(FFF[FI[FI[II[FI)I");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    jfloatArray _arg5 = java::jni->NewFloatArray(arg5.size());
    java::jni->SetFloatArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    jintArray _arg7 = java::jni->NewIntArray(arg7.size());
    java::jni->SetIntArrayRegion(_arg7, 0, arg7.size(), arg7.data());
    int32_t _arg8 = arg8;
    jfloatArray _arg9 = java::jni->NewFloatArray(arg9.size());
    java::jni->SetFloatArrayRegion(_arg9, 0, arg9.size(), arg9.data());
    int32_t _arg10 = arg10;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::ETC1Util_ETC1Texture::ETC1Util_ETC1Texture(int32_t arg0, int32_t arg1, const ::java::nio::ByteBuffer& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::ETC1Util_ETC1Texture::_class) ::android::opengl::ETC1Util_ETC1Texture::_class = java::fetch_class("android/opengl/ETC1Util$ETC1Texture");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/nio/ByteBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::opengl::ETC1Util_ETC1Texture::getWidth() const {
    if (!::android::opengl::ETC1Util_ETC1Texture::_class) ::android::opengl::ETC1Util_ETC1Texture::_class = java::fetch_class("android/opengl/ETC1Util$ETC1Texture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::opengl::ETC1Util_ETC1Texture::getHeight() const {
    if (!::android::opengl::ETC1Util_ETC1Texture::_class) ::android::opengl::ETC1Util_ETC1Texture::_class = java::fetch_class("android/opengl/ETC1Util$ETC1Texture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::ByteBuffer android::opengl::ETC1Util_ETC1Texture::getData() const {
    if (!::android::opengl::ETC1Util_ETC1Texture::_class) ::android::opengl::ETC1Util_ETC1Texture::_class = java::fetch_class("android/opengl/ETC1Util$ETC1Texture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Ljava/nio/ByteBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::opengl::ETC1Util::ETC1Util() : ::java::lang::Object((jobject)0) {
    if (!::android::opengl::ETC1Util::_class) ::android::opengl::ETC1Util::_class = java::fetch_class("android/opengl/ETC1Util");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::opengl::ETC1Util::loadTexture(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::java::io::InputStream& arg5){
    if (!::android::opengl::ETC1Util::_class) ::android::opengl::ETC1Util::_class = java::fetch_class("android/opengl/ETC1Util");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadTexture", "(IIIIILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::opengl::ETC1Util::loadTexture(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::opengl::ETC1Util_ETC1Texture& arg5){
    if (!::android::opengl::ETC1Util::_class) ::android::opengl::ETC1Util::_class = java::fetch_class("android/opengl/ETC1Util");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadTexture", "(IIIIILandroid/opengl/ETC1Util$ETC1Texture;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

bool android::opengl::ETC1Util::isETC1Supported(){
    if (!::android::opengl::ETC1Util::_class) ::android::opengl::ETC1Util::_class = java::fetch_class("android/opengl/ETC1Util");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isETC1Supported", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

::android::opengl::ETC1Util_ETC1Texture android::opengl::ETC1Util::createTexture(const ::java::io::InputStream& arg0){
    if (!::android::opengl::ETC1Util::_class) ::android::opengl::ETC1Util::_class = java::fetch_class("android/opengl/ETC1Util");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTexture", "(Ljava/io/InputStream;)Landroid/opengl/ETC1Util$ETC1Texture;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::opengl::ETC1Util_ETC1Texture _ret(ret);
    return _ret;
}

::android::opengl::ETC1Util_ETC1Texture android::opengl::ETC1Util::compressTexture(const ::java::nio::Buffer& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::opengl::ETC1Util::_class) ::android::opengl::ETC1Util::_class = java::fetch_class("android/opengl/ETC1Util");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compressTexture", "(Ljava/nio/Buffer;IIII)Landroid/opengl/ETC1Util$ETC1Texture;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::opengl::ETC1Util_ETC1Texture _ret(ret);
    return _ret;
}

void android::opengl::ETC1Util::writeTexture(const ::android::opengl::ETC1Util_ETC1Texture& arg0, const ::java::io::OutputStream& arg1){
    if (!::android::opengl::ETC1Util::_class) ::android::opengl::ETC1Util::_class = java::fetch_class("android/opengl/ETC1Util");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeTexture", "(Landroid/opengl/ETC1Util$ETC1Texture;Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

