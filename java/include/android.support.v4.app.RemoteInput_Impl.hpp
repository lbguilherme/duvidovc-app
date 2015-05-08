#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class RemoteInput_Impl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteInput_Impl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteInput_Impl(const ::android::support::v4::app::RemoteInput_Impl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RemoteInput_Impl(::android::support::v4::app::RemoteInput_Impl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::RemoteInput_Impl& operator=(const ::android::support::v4::app::RemoteInput_Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::RemoteInput_Impl& operator=(::android::support::v4::app::RemoteInput_Impl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::Bundle getResultsFromIntent(const ::android::content::Intent&) const ;
    void addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>&, const ::android::content::Intent&, const ::android::os::Bundle&) const ;

};
}
}
}
}


