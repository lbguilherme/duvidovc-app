#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Connection; } }
namespace java { namespace sql { class DriverPropertyInfo; } }
namespace java { namespace util { class Properties; } }

namespace java {
namespace sql {
class Driver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Driver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Driver(const ::java::sql::Driver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Driver(::java::sql::Driver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Driver& operator=(const ::java::sql::Driver& x) {obj = x.obj; return *this;}
    ::java::sql::Driver& operator=(::java::sql::Driver&& x) {obj = std::move(x.obj); return *this;}
    
    bool acceptsURL(const ::java::lang::String&) const ;
    ::java::sql::Connection connect(const ::java::lang::String&, const ::java::util::Properties&) const ;
    int32_t getMajorVersion() const ;
    int32_t getMinorVersion() const ;
    std::vector< ::java::sql::DriverPropertyInfo> getPropertyInfo(const ::java::lang::String&, const ::java::util::Properties&) const ;
    bool jdbcCompliant() const ;

};
}
}


