#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }

namespace android {
namespace database {
class DatabaseErrorHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatabaseErrorHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatabaseErrorHandler(const ::android::database::DatabaseErrorHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatabaseErrorHandler(::android::database::DatabaseErrorHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::DatabaseErrorHandler& operator=(const ::android::database::DatabaseErrorHandler& x) {obj = x.obj; return *this;}
    ::android::database::DatabaseErrorHandler& operator=(::android::database::DatabaseErrorHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void onCorruption(const ::android::database::sqlite::SQLiteDatabase&) const;

};
}
}


