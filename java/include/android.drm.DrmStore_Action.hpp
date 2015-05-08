#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace drm {
class DrmStore_Action : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmStore_Action(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmStore_Action(const ::android::drm::DrmStore_Action& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmStore_Action(::android::drm::DrmStore_Action&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmStore_Action& operator=(const ::android::drm::DrmStore_Action& x) {obj = x.obj; return *this;}
    ::android::drm::DrmStore_Action& operator=(::android::drm::DrmStore_Action&& x) {obj = std::move(x.obj); return *this;}
    
    DrmStore_Action();

};
}
}


