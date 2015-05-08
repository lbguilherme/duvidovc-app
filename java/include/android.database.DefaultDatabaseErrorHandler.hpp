#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.DatabaseErrorHandler.hpp"

namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }

namespace android {
namespace database {
class DefaultDatabaseErrorHandler : public virtual ::java::lang::Object,
                                    public virtual ::android::database::DatabaseErrorHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultDatabaseErrorHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::database::DatabaseErrorHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultDatabaseErrorHandler(const ::android::database::DefaultDatabaseErrorHandler& x) : ::java::lang::Object((jobject)0), ::android::database::DatabaseErrorHandler((jobject)0) {obj = x.obj;}
    DefaultDatabaseErrorHandler(::android::database::DefaultDatabaseErrorHandler&& x) : ::java::lang::Object((jobject)0), ::android::database::DatabaseErrorHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::DefaultDatabaseErrorHandler& operator=(const ::android::database::DefaultDatabaseErrorHandler& x) {obj = x.obj; return *this;}
    ::android::database::DefaultDatabaseErrorHandler& operator=(::android::database::DefaultDatabaseErrorHandler&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultDatabaseErrorHandler();
    void onCorruption(const ::android::database::sqlite::SQLiteDatabase&) const ;

};
}
}


