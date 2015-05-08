#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace app {
namespace backup {
class BackupDataOutput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackupDataOutput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackupDataOutput(const ::android::app::backup::BackupDataOutput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BackupDataOutput(::android::app::backup::BackupDataOutput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::BackupDataOutput& operator=(const ::android::app::backup::BackupDataOutput& x) {obj = x.obj; return *this;}
    ::android::app::backup::BackupDataOutput& operator=(::android::app::backup::BackupDataOutput&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t writeEntityHeader(const ::java::lang::String&, int32_t) const ;
    int32_t writeEntityData(const std::vector< int8_t>&, int32_t) const ;

};
}
}
}


