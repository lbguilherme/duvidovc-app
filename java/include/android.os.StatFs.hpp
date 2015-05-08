#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class StatFs : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StatFs(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StatFs(const ::android::os::StatFs& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StatFs(::android::os::StatFs&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::StatFs& operator=(const ::android::os::StatFs& x) {obj = x.obj; return *this;}
    ::android::os::StatFs& operator=(::android::os::StatFs&& x) {obj = std::move(x.obj); return *this;}
    
    StatFs(const ::java::lang::String&);
    void restat(const ::java::lang::String&) const ;
    int32_t getBlockSize() const ;
    int32_t getBlockCount() const ;
    int32_t getFreeBlocks() const ;
    int32_t getAvailableBlocks() const ;

};
}
}


