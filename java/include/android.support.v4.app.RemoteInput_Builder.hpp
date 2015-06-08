#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput; } } } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput_Builder; } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class RemoteInput_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteInput_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteInput_Builder(const ::android::support::v4::app::RemoteInput_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RemoteInput_Builder(::android::support::v4::app::RemoteInput_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::RemoteInput_Builder& operator=(const ::android::support::v4::app::RemoteInput_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::RemoteInput_Builder& operator=(::android::support::v4::app::RemoteInput_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    RemoteInput_Builder(const ::java::lang::String&);
    ::android::support::v4::app::RemoteInput_Builder setLabel(const ::java::lang::CharSequence&) const;
    ::android::support::v4::app::RemoteInput_Builder setChoices(const std::vector< ::java::lang::CharSequence>&) const;
    ::android::support::v4::app::RemoteInput_Builder setAllowFreeFormInput(bool) const;
    ::android::support::v4::app::RemoteInput_Builder addExtras(const ::android::os::Bundle&) const;
    ::android::os::Bundle getExtras() const;
    ::android::support::v4::app::RemoteInput build() const;

};
}
}
}
}


