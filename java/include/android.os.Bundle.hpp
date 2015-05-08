#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace util { class SparseArray; } }
namespace java { namespace io { class Serializable; } }
namespace java { namespace lang { class Byte; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace os {
class Bundle : public virtual ::java::lang::Object,
               public virtual ::android::os::Parcelable,
               public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Bundle(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Bundle(const ::android::os::Bundle& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Bundle(::android::os::Bundle&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Bundle& operator=(const ::android::os::Bundle& x) {obj = x.obj; return *this;}
    ::android::os::Bundle& operator=(::android::os::Bundle&& x) {obj = std::move(x.obj); return *this;}
    
    Bundle();
    Bundle(const ::java::lang::ClassLoader&);
    Bundle(int32_t);
    void setClassLoader(const ::java::lang::ClassLoader&) const ;
    ::java::lang::ClassLoader getClassLoader() const ;
    ::java::lang::Object clone() const ;
    int32_t size() const ;
    bool isEmpty() const ;
    void clear() const ;
    bool containsKey(const ::java::lang::String&) const ;
    ::java::lang::Object get(const ::java::lang::String&) const ;
    void remove(const ::java::lang::String&) const ;
    void putAll(const ::android::os::Bundle&) const ;
    ::java::util::Set keySet() const ;
    bool hasFileDescriptors() const ;
    void putBoolean(const ::java::lang::String&, bool) const ;
    void putByte(const ::java::lang::String&, int8_t) const ;
    void putChar(const ::java::lang::String&, uint16_t) const ;
    void putShort(const ::java::lang::String&, int16_t) const ;
    void putInt(const ::java::lang::String&, int32_t) const ;
    void putLong(const ::java::lang::String&, int64_t) const ;
    void putFloat(const ::java::lang::String&, float) const ;
    void putDouble(const ::java::lang::String&, double) const ;
    void putString(const ::java::lang::String&, const ::java::lang::String&) const ;
    void putCharSequence(const ::java::lang::String&, const ::java::lang::CharSequence&) const ;
    void putParcelable(const ::java::lang::String&, const ::android::os::Parcelable&) const ;
    void putParcelableArray(const ::java::lang::String&, const std::vector< ::android::os::Parcelable>&) const ;
    void putParcelableArrayList(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    void putSparseParcelableArray(const ::java::lang::String&, const ::android::util::SparseArray&) const ;
    void putIntegerArrayList(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    void putStringArrayList(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    void putCharSequenceArrayList(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    void putSerializable(const ::java::lang::String&, const ::java::io::Serializable&) const ;
    void putBooleanArray(const ::java::lang::String&, const std::vector< bool>&) const ;
    void putByteArray(const ::java::lang::String&, const std::vector< int8_t>&) const ;
    void putShortArray(const ::java::lang::String&, const std::vector< int16_t>&) const ;
    void putCharArray(const ::java::lang::String&, const std::vector< uint16_t>&) const ;
    void putIntArray(const ::java::lang::String&, const std::vector< int32_t>&) const ;
    void putLongArray(const ::java::lang::String&, const std::vector< int64_t>&) const ;
    void putFloatArray(const ::java::lang::String&, const std::vector< float>&) const ;
    void putDoubleArray(const ::java::lang::String&, const std::vector< double>&) const ;
    void putStringArray(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    void putCharSequenceArray(const ::java::lang::String&, const std::vector< ::java::lang::CharSequence>&) const ;
    void putBundle(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    bool getBoolean(const ::java::lang::String&) const ;
    bool getBoolean(const ::java::lang::String&, bool) const ;
    int8_t getByte(const ::java::lang::String&) const ;
    ::java::lang::Byte getByte(const ::java::lang::String&, int8_t) const ;
    uint16_t getChar(const ::java::lang::String&) const ;
    uint16_t getChar(const ::java::lang::String&, uint16_t) const ;
    int16_t getShort(const ::java::lang::String&) const ;
    int16_t getShort(const ::java::lang::String&, int16_t) const ;
    int32_t getInt(const ::java::lang::String&) const ;
    int32_t getInt(const ::java::lang::String&, int32_t) const ;
    int64_t getLong(const ::java::lang::String&) const ;
    int64_t getLong(const ::java::lang::String&, int64_t) const ;
    float getFloat(const ::java::lang::String&) const ;
    float getFloat(const ::java::lang::String&, float) const ;
    double getDouble(const ::java::lang::String&) const ;
    double getDouble(const ::java::lang::String&, double) const ;
    ::java::lang::String getString(const ::java::lang::String&) const ;
    ::java::lang::String getString(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::CharSequence getCharSequence(const ::java::lang::String&) const ;
    ::java::lang::CharSequence getCharSequence(const ::java::lang::String&, const ::java::lang::CharSequence&) const ;
    ::android::os::Bundle getBundle(const ::java::lang::String&) const ;
    ::android::os::Parcelable getParcelable(const ::java::lang::String&) const ;
    std::vector< ::android::os::Parcelable> getParcelableArray(const ::java::lang::String&) const ;
    ::java::util::ArrayList getParcelableArrayList(const ::java::lang::String&) const ;
    ::android::util::SparseArray getSparseParcelableArray(const ::java::lang::String&) const ;
    ::java::io::Serializable getSerializable(const ::java::lang::String&) const ;
    ::java::util::ArrayList getIntegerArrayList(const ::java::lang::String&) const ;
    ::java::util::ArrayList getStringArrayList(const ::java::lang::String&) const ;
    ::java::util::ArrayList getCharSequenceArrayList(const ::java::lang::String&) const ;
    std::vector< bool> getBooleanArray(const ::java::lang::String&) const ;
    std::vector< int8_t> getByteArray(const ::java::lang::String&) const ;
    std::vector< int16_t> getShortArray(const ::java::lang::String&) const ;
    std::vector< uint16_t> getCharArray(const ::java::lang::String&) const ;
    std::vector< int32_t> getIntArray(const ::java::lang::String&) const ;
    std::vector< int64_t> getLongArray(const ::java::lang::String&) const ;
    std::vector< float> getFloatArray(const ::java::lang::String&) const ;
    std::vector< double> getDoubleArray(const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getStringArray(const ::java::lang::String&) const ;
    std::vector< ::java::lang::CharSequence> getCharSequenceArray(const ::java::lang::String&) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;
    ::java::lang::String toString() const ;

};
}
}


