#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace database {
namespace sqlite {
class SQLiteTransactionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteTransactionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteTransactionListener(const ::android::database::sqlite::SQLiteTransactionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLiteTransactionListener(::android::database::sqlite::SQLiteTransactionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteTransactionListener& operator=(const ::android::database::sqlite::SQLiteTransactionListener& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteTransactionListener& operator=(::android::database::sqlite::SQLiteTransactionListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onBegin() const ;
    void onCommit() const ;
    void onRollback() const ;

};
}
}
}


