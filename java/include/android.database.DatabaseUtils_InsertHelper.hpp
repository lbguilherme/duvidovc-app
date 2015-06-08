#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class DatabaseUtils_InsertHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatabaseUtils_InsertHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatabaseUtils_InsertHelper(const ::android::database::DatabaseUtils_InsertHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatabaseUtils_InsertHelper(::android::database::DatabaseUtils_InsertHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::DatabaseUtils_InsertHelper& operator=(const ::android::database::DatabaseUtils_InsertHelper& x) {obj = x.obj; return *this;}
    ::android::database::DatabaseUtils_InsertHelper& operator=(::android::database::DatabaseUtils_InsertHelper&& x) {obj = std::move(x.obj); return *this;}
    
    DatabaseUtils_InsertHelper(const ::android::database::sqlite::SQLiteDatabase&, const ::java::lang::String&);
    int32_t getColumnIndex(const ::java::lang::String&) const;
    void bind(int32_t, double) const;
    void bind(int32_t, float) const;
    void bind(int32_t, int64_t) const;
    void bind(int32_t, int32_t) const;
    void bind(int32_t, bool) const;
    void bindNull(int32_t) const;
    void bind(int32_t, const std::vector< int8_t>&) const;
    void bind(int32_t, const ::java::lang::String&) const;
    int64_t insert(const ::android::content::ContentValues&) const;
    int64_t execute() const;
    void prepareForInsert() const;
    void prepareForReplace() const;
    int64_t replace(const ::android::content::ContentValues&) const;
    void close() const;

};
}
}


