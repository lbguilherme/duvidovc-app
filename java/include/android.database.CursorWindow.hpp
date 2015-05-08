#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.sqlite.SQLiteClosable.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace database { class CharArrayBuffer; } }
namespace android { namespace database { class CursorWindow; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class CursorWindow : public virtual ::java::lang::Object,
                     public virtual ::android::database::sqlite::SQLiteClosable,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorWindow(jobject _obj) : ::java::lang::Object(_obj), ::android::database::sqlite::SQLiteClosable(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorWindow(const ::android::database::CursorWindow& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    CursorWindow(::android::database::CursorWindow&& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::CursorWindow& operator=(const ::android::database::CursorWindow& x) {obj = x.obj; return *this;}
    ::android::database::CursorWindow& operator=(::android::database::CursorWindow&& x) {obj = std::move(x.obj); return *this;}
    
    CursorWindow(const ::java::lang::String&);
    CursorWindow(bool);
    void close() const ;
    void clear() const ;
    int32_t getStartPosition() const ;
    void setStartPosition(int32_t) const ;
    int32_t getNumRows() const ;
    bool setNumColumns(int32_t) const ;
    bool allocRow() const ;
    void freeLastRow() const ;
    bool isNull(int32_t, int32_t) const ;
    bool isBlob(int32_t, int32_t) const ;
    bool isLong(int32_t, int32_t) const ;
    bool isFloat(int32_t, int32_t) const ;
    bool isString(int32_t, int32_t) const ;
    int32_t getType(int32_t, int32_t) const ;
    std::vector< int8_t> getBlob(int32_t, int32_t) const ;
    ::java::lang::String getString(int32_t, int32_t) const ;
    void copyStringToBuffer(int32_t, int32_t, const ::android::database::CharArrayBuffer&) const ;
    int64_t getLong(int32_t, int32_t) const ;
    double getDouble(int32_t, int32_t) const ;
    int16_t getShort(int32_t, int32_t) const ;
    int32_t getInt(int32_t, int32_t) const ;
    float getFloat(int32_t, int32_t) const ;
    bool putBlob(const std::vector< int8_t>&, int32_t, int32_t) const ;
    bool putString(const ::java::lang::String&, int32_t, int32_t) const ;
    bool putLong(int64_t, int32_t, int32_t) const ;
    bool putDouble(double, int32_t, int32_t) const ;
    bool putNull(int32_t, int32_t) const ;
    static ::android::database::CursorWindow newFromParcel(const ::android::os::Parcel&);
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}


