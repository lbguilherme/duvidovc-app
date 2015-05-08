#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace database {
class DatabaseUtilsCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatabaseUtilsCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatabaseUtilsCompat(const ::android::support::v4::database::DatabaseUtilsCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatabaseUtilsCompat(::android::support::v4::database::DatabaseUtilsCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::database::DatabaseUtilsCompat& operator=(const ::android::support::v4::database::DatabaseUtilsCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::database::DatabaseUtilsCompat& operator=(::android::support::v4::database::DatabaseUtilsCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String concatenateWhere(const ::java::lang::String&, const ::java::lang::String&);
    static std::vector< ::java::lang::String> appendSelectionArgs(const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&);

};
}
}
}
}


