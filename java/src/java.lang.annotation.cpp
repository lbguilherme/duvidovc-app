#include "java-core.hpp"
#include <memory>
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.lang.annotation.Annotation.hpp"
#include "java.lang.annotation.AnnotationFormatError.hpp"
#include "java.lang.annotation.AnnotationTypeMismatchException.hpp"
#include "java.lang.annotation.Documented.hpp"
#include "java.lang.annotation.ElementType.hpp"
#include "java.lang.annotation.IncompleteAnnotationException.hpp"
#include "java.lang.annotation.Inherited.hpp"
#include "java.lang.annotation.Retention.hpp"
#include "java.lang.annotation.RetentionPolicy.hpp"
#include "java.lang.annotation.Target.hpp"
#include "java.lang.reflect.Method.hpp"

jclass java::lang::annotation::AnnotationFormatError::_class = nullptr;
jclass java::lang::annotation::RetentionPolicy::_class = nullptr;
jclass java::lang::annotation::ElementType::_class = nullptr;
jclass java::lang::annotation::IncompleteAnnotationException::_class = nullptr;
jclass java::lang::annotation::Annotation::_class = nullptr;
jclass java::lang::annotation::Documented::_class = nullptr;
jclass java::lang::annotation::Inherited::_class = nullptr;
jclass java::lang::annotation::Retention::_class = nullptr;
jclass java::lang::annotation::Target::_class = nullptr;
jclass java::lang::annotation::AnnotationTypeMismatchException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::annotation::AnnotationFormatError::AnnotationFormatError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::annotation::AnnotationFormatError::_class) ::java::lang::annotation::AnnotationFormatError::_class = java::fetch_class("java/lang/annotation/AnnotationFormatError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::annotation::AnnotationFormatError::AnnotationFormatError(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::annotation::AnnotationFormatError::_class) ::java::lang::annotation::AnnotationFormatError::_class = java::fetch_class("java/lang/annotation/AnnotationFormatError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::annotation::AnnotationFormatError::AnnotationFormatError(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::annotation::AnnotationFormatError::_class) ::java::lang::annotation::AnnotationFormatError::_class = java::fetch_class("java/lang/annotation/AnnotationFormatError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::annotation::RetentionPolicy> java::lang::annotation::RetentionPolicy::values(){
    if (!::java::lang::annotation::RetentionPolicy::_class) ::java::lang::annotation::RetentionPolicy::_class = java::fetch_class("java/lang/annotation/RetentionPolicy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/lang/annotation/RetentionPolicy;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::RetentionPolicy> _ret(rets, ::java::lang::annotation::RetentionPolicy((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::RetentionPolicy retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::RetentionPolicy java::lang::annotation::RetentionPolicy::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::annotation::RetentionPolicy::_class) ::java::lang::annotation::RetentionPolicy::_class = java::fetch_class("java/lang/annotation/RetentionPolicy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::annotation::RetentionPolicy _ret(ret);
    return _ret;
}

std::vector< ::java::lang::annotation::ElementType> java::lang::annotation::ElementType::values(){
    if (!::java::lang::annotation::ElementType::_class) ::java::lang::annotation::ElementType::_class = java::fetch_class("java/lang/annotation/ElementType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/lang/annotation/ElementType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::ElementType> _ret(rets, ::java::lang::annotation::ElementType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::ElementType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::ElementType java::lang::annotation::ElementType::valueOf(const ::java::lang::String& arg0){
    if (!::java::lang::annotation::ElementType::_class) ::java::lang::annotation::ElementType::_class = java::fetch_class("java/lang/annotation/ElementType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/lang/annotation/ElementType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::annotation::ElementType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::annotation::IncompleteAnnotationException::IncompleteAnnotationException(const ::java::lang::Class& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::annotation::IncompleteAnnotationException::_class) ::java::lang::annotation::IncompleteAnnotationException::_class = java::fetch_class("java/lang/annotation/IncompleteAnnotationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Class java::lang::annotation::IncompleteAnnotationException::annotationType() const {
    if (!::java::lang::annotation::IncompleteAnnotationException::_class) ::java::lang::annotation::IncompleteAnnotationException::_class = java::fetch_class("java/lang/annotation/IncompleteAnnotationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "annotationType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::String java::lang::annotation::IncompleteAnnotationException::elementName() const {
    if (!::java::lang::annotation::IncompleteAnnotationException::_class) ::java::lang::annotation::IncompleteAnnotationException::_class = java::fetch_class("java/lang/annotation/IncompleteAnnotationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "elementName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Class java::lang::annotation::Annotation::annotationType() const {
    if (!::java::lang::annotation::Annotation::_class) ::java::lang::annotation::Annotation::_class = java::fetch_class("java/lang/annotation/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "annotationType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

bool java::lang::annotation::Annotation::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::annotation::Annotation::_class) ::java::lang::annotation::Annotation::_class = java::fetch_class("java/lang/annotation/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::lang::annotation::Annotation::hashCode() const {
    if (!::java::lang::annotation::Annotation::_class) ::java::lang::annotation::Annotation::_class = java::fetch_class("java/lang/annotation/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::annotation::Annotation::toString() const {
    if (!::java::lang::annotation::Annotation::_class) ::java::lang::annotation::Annotation::_class = java::fetch_class("java/lang/annotation/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::annotation::RetentionPolicy java::lang::annotation::Retention::value() const {
    if (!::java::lang::annotation::Retention::_class) ::java::lang::annotation::Retention::_class = java::fetch_class("java/lang/annotation/Retention");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "()Ljava/lang/annotation/RetentionPolicy;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::annotation::RetentionPolicy _ret(ret);
    return _ret;
}

std::vector< ::java::lang::annotation::ElementType> java::lang::annotation::Target::value() const {
    if (!::java::lang::annotation::Target::_class) ::java::lang::annotation::Target::_class = java::fetch_class("java/lang/annotation/Target");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "()[Ljava/lang/annotation/ElementType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::ElementType> _ret(rets, ::java::lang::annotation::ElementType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::ElementType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::annotation::AnnotationTypeMismatchException::AnnotationTypeMismatchException(const ::java::lang::reflect::Method& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::annotation::AnnotationTypeMismatchException::_class) ::java::lang::annotation::AnnotationTypeMismatchException::_class = java::fetch_class("java/lang/annotation/AnnotationTypeMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/reflect/Method;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::reflect::Method java::lang::annotation::AnnotationTypeMismatchException::element() const {
    if (!::java::lang::annotation::AnnotationTypeMismatchException::_class) ::java::lang::annotation::AnnotationTypeMismatchException::_class = java::fetch_class("java/lang/annotation/AnnotationTypeMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/reflect/Method;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Method _ret(ret);
    return _ret;
}

::java::lang::String java::lang::annotation::AnnotationTypeMismatchException::foundType() const {
    if (!::java::lang::annotation::AnnotationTypeMismatchException::_class) ::java::lang::annotation::AnnotationTypeMismatchException::_class = java::fetch_class("java/lang/annotation/AnnotationTypeMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "foundType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

