#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_CarExtender_UnreadConversation; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_CarExtender_UnreadConversation_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_CarExtender_UnreadConversation_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_CarExtender_UnreadConversation_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_CarExtender_UnreadConversation_Builder(const ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat_CarExtender_UnreadConversation_Builder(::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder& operator=(const ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder& operator=(::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_CarExtender_UnreadConversation_Builder(const ::java::lang::String&);
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder addMessage(const ::java::lang::String&) const ;
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder setReplyAction(const ::android::app::PendingIntent&, const ::android::support::v4::app::RemoteInput&) const ;
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder setReadPendingIntent(const ::android::app::PendingIntent&) const ;
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation_Builder setLatestTimestamp(int64_t) const ;
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation build() const ;

};
}
}
}
}


