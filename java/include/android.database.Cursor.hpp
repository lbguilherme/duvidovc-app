#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class CharArrayBuffer; } }
namespace android { namespace database { class ContentObserver; } }
namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class Cursor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Cursor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Cursor(const ::android::database::Cursor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Cursor(::android::database::Cursor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::Cursor& operator=(const ::android::database::Cursor& x) {obj = x.obj; return *this;}
    ::android::database::Cursor& operator=(::android::database::Cursor&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getCount() const;
    int32_t getPosition() const;
    bool move(int32_t) const;
    bool moveToPosition(int32_t) const;
    bool moveToFirst() const;
    bool moveToLast() const;
    bool moveToNext() const;
    bool moveToPrevious() const;
    bool isFirst() const;
    bool isLast() const;
    bool isBeforeFirst() const;
    bool isAfterLast() const;
    int32_t getColumnIndex(const ::java::lang::String&) const;
    int32_t getColumnIndexOrThrow(const ::java::lang::String&) const;
    ::java::lang::String getColumnName(int32_t) const;
    std::vector< ::java::lang::String> getColumnNames() const;
    int32_t getColumnCount() const;
    std::vector< int8_t> getBlob(int32_t) const;
    ::java::lang::String getString(int32_t) const;
    void copyStringToBuffer(int32_t, const ::android::database::CharArrayBuffer&) const;
    int16_t getShort(int32_t) const;
    int32_t getInt(int32_t) const;
    int64_t getLong(int32_t) const;
    float getFloat(int32_t) const;
    double getDouble(int32_t) const;
    int32_t getType(int32_t) const;
    bool isNull(int32_t) const;
    void deactivate() const;
    bool requery() const;
    void close() const;
    bool isClosed() const;
    void registerContentObserver(const ::android::database::ContentObserver&) const;
    void unregisterContentObserver(const ::android::database::ContentObserver&) const;
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const;
    void setNotificationUri(const ::android::content::ContentResolver&, const ::android::net::Uri&) const;
    bool getWantsAllOnMoveCalls() const;
    ::android::os::Bundle getExtras() const;
    ::android::os::Bundle respond(const ::android::os::Bundle&) const;

};
}
}


