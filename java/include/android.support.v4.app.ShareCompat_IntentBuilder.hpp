#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace support { namespace v4 { namespace app { class ShareCompat_IntentBuilder; } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ShareCompat_IntentBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareCompat_IntentBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareCompat_IntentBuilder(const ::android::support::v4::app::ShareCompat_IntentBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareCompat_IntentBuilder(::android::support::v4::app::ShareCompat_IntentBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ShareCompat_IntentBuilder& operator=(const ::android::support::v4::app::ShareCompat_IntentBuilder& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ShareCompat_IntentBuilder& operator=(::android::support::v4::app::ShareCompat_IntentBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::app::ShareCompat_IntentBuilder from(const ::android::app::Activity&);
    ::android::content::Intent getIntent() const ;
    ::android::content::Intent createChooserIntent() const ;
    void startChooser() const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setChooserTitle(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setChooserTitle(int32_t) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setType(const ::java::lang::String&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setText(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setHtmlText(const ::java::lang::String&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setStream(const ::android::net::Uri&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder addStream(const ::android::net::Uri&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setEmailTo(const std::vector< ::java::lang::String>&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder addEmailTo(const ::java::lang::String&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder addEmailTo(const std::vector< ::java::lang::String>&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setEmailCc(const std::vector< ::java::lang::String>&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder addEmailCc(const ::java::lang::String&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder addEmailCc(const std::vector< ::java::lang::String>&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setEmailBcc(const std::vector< ::java::lang::String>&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder addEmailBcc(const ::java::lang::String&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder addEmailBcc(const std::vector< ::java::lang::String>&) const ;
    ::android::support::v4::app::ShareCompat_IntentBuilder setSubject(const ::java::lang::String&) const ;

};
}
}
}
}


