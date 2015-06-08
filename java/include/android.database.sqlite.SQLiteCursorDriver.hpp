#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class Cursor; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase_CursorFactory; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteCursorDriver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteCursorDriver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteCursorDriver(const ::android::database::sqlite::SQLiteCursorDriver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLiteCursorDriver(::android::database::sqlite::SQLiteCursorDriver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteCursorDriver& operator=(const ::android::database::sqlite::SQLiteCursorDriver& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteCursorDriver& operator=(::android::database::sqlite::SQLiteCursorDriver&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::database::Cursor query(const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, const std::vector< ::java::lang::String>&) const;
    void cursorDeactivated() const;
    void cursorRequeried(const ::android::database::Cursor&) const;
    void cursorClosed() const;
    void setBindArguments(const std::vector< ::java::lang::String>&) const;

};
}
}
}


