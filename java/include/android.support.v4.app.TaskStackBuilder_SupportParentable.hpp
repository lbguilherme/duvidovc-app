#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class TaskStackBuilder_SupportParentable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TaskStackBuilder_SupportParentable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TaskStackBuilder_SupportParentable(const ::android::support::v4::app::TaskStackBuilder_SupportParentable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TaskStackBuilder_SupportParentable(::android::support::v4::app::TaskStackBuilder_SupportParentable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::TaskStackBuilder_SupportParentable& operator=(const ::android::support::v4::app::TaskStackBuilder_SupportParentable& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::TaskStackBuilder_SupportParentable& operator=(::android::support::v4::app::TaskStackBuilder_SupportParentable&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::Intent getSupportParentActivityIntent() const ;

};
}
}
}
}


