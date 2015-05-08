#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace drm { class ProcessedData; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace drm {
class DrmRights : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmRights(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmRights(const ::android::drm::DrmRights& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmRights(::android::drm::DrmRights&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmRights& operator=(const ::android::drm::DrmRights& x) {obj = x.obj; return *this;}
    ::android::drm::DrmRights& operator=(::android::drm::DrmRights&& x) {obj = std::move(x.obj); return *this;}
    
    DrmRights(const ::java::lang::String&, const ::java::lang::String&);
    DrmRights(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    DrmRights(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    DrmRights(const ::java::io::File&, const ::java::lang::String&);
    DrmRights(const ::android::drm::ProcessedData&, const ::java::lang::String&);
    std::vector< int8_t> getData() const ;
    ::java::lang::String getMimeType() const ;
    ::java::lang::String getAccountId() const ;
    ::java::lang::String getSubscriptionId() const ;

};
}
}


