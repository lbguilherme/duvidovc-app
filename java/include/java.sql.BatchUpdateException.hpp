#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.sql.SQLException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace sql {
class BatchUpdateException : public virtual ::java::lang::Object,
                             public virtual ::java::io::Serializable,
                             public virtual ::java::sql::SQLException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BatchUpdateException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Iterable(_obj), ::java::lang::Throwable(_obj), ::java::sql::SQLException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BatchUpdateException(const ::java::sql::BatchUpdateException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {obj = x.obj;}
    BatchUpdateException(::java::sql::BatchUpdateException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::BatchUpdateException& operator=(const ::java::sql::BatchUpdateException& x) {obj = x.obj; return *this;}
    ::java::sql::BatchUpdateException& operator=(::java::sql::BatchUpdateException&& x) {obj = std::move(x.obj); return *this;}
    
    BatchUpdateException();
    BatchUpdateException(const ::java::lang::Throwable&);
    BatchUpdateException(const std::vector< int32_t>&, const ::java::lang::Throwable&);
    BatchUpdateException(const ::java::lang::String&, const std::vector< int32_t>&, const ::java::lang::Throwable&);
    BatchUpdateException(const ::java::lang::String&, const ::java::lang::String&, const std::vector< int32_t>&, const ::java::lang::Throwable&);
    BatchUpdateException(const ::java::lang::String&, const ::java::lang::String&, int32_t, const std::vector< int32_t>&, const ::java::lang::Throwable&);
    BatchUpdateException(const std::vector< int32_t>&);
    BatchUpdateException(const ::java::lang::String&, const std::vector< int32_t>&);
    BatchUpdateException(const ::java::lang::String&, const ::java::lang::String&, const std::vector< int32_t>&);
    BatchUpdateException(const ::java::lang::String&, const ::java::lang::String&, int32_t, const std::vector< int32_t>&);
    std::vector< int32_t> getUpdateCounts() const ;

};
}
}


