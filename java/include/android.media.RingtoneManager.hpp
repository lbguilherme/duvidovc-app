#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace media { class Ringtone; } }
namespace android { namespace net { class Uri; } }

namespace android {
namespace media {
class RingtoneManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RingtoneManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RingtoneManager(const ::android::media::RingtoneManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RingtoneManager(::android::media::RingtoneManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::RingtoneManager& operator=(const ::android::media::RingtoneManager& x) {obj = x.obj; return *this;}
    ::android::media::RingtoneManager& operator=(::android::media::RingtoneManager&& x) {obj = std::move(x.obj); return *this;}
    
    RingtoneManager(const ::android::app::Activity&);
    RingtoneManager(const ::android::content::Context&);
    void setType(int32_t) const ;
    int32_t inferStreamType() const ;
    void setStopPreviousRingtone(bool) const ;
    bool getStopPreviousRingtone() const ;
    void stopPreviousRingtone() const ;
    bool getIncludeDrm() const ;
    void setIncludeDrm(bool) const ;
    ::android::database::Cursor getCursor() const ;
    ::android::media::Ringtone getRingtone(int32_t) const ;
    ::android::net::Uri getRingtoneUri(int32_t) const ;
    int32_t getRingtonePosition(const ::android::net::Uri&) const ;
    static ::android::net::Uri getValidRingtoneUri(const ::android::content::Context&);
    static ::android::media::Ringtone getRingtone(const ::android::content::Context&, const ::android::net::Uri&);
    static ::android::net::Uri getActualDefaultRingtoneUri(const ::android::content::Context&, int32_t);
    static void setActualDefaultRingtoneUri(const ::android::content::Context&, int32_t, const ::android::net::Uri&);
    static bool isDefault(const ::android::net::Uri&);
    static int32_t getDefaultType(const ::android::net::Uri&);
    static ::android::net::Uri getDefaultUri(int32_t);

};
}
}


