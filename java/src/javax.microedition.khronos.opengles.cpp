#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.nio.Buffer.hpp"
#include "java.nio.FloatBuffer.hpp"
#include "java.nio.IntBuffer.hpp"
#include "java.nio.ShortBuffer.hpp"
#include "javax.microedition.khronos.opengles.GL.hpp"
#include "javax.microedition.khronos.opengles.GL10.hpp"
#include "javax.microedition.khronos.opengles.GL10Ext.hpp"
#include "javax.microedition.khronos.opengles.GL11.hpp"
#include "javax.microedition.khronos.opengles.GL11Ext.hpp"
#include "javax.microedition.khronos.opengles.GL11ExtensionPack.hpp"

jclass javax::microedition::khronos::opengles::GL::_class = nullptr;
jclass javax::microedition::khronos::opengles::GL11ExtensionPack::_class = nullptr;
jclass javax::microedition::khronos::opengles::GL10::_class = nullptr;
jclass javax::microedition::khronos::opengles::GL11::_class = nullptr;
jclass javax::microedition::khronos::opengles::GL10Ext::_class = nullptr;
jclass javax::microedition::khronos::opengles::GL11Ext::_class = nullptr;

void javax::microedition::khronos::opengles::GL11ExtensionPack::glBindFramebufferOES(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBindFramebufferOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glBindRenderbufferOES(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBindRenderbufferOES", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glBindTexture(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBindTexture", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glBlendEquation(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBlendEquation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glBlendEquationSeparate(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBlendEquationSeparate", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glBlendFuncSeparate(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBlendFuncSeparate", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t javax::microedition::khronos::opengles::GL11ExtensionPack::glCheckFramebufferStatusOES(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCheckFramebufferStatusOES", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glCompressedTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::nio::Buffer& arg7) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCompressedTexImage2D", "(IIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glCopyTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCopyTexImage2D", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glDeleteFramebuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteFramebuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glDeleteFramebuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteFramebuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glDeleteRenderbuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteRenderbuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glDeleteRenderbuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteRenderbuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glEnable(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glEnable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glFramebufferRenderbufferOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFramebufferRenderbufferOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glFramebufferTexture2DOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFramebufferTexture2DOES", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGenerateMipmapOES(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenerateMipmapOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGenFramebuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenFramebuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGenFramebuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenFramebuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGenRenderbuffersOES(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenRenderbuffersOES", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGenRenderbuffersOES(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenRenderbuffersOES", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetFramebufferAttachmentParameterivOES(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< int32_t>& arg3, int32_t arg4) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetFramebufferAttachmentParameterivOES", "(III[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetFramebufferAttachmentParameterivOES(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::IntBuffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetFramebufferAttachmentParameterivOES", "(IIILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetIntegerv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetIntegerv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetIntegerv(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetIntegerv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetRenderbufferParameterivOES(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetRenderbufferParameterivOES", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetRenderbufferParameterivOES(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetRenderbufferParameterivOES", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetTexGenfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexGenfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetTexGenfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexGenfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetTexGeniv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexGeniv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetTexGeniv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexGeniv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetTexGenxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexGenxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glGetTexGenxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexGenxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool javax::microedition::khronos::opengles::GL11ExtensionPack::glIsFramebufferOES(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glIsFramebufferOES", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::microedition::khronos::opengles::GL11ExtensionPack::glIsRenderbufferOES(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glIsRenderbufferOES", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glRenderbufferStorageOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glRenderbufferStorageOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glStencilOp(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glStencilOp", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexEnvf(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexEnvfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexEnvfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexEnvx(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexEnvxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexEnvxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGenf(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGenf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGenfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGenfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGenfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGenfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGeni(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGeni", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGeniv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGeniv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGeniv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGeniv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGenx(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGenx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGenxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGenxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexGenxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexGenxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11ExtensionPack::glTexParameterf(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11ExtensionPack::_class) ::javax::microedition::khronos::opengles::GL11ExtensionPack::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11ExtensionPack");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glActiveTexture(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glActiveTexture", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glAlphaFunc(int32_t arg0, float arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glAlphaFunc", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glAlphaFuncx(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glAlphaFuncx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glBindTexture(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBindTexture", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glBlendFunc(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBlendFunc", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glClear(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glClearColor(float arg0, float arg1, float arg2, float arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClearColor", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glClearColorx(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClearColorx", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glClearDepthf(float arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClearDepthf", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glClearDepthx(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClearDepthx", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glClearStencil(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClearStencil", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glClientActiveTexture(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClientActiveTexture", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glColor4f(float arg0, float arg1, float arg2, float arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glColor4f", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glColor4x(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glColor4x", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glColorMask(bool arg0, bool arg1, bool arg2, bool arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glColorMask", "(ZZZZ)V");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glColorPointer(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glColorPointer", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glCompressedTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::nio::Buffer& arg7) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCompressedTexImage2D", "(IIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void javax::microedition::khronos::opengles::GL10::glCompressedTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCompressedTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void javax::microedition::khronos::opengles::GL10::glCopyTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCopyTexImage2D", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void javax::microedition::khronos::opengles::GL10::glCopyTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCopyTexSubImage2D", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void javax::microedition::khronos::opengles::GL10::glCullFace(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCullFace", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glDeleteTextures(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteTextures", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glDeleteTextures(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteTextures", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glDepthFunc(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDepthFunc", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glDepthMask(bool arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDepthMask", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glDepthRangef(float arg0, float arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDepthRangef", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glDepthRangex(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDepthRangex", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glDisable(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDisable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glDisableClientState(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDisableClientState", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glDrawArrays(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawArrays", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glDrawElements(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawElements", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glEnable(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glEnable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glEnableClientState(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glEnableClientState", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glFinish() const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFinish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::microedition::khronos::opengles::GL10::glFlush() const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFlush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::microedition::khronos::opengles::GL10::glFogf(int32_t arg0, float arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFogf", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glFogfv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFogfv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glFogfv(int32_t arg0, const ::java::nio::FloatBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFogfv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glFogx(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFogx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glFogxv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFogxv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glFogxv(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFogxv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glFrontFace(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFrontFace", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glFrustumf(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFrustumf", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void javax::microedition::khronos::opengles::GL10::glFrustumx(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glFrustumx", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void javax::microedition::khronos::opengles::GL10::glGenTextures(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenTextures", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glGenTextures(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenTextures", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t javax::microedition::khronos::opengles::GL10::glGetError() const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetError", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void javax::microedition::khronos::opengles::GL10::glGetIntegerv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetIntegerv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glGetIntegerv(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetIntegerv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String javax::microedition::khronos::opengles::GL10::glGetString(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::microedition::khronos::opengles::GL10::glHint(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glHint", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glLightModelf(int32_t arg0, float arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightModelf", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glLightModelfv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightModelfv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glLightModelfv(int32_t arg0, const ::java::nio::FloatBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightModelfv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glLightModelx(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightModelx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glLightModelxv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightModelxv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glLightModelxv(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightModelxv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glLightf(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glLightfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glLightfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glLightx(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glLightxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glLightxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLightxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glLineWidth(float arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLineWidth", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glLineWidthx(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLineWidthx", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glLoadIdentity() const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLoadIdentity", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::microedition::khronos::opengles::GL10::glLoadMatrixf(const std::vector< float>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLoadMatrixf", "([FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glLoadMatrixf(const ::java::nio::FloatBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLoadMatrixf", "(Ljava/nio/FloatBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glLoadMatrixx(const std::vector< int32_t>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLoadMatrixx", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glLoadMatrixx(const ::java::nio::IntBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLoadMatrixx", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glLogicOp(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLogicOp", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glMaterialf(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMaterialf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glMaterialfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMaterialfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glMaterialfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMaterialfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glMaterialx(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMaterialx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glMaterialxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMaterialxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glMaterialxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMaterialxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glMatrixMode(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMatrixMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glMultMatrixf(const std::vector< float>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMultMatrixf", "([FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glMultMatrixf(const ::java::nio::FloatBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMultMatrixf", "(Ljava/nio/FloatBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glMultMatrixx(const std::vector< int32_t>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMultMatrixx", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glMultMatrixx(const ::java::nio::IntBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMultMatrixx", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glMultiTexCoord4f(int32_t arg0, float arg1, float arg2, float arg3, float arg4) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMultiTexCoord4f", "(IFFFF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL10::glMultiTexCoord4x(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMultiTexCoord4x", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL10::glNormal3f(float arg0, float arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glNormal3f", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glNormal3x(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glNormal3x", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glNormalPointer(int32_t arg0, int32_t arg1, const ::java::nio::Buffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glNormalPointer", "(IILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glOrthof(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glOrthof", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void javax::microedition::khronos::opengles::GL10::glOrthox(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glOrthox", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void javax::microedition::khronos::opengles::GL10::glPixelStorei(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPixelStorei", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glPointSize(float arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointSize", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glPointSizex(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointSizex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glPolygonOffset(float arg0, float arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPolygonOffset", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glPolygonOffsetx(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPolygonOffsetx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glPopMatrix() const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPopMatrix", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::microedition::khronos::opengles::GL10::glPushMatrix() const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPushMatrix", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::microedition::khronos::opengles::GL10::glReadPixels(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, const ::java::nio::Buffer& arg6) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glReadPixels", "(IIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void javax::microedition::khronos::opengles::GL10::glRotatef(float arg0, float arg1, float arg2, float arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glRotatef", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glRotatex(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glRotatex", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glSampleCoverage(float arg0, bool arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glSampleCoverage", "(FZ)V");
    float _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glSampleCoveragex(int32_t arg0, bool arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glSampleCoveragex", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL10::glScalef(float arg0, float arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glScalef", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glScalex(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glScalex", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glScissor(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glScissor", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glShadeModel(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glShadeModel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glStencilFunc(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glStencilFunc", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glStencilMask(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glStencilMask", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL10::glStencilOp(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glStencilOp", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTexCoordPointer(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexCoordPointer", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glTexEnvf(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTexEnvfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glTexEnvfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTexEnvx(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTexEnvxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glTexEnvxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTexImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void javax::microedition::khronos::opengles::GL10::glTexParameterf(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterf", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTexParameterx(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterx", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTexSubImage2D(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::java::nio::Buffer& arg8) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void javax::microedition::khronos::opengles::GL10::glTranslatef(float arg0, float arg1, float arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTranslatef", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glTranslatex(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTranslatex", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL10::glVertexPointer(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glVertexPointer", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL10::glViewport(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10::_class) ::javax::microedition::khronos::opengles::GL10::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10");
    static jmethodID mid = java::jni->GetMethodID(_class, "glViewport", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetPointerv(int32_t arg0, const std::vector< ::java::nio::Buffer>& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetPointerv", "(I[Ljava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::nio::Buffer::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::nio::Buffer& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glBindBuffer(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBindBuffer", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glBufferData(int32_t arg0, int32_t arg1, const ::java::nio::Buffer& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBufferData", "(IILjava/nio/Buffer;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glBufferSubData(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glBufferSubData", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glClipPlanef(int32_t arg0, const std::vector< float>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClipPlanef", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glClipPlanef(int32_t arg0, const ::java::nio::FloatBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClipPlanef", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glClipPlanex(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClipPlanex", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glClipPlanex(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glClipPlanex", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glColor4ub(int8_t arg0, int8_t arg1, int8_t arg2, int8_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glColor4ub", "(BBBB)V");
    int8_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    int8_t _arg2 = arg2;
    int8_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glColorPointer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glColorPointer", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glDeleteBuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteBuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glDeleteBuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDeleteBuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glDrawElements(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawElements", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGenBuffers(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenBuffers", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGenBuffers(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGenBuffers", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glGetBooleanv(int32_t arg0, const std::vector< bool>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetBooleanv", "(I[ZI)V");
    int32_t _arg0 = arg0;
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetBooleanv(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetBooleanv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glGetBufferParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetBufferParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetBufferParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetBufferParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetClipPlanef(int32_t arg0, const std::vector< float>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetClipPlanef", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetClipPlanef(int32_t arg0, const ::java::nio::FloatBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetClipPlanef", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glGetClipPlanex(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetClipPlanex", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetClipPlanex(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetClipPlanex", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glGetFixedv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetFixedv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetFixedv(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetFixedv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glGetFloatv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetFloatv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetFloatv(int32_t arg0, const ::java::nio::FloatBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetFloatv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glGetLightfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetLightfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetLightfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetLightfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetLightxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetLightxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetLightxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetLightxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetMaterialfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetMaterialfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetMaterialfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetMaterialfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetMaterialxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetMaterialxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetMaterialxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetMaterialxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetTexEnviv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexEnviv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetTexEnviv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexEnviv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetTexEnvxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexEnvxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetTexEnvxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexEnvxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetTexParameterfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexParameterfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetTexParameterfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexParameterfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetTexParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetTexParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glGetTexParameterxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexParameterxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glGetTexParameterxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glGetTexParameterxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool javax::microedition::khronos::opengles::GL11::glIsBuffer(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glIsBuffer", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::microedition::khronos::opengles::GL11::glIsEnabled(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glIsEnabled", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::microedition::khronos::opengles::GL11::glIsTexture(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glIsTexture", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11::glNormalPointer(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glNormalPointer", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glPointParameterf(int32_t arg0, float arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointParameterf", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glPointParameterfv(int32_t arg0, const std::vector< float>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointParameterfv", "(I[FI)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glPointParameterfv(int32_t arg0, const ::java::nio::FloatBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointParameterfv", "(ILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glPointParameterx(int32_t arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointParameterx", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glPointParameterxv(int32_t arg0, const std::vector< int32_t>& arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointParameterxv", "(I[II)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glPointParameterxv(int32_t arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointParameterxv", "(ILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11::glPointSizePointerOES(int32_t arg0, int32_t arg1, const ::java::nio::Buffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glPointSizePointerOES", "(IILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glTexCoordPointer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexCoordPointer", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glTexEnvi(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnvi", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glTexEnviv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnviv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glTexEnviv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexEnviv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glTexParameterfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glTexParameterfv(int32_t arg0, int32_t arg1, const ::java::nio::FloatBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterfv", "(IILjava/nio/FloatBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glTexParameteri(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameteri", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glTexParameteriv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameteriv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glTexParameteriv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameteriv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glTexParameterxv(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterxv", "(II[II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11::glTexParameterxv(int32_t arg0, int32_t arg1, const ::java::nio::IntBuffer& arg2) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterxv", "(IILjava/nio/IntBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::microedition::khronos::opengles::GL11::glVertexPointer(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11::_class) ::javax::microedition::khronos::opengles::GL11::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11");
    static jmethodID mid = java::jni->GetMethodID(_class, "glVertexPointer", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t javax::microedition::khronos::opengles::GL10Ext::glQueryMatrixxOES(const std::vector< int32_t>& arg0, int32_t arg1, const std::vector< int32_t>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL10Ext::_class) ::javax::microedition::khronos::opengles::GL10Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glQueryMatrixxOES", "([II[II)I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t javax::microedition::khronos::opengles::GL10Ext::glQueryMatrixxOES(const ::java::nio::IntBuffer& arg0, const ::java::nio::IntBuffer& arg1) const {
    if (!::javax::microedition::khronos::opengles::GL10Ext::_class) ::javax::microedition::khronos::opengles::GL10Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL10Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glQueryMatrixxOES", "(Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11Ext::glTexParameterfv(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glTexParameterfv", "(II[FI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11Ext::glCurrentPaletteMatrixOES(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glCurrentPaletteMatrixOES", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexfOES(float arg0, float arg1, float arg2, float arg3, float arg4) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexfOES", "(FFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexfvOES(const std::vector< float>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexfvOES", "([FI)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexfvOES(const ::java::nio::FloatBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexfvOES", "(Ljava/nio/FloatBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexiOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexiOES", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexivOES(const std::vector< int32_t>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexivOES", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexivOES(const ::java::nio::IntBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexivOES", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexsOES(int16_t arg0, int16_t arg1, int16_t arg2, int16_t arg3, int16_t arg4) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexsOES", "(SSSSS)V");
    int16_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    int16_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    int16_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexsvOES(const std::vector< int16_t>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexsvOES", "([SI)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexsvOES(const ::java::nio::ShortBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexsvOES", "(Ljava/nio/ShortBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexxOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexxOES", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexxvOES(const std::vector< int32_t>& arg0, int32_t arg1) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexxvOES", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexxvOES(const ::java::nio::IntBuffer& arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glDrawTexxvOES", "(Ljava/nio/IntBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11Ext::glEnable(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glEnable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11Ext::glEnableClientState(int32_t arg0) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glEnableClientState", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::microedition::khronos::opengles::GL11Ext::glLoadPaletteFromModelViewMatrixOES() const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glLoadPaletteFromModelViewMatrixOES", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::microedition::khronos::opengles::GL11Ext::glMatrixIndexPointerOES(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMatrixIndexPointerOES", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11Ext::glMatrixIndexPointerOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glMatrixIndexPointerOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11Ext::glWeightPointerOES(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::nio::Buffer& arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glWeightPointerOES", "(IIILjava/nio/Buffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::microedition::khronos::opengles::GL11Ext::glWeightPointerOES(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::microedition::khronos::opengles::GL11Ext::_class) ::javax::microedition::khronos::opengles::GL11Ext::_class = java::fetch_class("javax/microedition/khronos/opengles/GL11Ext");
    static jmethodID mid = java::jni->GetMethodID(_class, "glWeightPointerOES", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

