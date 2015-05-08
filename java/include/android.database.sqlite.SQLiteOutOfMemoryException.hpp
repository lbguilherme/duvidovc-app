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
class SQLiteOutOfMemoryException : public virtual ::java::lang::Object,
                                   public virtual ::android::database::sqlite::SQLiteException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteOutOfMemoryException(jobject _obj) : ::java::lang::Object(_obj), ::android::database::SQLException(_obj), ::android::database::sqlite::SQLiteException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteOutOfMemoryException(const ::android::database::sqlite::SQLiteOutOfMemoryException& x) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SQLiteOutOfMemoryException(::android::database::sqlite::SQLiteOutOfMemoryException&& x) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteOutOfMemoryException& operator=(const ::android::database::sqlite::SQLiteOutOfMemoryException& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteOutOfMemoryException& operator=(::android::database::sqlite::SQLiteOutOfMemoryException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLiteOutOfMemoryException();
    SQLiteOutOfMemoryException(const ::java::lang::String&);

};
}
}
}


