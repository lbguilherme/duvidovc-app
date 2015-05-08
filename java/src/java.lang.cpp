#include "java-core.hpp"
#include <memory>
#include "java.io.Console.hpp"
#include "java.io.File.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.AbstractMethodError.hpp"
#include "java.lang.AbstractStringBuilder.hpp"
#include "java.lang.Appendable.hpp"
#include "java.lang.ArithmeticException.hpp"
#include "java.lang.ArrayIndexOutOfBoundsException.hpp"
#include "java.lang.ArrayStoreException.hpp"
#include "java.lang.AssertionError.hpp"
#include "java.lang.Boolean.hpp"
#include "java.lang.Byte.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Character.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassCastException.hpp"
#include "java.lang.ClassCircularityError.hpp"
#include "java.lang.ClassFormatError.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.ClassNotFoundException.hpp"
#include "java.lang.CloneNotSupportedException.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Compiler.hpp"
#include "java.lang.Deprecated.hpp"
#include "java.lang.Double.hpp"
#include "java.lang.Enum.hpp"
#include "java.lang.EnumConstantNotPresentException.hpp"
#include "java.lang.Error.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.ExceptionInInitializerError.hpp"
#include "java.lang.Float.hpp"
#include "java.lang.IllegalAccessError.hpp"
#include "java.lang.IllegalAccessException.hpp"
#include "java.lang.IllegalArgumentException.hpp"
#include "java.lang.IllegalMonitorStateException.hpp"
#include "java.lang.IllegalStateException.hpp"
#include "java.lang.IllegalThreadStateException.hpp"
#include "java.lang.IncompatibleClassChangeError.hpp"
#include "java.lang.IndexOutOfBoundsException.hpp"
#include "java.lang.InheritableThreadLocal.hpp"
#include "java.lang.InstantiationError.hpp"
#include "java.lang.InstantiationException.hpp"
#include "java.lang.Integer.hpp"
#include "java.lang.InternalError.hpp"
#include "java.lang.InterruptedException.hpp"
#include "java.lang.Iterable.hpp"
#include "java.lang.LinkageError.hpp"
#include "java.lang.Long.hpp"
#include "java.lang.Math.hpp"
#include "java.lang.NegativeArraySizeException.hpp"
#include "java.lang.NoClassDefFoundError.hpp"
#include "java.lang.NoSuchFieldError.hpp"
#include "java.lang.NoSuchFieldException.hpp"
#include "java.lang.NoSuchMethodError.hpp"
#include "java.lang.NoSuchMethodException.hpp"
#include "java.lang.NullPointerException.hpp"
#include "java.lang.Number.hpp"
#include "java.lang.NumberFormatException.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.OutOfMemoryError.hpp"
#include "java.lang.Override.hpp"
#include "java.lang.Package.hpp"
#include "java.lang.Process.hpp"
#include "java.lang.ProcessBuilder.hpp"
#include "java.lang.Readable.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.Runtime.hpp"
#include "java.lang.RuntimeException.hpp"
#include "java.lang.RuntimePermission.hpp"
#include "java.lang.SecurityException.hpp"
#include "java.lang.SecurityManager.hpp"
#include "java.lang.Short.hpp"
#include "java.lang.StackOverflowError.hpp"
#include "java.lang.StackTraceElement.hpp"
#include "java.lang.StrictMath.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuffer.hpp"
#include "java.lang.StringBuilder.hpp"
#include "java.lang.StringIndexOutOfBoundsException.hpp"
#include "java.lang.SuppressWarnings.hpp"
#include "java.lang.System.hpp"
#include "java.lang.Thread.hpp"
#include "java.lang.ThreadDeath.hpp"
#include "java.lang.ThreadGroup.hpp"
#include "java.lang.ThreadLocal.hpp"
#include "java.lang.Throwable.hpp"
#include "java.lang.TypeNotPresentException.hpp"
#include "java.lang.UnknownError.hpp"
#include "java.lang.UnsatisfiedLinkError.hpp"
#include "java.lang.UnsupportedClassVersionError.hpp"
#include "java.lang.UnsupportedOperationException.hpp"
#include "java.lang.VerifyError.hpp"
#include "java.lang.VirtualMachineError.hpp"
#include "java.lang.Void.hpp"
#include "java.lang.annotation.Annotation.hpp"
#include "java.lang.reflect.Constructor.hpp"
#include "java.lang.reflect.Field.hpp"
#include "java.lang.reflect.Method.hpp"
#include "java.lang.reflect.Type.hpp"
#include "java.lang.reflect.TypeVariable.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.URL.hpp"
#include "java.nio.CharBuffer.hpp"
#include "java.nio.channels.Channel.hpp"
#include "java.nio.charset.Charset.hpp"
#include "java.security.Permission.hpp"
#include "java.security.ProtectionDomain.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.List.hpp"
#include "java.util.Locale.hpp"
#include "java.util.Map.hpp"
#include "java.util.Properties.hpp"

jclass java::lang::Package::_class = nullptr;
jclass java::lang::RuntimeException::_class = nullptr;
jclass java::lang::NoSuchFieldException::_class = nullptr;
jclass java::lang::Void::_class = nullptr;
jclass java::lang::ArrayIndexOutOfBoundsException::_class = nullptr;
jclass java::lang::Byte::_class = nullptr;
jclass java::lang::CloneNotSupportedException::_class = nullptr;
jclass java::lang::Thread::_class = nullptr;
jclass java::lang::Readable::_class = nullptr;
jclass java::lang::Thread_UncaughtExceptionHandler::_class = nullptr;
jclass java::lang::NegativeArraySizeException::_class = nullptr;
jclass java::lang::EnumConstantNotPresentException::_class = nullptr;
jclass java::lang::NumberFormatException::_class = nullptr;
jclass java::lang::Boolean::_class = nullptr;
jclass java::lang::InstantiationException::_class = nullptr;
jclass java::lang::StringBuffer::_class = nullptr;
jclass java::lang::Comparable::_class = nullptr;
jclass java::lang::StringBuilder::_class = nullptr;
jclass java::lang::IllegalThreadStateException::_class = nullptr;
jclass java::lang::Long::_class = nullptr;
jclass java::lang::IllegalMonitorStateException::_class = nullptr;
jclass java::lang::NullPointerException::_class = nullptr;
jclass java::lang::ClassCircularityError::_class = nullptr;
jclass java::lang::Error::_class = nullptr;
jclass java::lang::IllegalArgumentException::_class = nullptr;
jclass java::lang::Object::_class = nullptr;
jclass java::lang::NoClassDefFoundError::_class = nullptr;
jclass java::lang::ClassFormatError::_class = nullptr;
jclass java::lang::VirtualMachineError::_class = nullptr;
jclass java::lang::ThreadLocal::_class = nullptr;
jclass java::lang::ThreadGroup::_class = nullptr;
jclass java::lang::SuppressWarnings::_class = nullptr;
jclass java::lang::ArithmeticException::_class = nullptr;
jclass java::lang::InterruptedException::_class = nullptr;
jclass java::lang::Iterable::_class = nullptr;
jclass java::lang::Enum::_class = nullptr;
jclass java::lang::System::_class = nullptr;
jclass java::lang::Process::_class = nullptr;
jclass java::lang::Character::_class = nullptr;
jclass java::lang::Exception::_class = nullptr;
jclass java::lang::ClassLoader::_class = nullptr;
jclass java::lang::IncompatibleClassChangeError::_class = nullptr;
jclass java::lang::StackOverflowError::_class = nullptr;
jclass java::lang::Thread_State::_class = nullptr;
jclass java::lang::Short::_class = nullptr;
jclass java::lang::Runtime::_class = nullptr;
jclass java::lang::SecurityException::_class = nullptr;
jclass java::lang::ThreadDeath::_class = nullptr;
jclass java::lang::Math::_class = nullptr;
jclass java::lang::AbstractMethodError::_class = nullptr;
jclass java::lang::IllegalStateException::_class = nullptr;
jclass java::lang::Number::_class = nullptr;
jclass java::lang::IndexOutOfBoundsException::_class = nullptr;
jclass java::lang::InternalError::_class = nullptr;
jclass java::lang::AbstractStringBuilder::_class = nullptr;
jclass java::lang::CharSequence::_class = nullptr;
jclass java::lang::Runnable::_class = nullptr;
jclass java::lang::StringIndexOutOfBoundsException::_class = nullptr;
jclass java::lang::Cloneable::_class = nullptr;
jclass java::lang::Character_UnicodeBlock::_class = nullptr;
jclass java::lang::ArrayStoreException::_class = nullptr;
jclass java::lang::Appendable::_class = nullptr;
jclass java::lang::String::_class = nullptr;
jclass java::lang::InheritableThreadLocal::_class = nullptr;
jclass java::lang::Class::_class = nullptr;
jclass java::lang::NoSuchMethodException::_class = nullptr;
jclass java::lang::Character_Subset::_class = nullptr;
jclass java::lang::Float::_class = nullptr;
jclass java::lang::RuntimePermission::_class = nullptr;
jclass java::lang::LinkageError::_class = nullptr;
jclass java::lang::Throwable::_class = nullptr;
jclass java::lang::StrictMath::_class = nullptr;
jclass java::lang::ExceptionInInitializerError::_class = nullptr;
jclass java::lang::NoSuchMethodError::_class = nullptr;
jclass java::lang::StackTraceElement::_class = nullptr;
jclass java::lang::Double::_class = nullptr;
jclass java::lang::InstantiationError::_class = nullptr;
jclass java::lang::OutOfMemoryError::_class = nullptr;
jclass java::lang::UnsupportedClassVersionError::_class = nullptr;
jclass java::lang::UnknownError::_class = nullptr;
jclass java::lang::Compiler::_class = nullptr;
jclass java::lang::TypeNotPresentException::_class = nullptr;
jclass java::lang::IllegalAccessException::_class = nullptr;
jclass java::lang::Override::_class = nullptr;
jclass java::lang::NoSuchFieldError::_class = nullptr;
jclass java::lang::VerifyError::_class = nullptr;
jclass java::lang::ProcessBuilder::_class = nullptr;
jclass java::lang::Integer::_class = nullptr;
jclass java::lang::IllegalAccessError::_class = nullptr;
jclass java::lang::Deprecated::_class = nullptr;
jclass java::lang::AssertionError::_class = nullptr;
jclass java::lang::UnsatisfiedLinkError::_class = nullptr;
jclass java::lang::ClassNotFoundException::_class = nullptr;
jclass java::lang::SecurityManager::_class = nullptr;
jclass java::lang::ClassCastException::_class = nullptr;
jclass java::lang::UnsupportedOperationException::_class = nullptr;

::java::lang::annotation::Annotation java::lang::Package::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::Package::getAnnotations() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::Package::getDeclaredAnnotations() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::lang::Package::isAnnotationPresent(const ::java::lang::Class& arg0) const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::lang::Package::getImplementationTitle() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImplementationTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Package::getImplementationVendor() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImplementationVendor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Package::getImplementationVersion() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImplementationVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Package::getName() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Package java::lang::Package::getPackage(const ::java::lang::String& arg0){
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Package _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Package> java::lang::Package::getPackages(){
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPackages", "()[Ljava/lang/Package;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Package> _ret(rets, ::java::lang::Package((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Package retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::lang::Package::getSpecificationTitle() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpecificationTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Package::getSpecificationVendor() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpecificationVendor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Package::getSpecificationVersion() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpecificationVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::Package::hashCode() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::lang::Package::isCompatibleWith(const ::java::lang::String& arg0) const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCompatibleWith", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::Package::isSealed() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSealed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Package::isSealed(const ::java::net::URL& arg0) const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSealed", "(Ljava/net/URL;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::lang::Package::toString() const {
    if (!::java::lang::Package::_class) ::java::lang::Package::_class = java::fetch_class("java/lang/Package");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::RuntimeException::RuntimeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::RuntimeException::_class) ::java::lang::RuntimeException::_class = java::fetch_class("java/lang/RuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::RuntimeException::RuntimeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::RuntimeException::_class) ::java::lang::RuntimeException::_class = java::fetch_class("java/lang/RuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::RuntimeException::RuntimeException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::RuntimeException::_class) ::java::lang::RuntimeException::_class = java::fetch_class("java/lang/RuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::RuntimeException::RuntimeException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::RuntimeException::_class) ::java::lang::RuntimeException::_class = java::fetch_class("java/lang/RuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchFieldException::NoSuchFieldException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchFieldException::_class) ::java::lang::NoSuchFieldException::_class = java::fetch_class("java/lang/NoSuchFieldException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchFieldException::NoSuchFieldException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchFieldException::_class) ::java::lang::NoSuchFieldException::_class = java::fetch_class("java/lang/NoSuchFieldException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ArrayIndexOutOfBoundsException::_class) ::java::lang::ArrayIndexOutOfBoundsException::_class = java::fetch_class("java/lang/ArrayIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ArrayIndexOutOfBoundsException::_class) ::java::lang::ArrayIndexOutOfBoundsException::_class = java::fetch_class("java/lang/ArrayIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ArrayIndexOutOfBoundsException::_class) ::java::lang::ArrayIndexOutOfBoundsException::_class = java::fetch_class("java/lang/ArrayIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Byte::Byte(int8_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(B)V");
    int8_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Byte::Byte(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int8_t java::lang::Byte::byteValue() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValue", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int32_t java::lang::Byte::compareTo(const ::java::lang::Byte& arg0) const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Byte;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Byte java::lang::Byte::decode(const ::java::lang::String& arg0){
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;)Ljava/lang/Byte;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Byte _ret(ret);
    return _ret;
}

double java::lang::Byte::doubleValue() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

bool java::lang::Byte::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float java::lang::Byte::floatValue() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t java::lang::Byte::hashCode() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::Byte::intValue() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::lang::Byte::longValue() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int8_t java::lang::Byte::parseByte(const ::java::lang::String& arg0){
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseByte", "(Ljava/lang/String;)B");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticByteMethod(_class, mid, _arg0);
}

int8_t java::lang::Byte::parseByte(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseByte", "(Ljava/lang/String;I)B");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticByteMethod(_class, mid, _arg0, _arg1);
}

int16_t java::lang::Byte::shortValue() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValue", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String java::lang::Byte::toString() const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Byte::toString(int8_t arg0){
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(B)Ljava/lang/String;");
    int8_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Byte java::lang::Byte::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Byte;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Byte _ret(ret);
    return _ret;
}

::java::lang::Byte java::lang::Byte::valueOf(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Byte;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Byte _ret(ret);
    return _ret;
}

::java::lang::Byte java::lang::Byte::valueOf(int8_t arg0){
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(B)Ljava/lang/Byte;");
    int8_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Byte _ret(ret);
    return _ret;
}

int32_t java::lang::Byte::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Byte::_class) ::java::lang::Byte::_class = java::fetch_class("java/lang/Byte");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::CloneNotSupportedException::CloneNotSupportedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::CloneNotSupportedException::_class) ::java::lang::CloneNotSupportedException::_class = java::fetch_class("java/lang/CloneNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::CloneNotSupportedException::CloneNotSupportedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::CloneNotSupportedException::_class) ::java::lang::CloneNotSupportedException::_class = java::fetch_class("java/lang/CloneNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread() : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread(const ::java::lang::Runnable& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread(const ::java::lang::Runnable& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread(const ::java::lang::ThreadGroup& arg0, const ::java::lang::Runnable& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread(const ::java::lang::ThreadGroup& arg0, const ::java::lang::Runnable& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread(const ::java::lang::ThreadGroup& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Thread::Thread(const ::java::lang::ThreadGroup& arg0, const ::java::lang::Runnable& arg1, const ::java::lang::String& arg2, int64_t arg3) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int64_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

int32_t java::lang::Thread::activeCount(){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "activeCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void java::lang::Thread::checkAccess() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkAccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::lang::Thread::countStackFrames() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "countStackFrames", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Thread java::lang::Thread::currentThread(){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "currentThread", "()Ljava/lang/Thread;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::Thread _ret(ret);
    return _ret;
}

void java::lang::Thread::destroy() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Thread::dumpStack(){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpStack", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

int32_t java::lang::Thread::enumerate(const std::vector< ::java::lang::Thread>& arg0){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enumerate", "([Ljava/lang/Thread;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Thread::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Thread& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::util::Map java::lang::Thread::getAllStackTraces(){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllStackTraces", "()Ljava/util/Map;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::lang::ClassLoader java::lang::Thread::getContextClassLoader() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContextClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::lang::Thread_UncaughtExceptionHandler java::lang::Thread::getDefaultUncaughtExceptionHandler(){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::Thread_UncaughtExceptionHandler _ret(ret);
    return _ret;
}

int64_t java::lang::Thread::getId() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String java::lang::Thread::getName() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::Thread::getPriority() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPriority", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::StackTraceElement> java::lang::Thread::getStackTrace() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::StackTraceElement> _ret(rets, ::java::lang::StackTraceElement((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::StackTraceElement retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Thread_State java::lang::Thread::getState() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()Ljava/lang/Thread$State;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Thread_State _ret(ret);
    return _ret;
}

::java::lang::ThreadGroup java::lang::Thread::getThreadGroup() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ThreadGroup _ret(ret);
    return _ret;
}

::java::lang::Thread_UncaughtExceptionHandler java::lang::Thread::getUncaughtExceptionHandler() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Thread_UncaughtExceptionHandler _ret(ret);
    return _ret;
}

void java::lang::Thread::interrupt() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "interrupt", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::lang::Thread::interrupted(){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "interrupted", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool java::lang::Thread::isAlive() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAlive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Thread::isDaemon() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDaemon", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Thread::isInterrupted() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInterrupted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::lang::Thread::join() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "join", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Thread::join(int64_t arg0) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "join", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Thread::join(int64_t arg0, int32_t arg1) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "join", "(JI)V");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::Thread::resume() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "resume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Thread::run() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Thread::setContextClassLoader(const ::java::lang::ClassLoader& arg0) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContextClassLoader", "(Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Thread::setDaemon(bool arg0) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDaemon", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Thread::setDefaultUncaughtExceptionHandler(const ::java::lang::Thread_UncaughtExceptionHandler& arg0){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::Thread::setName(const ::java::lang::String& arg0) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Thread::setPriority(int32_t arg0) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPriority", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Thread::setUncaughtExceptionHandler(const ::java::lang::Thread_UncaughtExceptionHandler& arg0) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Thread::sleep(int64_t arg0){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sleep", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::Thread::sleep(int64_t arg0, int32_t arg1){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sleep", "(JI)V");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::lang::Thread::start() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Thread::stop() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Thread::stop(const ::java::lang::Throwable& arg0) const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Thread::suspend() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "suspend", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::lang::Thread::toString() const {
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::lang::Thread::yield(){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "yield", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

bool java::lang::Thread::holdsLock(const ::java::lang::Object& arg0){
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "holdsLock", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t java::lang::Readable::read(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::lang::Readable::_class) ::java::lang::Readable::_class = java::fetch_class("java/lang/Readable");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/CharBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void java::lang::Thread_UncaughtExceptionHandler::uncaughtException(const ::java::lang::Thread& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::java::lang::Thread_UncaughtExceptionHandler::_class) ::java::lang::Thread_UncaughtExceptionHandler::_class = java::fetch_class("java/lang/Thread$UncaughtExceptionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NegativeArraySizeException::NegativeArraySizeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NegativeArraySizeException::_class) ::java::lang::NegativeArraySizeException::_class = java::fetch_class("java/lang/NegativeArraySizeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NegativeArraySizeException::NegativeArraySizeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NegativeArraySizeException::_class) ::java::lang::NegativeArraySizeException::_class = java::fetch_class("java/lang/NegativeArraySizeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::EnumConstantNotPresentException::EnumConstantNotPresentException(const ::java::lang::Class& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::EnumConstantNotPresentException::_class) ::java::lang::EnumConstantNotPresentException::_class = java::fetch_class("java/lang/EnumConstantNotPresentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Class java::lang::EnumConstantNotPresentException::enumType() const {
    if (!::java::lang::EnumConstantNotPresentException::_class) ::java::lang::EnumConstantNotPresentException::_class = java::fetch_class("java/lang/EnumConstantNotPresentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "enumType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::String java::lang::EnumConstantNotPresentException::constantName() const {
    if (!::java::lang::EnumConstantNotPresentException::_class) ::java::lang::EnumConstantNotPresentException::_class = java::fetch_class("java/lang/EnumConstantNotPresentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "constantName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NumberFormatException::NumberFormatException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NumberFormatException::_class) ::java::lang::NumberFormatException::_class = java::fetch_class("java/lang/NumberFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NumberFormatException::NumberFormatException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NumberFormatException::_class) ::java::lang::NumberFormatException::_class = java::fetch_class("java/lang/NumberFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Boolean::Boolean(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Boolean::Boolean(bool arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::lang::Boolean::booleanValue() const {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "booleanValue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Boolean::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::lang::Boolean::compareTo(const ::java::lang::Boolean& arg0) const {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Boolean;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::Boolean::hashCode() const {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::Boolean::toString() const {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::Boolean::getBoolean(const ::java::lang::String& arg0){
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBoolean", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Boolean::parseBoolean(const ::java::lang::String& arg0){
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseBoolean", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String java::lang::Boolean::toString(bool arg0){
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(Z)Ljava/lang/String;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Boolean java::lang::Boolean::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Boolean _ret(ret);
    return _ret;
}

::java::lang::Boolean java::lang::Boolean::valueOf(bool arg0){
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Z)Ljava/lang/Boolean;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Boolean _ret(ret);
    return _ret;
}

int32_t java::lang::Boolean::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Boolean::_class) ::java::lang::Boolean::_class = java::fetch_class("java/lang/Boolean");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InstantiationException::InstantiationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::InstantiationException::_class) ::java::lang::InstantiationException::_class = java::fetch_class("java/lang/InstantiationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InstantiationException::InstantiationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::InstantiationException::_class) ::java::lang::InstantiationException::_class = java::fetch_class("java/lang/InstantiationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuffer::StringBuffer() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuffer::StringBuffer(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuffer::StringBuffer(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuffer::StringBuffer(const ::java::lang::CharSequence& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::StringBuffer java::lang::StringBuffer::append(bool arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Z)Ljava/lang/StringBuffer;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(uint16_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/lang/StringBuffer;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(double arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(D)Ljava/lang/StringBuffer;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(float arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(F)Ljava/lang/StringBuffer;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(I)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(int64_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(J)Ljava/lang/StringBuffer;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(const ::java::lang::Object& arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(const ::java::lang::String& arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(const ::java::lang::StringBuffer& arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(const std::vector< uint16_t>& arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([C)Ljava/lang/StringBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([CII)Ljava/lang/StringBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::appendCodePoint(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendCodePoint", "(I)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

uint16_t java::lang::StringBuffer::charAt(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuffer::codePointAt(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuffer::codePointBefore(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointBefore", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuffer::codePointCount(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointCount", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::StringBuffer java::lang::StringBuffer::delete_(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(II)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::deleteCharAt(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteCharAt", "(I)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

void java::lang::StringBuffer::ensureCapacity(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "ensureCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::StringBuffer::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::lang::StringBuffer::indexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, uint16_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IC)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, bool arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IZ)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(II)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, int64_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IJ)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, double arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ID)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, float arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IF)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(I[C)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, const std::vector< uint16_t>& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(I[CII)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::insert(int32_t arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

int32_t java::lang::StringBuffer::lastIndexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::StringBuffer::offsetByCodePoints(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetByCodePoints", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::StringBuffer java::lang::StringBuffer::replace(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::lang::StringBuffer::reverse() const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "reverse", "()Ljava/lang/StringBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

void java::lang::StringBuffer::setCharAt(int32_t arg0, uint16_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharAt", "(IC)V");
    int32_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::StringBuffer::setLength(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence java::lang::StringBuffer::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String java::lang::StringBuffer::substring(int32_t arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::StringBuffer::substring(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::StringBuffer::toString() const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::lang::StringBuffer::trimToSize() const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "trimToSize", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::lang::StringBuffer::lastIndexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuffer::indexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuffer::length() const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::StringBuffer::capacity() const {
    if (!::java::lang::StringBuffer::_class) ::java::lang::StringBuffer::_class = java::fetch_class("java/lang/StringBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "capacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::Comparable::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Comparable::_class) ::java::lang::Comparable::_class = java::fetch_class("java/lang/Comparable");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuilder::StringBuilder() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuilder::StringBuilder(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuilder::StringBuilder(const ::java::lang::CharSequence& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringBuilder::StringBuilder(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::StringBuilder java::lang::StringBuilder::append(bool arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Z)Ljava/lang/StringBuilder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(uint16_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/lang/StringBuilder;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(I)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(int64_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(J)Ljava/lang/StringBuilder;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(float arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(F)Ljava/lang/StringBuilder;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(double arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(D)Ljava/lang/StringBuilder;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(const ::java::lang::Object& arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(const ::java::lang::String& arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(const ::java::lang::StringBuffer& arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(const std::vector< uint16_t>& arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([C)Ljava/lang/StringBuilder;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([CII)Ljava/lang/StringBuilder;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::appendCodePoint(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendCodePoint", "(I)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::delete_(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(II)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::deleteCharAt(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteCharAt", "(I)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, bool arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IZ)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, uint16_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IC)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(II)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, int64_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IJ)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, float arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(IF)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, double arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ID)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(I[C)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, const std::vector< uint16_t>& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(I[CII)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::insert(int32_t arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::replace(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::StringBuilder java::lang::StringBuilder::reverse() const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "reverse", "()Ljava/lang/StringBuilder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::StringBuilder _ret(ret);
    return _ret;
}

::java::lang::String java::lang::StringBuilder::toString() const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::StringBuilder::offsetByCodePoints(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetByCodePoints", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::StringBuilder::codePointCount(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointCount", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::StringBuilder::codePointBefore(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointBefore", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuilder::codePointAt(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void java::lang::StringBuilder::trimToSize() const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "trimToSize", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::lang::StringBuilder::lastIndexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::StringBuilder::lastIndexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuilder::indexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::StringBuilder::indexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence java::lang::StringBuilder::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String java::lang::StringBuilder::substring(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::StringBuilder::substring(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::lang::StringBuilder::setLength(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::StringBuilder::setCharAt(int32_t arg0, uint16_t arg1) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharAt", "(IC)V");
    int32_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::StringBuilder::length() const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::lang::StringBuilder::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::lang::StringBuilder::ensureCapacity(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "ensureCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

uint16_t java::lang::StringBuilder::charAt(int32_t arg0) const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

int32_t java::lang::StringBuilder::capacity() const {
    if (!::java::lang::StringBuilder::_class) ::java::lang::StringBuilder::_class = java::fetch_class("java/lang/StringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "capacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalThreadStateException::IllegalThreadStateException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalThreadStateException::_class) ::java::lang::IllegalThreadStateException::_class = java::fetch_class("java/lang/IllegalThreadStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalThreadStateException::IllegalThreadStateException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalThreadStateException::_class) ::java::lang::IllegalThreadStateException::_class = java::fetch_class("java/lang/IllegalThreadStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Long::Long(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Long::Long(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int8_t java::lang::Long::byteValue() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValue", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int32_t java::lang::Long::compareTo(const ::java::lang::Long& arg0) const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Long;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Long java::lang::Long::decode(const ::java::lang::String& arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Long _ret(ret);
    return _ret;
}

double java::lang::Long::doubleValue() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

bool java::lang::Long::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float java::lang::Long::floatValue() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::java::lang::Long java::lang::Long::getLong(const ::java::lang::String& arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Ljava/lang/String;)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Long _ret(ret);
    return _ret;
}

::java::lang::Long java::lang::Long::getLong(const ::java::lang::String& arg0, int64_t arg1){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Ljava/lang/String;J)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Long _ret(ret);
    return _ret;
}

::java::lang::Long java::lang::Long::getLong(const ::java::lang::String& arg0, const ::java::lang::Long& arg1){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Long _ret(ret);
    return _ret;
}

int32_t java::lang::Long::hashCode() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::Long::intValue() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::lang::Long::longValue() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::lang::Long::parseLong(const ::java::lang::String& arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseLong", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t java::lang::Long::parseLong(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseLong", "(Ljava/lang/String;I)J");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

int16_t java::lang::Long::shortValue() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValue", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String java::lang::Long::toBinaryString(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toBinaryString", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Long::toHexString(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHexString", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Long::toOctalString(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toOctalString", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Long::toString() const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Long::toString(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Long::toString(int64_t arg0, int32_t arg1){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(JI)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Long java::lang::Long::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Long _ret(ret);
    return _ret;
}

::java::lang::Long java::lang::Long::valueOf(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Long _ret(ret);
    return _ret;
}

int64_t java::lang::Long::highestOneBit(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "highestOneBit", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t java::lang::Long::lowestOneBit(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lowestOneBit", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int32_t java::lang::Long::numberOfLeadingZeros(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "numberOfLeadingZeros", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Long::numberOfTrailingZeros(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "numberOfTrailingZeros", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Long::bitCount(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "bitCount", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int64_t java::lang::Long::rotateLeft(int64_t arg0, int32_t arg1){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rotateLeft", "(JI)J");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

int64_t java::lang::Long::rotateRight(int64_t arg0, int32_t arg1){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rotateRight", "(JI)J");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

int64_t java::lang::Long::reverseBytes(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverseBytes", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t java::lang::Long::reverse(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverse", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int32_t java::lang::Long::signum(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "signum", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::Long java::lang::Long::valueOf(int64_t arg0){
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(J)Ljava/lang/Long;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Long _ret(ret);
    return _ret;
}

int32_t java::lang::Long::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Long::_class) ::java::lang::Long::_class = java::fetch_class("java/lang/Long");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalMonitorStateException::IllegalMonitorStateException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalMonitorStateException::_class) ::java::lang::IllegalMonitorStateException::_class = java::fetch_class("java/lang/IllegalMonitorStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalMonitorStateException::IllegalMonitorStateException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalMonitorStateException::_class) ::java::lang::IllegalMonitorStateException::_class = java::fetch_class("java/lang/IllegalMonitorStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NullPointerException::NullPointerException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NullPointerException::_class) ::java::lang::NullPointerException::_class = java::fetch_class("java/lang/NullPointerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NullPointerException::NullPointerException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NullPointerException::_class) ::java::lang::NullPointerException::_class = java::fetch_class("java/lang/NullPointerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassCircularityError::ClassCircularityError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassCircularityError::_class) ::java::lang::ClassCircularityError::_class = java::fetch_class("java/lang/ClassCircularityError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassCircularityError::ClassCircularityError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassCircularityError::_class) ::java::lang::ClassCircularityError::_class = java::fetch_class("java/lang/ClassCircularityError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Error::Error() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Error::_class) ::java::lang::Error::_class = java::fetch_class("java/lang/Error");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Error::Error(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Error::_class) ::java::lang::Error::_class = java::fetch_class("java/lang/Error");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Error::Error(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Error::_class) ::java::lang::Error::_class = java::fetch_class("java/lang/Error");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Error::Error(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Error::_class) ::java::lang::Error::_class = java::fetch_class("java/lang/Error");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalArgumentException::IllegalArgumentException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalArgumentException::_class) ::java::lang::IllegalArgumentException::_class = java::fetch_class("java/lang/IllegalArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalArgumentException::IllegalArgumentException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalArgumentException::_class) ::java::lang::IllegalArgumentException::_class = java::fetch_class("java/lang/IllegalArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalArgumentException::IllegalArgumentException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalArgumentException::_class) ::java::lang::IllegalArgumentException::_class = java::fetch_class("java/lang/IllegalArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalArgumentException::IllegalArgumentException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalArgumentException::_class) ::java::lang::IllegalArgumentException::_class = java::fetch_class("java/lang/IllegalArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Object::Object() : ::java::lang::Object((jobject)0) {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::lang::Object::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Class java::lang::Object::getClass() const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

int32_t java::lang::Object::hashCode() const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::lang::Object::notify() const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "notify", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Object::notifyAll() const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::lang::Object::toString() const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::lang::Object::wait() const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "wait", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Object::wait(int64_t arg0) const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "wait", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Object::wait(int64_t arg0, int32_t arg1) const {
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    static jmethodID mid = java::jni->GetMethodID(_class, "wait", "(JI)V");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoClassDefFoundError::NoClassDefFoundError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoClassDefFoundError::_class) ::java::lang::NoClassDefFoundError::_class = java::fetch_class("java/lang/NoClassDefFoundError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoClassDefFoundError::NoClassDefFoundError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoClassDefFoundError::_class) ::java::lang::NoClassDefFoundError::_class = java::fetch_class("java/lang/NoClassDefFoundError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassFormatError::ClassFormatError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassFormatError::_class) ::java::lang::ClassFormatError::_class = java::fetch_class("java/lang/ClassFormatError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassFormatError::ClassFormatError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassFormatError::_class) ::java::lang::ClassFormatError::_class = java::fetch_class("java/lang/ClassFormatError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::VirtualMachineError::VirtualMachineError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::VirtualMachineError::_class) ::java::lang::VirtualMachineError::_class = java::fetch_class("java/lang/VirtualMachineError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::VirtualMachineError::VirtualMachineError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::VirtualMachineError::_class) ::java::lang::VirtualMachineError::_class = java::fetch_class("java/lang/VirtualMachineError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ThreadLocal::ThreadLocal() : ::java::lang::Object((jobject)0) {
    if (!::java::lang::ThreadLocal::_class) ::java::lang::ThreadLocal::_class = java::fetch_class("java/lang/ThreadLocal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::lang::ThreadLocal::get() const {
    if (!::java::lang::ThreadLocal::_class) ::java::lang::ThreadLocal::_class = java::fetch_class("java/lang/ThreadLocal");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::lang::ThreadLocal::set(const ::java::lang::Object& arg0) const {
    if (!::java::lang::ThreadLocal::_class) ::java::lang::ThreadLocal::_class = java::fetch_class("java/lang/ThreadLocal");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::ThreadLocal::remove() const {
    if (!::java::lang::ThreadLocal::_class) ::java::lang::ThreadLocal::_class = java::fetch_class("java/lang/ThreadLocal");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ThreadGroup::ThreadGroup(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Thread_UncaughtExceptionHandler((jobject)0) {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ThreadGroup::ThreadGroup(const ::java::lang::ThreadGroup& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Thread_UncaughtExceptionHandler((jobject)0) {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::lang::ThreadGroup::activeCount() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "activeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::ThreadGroup::activeGroupCount() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "activeGroupCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::lang::ThreadGroup::allowThreadSuspension(bool arg0) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "allowThreadSuspension", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::lang::ThreadGroup::checkAccess() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkAccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::ThreadGroup::destroy() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::lang::ThreadGroup::enumerate(const std::vector< ::java::lang::Thread>& arg0) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "enumerate", "([Ljava/lang/Thread;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Thread::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Thread& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::ThreadGroup::enumerate(const std::vector< ::java::lang::Thread>& arg0, bool arg1) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "enumerate", "([Ljava/lang/Thread;Z)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Thread::_class) ::java::lang::Thread::_class = java::fetch_class("java/lang/Thread");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Thread::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Thread& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::ThreadGroup::enumerate(const std::vector< ::java::lang::ThreadGroup>& arg0) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "enumerate", "([Ljava/lang/ThreadGroup;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::ThreadGroup::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::ThreadGroup& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::ThreadGroup::enumerate(const std::vector< ::java::lang::ThreadGroup>& arg0, bool arg1) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "enumerate", "([Ljava/lang/ThreadGroup;Z)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::ThreadGroup::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::ThreadGroup& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::ThreadGroup::getMaxPriority() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxPriority", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::ThreadGroup::getName() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::ThreadGroup java::lang::ThreadGroup::getParent() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Ljava/lang/ThreadGroup;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ThreadGroup _ret(ret);
    return _ret;
}

void java::lang::ThreadGroup::interrupt() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "interrupt", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::lang::ThreadGroup::isDaemon() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDaemon", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::ThreadGroup::isDestroyed() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDestroyed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::lang::ThreadGroup::list() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "list", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::lang::ThreadGroup::parentOf(const ::java::lang::ThreadGroup& arg0) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "parentOf", "(Ljava/lang/ThreadGroup;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::lang::ThreadGroup::resume() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "resume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::ThreadGroup::setDaemon(bool arg0) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDaemon", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::ThreadGroup::setMaxPriority(int32_t arg0) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxPriority", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::ThreadGroup::stop() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::ThreadGroup::suspend() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "suspend", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::lang::ThreadGroup::toString() const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::lang::ThreadGroup::uncaughtException(const ::java::lang::Thread& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::java::lang::ThreadGroup::_class) ::java::lang::ThreadGroup::_class = java::fetch_class("java/lang/ThreadGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::java::lang::String> java::lang::SuppressWarnings::value() const {
    if (!::java::lang::SuppressWarnings::_class) ::java::lang::SuppressWarnings::_class = java::fetch_class("java/lang/SuppressWarnings");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ArithmeticException::ArithmeticException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ArithmeticException::_class) ::java::lang::ArithmeticException::_class = java::fetch_class("java/lang/ArithmeticException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ArithmeticException::ArithmeticException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ArithmeticException::_class) ::java::lang::ArithmeticException::_class = java::fetch_class("java/lang/ArithmeticException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InterruptedException::InterruptedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::InterruptedException::_class) ::java::lang::InterruptedException::_class = java::fetch_class("java/lang/InterruptedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InterruptedException::InterruptedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::InterruptedException::_class) ::java::lang::InterruptedException::_class = java::fetch_class("java/lang/InterruptedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Iterator java::lang::Iterable::iterator() const {
    if (!::java::lang::Iterable::_class) ::java::lang::Iterable::_class = java::fetch_class("java/lang/Iterable");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Enum::name() const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "name", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::Enum::ordinal() const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "ordinal", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::Enum::toString() const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::Enum::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::lang::Enum::hashCode() const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::Enum::compareTo(const ::java::lang::Enum& arg0) const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Enum;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Class java::lang::Enum::getDeclaringClass() const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaringClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::Enum java::lang::Enum::valueOf(const ::java::lang::Class& arg0, const ::java::lang::String& arg1){
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Enum _ret(ret);
    return _ret;
}

int32_t java::lang::Enum::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void java::lang::System::setIn(const ::java::io::InputStream& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setIn", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::setOut(const ::java::io::PrintStream& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setOut", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::setErr(const ::java::io::PrintStream& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setErr", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::arraycopy(const ::java::lang::Object& arg0, int32_t arg1, const ::java::lang::Object& arg2, int32_t arg3, int32_t arg4){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "arraycopy", "(Ljava/lang/Object;ILjava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int64_t java::lang::System::currentTimeMillis(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "currentTimeMillis", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t java::lang::System::nanoTime(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nanoTime", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

void java::lang::System::exit(int32_t arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "exit", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::gc(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "gc", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

::java::lang::String java::lang::System::getenv(const ::java::lang::String& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getenv", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Map java::lang::System::getenv(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getenv", "()Ljava/util/Map;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::nio::channels::Channel java::lang::System::inheritedChannel(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "inheritedChannel", "()Ljava/nio/channels/Channel;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::channels::Channel _ret(ret);
    return _ret;
}

::java::util::Properties java::lang::System::getProperties(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProperties", "()Ljava/util/Properties;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Properties _ret(ret);
    return _ret;
}

::java::lang::String java::lang::System::getProperty(const ::java::lang::String& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::System::getProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::System::setProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::System::clearProperty(const ::java::lang::String& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::Console java::lang::System::console(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "console", "()Ljava/io/Console;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::Console _ret(ret);
    return _ret;
}

::java::lang::SecurityManager java::lang::System::getSecurityManager(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSecurityManager", "()Ljava/lang/SecurityManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::SecurityManager _ret(ret);
    return _ret;
}

int32_t java::lang::System::identityHashCode(const ::java::lang::Object& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "identityHashCode", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void java::lang::System::load(const ::java::lang::String& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "load", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::loadLibrary(const ::java::lang::String& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadLibrary", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::runFinalization(){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "runFinalization", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void java::lang::System::runFinalizersOnExit(bool arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "runFinalizersOnExit", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::setProperties(const ::java::util::Properties& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setProperties", "(Ljava/util/Properties;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::lang::System::setSecurityManager(const ::java::lang::SecurityManager& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSecurityManager", "(Ljava/lang/SecurityManager;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::String java::lang::System::mapLibraryName(const ::java::lang::String& arg0){
    if (!::java::lang::System::_class) ::java::lang::System::_class = java::fetch_class("java/lang/System");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Process::Process() : ::java::lang::Object((jobject)0) {
    if (!::java::lang::Process::_class) ::java::lang::Process::_class = java::fetch_class("java/lang/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::lang::Process::destroy() const {
    if (!::java::lang::Process::_class) ::java::lang::Process::_class = java::fetch_class("java/lang/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::lang::Process::exitValue() const {
    if (!::java::lang::Process::_class) ::java::lang::Process::_class = java::fetch_class("java/lang/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "exitValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::io::InputStream java::lang::Process::getErrorStream() const {
    if (!::java::lang::Process::_class) ::java::lang::Process::_class = java::fetch_class("java/lang/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream java::lang::Process::getInputStream() const {
    if (!::java::lang::Process::_class) ::java::lang::Process::_class = java::fetch_class("java/lang/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream java::lang::Process::getOutputStream() const {
    if (!::java::lang::Process::_class) ::java::lang::Process::_class = java::fetch_class("java/lang/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

int32_t java::lang::Process::waitFor() const {
    if (!::java::lang::Process::_class) ::java::lang::Process::_class = java::fetch_class("java/lang/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitFor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Character::Character(uint16_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(C)V");
    uint16_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

uint16_t java::lang::Character::charValue() const {
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetMethodID(_class, "charValue", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

int32_t java::lang::Character::compareTo(const ::java::lang::Character& arg0) const {
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Character;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Character java::lang::Character::valueOf(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(C)Ljava/lang/Character;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Character _ret(ret);
    return _ret;
}

bool java::lang::Character::isValidCodePoint(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isValidCodePoint", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isSupplementaryCodePoint(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSupplementaryCodePoint", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isHighSurrogate(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isHighSurrogate", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isLowSurrogate(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLowSurrogate", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isSurrogatePair(uint16_t arg0, uint16_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSurrogatePair", "(CC)Z");
    uint16_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::charCount(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "charCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::toCodePoint(uint16_t arg0, uint16_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toCodePoint", "(CC)I");
    uint16_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::codePointAt(const ::java::lang::CharSequence& arg0, int32_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointAt", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::codePointAt(const std::vector< uint16_t>& arg0, int32_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointAt", "([CI)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::codePointAt(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointAt", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t java::lang::Character::codePointBefore(const ::java::lang::CharSequence& arg0, int32_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointBefore", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::codePointBefore(const std::vector< uint16_t>& arg0, int32_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointBefore", "([CI)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::codePointBefore(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointBefore", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t java::lang::Character::toChars(int32_t arg0, const std::vector< uint16_t>& arg1, int32_t arg2){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toChars", "(I[CI)I");
    int32_t _arg0 = arg0;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

std::vector< uint16_t> java::lang::Character::toChars(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toChars", "(I)[C");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::lang::Character::codePointCount(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointCount", "(Ljava/lang/CharSequence;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t java::lang::Character::codePointCount(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "codePointCount", "([CII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t java::lang::Character::offsetByCodePoints(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "offsetByCodePoints", "(Ljava/lang/CharSequence;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t java::lang::Character::offsetByCodePoints(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "offsetByCodePoints", "([CIIII)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t java::lang::Character::digit(uint16_t arg0, int32_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "digit", "(CI)I");
    uint16_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::digit(int32_t arg0, int32_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "digit", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool java::lang::Character::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

uint16_t java::lang::Character::forDigit(int32_t arg0, int32_t arg1){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "forDigit", "(II)C");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticCharMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Character::getNumericValue(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNumericValue", "(C)I");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::getNumericValue(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNumericValue", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::getType(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getType", "(C)I");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::getType(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int8_t java::lang::Character::getDirectionality(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDirectionality", "(C)B");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticByteMethod(_class, mid, _arg0);
}

int8_t java::lang::Character::getDirectionality(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDirectionality", "(I)B");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticByteMethod(_class, mid, _arg0);
}

bool java::lang::Character::isMirrored(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isMirrored", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isMirrored(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isMirrored", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::hashCode() const {
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::lang::Character::isDefined(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDefined", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isDefined(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDefined", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isDigit(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDigit", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isDigit(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDigit", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isIdentifierIgnorable(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIdentifierIgnorable", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isIdentifierIgnorable(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIdentifierIgnorable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isISOControl(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isISOControl", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isISOControl(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isISOControl", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isJavaIdentifierPart(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isJavaIdentifierPart", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isJavaIdentifierPart(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isJavaIdentifierPart", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isJavaIdentifierStart(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isJavaIdentifierStart", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isJavaIdentifierStart(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isJavaIdentifierStart", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isJavaLetter(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isJavaLetter", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isJavaLetterOrDigit(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isJavaLetterOrDigit", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isLetter(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLetter", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isLetter(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLetter", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isLetterOrDigit(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLetterOrDigit", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isLetterOrDigit(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLetterOrDigit", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isLowerCase(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLowerCase", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isLowerCase(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLowerCase", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isSpace(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSpace", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isSpaceChar(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSpaceChar", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isSpaceChar(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSpaceChar", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isTitleCase(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isTitleCase", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isTitleCase(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isTitleCase", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isUnicodeIdentifierPart(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isUnicodeIdentifierPart", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isUnicodeIdentifierPart(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isUnicodeIdentifierPart", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isUnicodeIdentifierStart(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isUnicodeIdentifierStart", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isUnicodeIdentifierStart(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isUnicodeIdentifierStart", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isUpperCase(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isUpperCase", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isUpperCase(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isUpperCase", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isWhitespace(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isWhitespace", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Character::isWhitespace(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isWhitespace", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

uint16_t java::lang::Character::reverseBytes(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverseBytes", "(C)C");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticCharMethod(_class, mid, _arg0);
}

uint16_t java::lang::Character::toLowerCase(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toLowerCase", "(C)C");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticCharMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::toLowerCase(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toLowerCase", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::String java::lang::Character::toString() const {
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Character::toString(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(C)Ljava/lang/String;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

uint16_t java::lang::Character::toTitleCase(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toTitleCase", "(C)C");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticCharMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::toTitleCase(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toTitleCase", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

uint16_t java::lang::Character::toUpperCase(uint16_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toUpperCase", "(C)C");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticCharMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::toUpperCase(int32_t arg0){
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toUpperCase", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Character::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Character::_class) ::java::lang::Character::_class = java::fetch_class("java/lang/Character");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Exception::Exception() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Exception::_class) ::java::lang::Exception::_class = java::fetch_class("java/lang/Exception");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Exception::Exception(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Exception::_class) ::java::lang::Exception::_class = java::fetch_class("java/lang/Exception");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Exception::Exception(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Exception::_class) ::java::lang::Exception::_class = java::fetch_class("java/lang/Exception");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Exception::Exception(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::Exception::_class) ::java::lang::Exception::_class = java::fetch_class("java/lang/Exception");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::ClassLoader java::lang::ClassLoader::getSystemClassLoader(){
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSystemClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::net::URL java::lang::ClassLoader::getSystemResource(const ::java::lang::String& arg0){
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::util::Enumeration java::lang::ClassLoader::getSystemResources(const ::java::lang::String& arg0){
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::io::InputStream java::lang::ClassLoader::getSystemResourceAsStream(const ::java::lang::String& arg0){
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::lang::ClassLoader java::lang::ClassLoader::getParent() const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::net::URL java::lang::ClassLoader::getResource(const ::java::lang::String& arg0) const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::util::Enumeration java::lang::ClassLoader::getResources(const ::java::lang::String& arg0) const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::io::InputStream java::lang::ClassLoader::getResourceAsStream(const ::java::lang::String& arg0) const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::lang::Class java::lang::ClassLoader::loadClass(const ::java::lang::String& arg0) const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Class _ret(ret);
    return _ret;
}

void java::lang::ClassLoader::setClassAssertionStatus(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassAssertionStatus", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::ClassLoader::setPackageAssertionStatus(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackageAssertionStatus", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::ClassLoader::setDefaultAssertionStatus(bool arg0) const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultAssertionStatus", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::ClassLoader::clearAssertionStatus() const {
    if (!::java::lang::ClassLoader::_class) ::java::lang::ClassLoader::_class = java::fetch_class("java/lang/ClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearAssertionStatus", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IncompatibleClassChangeError::_class) ::java::lang::IncompatibleClassChangeError::_class = java::fetch_class("java/lang/IncompatibleClassChangeError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IncompatibleClassChangeError::_class) ::java::lang::IncompatibleClassChangeError::_class = java::fetch_class("java/lang/IncompatibleClassChangeError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StackOverflowError::StackOverflowError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::StackOverflowError::_class) ::java::lang::StackOverflowError::_class = java::fetch_class("java/lang/StackOverflowError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StackOverflowError::StackOverflowError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::StackOverflowError::_class) ::java::lang::StackOverflowError::_class = java::fetch_class("java/lang/StackOverflowError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::Thread_State> java::lang::Thread_State::values(){
    if (!::java::lang::Thread_State::_class) ::java::lang::Thread_State::_class = java::fetch_class("java/lang/Thread$State");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/lang/Thread$State;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Thread_State> _ret(rets, ::java::lang::Thread_State((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Thread_State retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Thread_State java::lang::Thread_State::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Thread_State::_class) ::java::lang::Thread_State::_class = java::fetch_class("java/lang/Thread$State");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Thread$State;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Thread_State _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Short::Short(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Short::Short(int16_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(S)V");
    int16_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int8_t java::lang::Short::byteValue() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValue", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int32_t java::lang::Short::compareTo(const ::java::lang::Short& arg0) const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Short;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Short java::lang::Short::decode(const ::java::lang::String& arg0){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;)Ljava/lang/Short;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Short _ret(ret);
    return _ret;
}

double java::lang::Short::doubleValue() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

bool java::lang::Short::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float java::lang::Short::floatValue() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t java::lang::Short::hashCode() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::Short::intValue() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::lang::Short::longValue() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int16_t java::lang::Short::parseShort(const ::java::lang::String& arg0){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseShort", "(Ljava/lang/String;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticShortMethod(_class, mid, _arg0);
}

int16_t java::lang::Short::parseShort(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseShort", "(Ljava/lang/String;I)S");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticShortMethod(_class, mid, _arg0, _arg1);
}

int16_t java::lang::Short::shortValue() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValue", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String java::lang::Short::toString() const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Short::toString(int16_t arg0){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(S)Ljava/lang/String;");
    int16_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Short java::lang::Short::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Short;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Short _ret(ret);
    return _ret;
}

::java::lang::Short java::lang::Short::valueOf(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Short _ret(ret);
    return _ret;
}

int16_t java::lang::Short::reverseBytes(int16_t arg0){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverseBytes", "(S)S");
    int16_t _arg0 = arg0;
    return java::jni->CallStaticShortMethod(_class, mid, _arg0);
}

::java::lang::Short java::lang::Short::valueOf(int16_t arg0){
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(S)Ljava/lang/Short;");
    int16_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Short _ret(ret);
    return _ret;
}

int32_t java::lang::Short::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Short::_class) ::java::lang::Short::_class = java::fetch_class("java/lang/Short");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Process java::lang::Runtime::exec(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "exec", "([Ljava/lang/String;)Ljava/lang/Process;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Process _ret(ret);
    return _ret;
}

::java::lang::Process java::lang::Runtime::exec(const std::vector< ::java::lang::String>& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "exec", "([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Process _ret(ret);
    return _ret;
}

::java::lang::Process java::lang::Runtime::exec(const std::vector< ::java::lang::String>& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::io::File& arg2) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "exec", "([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Process _ret(ret);
    return _ret;
}

::java::lang::Process java::lang::Runtime::exec(const ::java::lang::String& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "exec", "(Ljava/lang/String;)Ljava/lang/Process;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Process _ret(ret);
    return _ret;
}

::java::lang::Process java::lang::Runtime::exec(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "exec", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Process _ret(ret);
    return _ret;
}

::java::lang::Process java::lang::Runtime::exec(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::io::File& arg2) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "exec", "(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Process _ret(ret);
    return _ret;
}

void java::lang::Runtime::exit(int32_t arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "exit", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::lang::Runtime::freeMemory() const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "freeMemory", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::lang::Runtime::gc() const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "gc", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Runtime java::lang::Runtime::getRuntime(){
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRuntime", "()Ljava/lang/Runtime;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::Runtime _ret(ret);
    return _ret;
}

void java::lang::Runtime::load(const ::java::lang::String& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Runtime::loadLibrary(const ::java::lang::String& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLibrary", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Runtime::runFinalization() const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "runFinalization", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Runtime::runFinalizersOnExit(bool arg0){
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "runFinalizersOnExit", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int64_t java::lang::Runtime::totalMemory() const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "totalMemory", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::lang::Runtime::traceInstructions(bool arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "traceInstructions", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Runtime::traceMethodCalls(bool arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "traceMethodCalls", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::InputStream java::lang::Runtime::getLocalizedInputStream(const ::java::io::InputStream& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalizedInputStream", "(Ljava/io/InputStream;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream java::lang::Runtime::getLocalizedOutputStream(const ::java::io::OutputStream& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalizedOutputStream", "(Ljava/io/OutputStream;)Ljava/io/OutputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

void java::lang::Runtime::addShutdownHook(const ::java::lang::Thread& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "addShutdownHook", "(Ljava/lang/Thread;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::lang::Runtime::removeShutdownHook(const ::java::lang::Thread& arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeShutdownHook", "(Ljava/lang/Thread;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::lang::Runtime::halt(int32_t arg0) const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "halt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::lang::Runtime::availableProcessors() const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "availableProcessors", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::lang::Runtime::maxMemory() const {
    if (!::java::lang::Runtime::_class) ::java::lang::Runtime::_class = java::fetch_class("java/lang/Runtime");
    static jmethodID mid = java::jni->GetMethodID(_class, "maxMemory", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::SecurityException::SecurityException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::SecurityException::_class) ::java::lang::SecurityException::_class = java::fetch_class("java/lang/SecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::SecurityException::SecurityException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::SecurityException::_class) ::java::lang::SecurityException::_class = java::fetch_class("java/lang/SecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::SecurityException::SecurityException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::SecurityException::_class) ::java::lang::SecurityException::_class = java::fetch_class("java/lang/SecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::SecurityException::SecurityException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::SecurityException::_class) ::java::lang::SecurityException::_class = java::fetch_class("java/lang/SecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ThreadDeath::ThreadDeath() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ThreadDeath::_class) ::java::lang::ThreadDeath::_class = java::fetch_class("java/lang/ThreadDeath");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

double java::lang::Math::abs(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::Math::abs(float arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

int32_t java::lang::Math::abs(int32_t arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int64_t java::lang::Math::abs(int64_t arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

double java::lang::Math::acos(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "acos", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::asin(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asin", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::atan(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "atan", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::atan2(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "atan2", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::Math::cbrt(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cbrt", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::ceil(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ceil", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::cos(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cos", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::cosh(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cosh", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::exp(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "exp", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::expm1(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "expm1", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::floor(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "floor", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::hypot(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hypot", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::Math::IEEEremainder(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "IEEEremainder", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::Math::log(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::log10(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log10", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::log1p(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log1p", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::max(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::Math::max(float arg0, float arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Math::max(int32_t arg0, int32_t arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int64_t java::lang::Math::max(int64_t arg0, int64_t arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(JJ)J");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

double java::lang::Math::min(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::Math::min(float arg0, float arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Math::min(int32_t arg0, int32_t arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int64_t java::lang::Math::min(int64_t arg0, int64_t arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(JJ)J");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

double java::lang::Math::pow(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "pow", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::Math::rint(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rint", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

int64_t java::lang::Math::round(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "round", "(D)J");
    double _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int32_t java::lang::Math::round(float arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "round", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

double java::lang::Math::signum(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "signum", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::Math::signum(float arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "signum", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

double java::lang::Math::sin(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sin", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::sinh(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sinh", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::sqrt(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sqrt", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::tan(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tan", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::tanh(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tanh", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::random(){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "random", "()D");
    return java::jni->CallStaticDoubleMethod(_class, mid);
}

double java::lang::Math::toRadians(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toRadians", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::toDegrees(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toDegrees", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::Math::ulp(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ulp", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::Math::ulp(float arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ulp", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

double java::lang::Math::copySign(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copySign", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::Math::copySign(float arg0, float arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copySign", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Math::getExponent(float arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExponent", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Math::getExponent(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExponent", "(D)I");
    double _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

double java::lang::Math::nextAfter(double arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextAfter", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::Math::nextAfter(float arg0, double arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextAfter", "(FD)F");
    float _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

double java::lang::Math::nextUp(double arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextUp", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::Math::nextUp(float arg0){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextUp", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

double java::lang::Math::scalb(double arg0, int32_t arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scalb", "(DI)D");
    double _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::Math::scalb(float arg0, int32_t arg1){
    if (!::java::lang::Math::_class) ::java::lang::Math::_class = java::fetch_class("java/lang/Math");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scalb", "(FI)F");
    float _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AbstractMethodError::AbstractMethodError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AbstractMethodError::_class) ::java::lang::AbstractMethodError::_class = java::fetch_class("java/lang/AbstractMethodError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AbstractMethodError::AbstractMethodError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AbstractMethodError::_class) ::java::lang::AbstractMethodError::_class = java::fetch_class("java/lang/AbstractMethodError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalStateException::IllegalStateException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalStateException::_class) ::java::lang::IllegalStateException::_class = java::fetch_class("java/lang/IllegalStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalStateException::IllegalStateException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalStateException::_class) ::java::lang::IllegalStateException::_class = java::fetch_class("java/lang/IllegalStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalStateException::IllegalStateException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalStateException::_class) ::java::lang::IllegalStateException::_class = java::fetch_class("java/lang/IllegalStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalStateException::IllegalStateException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalStateException::_class) ::java::lang::IllegalStateException::_class = java::fetch_class("java/lang/IllegalStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Number::Number() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::lang::Number::_class) ::java::lang::Number::_class = java::fetch_class("java/lang/Number");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int8_t java::lang::Number::byteValue() const {
    if (!::java::lang::Number::_class) ::java::lang::Number::_class = java::fetch_class("java/lang/Number");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValue", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

double java::lang::Number::doubleValue() const {
    if (!::java::lang::Number::_class) ::java::lang::Number::_class = java::fetch_class("java/lang/Number");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

float java::lang::Number::floatValue() const {
    if (!::java::lang::Number::_class) ::java::lang::Number::_class = java::fetch_class("java/lang/Number");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t java::lang::Number::intValue() const {
    if (!::java::lang::Number::_class) ::java::lang::Number::_class = java::fetch_class("java/lang/Number");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::lang::Number::longValue() const {
    if (!::java::lang::Number::_class) ::java::lang::Number::_class = java::fetch_class("java/lang/Number");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int16_t java::lang::Number::shortValue() const {
    if (!::java::lang::Number::_class) ::java::lang::Number::_class = java::fetch_class("java/lang/Number");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValue", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IndexOutOfBoundsException::_class) ::java::lang::IndexOutOfBoundsException::_class = java::fetch_class("java/lang/IndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IndexOutOfBoundsException::_class) ::java::lang::IndexOutOfBoundsException::_class = java::fetch_class("java/lang/IndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InternalError::InternalError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::InternalError::_class) ::java::lang::InternalError::_class = java::fetch_class("java/lang/InternalError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InternalError::InternalError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::InternalError::_class) ::java::lang::InternalError::_class = java::fetch_class("java/lang/InternalError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::lang::AbstractStringBuilder::capacity() const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "capacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

uint16_t java::lang::AbstractStringBuilder::charAt(int32_t arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

void java::lang::AbstractStringBuilder::ensureCapacity(int32_t arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "ensureCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::AbstractStringBuilder::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::lang::AbstractStringBuilder::length() const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::lang::AbstractStringBuilder::setCharAt(int32_t arg0, uint16_t arg1) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharAt", "(IC)V");
    int32_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::AbstractStringBuilder::setLength(int32_t arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::lang::AbstractStringBuilder::substring(int32_t arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::AbstractStringBuilder::substring(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::AbstractStringBuilder::toString() const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence java::lang::AbstractStringBuilder::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t java::lang::AbstractStringBuilder::indexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::AbstractStringBuilder::indexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::AbstractStringBuilder::lastIndexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::AbstractStringBuilder::lastIndexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void java::lang::AbstractStringBuilder::trimToSize() const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "trimToSize", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::lang::AbstractStringBuilder::codePointAt(int32_t arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::AbstractStringBuilder::codePointBefore(int32_t arg0) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointBefore", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::AbstractStringBuilder::codePointCount(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointCount", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::AbstractStringBuilder::offsetByCodePoints(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::AbstractStringBuilder::_class) ::java::lang::AbstractStringBuilder::_class = java::fetch_class("java/lang/AbstractStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetByCodePoints", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::CharSequence::length() const {
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

uint16_t java::lang::CharSequence::charAt(int32_t arg0) const {
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

::java::lang::CharSequence java::lang::CharSequence::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String java::lang::CharSequence::toString() const {
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::lang::Runnable::run() const {
    if (!::java::lang::Runnable::_class) ::java::lang::Runnable::_class = java::fetch_class("java/lang/Runnable");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringIndexOutOfBoundsException::StringIndexOutOfBoundsException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::StringIndexOutOfBoundsException::_class) ::java::lang::StringIndexOutOfBoundsException::_class = java::fetch_class("java/lang/StringIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::StringIndexOutOfBoundsException::_class) ::java::lang::StringIndexOutOfBoundsException::_class = java::fetch_class("java/lang/StringIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::StringIndexOutOfBoundsException::_class) ::java::lang::StringIndexOutOfBoundsException::_class = java::fetch_class("java/lang/StringIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Character_UnicodeBlock java::lang::Character_UnicodeBlock::forName(const ::java::lang::String& arg0){
    if (!::java::lang::Character_UnicodeBlock::_class) ::java::lang::Character_UnicodeBlock::_class = java::fetch_class("java/lang/Character$UnicodeBlock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "forName", "(Ljava/lang/String;)Ljava/lang/Character$UnicodeBlock;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Character_UnicodeBlock _ret(ret);
    return _ret;
}

::java::lang::Character_UnicodeBlock java::lang::Character_UnicodeBlock::of(uint16_t arg0){
    if (!::java::lang::Character_UnicodeBlock::_class) ::java::lang::Character_UnicodeBlock::_class = java::fetch_class("java/lang/Character$UnicodeBlock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(C)Ljava/lang/Character$UnicodeBlock;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Character_UnicodeBlock _ret(ret);
    return _ret;
}

::java::lang::Character_UnicodeBlock java::lang::Character_UnicodeBlock::of(int32_t arg0){
    if (!::java::lang::Character_UnicodeBlock::_class) ::java::lang::Character_UnicodeBlock::_class = java::fetch_class("java/lang/Character$UnicodeBlock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(I)Ljava/lang/Character$UnicodeBlock;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Character_UnicodeBlock _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ArrayStoreException::ArrayStoreException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ArrayStoreException::_class) ::java::lang::ArrayStoreException::_class = java::fetch_class("java/lang/ArrayStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ArrayStoreException::ArrayStoreException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ArrayStoreException::_class) ::java::lang::ArrayStoreException::_class = java::fetch_class("java/lang/ArrayStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Appendable java::lang::Appendable::append(uint16_t arg0) const {
    if (!::java::lang::Appendable::_class) ::java::lang::Appendable::_class = java::fetch_class("java/lang/Appendable");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/lang/Appendable;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Appendable _ret(ret);
    return _ret;
}

::java::lang::Appendable java::lang::Appendable::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::lang::Appendable::_class) ::java::lang::Appendable::_class = java::fetch_class("java/lang/Appendable");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Appendable _ret(ret);
    return _ret;
}

::java::lang::Appendable java::lang::Appendable::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::lang::Appendable::_class) ::java::lang::Appendable::_class = java::fetch_class("java/lang/Appendable");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Appendable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BI)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BIII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BIILjava/lang/String;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BLjava/lang/String;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const ::java::nio::charset::Charset& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BIILjava/nio/charset/Charset;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int8_t>& arg0, const ::java::nio::charset::Charset& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BLjava/nio/charset/Charset;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< uint16_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const ::java::lang::StringBuffer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/StringBuffer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([III)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::String::String(const ::java::lang::StringBuilder& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/StringBuilder;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

uint16_t java::lang::String::charAt(int32_t arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

int32_t java::lang::String::compareTo(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::String::compareToIgnoreCase(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareToIgnoreCase", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::lang::String::concat(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "concat", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::copyValueOf(const std::vector< uint16_t>& arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyValueOf", "([C)Ljava/lang/String;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::copyValueOf(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyValueOf", "([CII)Ljava/lang/String;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::String::endsWith(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "endsWith", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::String::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::String::equalsIgnoreCase(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "equalsIgnoreCase", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::lang::String::getBytes(int32_t arg0, int32_t arg1, const std::vector< int8_t>& arg2, int32_t arg3) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(II[BI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

std::vector< int8_t> java::lang::String::getBytes() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::lang::String::getBytes(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::lang::String::getBytes(const ::java::nio::charset::Charset& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(Ljava/nio/charset/Charset;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::lang::String::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::lang::String::hashCode() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::String::indexOf(int32_t arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::String::indexOf(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::String::indexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::String::indexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::lang::String::intern() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "intern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::String::isEmpty() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::lang::String::lastIndexOf(int32_t arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::String::lastIndexOf(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::String::lastIndexOf(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::String::lastIndexOf(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::lang::String::length() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::lang::String::regionMatches(int32_t arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "regionMatches", "(ILjava/lang/String;II)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool java::lang::String::regionMatches(bool arg0, int32_t arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "regionMatches", "(ZILjava/lang/String;II)Z");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

::java::lang::String java::lang::String::replace(uint16_t arg0, uint16_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(CC)Ljava/lang/String;");
    uint16_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::replace(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::String::startsWith(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "startsWith", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::String::startsWith(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "startsWith", "(Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::lang::String::substring(int32_t arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::substring(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< uint16_t> java::lang::String::toCharArray() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "toCharArray", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::lang::String::toLowerCase() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "toLowerCase", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::toLowerCase(const ::java::util::Locale& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "toLowerCase", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::toString() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::toUpperCase() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "toUpperCase", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::toUpperCase(const ::java::util::Locale& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "toUpperCase", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::trim() const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "trim", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(const std::vector< uint16_t>& arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "([C)Ljava/lang/String;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "([CII)Ljava/lang/String;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(uint16_t arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(C)Ljava/lang/String;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(double arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(D)Ljava/lang/String;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(float arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(F)Ljava/lang/String;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(int32_t arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(int64_t arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(const ::java::lang::Object& arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::valueOf(bool arg0){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Z)Ljava/lang/String;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::String::contentEquals(const ::java::lang::StringBuffer& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "contentEquals", "(Ljava/lang/StringBuffer;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::String::contentEquals(const ::java::lang::CharSequence& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "contentEquals", "(Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::String::matches(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "matches", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::lang::String::replaceAll(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::replaceFirst(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::lang::String::split(const ::java::lang::String& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "split", "(Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::lang::String::split(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "split", "(Ljava/lang/String;I)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::CharSequence java::lang::String::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t java::lang::String::codePointAt(int32_t arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::String::codePointBefore(int32_t arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointBefore", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::lang::String::codePointCount(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "codePointCount", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool java::lang::String::contains(const ::java::lang::CharSequence& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::lang::String::offsetByCodePoints(int32_t arg0, int32_t arg1) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetByCodePoints", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::lang::String::format(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::String::format(const ::java::util::Locale& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::String::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InheritableThreadLocal::InheritableThreadLocal() : ::java::lang::Object((jobject)0), ::java::lang::ThreadLocal((jobject)0) {
    if (!::java::lang::InheritableThreadLocal::_class) ::java::lang::InheritableThreadLocal::_class = java::fetch_class("java/lang/InheritableThreadLocal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Class java::lang::Class::forName(const ::java::lang::String& arg0){
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "forName", "(Ljava/lang/String;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::Class java::lang::Class::forName(const ::java::lang::String& arg0, bool arg1, const ::java::lang::ClassLoader& arg2){
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "forName", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::Class _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Class> java::lang::Class::getClasses() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClasses", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::Annotation java::lang::Class::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::Class::getAnnotations() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::lang::Class::getCanonicalName() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanonicalName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::ClassLoader java::lang::Class::getClassLoader() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::lang::Class java::lang::Class::getComponentType() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponentType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::reflect::Constructor java::lang::Class::getConstructor(const std::vector< ::java::lang::Class>& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstructor", "([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Class& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::reflect::Constructor _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Constructor> java::lang::Class::getConstructors() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstructors", "()[Ljava/lang/reflect/Constructor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Constructor> _ret(rets, ::java::lang::reflect::Constructor((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Constructor retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::Class::getDeclaredAnnotations() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Class> java::lang::Class::getDeclaredClasses() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredClasses", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Constructor java::lang::Class::getDeclaredConstructor(const std::vector< ::java::lang::Class>& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredConstructor", "([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Class& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::reflect::Constructor _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Constructor> java::lang::Class::getDeclaredConstructors() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredConstructors", "()[Ljava/lang/reflect/Constructor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Constructor> _ret(rets, ::java::lang::reflect::Constructor((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Constructor retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Field java::lang::Class::getDeclaredField(const ::java::lang::String& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredField", "(Ljava/lang/String;)Ljava/lang/reflect/Field;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::reflect::Field _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Field> java::lang::Class::getDeclaredFields() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredFields", "()[Ljava/lang/reflect/Field;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Field> _ret(rets, ::java::lang::reflect::Field((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Field retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Method java::lang::Class::getDeclaredMethod(const ::java::lang::String& arg0, const std::vector< ::java::lang::Class>& arg1) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredMethod", "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Class& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::reflect::Method _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Method> java::lang::Class::getDeclaredMethods() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Method> _ret(rets, ::java::lang::reflect::Method((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Method retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Class java::lang::Class::getDeclaringClass() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaringClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::Class java::lang::Class::getEnclosingClass() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnclosingClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::reflect::Constructor java::lang::Class::getEnclosingConstructor() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnclosingConstructor", "()Ljava/lang/reflect/Constructor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Constructor _ret(ret);
    return _ret;
}

::java::lang::reflect::Method java::lang::Class::getEnclosingMethod() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnclosingMethod", "()Ljava/lang/reflect/Method;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Method _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::lang::Class::getEnumConstants() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnumConstants", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Field java::lang::Class::getField(const ::java::lang::String& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getField", "(Ljava/lang/String;)Ljava/lang/reflect/Field;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::reflect::Field _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Field> java::lang::Class::getFields() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFields", "()[Ljava/lang/reflect/Field;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Field> _ret(rets, ::java::lang::reflect::Field((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Field retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::reflect::Type> java::lang::Class::getGenericInterfaces() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericInterfaces", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Type java::lang::Class::getGenericSuperclass() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericSuperclass", "()Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Type _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Class> java::lang::Class::getInterfaces() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaces", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Method java::lang::Class::getMethod(const ::java::lang::String& arg0, const std::vector< ::java::lang::Class>& arg1) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Class& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::reflect::Method _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Method> java::lang::Class::getMethods() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethods", "()[Ljava/lang/reflect/Method;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Method> _ret(rets, ::java::lang::reflect::Method((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Method retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t java::lang::Class::getModifiers() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifiers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::Class::getName() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Class::getSimpleName() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSimpleName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::ProtectionDomain java::lang::Class::getProtectionDomain() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtectionDomain", "()Ljava/security/ProtectionDomain;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::ProtectionDomain _ret(ret);
    return _ret;
}

::java::net::URL java::lang::Class::getResource(const ::java::lang::String& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::io::InputStream java::lang::Class::getResourceAsStream(const ::java::lang::String& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::lang::Class::getSigners() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigners", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Class java::lang::Class::getSuperclass() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuperclass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::TypeVariable> java::lang::Class::getTypeParameters() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::TypeVariable> _ret(rets, ::java::lang::reflect::TypeVariable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::TypeVariable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::lang::Class::isAnnotation() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isAnnotationPresent(const ::java::lang::Class& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::Class::isAnonymousClass() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnonymousClass", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isArray() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isAssignableFrom(const ::java::lang::Class& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAssignableFrom", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::Class::isEnum() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnum", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isInstance(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInstance", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::Class::isInterface() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInterface", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isLocalClass() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLocalClass", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isMemberClass() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMemberClass", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isPrimitive() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPrimitive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Class::isSynthetic() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSynthetic", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::lang::Class::newInstance() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Class::toString() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Package java::lang::Class::getPackage() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackage", "()Ljava/lang/Package;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Package _ret(ret);
    return _ret;
}

bool java::lang::Class::desiredAssertionStatus() const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "desiredAssertionStatus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Class java::lang::Class::asSubclass(const ::java::lang::Class& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "asSubclass", "(Ljava/lang/Class;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::Object java::lang::Class::cast(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    static jmethodID mid = java::jni->GetMethodID(_class, "cast", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchMethodException::NoSuchMethodException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchMethodException::_class) ::java::lang::NoSuchMethodException::_class = java::fetch_class("java/lang/NoSuchMethodException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchMethodException::NoSuchMethodException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchMethodException::_class) ::java::lang::NoSuchMethodException::_class = java::fetch_class("java/lang/NoSuchMethodException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::lang::Character_Subset::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Character_Subset::_class) ::java::lang::Character_Subset::_class = java::fetch_class("java/lang/Character$Subset");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::lang::Character_Subset::hashCode() const {
    if (!::java::lang::Character_Subset::_class) ::java::lang::Character_Subset::_class = java::fetch_class("java/lang/Character$Subset");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::Character_Subset::toString() const {
    if (!::java::lang::Character_Subset::_class) ::java::lang::Character_Subset::_class = java::fetch_class("java/lang/Character$Subset");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Float::Float(float arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Float::Float(double arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(D)V");
    double _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Float::Float(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::lang::Float::compareTo(const ::java::lang::Float& arg0) const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Float;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int8_t java::lang::Float::byteValue() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValue", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

double java::lang::Float::doubleValue() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

bool java::lang::Float::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::lang::Float::floatToIntBits(float arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "floatToIntBits", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Float::floatToRawIntBits(float arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "floatToRawIntBits", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

float java::lang::Float::floatValue() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t java::lang::Float::hashCode() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float java::lang::Float::intBitsToFloat(int32_t arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "intBitsToFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

int32_t java::lang::Float::intValue() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::lang::Float::isInfinite() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInfinite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Float::isInfinite(float arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isInfinite", "(F)Z");
    float _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Float::isNaN() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNaN", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Float::isNaN(float arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNaN", "(F)Z");
    float _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int64_t java::lang::Float::longValue() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float java::lang::Float::parseFloat(const ::java::lang::String& arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseFloat", "(Ljava/lang/String;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

int16_t java::lang::Float::shortValue() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValue", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String java::lang::Float::toString() const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Float::toString(float arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(F)Ljava/lang/String;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Float java::lang::Float::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Float;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Float _ret(ret);
    return _ret;
}

int32_t java::lang::Float::compare(float arg0, float arg1){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compare", "(FF)I");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::java::lang::Float java::lang::Float::valueOf(float arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(F)Ljava/lang/Float;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Float _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Float::toHexString(float arg0){
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHexString", "(F)Ljava/lang/String;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::Float::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Float::_class) ::java::lang::Float::_class = java::fetch_class("java/lang/Float");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::RuntimePermission::RuntimePermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::lang::RuntimePermission::_class) ::java::lang::RuntimePermission::_class = java::fetch_class("java/lang/RuntimePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::RuntimePermission::RuntimePermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::lang::RuntimePermission::_class) ::java::lang::RuntimePermission::_class = java::fetch_class("java/lang/RuntimePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::lang::RuntimePermission::getActions() const {
    if (!::java::lang::RuntimePermission::_class) ::java::lang::RuntimePermission::_class = java::fetch_class("java/lang/RuntimePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::RuntimePermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::lang::RuntimePermission::_class) ::java::lang::RuntimePermission::_class = java::fetch_class("java/lang/RuntimePermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::LinkageError::LinkageError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::LinkageError::_class) ::java::lang::LinkageError::_class = java::fetch_class("java/lang/LinkageError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::LinkageError::LinkageError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::LinkageError::_class) ::java::lang::LinkageError::_class = java::fetch_class("java/lang/LinkageError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Throwable::Throwable() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Throwable::Throwable(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Throwable::Throwable(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Throwable java::lang::Throwable::fillInStackTrace() const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "fillInStackTrace", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Throwable::getMessage() const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Throwable::getLocalizedMessage() const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalizedMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::StackTraceElement> java::lang::Throwable::getStackTrace() const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::StackTraceElement> _ret(rets, ::java::lang::StackTraceElement((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::StackTraceElement retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::lang::Throwable::setStackTrace(const std::vector< ::java::lang::StackTraceElement>& arg0) const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStackTrace", "([Ljava/lang/StackTraceElement;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::StackTraceElement::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::StackTraceElement& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Throwable::printStackTrace() const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::Throwable::printStackTrace(const ::java::io::PrintStream& arg0) const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::Throwable::printStackTrace(const ::java::io::PrintWriter& arg0) const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::lang::Throwable::toString() const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Throwable java::lang::Throwable::initCause(const ::java::lang::Throwable& arg0) const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Throwable java::lang::Throwable::getCause() const {
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

double java::lang::StrictMath::abs(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::StrictMath::abs(float arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

int32_t java::lang::StrictMath::abs(int32_t arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int64_t java::lang::StrictMath::abs(int64_t arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "abs", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::acos(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "acos", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::asin(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asin", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::atan(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "atan", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::atan2(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "atan2", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::StrictMath::cbrt(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cbrt", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::ceil(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ceil", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::cosh(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cosh", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::cos(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cos", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::exp(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "exp", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::expm1(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "expm1", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::floor(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "floor", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::hypot(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hypot", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::StrictMath::IEEEremainder(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "IEEEremainder", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::StrictMath::log(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::log10(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log10", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::log1p(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log1p", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::max(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::StrictMath::max(float arg0, float arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::StrictMath::max(int32_t arg0, int32_t arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int64_t java::lang::StrictMath::max(int64_t arg0, int64_t arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(JJ)J");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

double java::lang::StrictMath::min(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::StrictMath::min(float arg0, float arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::StrictMath::min(int32_t arg0, int32_t arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int64_t java::lang::StrictMath::min(int64_t arg0, int64_t arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(JJ)J");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

double java::lang::StrictMath::pow(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "pow", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

double java::lang::StrictMath::random(){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "random", "()D");
    return java::jni->CallStaticDoubleMethod(_class, mid);
}

double java::lang::StrictMath::rint(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rint", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

int64_t java::lang::StrictMath::round(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "round", "(D)J");
    double _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int32_t java::lang::StrictMath::round(float arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "round", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::signum(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "signum", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::StrictMath::signum(float arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "signum", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::sinh(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sinh", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::sin(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sin", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::sqrt(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sqrt", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::tan(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tan", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::tanh(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tanh", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::toDegrees(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toDegrees", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::toRadians(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toRadians", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::ulp(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ulp", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::StrictMath::ulp(float arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ulp", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::copySign(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copySign", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::StrictMath::copySign(float arg0, float arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copySign", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::StrictMath::getExponent(float arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExponent", "(F)I");
    float _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::StrictMath::getExponent(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExponent", "(D)I");
    double _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::nextAfter(double arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextAfter", "(DD)D");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::StrictMath::nextAfter(float arg0, double arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextAfter", "(FD)F");
    float _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

double java::lang::StrictMath::nextUp(double arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextUp", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

float java::lang::StrictMath::nextUp(float arg0){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextUp", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

double java::lang::StrictMath::scalb(double arg0, int32_t arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scalb", "(DI)D");
    double _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::StrictMath::scalb(float arg0, int32_t arg1){
    if (!::java::lang::StrictMath::_class) ::java::lang::StrictMath::_class = java::fetch_class("java/lang/StrictMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scalb", "(FI)F");
    float _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ExceptionInInitializerError::ExceptionInInitializerError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ExceptionInInitializerError::_class) ::java::lang::ExceptionInInitializerError::_class = java::fetch_class("java/lang/ExceptionInInitializerError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ExceptionInInitializerError::ExceptionInInitializerError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ExceptionInInitializerError::_class) ::java::lang::ExceptionInInitializerError::_class = java::fetch_class("java/lang/ExceptionInInitializerError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ExceptionInInitializerError::ExceptionInInitializerError(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ExceptionInInitializerError::_class) ::java::lang::ExceptionInInitializerError::_class = java::fetch_class("java/lang/ExceptionInInitializerError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Throwable java::lang::ExceptionInInitializerError::getException() const {
    if (!::java::lang::ExceptionInInitializerError::_class) ::java::lang::ExceptionInInitializerError::_class = java::fetch_class("java/lang/ExceptionInInitializerError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Throwable java::lang::ExceptionInInitializerError::getCause() const {
    if (!::java::lang::ExceptionInInitializerError::_class) ::java::lang::ExceptionInInitializerError::_class = java::fetch_class("java/lang/ExceptionInInitializerError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchMethodError::NoSuchMethodError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchMethodError::_class) ::java::lang::NoSuchMethodError::_class = java::fetch_class("java/lang/NoSuchMethodError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchMethodError::NoSuchMethodError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchMethodError::_class) ::java::lang::NoSuchMethodError::_class = java::fetch_class("java/lang/NoSuchMethodError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::StackTraceElement::StackTraceElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

bool java::lang::StackTraceElement::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::lang::StackTraceElement::getClassName() const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::StackTraceElement::getFileName() const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::StackTraceElement::getLineNumber() const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::StackTraceElement::getMethodName() const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethodName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::StackTraceElement::hashCode() const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::lang::StackTraceElement::isNativeMethod() const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNativeMethod", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::lang::StackTraceElement::toString() const {
    if (!::java::lang::StackTraceElement::_class) ::java::lang::StackTraceElement::_class = java::fetch_class("java/lang/StackTraceElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Double::Double(double arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(D)V");
    double _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Double::Double(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::lang::Double::compareTo(const ::java::lang::Double& arg0) const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Double;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int8_t java::lang::Double::byteValue() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValue", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int64_t java::lang::Double::doubleToLongBits(double arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doubleToLongBits", "(D)J");
    double _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t java::lang::Double::doubleToRawLongBits(double arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doubleToRawLongBits", "(D)J");
    double _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

double java::lang::Double::doubleValue() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

bool java::lang::Double::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float java::lang::Double::floatValue() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t java::lang::Double::hashCode() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::Double::intValue() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::lang::Double::isInfinite() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInfinite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Double::isInfinite(double arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isInfinite", "(D)Z");
    double _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Double::isNaN() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNaN", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::Double::isNaN(double arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNaN", "(D)Z");
    double _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

double java::lang::Double::longBitsToDouble(int64_t arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "longBitsToDouble", "(J)D");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

int64_t java::lang::Double::longValue() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

double java::lang::Double::parseDouble(const ::java::lang::String& arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseDouble", "(Ljava/lang/String;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

int16_t java::lang::Double::shortValue() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValue", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String java::lang::Double::toString() const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Double::toString(double arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(D)Ljava/lang/String;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Double java::lang::Double::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Double;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Double _ret(ret);
    return _ret;
}

int32_t java::lang::Double::compare(double arg0, double arg1){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compare", "(DD)I");
    double _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::java::lang::Double java::lang::Double::valueOf(double arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(D)Ljava/lang/Double;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Double _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Double::toHexString(double arg0){
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHexString", "(D)Ljava/lang/String;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::lang::Double::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Double::_class) ::java::lang::Double::_class = java::fetch_class("java/lang/Double");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InstantiationError::InstantiationError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::InstantiationError::_class) ::java::lang::InstantiationError::_class = java::fetch_class("java/lang/InstantiationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::InstantiationError::InstantiationError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::InstantiationError::_class) ::java::lang::InstantiationError::_class = java::fetch_class("java/lang/InstantiationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::OutOfMemoryError::OutOfMemoryError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::OutOfMemoryError::_class) ::java::lang::OutOfMemoryError::_class = java::fetch_class("java/lang/OutOfMemoryError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::OutOfMemoryError::OutOfMemoryError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::OutOfMemoryError::_class) ::java::lang::OutOfMemoryError::_class = java::fetch_class("java/lang/OutOfMemoryError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsupportedClassVersionError::UnsupportedClassVersionError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::ClassFormatError((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsupportedClassVersionError::_class) ::java::lang::UnsupportedClassVersionError::_class = java::fetch_class("java/lang/UnsupportedClassVersionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsupportedClassVersionError::UnsupportedClassVersionError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::ClassFormatError((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsupportedClassVersionError::_class) ::java::lang::UnsupportedClassVersionError::_class = java::fetch_class("java/lang/UnsupportedClassVersionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnknownError::UnknownError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::UnknownError::_class) ::java::lang::UnknownError::_class = java::fetch_class("java/lang/UnknownError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnknownError::UnknownError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {
    if (!::java::lang::UnknownError::_class) ::java::lang::UnknownError::_class = java::fetch_class("java/lang/UnknownError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::lang::Compiler::command(const ::java::lang::Object& arg0){
    if (!::java::lang::Compiler::_class) ::java::lang::Compiler::_class = java::fetch_class("java/lang/Compiler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "command", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::lang::Compiler::compileClass(const ::java::lang::Class& arg0){
    if (!::java::lang::Compiler::_class) ::java::lang::Compiler::_class = java::fetch_class("java/lang/Compiler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compileClass", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::Compiler::compileClasses(const ::java::lang::String& arg0){
    if (!::java::lang::Compiler::_class) ::java::lang::Compiler::_class = java::fetch_class("java/lang/Compiler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compileClasses", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void java::lang::Compiler::disable(){
    if (!::java::lang::Compiler::_class) ::java::lang::Compiler::_class = java::fetch_class("java/lang/Compiler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "disable", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void java::lang::Compiler::enable(){
    if (!::java::lang::Compiler::_class) ::java::lang::Compiler::_class = java::fetch_class("java/lang/Compiler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enable", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::TypeNotPresentException::TypeNotPresentException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::TypeNotPresentException::_class) ::java::lang::TypeNotPresentException::_class = java::fetch_class("java/lang/TypeNotPresentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::lang::TypeNotPresentException::typeName() const {
    if (!::java::lang::TypeNotPresentException::_class) ::java::lang::TypeNotPresentException::_class = java::fetch_class("java/lang/TypeNotPresentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "typeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalAccessException::IllegalAccessException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalAccessException::_class) ::java::lang::IllegalAccessException::_class = java::fetch_class("java/lang/IllegalAccessException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalAccessException::IllegalAccessException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalAccessException::_class) ::java::lang::IllegalAccessException::_class = java::fetch_class("java/lang/IllegalAccessException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchFieldError::NoSuchFieldError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchFieldError::_class) ::java::lang::NoSuchFieldError::_class = java::fetch_class("java/lang/NoSuchFieldError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::NoSuchFieldError::NoSuchFieldError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::NoSuchFieldError::_class) ::java::lang::NoSuchFieldError::_class = java::fetch_class("java/lang/NoSuchFieldError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::VerifyError::VerifyError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::VerifyError::_class) ::java::lang::VerifyError::_class = java::fetch_class("java/lang/VerifyError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::VerifyError::VerifyError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::VerifyError::_class) ::java::lang::VerifyError::_class = java::fetch_class("java/lang/VerifyError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ProcessBuilder::ProcessBuilder(const std::vector< ::java::lang::String>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ProcessBuilder::ProcessBuilder(const ::java::util::List& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::List java::lang::ProcessBuilder::command() const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "command", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::ProcessBuilder java::lang::ProcessBuilder::command(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "command", "([Ljava/lang/String;)Ljava/lang/ProcessBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::ProcessBuilder _ret(ret);
    return _ret;
}

::java::lang::ProcessBuilder java::lang::ProcessBuilder::command(const ::java::util::List& arg0) const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "command", "(Ljava/util/List;)Ljava/lang/ProcessBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::ProcessBuilder _ret(ret);
    return _ret;
}

::java::io::File java::lang::ProcessBuilder::directory() const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "directory", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::lang::ProcessBuilder java::lang::ProcessBuilder::directory(const ::java::io::File& arg0) const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "directory", "(Ljava/io/File;)Ljava/lang/ProcessBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::ProcessBuilder _ret(ret);
    return _ret;
}

::java::util::Map java::lang::ProcessBuilder::environment() const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "environment", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

bool java::lang::ProcessBuilder::redirectErrorStream() const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "redirectErrorStream", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::ProcessBuilder java::lang::ProcessBuilder::redirectErrorStream(bool arg0) const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "redirectErrorStream", "(Z)Ljava/lang/ProcessBuilder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::ProcessBuilder _ret(ret);
    return _ret;
}

::java::lang::Process java::lang::ProcessBuilder::start() const {
    if (!::java::lang::ProcessBuilder::_class) ::java::lang::ProcessBuilder::_class = java::fetch_class("java/lang/ProcessBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()Ljava/lang/Process;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Process _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Integer::Integer(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::Integer::Integer(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int8_t java::lang::Integer::byteValue() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValue", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int32_t java::lang::Integer::compareTo(const ::java::lang::Integer& arg0) const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Integer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Integer java::lang::Integer::decode(const ::java::lang::String& arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;)Ljava/lang/Integer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

double java::lang::Integer::doubleValue() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

bool java::lang::Integer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float java::lang::Integer::floatValue() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::java::lang::Integer java::lang::Integer::getInteger(const ::java::lang::String& arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInteger", "(Ljava/lang/String;)Ljava/lang/Integer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

::java::lang::Integer java::lang::Integer::getInteger(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

::java::lang::Integer java::lang::Integer::getInteger(const ::java::lang::String& arg0, const ::java::lang::Integer& arg1){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInteger", "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

int32_t java::lang::Integer::hashCode() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::lang::Integer::intValue() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::lang::Integer::longValue() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::lang::Integer::parseInt(const ::java::lang::String& arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseInt", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::parseInt(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int16_t java::lang::Integer::shortValue() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValue", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String java::lang::Integer::toBinaryString(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toBinaryString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Integer::toHexString(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHexString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Integer::toOctalString(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toOctalString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Integer::toString() const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Integer::toString(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::lang::Integer::toString(int32_t arg0, int32_t arg1){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Integer java::lang::Integer::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/Integer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

::java::lang::Integer java::lang::Integer::valueOf(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Integer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

int32_t java::lang::Integer::highestOneBit(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "highestOneBit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::lowestOneBit(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lowestOneBit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::numberOfLeadingZeros(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "numberOfLeadingZeros", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::numberOfTrailingZeros(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "numberOfTrailingZeros", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::bitCount(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "bitCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::rotateLeft(int32_t arg0, int32_t arg1){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rotateLeft", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Integer::rotateRight(int32_t arg0, int32_t arg1){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rotateRight", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::Integer::reverseBytes(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverseBytes", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::reverse(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverse", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::lang::Integer::signum(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "signum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::Integer java::lang::Integer::valueOf(int32_t arg0){
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(I)Ljava/lang/Integer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

int32_t java::lang::Integer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::lang::Integer::_class) ::java::lang::Integer::_class = java::fetch_class("java/lang/Integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalAccessError::IllegalAccessError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalAccessError::_class) ::java::lang::IllegalAccessError::_class = java::fetch_class("java/lang/IllegalAccessError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::IllegalAccessError::IllegalAccessError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::IllegalAccessError::_class) ::java::lang::IllegalAccessError::_class = java::fetch_class("java/lang/IllegalAccessError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError(bool arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError(uint16_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(C)V");
    uint16_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError(float arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::AssertionError::AssertionError(double arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::AssertionError::_class) ::java::lang::AssertionError::_class = java::fetch_class("java/lang/AssertionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(D)V");
    double _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsatisfiedLinkError::UnsatisfiedLinkError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsatisfiedLinkError::_class) ::java::lang::UnsatisfiedLinkError::_class = java::fetch_class("java/lang/UnsatisfiedLinkError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsatisfiedLinkError::UnsatisfiedLinkError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsatisfiedLinkError::_class) ::java::lang::UnsatisfiedLinkError::_class = java::fetch_class("java/lang/UnsatisfiedLinkError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassNotFoundException::ClassNotFoundException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassNotFoundException::_class) ::java::lang::ClassNotFoundException::_class = java::fetch_class("java/lang/ClassNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassNotFoundException::ClassNotFoundException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassNotFoundException::_class) ::java::lang::ClassNotFoundException::_class = java::fetch_class("java/lang/ClassNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassNotFoundException::ClassNotFoundException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassNotFoundException::_class) ::java::lang::ClassNotFoundException::_class = java::fetch_class("java/lang/ClassNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Throwable java::lang::ClassNotFoundException::getException() const {
    if (!::java::lang::ClassNotFoundException::_class) ::java::lang::ClassNotFoundException::_class = java::fetch_class("java/lang/ClassNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Throwable java::lang::ClassNotFoundException::getCause() const {
    if (!::java::lang::ClassNotFoundException::_class) ::java::lang::ClassNotFoundException::_class = java::fetch_class("java/lang/ClassNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::SecurityManager::SecurityManager() : ::java::lang::Object((jobject)0) {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::lang::SecurityManager::checkAccept(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkAccept", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::SecurityManager::checkAccess(const ::java::lang::Thread& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkAccess", "(Ljava/lang/Thread;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkAccess(const ::java::lang::ThreadGroup& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkAccess", "(Ljava/lang/ThreadGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkConnect(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkConnect", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::SecurityManager::checkConnect(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkConnect", "(Ljava/lang/String;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::lang::SecurityManager::checkCreateClassLoader() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCreateClassLoader", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::SecurityManager::checkDelete(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkDelete", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkExec(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkExec", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkExit(int32_t arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkExit", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkLink(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkLink", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkListen(int32_t arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkListen", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkMemberAccess(const ::java::lang::Class& arg0, int32_t arg1) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkMemberAccess", "(Ljava/lang/Class;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::SecurityManager::checkMulticast(const ::java::net::InetAddress& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkMulticast", "(Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkMulticast(const ::java::net::InetAddress& arg0, int8_t arg1) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkMulticast", "(Ljava/net/InetAddress;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::SecurityManager::checkPackageAccess(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPackageAccess", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkPackageDefinition(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPackageDefinition", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkPropertiesAccess() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPropertiesAccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::SecurityManager::checkPropertyAccess(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPropertyAccess", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkRead(const ::java::io::FileDescriptor& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRead", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkRead(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRead", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkRead(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRead", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::SecurityManager::checkSecurityAccess(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkSecurityAccess", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkSetFactory() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkSetFactory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::lang::SecurityManager::checkTopLevelWindow(const ::java::lang::Object& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkTopLevelWindow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkSystemClipboardAccess() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkSystemClipboardAccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::SecurityManager::checkAwtEventQueueAccess() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkAwtEventQueueAccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::SecurityManager::checkPrintJobAccess() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPrintJobAccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::lang::SecurityManager::checkWrite(const ::java::io::FileDescriptor& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkWrite", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkWrite(const ::java::lang::String& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkWrite", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::lang::SecurityManager::getInCheck() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInCheck", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::ThreadGroup java::lang::SecurityManager::getThreadGroup() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ThreadGroup _ret(ret);
    return _ret;
}

::java::lang::Object java::lang::SecurityManager::getSecurityContext() const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSecurityContext", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::lang::SecurityManager::checkPermission(const ::java::security::Permission& arg0) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/security/Permission;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::lang::SecurityManager::checkPermission(const ::java::security::Permission& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::lang::SecurityManager::_class) ::java::lang::SecurityManager::_class = java::fetch_class("java/lang/SecurityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/security/Permission;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassCastException::ClassCastException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassCastException::_class) ::java::lang::ClassCastException::_class = java::fetch_class("java/lang/ClassCastException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::ClassCastException::ClassCastException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::ClassCastException::_class) ::java::lang::ClassCastException::_class = java::fetch_class("java/lang/ClassCastException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsupportedOperationException::UnsupportedOperationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsupportedOperationException::_class) ::java::lang::UnsupportedOperationException::_class = java::fetch_class("java/lang/UnsupportedOperationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsupportedOperationException::_class) ::java::lang::UnsupportedOperationException::_class = java::fetch_class("java/lang/UnsupportedOperationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsupportedOperationException::_class) ::java::lang::UnsupportedOperationException::_class = java::fetch_class("java/lang/UnsupportedOperationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::UnsupportedOperationException::_class) ::java::lang::UnsupportedOperationException::_class = java::fetch_class("java/lang/UnsupportedOperationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

