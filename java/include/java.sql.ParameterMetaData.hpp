#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Wrapper.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace sql {
class ParameterMetaData : public virtual ::java::lang::Object,
                          public virtual ::java::sql::Wrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParameterMetaData(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParameterMetaData(const ::java::sql::ParameterMetaData& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    ParameterMetaData(::java::sql::ParameterMetaData&& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::ParameterMetaData& operator=(const ::java::sql::ParameterMetaData& x) {obj = x.obj; return *this;}
    ::java::sql::ParameterMetaData& operator=(::java::sql::ParameterMetaData&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getParameterClassName(int32_t) const ;
    int32_t getParameterCount() const ;
    int32_t getParameterMode(int32_t) const ;
    int32_t getParameterType(int32_t) const ;
    ::java::lang::String getParameterTypeName(int32_t) const ;
    int32_t getPrecision(int32_t) const ;
    int32_t getScale(int32_t) const ;
    int32_t isNullable(int32_t) const ;
    bool isSigned(int32_t) const ;

};
}
}


