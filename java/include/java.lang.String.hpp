#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>
#include <QString>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace lang { class StringBuilder; } }
namespace java { namespace nio { namespace charset { class Charset; } } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace lang {
class String : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable,
               public virtual ::java::lang::CharSequence,
               public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit String(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::CharSequence(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    String(const ::java::lang::String& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    String(::java::lang::String&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    String(const char* utf) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {obj = java::jni->NewGlobalRef(java::jni->NewStringUTF(utf));}
    String(const QString& qstr) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {obj = java::jni->NewGlobalRef(java::jni->NewStringUTF(qstr.toUtf8().data()));}
    String(const QByteArray& qarr) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0) {obj = java::jni->NewGlobalRef(java::jni->NewStringUTF(qarr.data()));}
    operator QString() const {auto bytes = getBytes(); bytes.push_back(0); return QString::fromUtf8((const char*)bytes.data());}
    #pragma GCC diagnostic pop
    
    ::java::lang::String& operator=(const ::java::lang::String& x) {obj = x.obj; return *this;}
    ::java::lang::String& operator=(::java::lang::String&& x) {obj = std::move(x.obj); return *this;}
    
    String();
    String(const std::vector< int8_t>&);
    String(const std::vector< int8_t>&, int32_t);
    String(const std::vector< int8_t>&, int32_t, int32_t);
    String(const std::vector< int8_t>&, int32_t, int32_t, int32_t);
    String(const std::vector< int8_t>&, int32_t, int32_t, const ::java::lang::String&);
    String(const std::vector< int8_t>&, const ::java::lang::String&);
    String(const std::vector< int8_t>&, int32_t, int32_t, const ::java::nio::charset::Charset&);
    String(const std::vector< int8_t>&, const ::java::nio::charset::Charset&);
    String(const std::vector< uint16_t>&);
    String(const std::vector< uint16_t>&, int32_t, int32_t);
    String(const ::java::lang::StringBuffer&);
    String(const std::vector< int32_t>&, int32_t, int32_t);
    String(const ::java::lang::StringBuilder&);
    uint16_t charAt(int32_t) const;
    int32_t compareTo(const ::java::lang::String&) const;
    int32_t compareToIgnoreCase(const ::java::lang::String&) const;
    ::java::lang::String concat(const ::java::lang::String&) const;
    static ::java::lang::String copyValueOf(const std::vector< uint16_t>&);
    static ::java::lang::String copyValueOf(const std::vector< uint16_t>&, int32_t, int32_t);
    bool endsWith(const ::java::lang::String&) const;
    bool equals(const ::java::lang::Object&) const;
    bool equalsIgnoreCase(const ::java::lang::String&) const;
    void getBytes(int32_t, int32_t, const std::vector< int8_t>&, int32_t) const;
    std::vector< int8_t> getBytes() const;
    std::vector< int8_t> getBytes(const ::java::lang::String&) const;
    std::vector< int8_t> getBytes(const ::java::nio::charset::Charset&) const;
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const;
    int32_t hashCode() const;
    int32_t indexOf(int32_t) const;
    int32_t indexOf(int32_t, int32_t) const;
    int32_t indexOf(const ::java::lang::String&) const;
    int32_t indexOf(const ::java::lang::String&, int32_t) const;
    ::java::lang::String intern() const;
    bool isEmpty() const;
    int32_t lastIndexOf(int32_t) const;
    int32_t lastIndexOf(int32_t, int32_t) const;
    int32_t lastIndexOf(const ::java::lang::String&) const;
    int32_t lastIndexOf(const ::java::lang::String&, int32_t) const;
    int32_t length() const;
    bool regionMatches(int32_t, const ::java::lang::String&, int32_t, int32_t) const;
    bool regionMatches(bool, int32_t, const ::java::lang::String&, int32_t, int32_t) const;
    ::java::lang::String replace(uint16_t, uint16_t) const;
    ::java::lang::String replace(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&) const;
    bool startsWith(const ::java::lang::String&) const;
    bool startsWith(const ::java::lang::String&, int32_t) const;
    ::java::lang::String substring(int32_t) const;
    ::java::lang::String substring(int32_t, int32_t) const;
    std::vector< uint16_t> toCharArray() const;
    ::java::lang::String toLowerCase() const;
    ::java::lang::String toLowerCase(const ::java::util::Locale&) const;
    ::java::lang::String toString() const;
    ::java::lang::String toUpperCase() const;
    ::java::lang::String toUpperCase(const ::java::util::Locale&) const;
    ::java::lang::String trim() const;
    static ::java::lang::String valueOf(const std::vector< uint16_t>&);
    static ::java::lang::String valueOf(const std::vector< uint16_t>&, int32_t, int32_t);
    static ::java::lang::String valueOf(uint16_t);
    static ::java::lang::String valueOf(double);
    static ::java::lang::String valueOf(float);
    static ::java::lang::String valueOf(int32_t);
    static ::java::lang::String valueOf(int64_t);
    static ::java::lang::String valueOf(const ::java::lang::Object&);
    static ::java::lang::String valueOf(bool);
    bool contentEquals(const ::java::lang::StringBuffer&) const;
    bool contentEquals(const ::java::lang::CharSequence&) const;
    bool matches(const ::java::lang::String&) const;
    ::java::lang::String replaceAll(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String replaceFirst(const ::java::lang::String&, const ::java::lang::String&) const;
    std::vector< ::java::lang::String> split(const ::java::lang::String&) const;
    std::vector< ::java::lang::String> split(const ::java::lang::String&, int32_t) const;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const;
    int32_t codePointAt(int32_t) const;
    int32_t codePointBefore(int32_t) const;
    int32_t codePointCount(int32_t, int32_t) const;
    bool contains(const ::java::lang::CharSequence&) const;
    int32_t offsetByCodePoints(int32_t, int32_t) const;
    static ::java::lang::String format(const ::java::lang::String&, const std::vector< ::java::lang::Object>&);
    static ::java::lang::String format(const ::java::util::Locale&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


