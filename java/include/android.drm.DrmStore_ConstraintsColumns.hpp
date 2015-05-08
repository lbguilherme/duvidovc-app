#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace drm {
class DrmStore_ConstraintsColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmStore_ConstraintsColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmStore_ConstraintsColumns(const ::android::drm::DrmStore_ConstraintsColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmStore_ConstraintsColumns(::android::drm::DrmStore_ConstraintsColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmStore_ConstraintsColumns& operator=(const ::android::drm::DrmStore_ConstraintsColumns& x) {obj = x.obj; return *this;}
    ::android::drm::DrmStore_ConstraintsColumns& operator=(::android::drm::DrmStore_ConstraintsColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


