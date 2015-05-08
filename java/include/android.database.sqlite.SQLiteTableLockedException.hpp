#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.sqlite.SQLiteException.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteTableLockedException : public virtual ::java::lang::Object,
                                   public virtual ::android::database::sqlite::SQLiteException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteTableLockedException(jobject _obj) : ::java::lang::Object(_obj), ::android::database::SQLException(_obj), ::android::database::sqlite::SQLiteException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteTableLockedException(const ::android::database::sqlite::SQLiteTableLockedException& x) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SQLiteTableLockedException(::android::database::sqlite::SQLiteTableLockedException&& x) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteTableLockedException& operator=(const ::android::database::sqlite::SQLiteTableLockedException& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteTableLockedException& operator=(::android::database::sqlite::SQLiteTableLockedException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLiteTableLockedException();
    SQLiteTableLockedException(const ::java::lang::String&);

};
}
}
}


