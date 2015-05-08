#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.Cursor.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class CharArrayBuffer; } }
namespace android { namespace database { class ContentObserver; } }
namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
namespace mock {
class MockCursor : public virtual ::java::lang::Object,
                   public virtual ::android::database::Cursor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MockCursor(jobject _obj) : ::java::lang::Object(_obj), ::android::database::Cursor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MockCursor(const ::android::test::mock::MockCursor& x) : ::java::lang::Object((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj;}
    MockCursor(::android::test::mock::MockCursor&& x) : ::java::lang::Object((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::mock::MockCursor& operator=(const ::android::test::mock::MockCursor& x) {obj = x.obj; return *this;}
    ::android::test::mock::MockCursor& operator=(::android::test::mock::MockCursor&& x) {obj = std::move(x.obj); return *this;}
    
    MockCursor();
    int32_t getColumnCount() const ;
    int32_t getColumnIndex(const ::java::lang::String&) const ;
    int32_t getColumnIndexOrThrow(const ::java::lang::String&) const ;
    ::java::lang::String getColumnName(int32_t) const ;
    std::vector< ::java::lang::String> getColumnNames() const ;
    int32_t getCount() const ;
    bool isNull(int32_t) const ;
    int32_t getInt(int32_t) const ;
    int64_t getLong(int32_t) const ;
    int16_t getShort(int32_t) const ;
    float getFloat(int32_t) const ;
    double getDouble(int32_t) const ;
    std::vector< int8_t> getBlob(int32_t) const ;
    ::java::lang::String getString(int32_t) const ;
    ::android::os::Bundle getExtras() const ;
    int32_t getPosition() const ;
    bool isAfterLast() const ;
    bool isBeforeFirst() const ;
    bool isFirst() const ;
    bool isLast() const ;
    bool move(int32_t) const ;
    bool moveToFirst() const ;
    bool moveToLast() const ;
    bool moveToNext() const ;
    bool moveToPrevious() const ;
    bool moveToPosition(int32_t) const ;
    void copyStringToBuffer(int32_t, const ::android::database::CharArrayBuffer&) const ;
    void deactivate() const ;
    void close() const ;
    bool isClosed() const ;
    bool requery() const ;
    void registerContentObserver(const ::android::database::ContentObserver&) const ;
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const ;
    ::android::os::Bundle respond(const ::android::os::Bundle&) const ;
    bool getWantsAllOnMoveCalls() const ;
    void setNotificationUri(const ::android::content::ContentResolver&, const ::android::net::Uri&) const ;
    void unregisterContentObserver(const ::android::database::ContentObserver&) const ;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const ;
    int32_t getType(int32_t) const ;

};
}
}
}


