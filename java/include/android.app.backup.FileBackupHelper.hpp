#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.backup.BackupHelper.hpp"
#include "android.app.backup.FileBackupHelperBase.hpp"

namespace android { namespace app { namespace backup { class BackupDataInputStream; } } }
namespace android { namespace app { namespace backup { class BackupDataOutput; } } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
namespace backup {
class FileBackupHelper : public virtual ::java::lang::Object,
                         public virtual ::android::app::backup::BackupHelper,
                         public virtual ::android::app::backup::FileBackupHelperBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileBackupHelper(jobject _obj) : ::java::lang::Object(_obj), ::android::app::backup::BackupHelper(_obj), ::android::app::backup::FileBackupHelperBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileBackupHelper(const ::android::app::backup::FileBackupHelper& x) : ::java::lang::Object((jobject)0), ::android::app::backup::BackupHelper((jobject)0), ::android::app::backup::FileBackupHelperBase((jobject)0) {obj = x.obj;}
    FileBackupHelper(::android::app::backup::FileBackupHelper&& x) : ::java::lang::Object((jobject)0), ::android::app::backup::BackupHelper((jobject)0), ::android::app::backup::FileBackupHelperBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::FileBackupHelper& operator=(const ::android::app::backup::FileBackupHelper& x) {obj = x.obj; return *this;}
    ::android::app::backup::FileBackupHelper& operator=(::android::app::backup::FileBackupHelper&& x) {obj = std::move(x.obj); return *this;}
    
    FileBackupHelper(const ::android::content::Context&, const std::vector< ::java::lang::String>&);
    void performBackup(const ::android::os::ParcelFileDescriptor&, const ::android::app::backup::BackupDataOutput&, const ::android::os::ParcelFileDescriptor&) const;
    void restoreEntity(const ::android::app::backup::BackupDataInputStream&) const;
    void writeNewStateDescription(const ::android::os::ParcelFileDescriptor&) const;

};
}
}
}


