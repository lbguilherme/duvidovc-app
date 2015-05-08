#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.sqlite.SQLiteClosable.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteProgram : public virtual ::java::lang::Object,
                      public virtual ::android::database::sqlite::SQLiteClosable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteProgram(jobject _obj) : ::java::lang::Object(_obj), ::android::database::sqlite::SQLiteClosable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteProgram(const ::android::database::sqlite::SQLiteProgram& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0) {obj = x.obj;}
    SQLiteProgram(::android::database::sqlite::SQLiteProgram&& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteProgram& operator=(const ::android::database::sqlite::SQLiteProgram& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteProgram& operator=(::android::database::sqlite::SQLiteProgram&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getUniqueId() const ;
    void bindNull(int32_t) const ;
    void bindLong(int32_t, int64_t) const ;
    void bindDouble(int32_t, double) const ;
    void bindString(int32_t, const ::java::lang::String&) const ;
    void bindBlob(int32_t, const std::vector< int8_t>&) const ;
    void clearBindings() const ;
    void close() const ;
    void bindAllArgsAsStrings(const std::vector< ::java::lang::String>&) const ;

};
}
}
}


