#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }

namespace android {
namespace drm {
class DrmUtils_ExtendedMetadataParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmUtils_ExtendedMetadataParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmUtils_ExtendedMetadataParser(const ::android::drm::DrmUtils_ExtendedMetadataParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmUtils_ExtendedMetadataParser(::android::drm::DrmUtils_ExtendedMetadataParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmUtils_ExtendedMetadataParser& operator=(const ::android::drm::DrmUtils_ExtendedMetadataParser& x) {obj = x.obj; return *this;}
    ::android::drm::DrmUtils_ExtendedMetadataParser& operator=(::android::drm::DrmUtils_ExtendedMetadataParser&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Iterator iterator() const ;
    ::java::util::Iterator keyIterator() const ;
    ::java::lang::String get(const ::java::lang::String&) const ;

};
}
}


