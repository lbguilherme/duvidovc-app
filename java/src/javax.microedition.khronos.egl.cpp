#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "javax.microedition.khronos.egl.EGL.hpp"
#include "javax.microedition.khronos.egl.EGL10.hpp"
#include "javax.microedition.khronos.egl.EGL11.hpp"
#include "javax.microedition.khronos.egl.EGLConfig.hpp"
#include "javax.microedition.khronos.egl.EGLContext.hpp"
#include "javax.microedition.khronos.egl.EGLDisplay.hpp"
#include "javax.microedition.khronos.egl.EGLSurface.hpp"
#include "javax.microedition.khronos.opengles.GL.hpp"

jclass javax::microedition::khronos::egl::EGLContext::_class = nullptr;
jclass javax::microedition::khronos::egl::EGL11::_class = nullptr;
jclass javax::microedition::khronos::egl::EGLSurface::_class = nullptr;
jclass javax::microedition::khronos::egl::EGLConfig::_class = nullptr;
jclass javax::microedition::khronos::egl::EGL10::_class = nullptr;
jclass javax::microedition::khronos::egl::EGL::_class = nullptr;
jclass javax::microedition::khronos::egl::EGLDisplay::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::microedition::khronos::egl::EGLContext::EGLContext() : ::java::lang::Object((jobject)0) {
    if (!::javax::microedition::khronos::egl::EGLContext::_class) ::javax::microedition::khronos::egl::EGLContext::_class = java::fetch_class("javax/microedition/khronos/egl/EGLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::javax::microedition::khronos::egl::EGL javax::microedition::khronos::egl::EGLContext::getEGL(){
    if (!::javax::microedition::khronos::egl::EGLContext::_class) ::javax::microedition::khronos::egl::EGLContext::_class = java::fetch_class("javax/microedition/khronos/egl/EGLContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEGL", "()Ljavax/microedition/khronos/egl/EGL;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::microedition::khronos::egl::EGL _ret(ret);
    return _ret;
}

::javax::microedition::khronos::opengles::GL javax::microedition::khronos::egl::EGLContext::getGL() const {
    if (!::javax::microedition::khronos::egl::EGLContext::_class) ::javax::microedition::khronos::egl::EGLContext::_class = java::fetch_class("javax/microedition/khronos/egl/EGLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGL", "()Ljavax/microedition/khronos/opengles/GL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::microedition::khronos::opengles::GL _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::microedition::khronos::egl::EGLSurface::EGLSurface() : ::java::lang::Object((jobject)0) {
    if (!::javax::microedition::khronos::egl::EGLSurface::_class) ::javax::microedition::khronos::egl::EGLSurface::_class = java::fetch_class("javax/microedition/khronos/egl/EGLSurface");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::microedition::khronos::egl::EGLConfig::EGLConfig() : ::java::lang::Object((jobject)0) {
    if (!::javax::microedition::khronos::egl::EGLConfig::_class) ::javax::microedition::khronos::egl::EGLConfig::_class = java::fetch_class("javax/microedition/khronos/egl/EGLConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool javax::microedition::khronos::egl::EGL10::eglChooseConfig(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const std::vector< int32_t>& arg1, const std::vector< ::javax::microedition::khronos::egl::EGLConfig>& arg2, int32_t arg3, const std::vector< int32_t>& arg4) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglChooseConfig", "(Ljavax/microedition/khronos/egl/EGLDisplay;[I[Ljavax/microedition/khronos/egl/EGLConfig;I[I)Z");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    unsigned arg2s = arg2.size();
    if (!::javax::microedition::khronos::egl::EGLConfig::_class) ::javax::microedition::khronos::egl::EGLConfig::_class = java::fetch_class("javax/microedition/khronos/egl/EGLConfig");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::javax::microedition::khronos::egl::EGLConfig::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::javax::microedition::khronos::egl::EGLConfig& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool javax::microedition::khronos::egl::EGL10::eglCopyBuffers(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLSurface& arg1, const ::java::lang::Object& arg2) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglCopyBuffers", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::javax::microedition::khronos::egl::EGLContext javax::microedition::khronos::egl::EGL10::eglCreateContext(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLConfig& arg1, const ::javax::microedition::khronos::egl::EGLContext& arg2, const std::vector< int32_t>& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglCreateContext", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;Ljavax/microedition/khronos/egl/EGLContext;[I)Ljavax/microedition/khronos/egl/EGLContext;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::microedition::khronos::egl::EGLContext _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGLSurface javax::microedition::khronos::egl::EGL10::eglCreatePbufferSurface(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLConfig& arg1, const std::vector< int32_t>& arg2) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglCreatePbufferSurface", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;[I)Ljavax/microedition/khronos/egl/EGLSurface;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::javax::microedition::khronos::egl::EGLSurface _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGLSurface javax::microedition::khronos::egl::EGL10::eglCreatePixmapSurface(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLConfig& arg1, const ::java::lang::Object& arg2, const std::vector< int32_t>& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglCreatePixmapSurface", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;Ljava/lang/Object;[I)Ljavax/microedition/khronos/egl/EGLSurface;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::microedition::khronos::egl::EGLSurface _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGLSurface javax::microedition::khronos::egl::EGL10::eglCreateWindowSurface(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLConfig& arg1, const ::java::lang::Object& arg2, const std::vector< int32_t>& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglCreateWindowSurface", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;Ljava/lang/Object;[I)Ljavax/microedition/khronos/egl/EGLSurface;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::microedition::khronos::egl::EGLSurface _ret(ret);
    return _ret;
}

bool javax::microedition::khronos::egl::EGL10::eglDestroyContext(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLContext& arg1) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglDestroyContext", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool javax::microedition::khronos::egl::EGL10::eglDestroySurface(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLSurface& arg1) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglDestroySurface", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool javax::microedition::khronos::egl::EGL10::eglGetConfigAttrib(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLConfig& arg1, int32_t arg2, const std::vector< int32_t>& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglGetConfigAttrib", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;I[I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool javax::microedition::khronos::egl::EGL10::eglGetConfigs(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const std::vector< ::javax::microedition::khronos::egl::EGLConfig>& arg1, int32_t arg2, const std::vector< int32_t>& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglGetConfigs", "(Ljavax/microedition/khronos/egl/EGLDisplay;[Ljavax/microedition/khronos/egl/EGLConfig;I[I)Z");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::javax::microedition::khronos::egl::EGLConfig::_class) ::javax::microedition::khronos::egl::EGLConfig::_class = java::fetch_class("javax/microedition/khronos/egl/EGLConfig");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::javax::microedition::khronos::egl::EGLConfig::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::javax::microedition::khronos::egl::EGLConfig& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::javax::microedition::khronos::egl::EGLContext javax::microedition::khronos::egl::EGL10::eglGetCurrentContext() const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglGetCurrentContext", "()Ljavax/microedition/khronos/egl/EGLContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::microedition::khronos::egl::EGLContext _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGLDisplay javax::microedition::khronos::egl::EGL10::eglGetCurrentDisplay() const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglGetCurrentDisplay", "()Ljavax/microedition/khronos/egl/EGLDisplay;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::microedition::khronos::egl::EGLDisplay _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGLSurface javax::microedition::khronos::egl::EGL10::eglGetCurrentSurface(int32_t arg0) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglGetCurrentSurface", "(I)Ljavax/microedition/khronos/egl/EGLSurface;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::microedition::khronos::egl::EGLSurface _ret(ret);
    return _ret;
}

::javax::microedition::khronos::egl::EGLDisplay javax::microedition::khronos::egl::EGL10::eglGetDisplay(const ::java::lang::Object& arg0) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglGetDisplay", "(Ljava/lang/Object;)Ljavax/microedition/khronos/egl/EGLDisplay;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::microedition::khronos::egl::EGLDisplay _ret(ret);
    return _ret;
}

int32_t javax::microedition::khronos::egl::EGL10::eglGetError() const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglGetError", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool javax::microedition::khronos::egl::EGL10::eglInitialize(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const std::vector< int32_t>& arg1) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglInitialize", "(Ljavax/microedition/khronos/egl/EGLDisplay;[I)Z");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool javax::microedition::khronos::egl::EGL10::eglMakeCurrent(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLSurface& arg1, const ::javax::microedition::khronos::egl::EGLSurface& arg2, const ::javax::microedition::khronos::egl::EGLContext& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglMakeCurrent", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLSurface;Ljavax/microedition/khronos/egl/EGLContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool javax::microedition::khronos::egl::EGL10::eglQueryContext(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLContext& arg1, int32_t arg2, const std::vector< int32_t>& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglQueryContext", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLContext;I[I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::String javax::microedition::khronos::egl::EGL10::eglQueryString(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglQueryString", "(Ljavax/microedition/khronos/egl/EGLDisplay;I)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::microedition::khronos::egl::EGL10::eglQuerySurface(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLSurface& arg1, int32_t arg2, const std::vector< int32_t>& arg3) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglQuerySurface", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;I[I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool javax::microedition::khronos::egl::EGL10::eglSwapBuffers(const ::javax::microedition::khronos::egl::EGLDisplay& arg0, const ::javax::microedition::khronos::egl::EGLSurface& arg1) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglSwapBuffers", "(Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool javax::microedition::khronos::egl::EGL10::eglTerminate(const ::javax::microedition::khronos::egl::EGLDisplay& arg0) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglTerminate", "(Ljavax/microedition/khronos/egl/EGLDisplay;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::microedition::khronos::egl::EGL10::eglWaitGL() const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglWaitGL", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::microedition::khronos::egl::EGL10::eglWaitNative(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::microedition::khronos::egl::EGL10::_class) ::javax::microedition::khronos::egl::EGL10::_class = java::fetch_class("javax/microedition/khronos/egl/EGL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "eglWaitNative", "(ILjava/lang/Object;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::microedition::khronos::egl::EGLDisplay::EGLDisplay() : ::java::lang::Object((jobject)0) {
    if (!::javax::microedition::khronos::egl::EGLDisplay::_class) ::javax::microedition::khronos::egl::EGLDisplay::_class = java::fetch_class("javax/microedition/khronos/egl/EGLDisplay");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

