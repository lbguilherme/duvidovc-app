#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class DropBoxManager_Entry; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class DropBoxManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DropBoxManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DropBoxManager(const ::android::os::DropBoxManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DropBoxManager(::android::os::DropBoxManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::DropBoxManager& operator=(const ::android::os::DropBoxManager& x) {obj = x.obj; return *this;}
    ::android::os::DropBoxManager& operator=(::android::os::DropBoxManager&& x) {obj = std::move(x.obj); return *this;}
    
    void addText(const ::java::lang::String&, const ::java::lang::String&) const ;
    void addData(const ::java::lang::String&, const std::vector< int8_t>&, int32_t) const ;
    void addFile(const ::java::lang::String&, const ::java::io::File&, int32_t) const ;
    bool isTagEnabled(const ::java::lang::String&) const ;
    ::android::os::DropBoxManager_Entry getNextEntry(const ::java::lang::String&, int64_t) const ;

};
}
}

#include "android.os.DropBoxManager_Entry.hpp"

