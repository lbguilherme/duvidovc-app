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
class DrmInfoRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmInfoRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmInfoRequest(const ::android::drm::DrmInfoRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmInfoRequest(::android::drm::DrmInfoRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmInfoRequest& operator=(const ::android::drm::DrmInfoRequest& x) {obj = x.obj; return *this;}
    ::android::drm::DrmInfoRequest& operator=(::android::drm::DrmInfoRequest&& x) {obj = std::move(x.obj); return *this;}
    
    DrmInfoRequest(int32_t, const ::java::lang::String&);
    ::java::lang::String getMimeType() const ;
    int32_t getInfoType() const ;
    void put(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object get(const ::java::lang::String&) const ;
    ::java::util::Iterator keyIterator() const ;
    ::java::util::Iterator iterator() const ;

};
}
}


