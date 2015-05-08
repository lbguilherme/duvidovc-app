#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }

namespace android {
namespace drm {
class DrmSupportInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmSupportInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmSupportInfo(const ::android::drm::DrmSupportInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmSupportInfo(::android::drm::DrmSupportInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmSupportInfo& operator=(const ::android::drm::DrmSupportInfo& x) {obj = x.obj; return *this;}
    ::android::drm::DrmSupportInfo& operator=(::android::drm::DrmSupportInfo&& x) {obj = std::move(x.obj); return *this;}
    
    DrmSupportInfo();
    void addMimeType(const ::java::lang::String&) const ;
    void addFileSuffix(const ::java::lang::String&) const ;
    ::java::util::Iterator getMimeTypeIterator() const ;
    ::java::util::Iterator getFileSuffixIterator() const ;
    void setDescription(const ::java::lang::String&) const ;
    ::java::lang::String getDescriprition() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;

};
}
}


