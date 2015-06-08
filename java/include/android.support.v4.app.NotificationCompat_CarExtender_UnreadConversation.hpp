#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_CarExtender_UnreadConversation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_CarExtender_UnreadConversation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_CarExtender_UnreadConversation(const ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat_CarExtender_UnreadConversation(::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation& operator=(const ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation& operator=(::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::String> getMessages() const;
    ::android::support::v4::app::RemoteInput getRemoteInput() const;
    ::android::app::PendingIntent getReplyPendingIntent() const;
    ::android::app::PendingIntent getReadPendingIntent() const;
    std::vector< ::java::lang::String> getParticipants() const;
    ::java::lang::String getParticipant() const;
    int64_t getLatestTimestamp() const;

};
}
}
}
}

#include "android.support.v4.app.NotificationCompat_CarExtender_UnreadConversation_Builder.hpp"

