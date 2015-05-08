#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.backup.BackupAgent.hpp"

namespace android { namespace app { namespace backup { class BackupDataInput; } } }
namespace android { namespace app { namespace backup { class BackupDataOutput; } } }
namespace android { namespace app { namespace backup { class BackupHelper; } } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
namespace backup {
class BackupAgentHelper : public virtual ::java::lang::Object,
                          public virtual ::android::app::backup::BackupAgent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackupAgentHelper(jobject _obj) : ::java::lang::Object(_obj), ::android::app::backup::BackupAgent(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackupAgentHelper(const ::android::app::backup::BackupAgentHelper& x) : ::java::lang::Object((jobject)0), ::android::app::backup::BackupAgent((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    BackupAgentHelper(::android::app::backup::BackupAgentHelper&& x) : ::java::lang::Object((jobject)0), ::android::app::backup::BackupAgent((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::BackupAgentHelper& operator=(const ::android::app::backup::BackupAgentHelper& x) {obj = x.obj; return *this;}
    ::android::app::backup::BackupAgentHelper& operator=(::android::app::backup::BackupAgentHelper&& x) {obj = std::move(x.obj); return *this;}
    
    BackupAgentHelper();
    void onBackup(const ::android::os::ParcelFileDescriptor&, const ::android::app::backup::BackupDataOutput&, const ::android::os::ParcelFileDescriptor&) const ;
    void onRestore(const ::android::app::backup::BackupDataInput&, int32_t, const ::android::os::ParcelFileDescriptor&) const ;
    void addHelper(const ::java::lang::String&, const ::android::app::backup::BackupHelper&) const ;

};
}
}
}


