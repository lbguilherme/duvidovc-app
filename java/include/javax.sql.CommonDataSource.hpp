#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class PrintWriter; } }

namespace javax {
namespace sql {
class CommonDataSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CommonDataSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CommonDataSource(const ::javax::sql::CommonDataSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CommonDataSource(::javax::sql::CommonDataSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::CommonDataSource& operator=(const ::javax::sql::CommonDataSource& x) {obj = x.obj; return *this;}
    ::javax::sql::CommonDataSource& operator=(::javax::sql::CommonDataSource&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLoginTimeout() const ;
    ::java::io::PrintWriter getLogWriter() const ;
    void setLoginTimeout(int32_t) const ;
    void setLogWriter(const ::java::io::PrintWriter&) const ;

};
}
}


