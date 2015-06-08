#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContextWrapper.hpp"

namespace android { namespace app { namespace backup { class BackupDataInput; } } }
namespace android { namespace app { namespace backup { class BackupDataOutput; } } }
namespace android { namespace app { namespace backup { class FullBackupDataOutput; } } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace io { class File; } }

namespace android {
namespace app {
namespace backup {
class BackupAgent : public virtual ::java::lang::Object,
                    public virtual ::android::content::ContextWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackupAgent(jobject _obj) : ::java::lang::Object(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackupAgent(const ::android::app::backup::BackupAgent& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    BackupAgent(::android::app::backup::BackupAgent&& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::BackupAgent& operator=(const ::android::app::backup::BackupAgent& x) {obj = x.obj; return *this;}
    ::android::app::backup::BackupAgent& operator=(::android::app::backup::BackupAgent&& x) {obj = std::move(x.obj); return *this;}
    
    BackupAgent();
    void onCreate() const;
    void onDestroy() const;
    void onBackup(const ::android::os::ParcelFileDescriptor&, const ::android::app::backup::BackupDataOutput&, const ::android::os::ParcelFileDescriptor&) const;
    void onRestore(const ::android::app::backup::BackupDataInput&, int32_t, const ::android::os::ParcelFileDescriptor&) const;
    void onFullBackup(const ::android::app::backup::FullBackupDataOutput&) const;
    void fullBackupFile(const ::java::io::File&, const ::android::app::backup::FullBackupDataOutput&) const;
    void onRestoreFile(const ::android::os::ParcelFileDescriptor&, int64_t, const ::java::io::File&, int32_t, int64_t, int64_t) const;

};
}
}
}


