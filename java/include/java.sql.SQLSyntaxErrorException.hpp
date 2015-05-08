#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.SQLNonTransientException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace sql {
class SQLSyntaxErrorException : public virtual ::java::lang::Object,
                                public virtual ::java::sql::SQLNonTransientException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLSyntaxErrorException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Iterable(_obj), ::java::lang::Throwable(_obj), ::java::sql::SQLException(_obj), ::java::sql::SQLNonTransientException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLSyntaxErrorException(const ::java::sql::SQLSyntaxErrorException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {obj = x.obj;}
    SQLSyntaxErrorException(::java::sql::SQLSyntaxErrorException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLSyntaxErrorException& operator=(const ::java::sql::SQLSyntaxErrorException& x) {obj = x.obj; return *this;}
    ::java::sql::SQLSyntaxErrorException& operator=(::java::sql::SQLSyntaxErrorException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLSyntaxErrorException();
    SQLSyntaxErrorException(const ::java::lang::String&);
    SQLSyntaxErrorException(const ::java::lang::String&, const ::java::lang::String&);
    SQLSyntaxErrorException(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    SQLSyntaxErrorException(const ::java::lang::Throwable&);
    SQLSyntaxErrorException(const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLSyntaxErrorException(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLSyntaxErrorException(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::Throwable&);

};
}
}


