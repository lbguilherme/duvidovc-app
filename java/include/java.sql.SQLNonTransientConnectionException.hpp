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
class SQLNonTransientConnectionException : public virtual ::java::lang::Object,
                                           public virtual ::java::sql::SQLNonTransientException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLNonTransientConnectionException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Iterable(_obj), ::java::lang::Throwable(_obj), ::java::sql::SQLException(_obj), ::java::sql::SQLNonTransientException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLNonTransientConnectionException(const ::java::sql::SQLNonTransientConnectionException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {obj = x.obj;}
    SQLNonTransientConnectionException(::java::sql::SQLNonTransientConnectionException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLNonTransientConnectionException& operator=(const ::java::sql::SQLNonTransientConnectionException& x) {obj = x.obj; return *this;}
    ::java::sql::SQLNonTransientConnectionException& operator=(::java::sql::SQLNonTransientConnectionException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLNonTransientConnectionException();
    SQLNonTransientConnectionException(const ::java::lang::String&);
    SQLNonTransientConnectionException(const ::java::lang::String&, const ::java::lang::String&);
    SQLNonTransientConnectionException(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    SQLNonTransientConnectionException(const ::java::lang::Throwable&);
    SQLNonTransientConnectionException(const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLNonTransientConnectionException(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLNonTransientConnectionException(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::Throwable&);

};
}
}


