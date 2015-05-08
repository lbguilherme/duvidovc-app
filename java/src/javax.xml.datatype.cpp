#include "java-core.hpp"
#include <memory>
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Number.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.math.BigDecimal.hpp"
#include "java.math.BigInteger.hpp"
#include "java.util.Calendar.hpp"
#include "java.util.Date.hpp"
#include "java.util.GregorianCalendar.hpp"
#include "java.util.Locale.hpp"
#include "java.util.TimeZone.hpp"
#include "javax.xml.datatype.DatatypeConfigurationException.hpp"
#include "javax.xml.datatype.DatatypeConstants.hpp"
#include "javax.xml.datatype.DatatypeFactory.hpp"
#include "javax.xml.datatype.Duration.hpp"
#include "javax.xml.datatype.XMLGregorianCalendar.hpp"
#include "javax.xml.namespace.QName.hpp"

jclass javax::xml::datatype::DatatypeConstants_Field::_class = nullptr;
jclass javax::xml::datatype::DatatypeFactory::_class = nullptr;
jclass javax::xml::datatype::DatatypeConfigurationException::_class = nullptr;
jclass javax::xml::datatype::Duration::_class = nullptr;
jclass javax::xml::datatype::XMLGregorianCalendar::_class = nullptr;
jclass javax::xml::datatype::DatatypeConstants::_class = nullptr;

::java::lang::String javax::xml::datatype::DatatypeConstants_Field::toString() const {
    if (!::javax::xml::datatype::DatatypeConstants_Field::_class) ::javax::xml::datatype::DatatypeConstants_Field::_class = java::fetch_class("javax/xml/datatype/DatatypeConstants$Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t javax::xml::datatype::DatatypeConstants_Field::getId() const {
    if (!::javax::xml::datatype::DatatypeConstants_Field::_class) ::javax::xml::datatype::DatatypeConstants_Field::_class = java::fetch_class("javax/xml/datatype/DatatypeConstants$Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::javax::xml::datatype::DatatypeFactory javax::xml::datatype::DatatypeFactory::newInstance(){
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "()Ljavax/xml/datatype/DatatypeFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::xml::datatype::DatatypeFactory _ret(ret);
    return _ret;
}

::javax::xml::datatype::DatatypeFactory javax::xml::datatype::DatatypeFactory::newInstance(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::xml::datatype::DatatypeFactory _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDuration(const ::java::lang::String& arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDuration", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDuration(int64_t arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDuration", "(J)Ljavax/xml/datatype/Duration;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDuration(bool arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2, const ::java::math::BigInteger& arg3, const ::java::math::BigInteger& arg4, const ::java::math::BigInteger& arg5, const ::java::math::BigDecimal& arg6) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDuration", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDuration(bool arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDuration", "(ZIIIIII)Ljavax/xml/datatype/Duration;");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationDayTime(const ::java::lang::String& arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationDayTime", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationDayTime(int64_t arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationDayTime", "(J)Ljavax/xml/datatype/Duration;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationDayTime(bool arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2, const ::java::math::BigInteger& arg3, const ::java::math::BigInteger& arg4) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationDayTime", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationDayTime(bool arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationDayTime", "(ZIIII)Ljavax/xml/datatype/Duration;");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationYearMonth(const ::java::lang::String& arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationYearMonth", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationYearMonth(int64_t arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationYearMonth", "(J)Ljavax/xml/datatype/Duration;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationYearMonth(bool arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationYearMonth", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::DatatypeFactory::newDurationYearMonth(bool arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDurationYearMonth", "(ZII)Ljavax/xml/datatype/Duration;");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendar() const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendar", "()Ljavax/xml/datatype/XMLGregorianCalendar;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendar(const ::java::lang::String& arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendar", "(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendar(const ::java::util::GregorianCalendar& arg0) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendar", "(Ljava/util/GregorianCalendar;)Ljavax/xml/datatype/XMLGregorianCalendar;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendar(const ::java::math::BigInteger& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, const ::java::math::BigDecimal& arg6, int32_t arg7) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendar", "(Ljava/math/BigInteger;IIIIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    int32_t _arg7 = arg7;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendar(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendar", "(IIIIIIII)Ljavax/xml/datatype/XMLGregorianCalendar;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendarDate(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendarDate", "(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendarTime(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendarTime", "(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendarTime(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::math::BigDecimal& arg3, int32_t arg4) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendarTime", "(IIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendarTime(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::javax::xml::datatype::DatatypeFactory::_class) ::javax::xml::datatype::DatatypeFactory::_class = java::fetch_class("javax/xml/datatype/DatatypeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newXMLGregorianCalendarTime", "(IIIII)Ljavax/xml/datatype/XMLGregorianCalendar;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::datatype::DatatypeConfigurationException::_class) ::javax::xml::datatype::DatatypeConfigurationException::_class = java::fetch_class("javax/xml/datatype/DatatypeConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::datatype::DatatypeConfigurationException::_class) ::javax::xml::datatype::DatatypeConfigurationException::_class = java::fetch_class("javax/xml/datatype/DatatypeConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::datatype::DatatypeConfigurationException::_class) ::javax::xml::datatype::DatatypeConfigurationException::_class = java::fetch_class("javax/xml/datatype/DatatypeConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::xml::datatype::DatatypeConfigurationException::_class) ::javax::xml::datatype::DatatypeConfigurationException::_class = java::fetch_class("javax/xml/datatype/DatatypeConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::xml::datatype::DatatypeConfigurationException::printStackTrace() const {
    if (!::javax::xml::datatype::DatatypeConfigurationException::_class) ::javax::xml::datatype::DatatypeConfigurationException::_class = java::fetch_class("javax/xml/datatype/DatatypeConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::datatype::DatatypeConfigurationException::printStackTrace(const ::java::io::PrintStream& arg0) const {
    if (!::javax::xml::datatype::DatatypeConfigurationException::_class) ::javax::xml::datatype::DatatypeConfigurationException::_class = java::fetch_class("javax/xml/datatype/DatatypeConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::DatatypeConfigurationException::printStackTrace(const ::java::io::PrintWriter& arg0) const {
    if (!::javax::xml::datatype::DatatypeConfigurationException::_class) ::javax::xml::datatype::DatatypeConfigurationException::_class = java::fetch_class("javax/xml/datatype/DatatypeConfigurationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::datatype::Duration::Duration() : ::java::lang::Object((jobject)0) {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::javax::xml::namespace_::QName javax::xml::datatype::Duration::getXMLSchemaType() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXMLSchemaType", "()Ljavax/xml/namespace/QName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::namespace_::QName _ret(ret);
    return _ret;
}

int32_t javax::xml::datatype::Duration::getSign() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSign", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::Duration::getYears() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYears", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::Duration::getMonths() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonths", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::Duration::getDays() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDays", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::Duration::getHours() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHours", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::Duration::getMinutes() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinutes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::Duration::getSeconds() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSeconds", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t javax::xml::datatype::Duration::getTimeInMillis(const ::java::util::Calendar& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeInMillis", "(Ljava/util/Calendar;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t javax::xml::datatype::Duration::getTimeInMillis(const ::java::util::Date& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeInMillis", "(Ljava/util/Date;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::lang::Number javax::xml::datatype::Duration::getField(const ::javax::xml::datatype::DatatypeConstants_Field& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getField", "(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Number _ret(ret);
    return _ret;
}

bool javax::xml::datatype::Duration::isSet(const ::javax::xml::datatype::DatatypeConstants_Field& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSet", "(Ljavax/xml/datatype/DatatypeConstants$Field;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::javax::xml::datatype::Duration javax::xml::datatype::Duration::add(const ::javax::xml::datatype::Duration& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

void javax::xml::datatype::Duration::addTo(const ::java::util::Calendar& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTo", "(Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::Duration::addTo(const ::java::util::Date& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTo", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::datatype::Duration javax::xml::datatype::Duration::subtract(const ::javax::xml::datatype::Duration& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "subtract", "(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::Duration::multiply(int32_t arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(I)Ljavax/xml/datatype/Duration;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::Duration::multiply(const ::java::math::BigDecimal& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::Duration::negate() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "negate", "()Ljavax/xml/datatype/Duration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

::javax::xml::datatype::Duration javax::xml::datatype::Duration::normalizeWith(const ::java::util::Calendar& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalizeWith", "(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::datatype::Duration _ret(ret);
    return _ret;
}

int32_t javax::xml::datatype::Duration::compare(const ::javax::xml::datatype::Duration& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljavax/xml/datatype/Duration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool javax::xml::datatype::Duration::isLongerThan(const ::javax::xml::datatype::Duration& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongerThan", "(Ljavax/xml/datatype/Duration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::xml::datatype::Duration::isShorterThan(const ::javax::xml::datatype::Duration& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShorterThan", "(Ljavax/xml/datatype/Duration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool javax::xml::datatype::Duration::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t javax::xml::datatype::Duration::hashCode() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::xml::datatype::Duration::toString() const {
    if (!::javax::xml::datatype::Duration::_class) ::javax::xml::datatype::Duration::_class = java::fetch_class("javax/xml/datatype/Duration");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::xml::datatype::XMLGregorianCalendar::XMLGregorianCalendar() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void javax::xml::datatype::XMLGregorianCalendar::clear() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::datatype::XMLGregorianCalendar::reset() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::xml::datatype::XMLGregorianCalendar::setYear(const ::java::math::BigInteger& arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setYear", "(Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setYear(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setYear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setMonth(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMonth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setDay(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDay", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setTimezone(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimezone", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setTime(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::xml::datatype::XMLGregorianCalendar::setHour(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHour", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setMinute(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinute", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setSecond(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSecond", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setMillisecond(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMillisecond", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setFractionalSecond(const ::java::math::BigDecimal& arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFractionalSecond", "(Ljava/math/BigDecimal;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::xml::datatype::XMLGregorianCalendar::setTime(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::math::BigDecimal& arg3) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(IIILjava/math/BigDecimal;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::xml::datatype::XMLGregorianCalendar::setTime(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::math::BigInteger javax::xml::datatype::XMLGregorianCalendar::getEon() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEon", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getYear() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYear", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger javax::xml::datatype::XMLGregorianCalendar::getEonAndYear() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEonAndYear", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getMonth() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getDay() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDay", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getTimezone() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimezone", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getHour() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHour", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getMinute() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinute", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getSecond() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSecond", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::xml::datatype::XMLGregorianCalendar::getMillisecond() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMillisecond", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigDecimal javax::xml::datatype::XMLGregorianCalendar::getFractionalSecond() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFractionalSecond", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

int32_t javax::xml::datatype::XMLGregorianCalendar::compare(const ::javax::xml::datatype::XMLGregorianCalendar& arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljavax/xml/datatype/XMLGregorianCalendar;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::javax::xml::datatype::XMLGregorianCalendar javax::xml::datatype::XMLGregorianCalendar::normalize() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalize", "()Ljavax/xml/datatype/XMLGregorianCalendar;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::datatype::XMLGregorianCalendar _ret(ret);
    return _ret;
}

bool javax::xml::datatype::XMLGregorianCalendar::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t javax::xml::datatype::XMLGregorianCalendar::hashCode() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::xml::datatype::XMLGregorianCalendar::toXMLFormat() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "toXMLFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::xml::namespace_::QName javax::xml::datatype::XMLGregorianCalendar::getXMLSchemaType() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXMLSchemaType", "()Ljavax/xml/namespace/QName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::xml::namespace_::QName _ret(ret);
    return _ret;
}

::java::lang::String javax::xml::datatype::XMLGregorianCalendar::toString() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::xml::datatype::XMLGregorianCalendar::isValid() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::xml::datatype::XMLGregorianCalendar::add(const ::javax::xml::datatype::Duration& arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljavax/xml/datatype/Duration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::GregorianCalendar javax::xml::datatype::XMLGregorianCalendar::toGregorianCalendar() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "toGregorianCalendar", "()Ljava/util/GregorianCalendar;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::GregorianCalendar _ret(ret);
    return _ret;
}

::java::util::GregorianCalendar javax::xml::datatype::XMLGregorianCalendar::toGregorianCalendar(const ::java::util::TimeZone& arg0, const ::java::util::Locale& arg1, const ::javax::xml::datatype::XMLGregorianCalendar& arg2) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "toGregorianCalendar", "(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::GregorianCalendar _ret(ret);
    return _ret;
}

::java::util::TimeZone javax::xml::datatype::XMLGregorianCalendar::getTimeZone(int32_t arg0) const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeZone", "(I)Ljava/util/TimeZone;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::TimeZone _ret(ret);
    return _ret;
}

::java::lang::Object javax::xml::datatype::XMLGregorianCalendar::clone() const {
    if (!::javax::xml::datatype::XMLGregorianCalendar::_class) ::javax::xml::datatype::XMLGregorianCalendar::_class = java::fetch_class("javax/xml/datatype/XMLGregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

