#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.sql.SQLWarning.hpp"

namespace java { namespace lang { class Throwable; } }

namespace java {
namespace sql {
class DataTruncation : public virtual ::java::lang::Object,
                       public virtual ::java::io::Serializable,
                       public virtual ::java::sql::SQLWarning {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataTruncation(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Iterable(_obj), ::java::lang::Throwable(_obj), ::java::sql::SQLException(_obj), ::java::sql::SQLWarning(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataTruncation(const ::java::sql::DataTruncation& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLWarning((jobject)0) {obj = x.obj;}
    DataTruncation(::java::sql::DataTruncation&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLWarning((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::DataTruncation& operator=(const ::java::sql::DataTruncation& x) {obj = x.obj; return *this;}
    ::java::sql::DataTruncation& operator=(::java::sql::DataTruncation&& x) {obj = std::move(x.obj); return *this;}
    
    DataTruncation(int32_t, bool, bool, int32_t, int32_t);
    DataTruncation(int32_t, bool, bool, int32_t, int32_t, const ::java::lang::Throwable&);
    int32_t getDataSize() const ;
    int32_t getIndex() const ;
    bool getParameter() const ;
    bool getRead() const ;
    int32_t getTransferSize() const ;

};
}
}


