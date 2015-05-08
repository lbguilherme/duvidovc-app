#include "java-core.hpp"
#include <java.lang.Thread.hpp>
#include <java.lang.ClassLoader.hpp>
#include <java.lang.String.hpp>
#include <java.lang.Class.hpp>

#include "vc.duvido.FacebookBridge.hpp"

#include <QFile>

namespace java {

static java::lang::ClassLoader class_loader(nullptr);
thread_local JNIEnv* jni;
JavaVM* vm;

void initialize() {
    if (!jni) {
        vm->GetEnv((void**)&jni, JNI_VERSION_1_6);
        vm->AttachCurrentThread(&jni, NULL);
    }
}

jclass fetch_class(const char* classname) {
    return (jclass)jni->NewGlobalRef(class_loader.loadClass(classname).obj);
}

}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void*) {
    java::vm = vm;
    vm->GetEnv((void**)&java::jni, JNI_VERSION_1_6);

    java::lang::ClassLoader::_class = (jclass)java::jni->NewGlobalRef((jobject)java::jni->FindClass("java/lang/ClassLoader"));
    java::lang::Thread::_class = (jclass)java::jni->NewGlobalRef((jobject)java::jni->FindClass("java/lang/Thread"));

    java::class_loader = java::lang::Thread::currentThread().getContextClassLoader();

    ::vc::duvido::FacebookBridge::jniInitializeNative();

    return JNI_VERSION_1_6;
}
