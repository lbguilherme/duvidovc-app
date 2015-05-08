#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Clob.hpp"


namespace java {
namespace sql {
class NClob : public virtual ::java::lang::Object,
              public virtual ::java::sql::Clob {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NClob(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Clob(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NClob(const ::java::sql::NClob& x) : ::java::lang::Object((jobject)0), ::java::sql::Clob((jobject)0) {obj = x.obj;}
    NClob(::java::sql::NClob&& x) : ::java::lang::Object((jobject)0), ::java::sql::Clob((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::NClob& operator=(const ::java::sql::NClob& x) {obj = x.obj; return *this;}
    ::java::sql::NClob& operator=(::java::sql::NClob&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


