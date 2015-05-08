#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class ClientInfoStatus; } }

namespace java {
namespace sql {
class ClientInfoStatus : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientInfoStatus(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientInfoStatus(const ::java::sql::ClientInfoStatus& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ClientInfoStatus(::java::sql::ClientInfoStatus&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::ClientInfoStatus& operator=(const ::java::sql::ClientInfoStatus& x) {obj = x.obj; return *this;}
    ::java::sql::ClientInfoStatus& operator=(::java::sql::ClientInfoStatus&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::sql::ClientInfoStatus> values();
    static ::java::sql::ClientInfoStatus valueOf(const ::java::lang::String&);

};
}
}


