#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.SQLException.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteException : public virtual ::java::lang::Object,
                        public virtual ::android::database::SQLException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteException(jobject _obj) : ::java::lang::Object(_obj), ::android::database::SQLException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteException(const ::android::database::sqlite::SQLiteException& x) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SQLiteException(::android::database::sqlite::SQLiteException&& x) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteException& operator=(const ::android::database::sqlite::SQLiteException& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteException& operator=(::android::database::sqlite::SQLiteException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLiteException();
    SQLiteException(const ::java::lang::String&);

};
}
}
}


