#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.sqlite.SQLiteProgram.hpp"

namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteStatement : public virtual ::java::lang::Object,
                        public virtual ::android::database::sqlite::SQLiteProgram {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteStatement(jobject _obj) : ::java::lang::Object(_obj), ::android::database::sqlite::SQLiteClosable(_obj), ::android::database::sqlite::SQLiteProgram(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteStatement(const ::android::database::sqlite::SQLiteStatement& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::database::sqlite::SQLiteProgram((jobject)0) {obj = x.obj;}
    SQLiteStatement(::android::database::sqlite::SQLiteStatement&& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::database::sqlite::SQLiteProgram((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteStatement& operator=(const ::android::database::sqlite::SQLiteStatement& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteStatement& operator=(::android::database::sqlite::SQLiteStatement&& x) {obj = std::move(x.obj); return *this;}
    
    void execute() const ;
    int32_t executeUpdateDelete() const ;
    int64_t executeInsert() const ;
    int64_t simpleQueryForLong() const ;
    ::java::lang::String simpleQueryForString() const ;
    ::android::os::ParcelFileDescriptor simpleQueryForBlobFileDescriptor() const ;

};
}
}
}


