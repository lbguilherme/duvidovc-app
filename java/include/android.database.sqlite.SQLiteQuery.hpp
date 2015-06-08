#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.sqlite.SQLiteProgram.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteQuery : public virtual ::java::lang::Object,
                    public virtual ::android::database::sqlite::SQLiteProgram {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteQuery(jobject _obj) : ::java::lang::Object(_obj), ::android::database::sqlite::SQLiteClosable(_obj), ::android::database::sqlite::SQLiteProgram(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteQuery(const ::android::database::sqlite::SQLiteQuery& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::database::sqlite::SQLiteProgram((jobject)0) {obj = x.obj;}
    SQLiteQuery(::android::database::sqlite::SQLiteQuery&& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::database::sqlite::SQLiteProgram((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteQuery& operator=(const ::android::database::sqlite::SQLiteQuery& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteQuery& operator=(::android::database::sqlite::SQLiteQuery&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const;
    void close() const;

};
}
}
}


