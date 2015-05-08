#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace android { namespace support { namespace v4 { namespace app { class ShareCompat_IntentReader; } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ShareCompat_IntentReader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareCompat_IntentReader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareCompat_IntentReader(const ::android::support::v4::app::ShareCompat_IntentReader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareCompat_IntentReader(::android::support::v4::app::ShareCompat_IntentReader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ShareCompat_IntentReader& operator=(const ::android::support::v4::app::ShareCompat_IntentReader& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ShareCompat_IntentReader& operator=(::android::support::v4::app::ShareCompat_IntentReader&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::app::ShareCompat_IntentReader from(const ::android::app::Activity&);
    bool isShareIntent() const ;
    bool isSingleShare() const ;
    bool isMultipleShare() const ;
    ::java::lang::String getType() const ;
    ::java::lang::CharSequence getText() const ;
    ::java::lang::String getHtmlText() const ;
    ::android::net::Uri getStream() const ;
    ::android::net::Uri getStream(int32_t) const ;
    int32_t getStreamCount() const ;
    std::vector< ::java::lang::String> getEmailTo() const ;
    std::vector< ::java::lang::String> getEmailCc() const ;
    std::vector< ::java::lang::String> getEmailBcc() const ;
    ::java::lang::String getSubject() const ;
    ::java::lang::String getCallingPackage() const ;
    ::android::content::ComponentName getCallingActivity() const ;
    ::android::graphics::drawable::Drawable getCallingActivityIcon() const ;
    ::android::graphics::drawable::Drawable getCallingApplicationIcon() const ;
    ::java::lang::CharSequence getCallingApplicationLabel() const ;

};
}
}
}
}


