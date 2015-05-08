#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace sql {
class DriverPropertyInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DriverPropertyInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DriverPropertyInfo(const ::java::sql::DriverPropertyInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DriverPropertyInfo(::java::sql::DriverPropertyInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::DriverPropertyInfo& operator=(const ::java::sql::DriverPropertyInfo& x) {obj = x.obj; return *this;}
    ::java::sql::DriverPropertyInfo& operator=(::java::sql::DriverPropertyInfo&& x) {obj = std::move(x.obj); return *this;}
    
    DriverPropertyInfo(const ::java::lang::String&, const ::java::lang::String&);

};
}
}


