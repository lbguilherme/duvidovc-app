#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.RemoteInput_Impl.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class RemoteInput_ImplApi20 : public virtual ::java::lang::Object,
                              public virtual ::android::support::v4::app::RemoteInput_Impl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteInput_ImplApi20(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::RemoteInput_Impl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteInput_ImplApi20(const ::android::support::v4::app::RemoteInput_ImplApi20& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::RemoteInput_Impl((jobject)0) {obj = x.obj;}
    RemoteInput_ImplApi20(::android::support::v4::app::RemoteInput_ImplApi20&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::RemoteInput_Impl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::RemoteInput_ImplApi20& operator=(const ::android::support::v4::app::RemoteInput_ImplApi20& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::RemoteInput_ImplApi20& operator=(::android::support::v4::app::RemoteInput_ImplApi20&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::Bundle getResultsFromIntent(const ::android::content::Intent&) const ;
    void addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>&, const ::android::content::Intent&, const ::android::os::Bundle&) const ;

};
}
}
}
}


