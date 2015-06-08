#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { class Context; } }
namespace android { namespace drm { class DrmConvertedStatus; } }
namespace android { namespace drm { class DrmInfo; } }
namespace android { namespace drm { class DrmInfoRequest; } }
namespace android { namespace drm { class DrmManagerClient_OnErrorListener; } }
namespace android { namespace drm { class DrmManagerClient_OnEventListener; } }
namespace android { namespace drm { class DrmManagerClient_OnInfoListener; } }
namespace android { namespace drm { class DrmRights; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace drm {
class DrmManagerClient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmManagerClient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmManagerClient(const ::android::drm::DrmManagerClient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmManagerClient(::android::drm::DrmManagerClient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmManagerClient& operator=(const ::android::drm::DrmManagerClient& x) {obj = x.obj; return *this;}
    ::android::drm::DrmManagerClient& operator=(::android::drm::DrmManagerClient&& x) {obj = std::move(x.obj); return *this;}
    
    DrmManagerClient(const ::android::content::Context&);
    void setOnInfoListener(const ::android::drm::DrmManagerClient_OnInfoListener&) const;
    void setOnEventListener(const ::android::drm::DrmManagerClient_OnEventListener&) const;
    void setOnErrorListener(const ::android::drm::DrmManagerClient_OnErrorListener&) const;
    std::vector< ::java::lang::String> getAvailableDrmEngines() const;
    ::android::content::ContentValues getConstraints(const ::java::lang::String&, int32_t) const;
    ::android::content::ContentValues getMetadata(const ::java::lang::String&) const;
    ::android::content::ContentValues getConstraints(const ::android::net::Uri&, int32_t) const;
    ::android::content::ContentValues getMetadata(const ::android::net::Uri&) const;
    int32_t saveRights(const ::android::drm::DrmRights&, const ::java::lang::String&, const ::java::lang::String&) const;
    bool canHandle(const ::java::lang::String&, const ::java::lang::String&) const;
    bool canHandle(const ::android::net::Uri&, const ::java::lang::String&) const;
    int32_t processDrmInfo(const ::android::drm::DrmInfo&) const;
    ::android::drm::DrmInfo acquireDrmInfo(const ::android::drm::DrmInfoRequest&) const;
    int32_t acquireRights(const ::android::drm::DrmInfoRequest&) const;
    int32_t getDrmObjectType(const ::java::lang::String&, const ::java::lang::String&) const;
    int32_t getDrmObjectType(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::java::lang::String getOriginalMimeType(const ::java::lang::String&) const;
    ::java::lang::String getOriginalMimeType(const ::android::net::Uri&) const;
    int32_t checkRightsStatus(const ::java::lang::String&) const;
    int32_t checkRightsStatus(const ::android::net::Uri&) const;
    int32_t checkRightsStatus(const ::java::lang::String&, int32_t) const;
    int32_t checkRightsStatus(const ::android::net::Uri&, int32_t) const;
    int32_t removeRights(const ::java::lang::String&) const;
    int32_t removeRights(const ::android::net::Uri&) const;
    int32_t removeAllRights() const;
    int32_t openConvertSession(const ::java::lang::String&) const;
    ::android::drm::DrmConvertedStatus convertData(int32_t, const std::vector< int8_t>&) const;
    ::android::drm::DrmConvertedStatus closeConvertSession(int32_t) const;

};
}
}

#include "android.drm.DrmManagerClient_OnErrorListener.hpp"
#include "android.drm.DrmManagerClient_OnEventListener.hpp"
#include "android.drm.DrmManagerClient_OnInfoListener.hpp"

