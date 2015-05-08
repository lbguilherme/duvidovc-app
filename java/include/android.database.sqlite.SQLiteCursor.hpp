#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.AbstractWindowedCursor.hpp"

namespace android { namespace database { class CursorWindow; } }
namespace android { namespace database { namespace sqlite { class SQLiteCursorDriver; } } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteQuery; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteCursor : public virtual ::java::lang::Object,
                     public virtual ::android::database::AbstractWindowedCursor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteCursor(jobject _obj) : ::java::lang::Object(_obj), ::android::database::AbstractCursor(_obj), ::android::database::AbstractWindowedCursor(_obj), ::android::database::CrossProcessCursor(_obj), ::android::database::Cursor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteCursor(const ::android::database::sqlite::SQLiteCursor& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::AbstractWindowedCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj;}
    SQLiteCursor(::android::database::sqlite::SQLiteCursor&& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::AbstractWindowedCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteCursor& operator=(const ::android::database::sqlite::SQLiteCursor& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteCursor& operator=(::android::database::sqlite::SQLiteCursor&& x) {obj = std::move(x.obj); return *this;}
    
    SQLiteCursor(const ::android::database::sqlite::SQLiteDatabase&, const ::android::database::sqlite::SQLiteCursorDriver&, const ::java::lang::String&, const ::android::database::sqlite::SQLiteQuery&);
    SQLiteCursor(const ::android::database::sqlite::SQLiteCursorDriver&, const ::java::lang::String&, const ::android::database::sqlite::SQLiteQuery&);
    ::android::database::sqlite::SQLiteDatabase getDatabase() const ;
    bool onMove(int32_t, int32_t) const ;
    int32_t getCount() const ;
    int32_t getColumnIndex(const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getColumnNames() const ;
    void deactivate() const ;
    void close() const ;
    bool requery() const ;
    void setWindow(const ::android::database::CursorWindow&) const ;
    void setSelectionArguments(const std::vector< ::java::lang::String>&) const ;

};
}
}
}


