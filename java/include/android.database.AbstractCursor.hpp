#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.CrossProcessCursor.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class CharArrayBuffer; } }
namespace android { namespace database { class ContentObserver; } }
namespace android { namespace database { class CursorWindow; } }
namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class AbstractCursor : public virtual ::java::lang::Object,
                       public virtual ::android::database::CrossProcessCursor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractCursor(jobject _obj) : ::java::lang::Object(_obj), ::android::database::CrossProcessCursor(_obj), ::android::database::Cursor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractCursor(const ::android::database::AbstractCursor& x) : ::java::lang::Object((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj;}
    AbstractCursor(::android::database::AbstractCursor&& x) : ::java::lang::Object((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::AbstractCursor& operator=(const ::android::database::AbstractCursor& x) {obj = x.obj; return *this;}
    ::android::database::AbstractCursor& operator=(::android::database::AbstractCursor&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractCursor();
    int32_t getCount() const;
    std::vector< ::java::lang::String> getColumnNames() const;
    ::java::lang::String getString(int32_t) const;
    int16_t getShort(int32_t) const;
    int32_t getInt(int32_t) const;
    int64_t getLong(int32_t) const;
    float getFloat(int32_t) const;
    double getDouble(int32_t) const;
    bool isNull(int32_t) const;
    int32_t getType(int32_t) const;
    std::vector< int8_t> getBlob(int32_t) const;
    ::android::database::CursorWindow getWindow() const;
    int32_t getColumnCount() const;
    void deactivate() const;
    bool requery() const;
    bool isClosed() const;
    void close() const;
    bool onMove(int32_t, int32_t) const;
    void copyStringToBuffer(int32_t, const ::android::database::CharArrayBuffer&) const;
    int32_t getPosition() const;
    bool moveToPosition(int32_t) const;
    void fillWindow(int32_t, const ::android::database::CursorWindow&) const;
    bool move(int32_t) const;
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
    void registerContentObserver(const ::android::database::ContentObserver&) const;
    void unregisterContentObserver(const ::android::database::ContentObserver&) const;
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const;
    void setNotificationUri(const ::android::content::ContentResolver&, const ::android::net::Uri&) const;
    ::android::net::Uri getNotificationUri() const;
    bool getWantsAllOnMoveCalls() const;
    ::android::os::Bundle getExtras() const;
    ::android::os::Bundle respond(const ::android::os::Bundle&) const;

};
}
}

#include "android.database.AbstractCursor_SelfContentObserver.hpp"

