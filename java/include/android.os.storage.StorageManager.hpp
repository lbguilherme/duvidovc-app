#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { namespace storage { class OnObbStateChangeListener; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
namespace storage {
class StorageManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StorageManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StorageManager(const ::android::os::storage::StorageManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StorageManager(::android::os::storage::StorageManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::storage::StorageManager& operator=(const ::android::os::storage::StorageManager& x) {obj = x.obj; return *this;}
    ::android::os::storage::StorageManager& operator=(::android::os::storage::StorageManager&& x) {obj = std::move(x.obj); return *this;}
    
    bool mountObb(const ::java::lang::String&, const ::java::lang::String&, const ::android::os::storage::OnObbStateChangeListener&) const;
    bool unmountObb(const ::java::lang::String&, bool, const ::android::os::storage::OnObbStateChangeListener&) const;
    bool isObbMounted(const ::java::lang::String&) const;
    ::java::lang::String getMountedObbPath(const ::java::lang::String&) const;

};
}
}
}


