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
class RestoreObserver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RestoreObserver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RestoreObserver(const ::android::app::backup::RestoreObserver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RestoreObserver(::android::app::backup::RestoreObserver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::RestoreObserver& operator=(const ::android::app::backup::RestoreObserver& x) {obj = x.obj; return *this;}
    ::android::app::backup::RestoreObserver& operator=(::android::app::backup::RestoreObserver&& x) {obj = std::move(x.obj); return *this;}
    
    RestoreObserver();
    void restoreStarting(int32_t) const ;
    void onUpdate(int32_t, const ::java::lang::String&) const ;
    void restoreFinished(int32_t) const ;

};
}
}
}


