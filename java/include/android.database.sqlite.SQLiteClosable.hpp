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
class SQLiteClosable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteClosable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteClosable(const ::android::database::sqlite::SQLiteClosable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLiteClosable(::android::database::sqlite::SQLiteClosable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteClosable& operator=(const ::android::database::sqlite::SQLiteClosable& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteClosable& operator=(::android::database::sqlite::SQLiteClosable&& x) {obj = std::move(x.obj); return *this;}
    
    SQLiteClosable();
    void acquireReference() const ;
    void releaseReference() const ;
    void releaseReferenceFromContainer() const ;

};
}
}
}


