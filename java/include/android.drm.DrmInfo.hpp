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
class DrmInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmInfo(const ::android::drm::DrmInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmInfo(::android::drm::DrmInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmInfo& operator=(const ::android::drm::DrmInfo& x) {obj = x.obj; return *this;}
    ::android::drm::DrmInfo& operator=(::android::drm::DrmInfo&& x) {obj = std::move(x.obj); return *this;}
    
    DrmInfo(int32_t, const std::vector< int8_t>&, const ::java::lang::String&);
    DrmInfo(int32_t, const ::java::lang::String&, const ::java::lang::String&);
    void put(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object get(const ::java::lang::String&) const ;
    ::java::util::Iterator keyIterator() const ;
    ::java::util::Iterator iterator() const ;
    std::vector< int8_t> getData() const ;
    ::java::lang::String getMimeType() const ;
    int32_t getInfoType() const ;

};
}
}


