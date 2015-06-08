#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class MatrixCursor_RowBuilder; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace database {
class MatrixCursor_RowBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MatrixCursor_RowBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MatrixCursor_RowBuilder(const ::android::database::MatrixCursor_RowBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MatrixCursor_RowBuilder(::android::database::MatrixCursor_RowBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::MatrixCursor_RowBuilder& operator=(const ::android::database::MatrixCursor_RowBuilder& x) {obj = x.obj; return *this;}
    ::android::database::MatrixCursor_RowBuilder& operator=(::android::database::MatrixCursor_RowBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::database::MatrixCursor_RowBuilder add(const ::java::lang::Object&) const;

};
}
}


