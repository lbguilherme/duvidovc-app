#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace drm {
class DrmStore_DrmObjectType : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmStore_DrmObjectType(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmStore_DrmObjectType(const ::android::drm::DrmStore_DrmObjectType& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmStore_DrmObjectType(::android::drm::DrmStore_DrmObjectType&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmStore_DrmObjectType& operator=(const ::android::drm::DrmStore_DrmObjectType& x) {obj = x.obj; return *this;}
    ::android::drm::DrmStore_DrmObjectType& operator=(::android::drm::DrmStore_DrmObjectType&& x) {obj = std::move(x.obj); return *this;}
    
    DrmStore_DrmObjectType();

};
}
}


