#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.SQLTransientException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace sql {
class SQLTimeoutException : public virtual ::java::lang::Object,
                            public virtual ::java::sql::SQLTransientException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLTimeoutException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Iterable(_obj), ::java::lang::Throwable(_obj), ::java::sql::SQLException(_obj), ::java::sql::SQLTransientException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLTimeoutException(const ::java::sql::SQLTimeoutException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {obj = x.obj;}
    SQLTimeoutException(::java::sql::SQLTimeoutException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLTimeoutException& operator=(const ::java::sql::SQLTimeoutException& x) {obj = x.obj; return *this;}
    ::java::sql::SQLTimeoutException& operator=(::java::sql::SQLTimeoutException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLTimeoutException();
    SQLTimeoutException(const ::java::lang::String&);
    SQLTimeoutException(const ::java::lang::String&, const ::java::lang::String&);
    SQLTimeoutException(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    SQLTimeoutException(const ::java::lang::Throwable&);
    SQLTimeoutException(const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLTimeoutException(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLTimeoutException(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::Throwable&);

};
}
}


