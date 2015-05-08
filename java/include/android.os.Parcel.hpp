#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class IInterface; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace os { class Parcelable_Creator; } }
namespace android { namespace util { class SparseArray; } }
namespace android { namespace util { class SparseBooleanArray; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class Serializable; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class HashMap; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace os {
class Parcel : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Parcel(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Parcel(const ::android::os::Parcel& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Parcel(::android::os::Parcel&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Parcel& operator=(const ::android::os::Parcel& x) {obj = x.obj; return *this;}
    ::android::os::Parcel& operator=(::android::os::Parcel&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::os::Parcel obtain();
    void recycle() const ;
    int32_t dataSize() const ;
    int32_t dataAvail() const ;
    int32_t dataPosition() const ;
    int32_t dataCapacity() const ;
    void setDataSize(int32_t) const ;
    void setDataPosition(int32_t) const ;
    void setDataCapacity(int32_t) const ;
    std::vector< int8_t> marshall() const ;
    void unmarshall(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void appendFrom(const ::android::os::Parcel&, int32_t, int32_t) const ;
    bool hasFileDescriptors() const ;
    void writeInterfaceToken(const ::java::lang::String&) const ;
    void enforceInterface(const ::java::lang::String&) const ;
    void writeByteArray(const std::vector< int8_t>&) const ;
    void writeByteArray(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void writeInt(int32_t) const ;
    void writeLong(int64_t) const ;
    void writeFloat(float) const ;
    void writeDouble(double) const ;
    void writeString(const ::java::lang::String&) const ;
    void writeStrongBinder(const ::android::os::IBinder&) const ;
    void writeStrongInterface(const ::android::os::IInterface&) const ;
    void writeFileDescriptor(const ::java::io::FileDescriptor&) const ;
    void writeByte(int8_t) const ;
    void writeMap(const ::java::util::Map&) const ;
    void writeBundle(const ::android::os::Bundle&) const ;
    void writeList(const ::java::util::List&) const ;
    void writeArray(const std::vector< ::java::lang::Object>&) const ;
    void writeSparseArray(const ::android::util::SparseArray&) const ;
    void writeSparseBooleanArray(const ::android::util::SparseBooleanArray&) const ;
    void writeBooleanArray(const std::vector< bool>&) const ;
    std::vector< bool> createBooleanArray() const ;
    void readBooleanArray(const std::vector< bool>&) const ;
    void writeCharArray(const std::vector< uint16_t>&) const ;
    std::vector< uint16_t> createCharArray() const ;
    void readCharArray(const std::vector< uint16_t>&) const ;
    void writeIntArray(const std::vector< int32_t>&) const ;
    std::vector< int32_t> createIntArray() const ;
    void readIntArray(const std::vector< int32_t>&) const ;
    void writeLongArray(const std::vector< int64_t>&) const ;
    std::vector< int64_t> createLongArray() const ;
    void readLongArray(const std::vector< int64_t>&) const ;
    void writeFloatArray(const std::vector< float>&) const ;
    std::vector< float> createFloatArray() const ;
    void readFloatArray(const std::vector< float>&) const ;
    void writeDoubleArray(const std::vector< double>&) const ;
    std::vector< double> createDoubleArray() const ;
    void readDoubleArray(const std::vector< double>&) const ;
    void writeStringArray(const std::vector< ::java::lang::String>&) const ;
    std::vector< ::java::lang::String> createStringArray() const ;
    void readStringArray(const std::vector< ::java::lang::String>&) const ;
    void writeBinderArray(const std::vector< ::android::os::IBinder>&) const ;
    std::vector< ::android::os::IBinder> createBinderArray() const ;
    void readBinderArray(const std::vector< ::android::os::IBinder>&) const ;
    void writeTypedList(const ::java::util::List&) const ;
    void writeStringList(const ::java::util::List&) const ;
    void writeBinderList(const ::java::util::List&) const ;
    void writeTypedArray(const std::vector< ::android::os::Parcelable>&, int32_t) const ;
    void writeValue(const ::java::lang::Object&) const ;
    void writeParcelable(const ::android::os::Parcelable&, int32_t) const ;
    void writeSerializable(const ::java::io::Serializable&) const ;
    void writeException(const ::java::lang::Exception&) const ;
    void writeNoException() const ;
    void readException() const ;
    void readException(int32_t, const ::java::lang::String&) const ;
    int32_t readInt() const ;
    int64_t readLong() const ;
    float readFloat() const ;
    double readDouble() const ;
    ::java::lang::String readString() const ;
    ::android::os::IBinder readStrongBinder() const ;
    ::android::os::ParcelFileDescriptor readFileDescriptor() const ;
    int8_t readByte() const ;
    void readMap(const ::java::util::Map&, const ::java::lang::ClassLoader&) const ;
    void readList(const ::java::util::List&, const ::java::lang::ClassLoader&) const ;
    ::java::util::HashMap readHashMap(const ::java::lang::ClassLoader&) const ;
    ::android::os::Bundle readBundle() const ;
    ::android::os::Bundle readBundle(const ::java::lang::ClassLoader&) const ;
    std::vector< int8_t> createByteArray() const ;
    void readByteArray(const std::vector< int8_t>&) const ;
    ::java::util::ArrayList readArrayList(const ::java::lang::ClassLoader&) const ;
    std::vector< ::java::lang::Object> readArray(const ::java::lang::ClassLoader&) const ;
    ::android::util::SparseArray readSparseArray(const ::java::lang::ClassLoader&) const ;
    ::android::util::SparseBooleanArray readSparseBooleanArray() const ;
    ::java::util::ArrayList createTypedArrayList(const ::android::os::Parcelable_Creator&) const ;
    void readTypedList(const ::java::util::List&, const ::android::os::Parcelable_Creator&) const ;
    ::java::util::ArrayList createStringArrayList() const ;
    ::java::util::ArrayList createBinderArrayList() const ;
    void readStringList(const ::java::util::List&) const ;
    void readBinderList(const ::java::util::List&) const ;
    std::vector< ::java::lang::Object> createTypedArray(const ::android::os::Parcelable_Creator&) const ;
    void readTypedArray(const std::vector< ::java::lang::Object>&, const ::android::os::Parcelable_Creator&) const ;
    void writeParcelableArray(const std::vector< ::android::os::Parcelable>&, int32_t) const ;
    ::java::lang::Object readValue(const ::java::lang::ClassLoader&) const ;
    ::android::os::Parcelable readParcelable(const ::java::lang::ClassLoader&) const ;
    std::vector< ::android::os::Parcelable> readParcelableArray(const ::java::lang::ClassLoader&) const ;
    ::java::io::Serializable readSerializable() const ;

};
}
}


