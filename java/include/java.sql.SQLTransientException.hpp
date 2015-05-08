#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.SQLException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace sql {
class SQLTransientException : public virtual ::java::lang::Object,
                              public virtual ::java::sql::SQLException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLTransientException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Iterable(_obj), ::java::lang::Throwable(_obj), ::java::sql::SQLException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLTransientException(const ::java::sql::SQLTransientException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {obj = x.obj;}
    SQLTransientException(::java::sql::SQLTransientException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLTransientException& operator=(const ::java::sql::SQLTransientException& x) {obj = x.obj; return *this;}
    ::java::sql::SQLTransientException& operator=(::java::sql::SQLTransientException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLTransientException();
    SQLTransientException(const ::java::lang::String&);
    SQLTransientException(const ::java::lang::String&, const ::java::lang::String&);
    SQLTransientException(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    SQLTransientException(const ::java::lang::Throwable&);
    SQLTransientException(const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLTransientException(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLTransientException(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::Throwable&);

};
}
}


