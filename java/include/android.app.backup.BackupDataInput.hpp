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
class BackupDataInput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackupDataInput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackupDataInput(const ::android::app::backup::BackupDataInput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BackupDataInput(::android::app::backup::BackupDataInput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::BackupDataInput& operator=(const ::android::app::backup::BackupDataInput& x) {obj = x.obj; return *this;}
    ::android::app::backup::BackupDataInput& operator=(::android::app::backup::BackupDataInput&& x) {obj = std::move(x.obj); return *this;}
    
    bool readNextHeader() const ;
    ::java::lang::String getKey() const ;
    int32_t getDataSize() const ;
    int32_t readEntityData(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void skipEntityData() const ;

};
}
}
}


