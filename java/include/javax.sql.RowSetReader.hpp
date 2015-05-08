#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace sql { class RowSetInternal; } }

namespace javax {
namespace sql {
class RowSetReader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowSetReader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowSetReader(const ::javax::sql::RowSetReader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RowSetReader(::javax::sql::RowSetReader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::RowSetReader& operator=(const ::javax::sql::RowSetReader& x) {obj = x.obj; return *this;}
    ::javax::sql::RowSetReader& operator=(::javax::sql::RowSetReader&& x) {obj = std::move(x.obj); return *this;}
    
    void readData(const ::javax::sql::RowSetInternal&) const ;

};
}
}


