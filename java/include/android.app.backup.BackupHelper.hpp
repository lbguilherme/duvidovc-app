#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { namespace backup { class BackupDataInputStream; } } }
namespace android { namespace app { namespace backup { class BackupDataOutput; } } }
namespace android { namespace os { class ParcelFileDescriptor; } }

namespace android {
namespace app {
namespace backup {
class BackupHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackupHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackupHelper(const ::android::app::backup::BackupHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BackupHelper(::android::app::backup::BackupHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::BackupHelper& operator=(const ::android::app::backup::BackupHelper& x) {obj = x.obj; return *this;}
    ::android::app::backup::BackupHelper& operator=(::android::app::backup::BackupHelper&& x) {obj = std::move(x.obj); return *this;}
    
    void performBackup(const ::android::os::ParcelFileDescriptor&, const ::android::app::backup::BackupDataOutput&, const ::android::os::ParcelFileDescriptor&) const ;
    void restoreEntity(const ::android::app::backup::BackupDataInputStream&) const ;
    void writeNewStateDescription(const ::android::os::ParcelFileDescriptor&) const ;

};
}
}
}


