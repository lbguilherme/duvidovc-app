#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class Cursor; } }
namespace android { namespace database { namespace sqlite { class SQLiteCursorDriver; } } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteQuery; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteDatabase_CursorFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteDatabase_CursorFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteDatabase_CursorFactory(const ::android::database::sqlite::SQLiteDatabase_CursorFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLiteDatabase_CursorFactory(::android::database::sqlite::SQLiteDatabase_CursorFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteDatabase_CursorFactory& operator=(const ::android::database::sqlite::SQLiteDatabase_CursorFactory& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteDatabase_CursorFactory& operator=(::android::database::sqlite::SQLiteDatabase_CursorFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::database::Cursor newCursor(const ::android::database::sqlite::SQLiteDatabase&, const ::android::database::sqlite::SQLiteCursorDriver&, const ::java::lang::String&, const ::android::database::sqlite::SQLiteQuery&) const;

};
}
}
}


