#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class ParcelFileDescriptor; } }

namespace android {
namespace app {
namespace backup {
class FileBackupHelperBase : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileBackupHelperBase(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileBackupHelperBase(const ::android::app::backup::FileBackupHelperBase& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileBackupHelperBase(::android::app::backup::FileBackupHelperBase&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::FileBackupHelperBase& operator=(const ::android::app::backup::FileBackupHelperBase& x) {obj = x.obj; return *this;}
    ::android::app::backup::FileBackupHelperBase& operator=(::android::app::backup::FileBackupHelperBase&& x) {obj = std::move(x.obj); return *this;}
    
    void writeNewStateDescription(const ::android::os::ParcelFileDescriptor&) const;

};
}
}
}


