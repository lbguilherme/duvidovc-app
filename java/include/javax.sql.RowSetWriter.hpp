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
class RowSetWriter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowSetWriter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowSetWriter(const ::javax::sql::RowSetWriter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RowSetWriter(::javax::sql::RowSetWriter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::RowSetWriter& operator=(const ::javax::sql::RowSetWriter& x) {obj = x.obj; return *this;}
    ::javax::sql::RowSetWriter& operator=(::javax::sql::RowSetWriter&& x) {obj = std::move(x.obj); return *this;}
    
    bool writeData(const ::javax::sql::RowSetInternal&) const;

};
}
}


