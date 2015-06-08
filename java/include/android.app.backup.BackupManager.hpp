#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { namespace backup { class RestoreObserver; } } }
namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
namespace backup {
class BackupManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackupManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackupManager(const ::android::app::backup::BackupManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BackupManager(::android::app::backup::BackupManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::BackupManager& operator=(const ::android::app::backup::BackupManager& x) {obj = x.obj; return *this;}
    ::android::app::backup::BackupManager& operator=(::android::app::backup::BackupManager&& x) {obj = std::move(x.obj); return *this;}
    
    BackupManager(const ::android::content::Context&);
    void dataChanged() const;
    static void dataChanged(const ::java::lang::String&);
    int32_t requestRestore(const ::android::app::backup::RestoreObserver&) const;

};
}
}
}


