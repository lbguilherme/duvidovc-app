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
class RemoteInput_ImplBase : public virtual ::java::lang::Object,
                             public virtual ::android::support::v4::app::RemoteInput_Impl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteInput_ImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::RemoteInput_Impl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteInput_ImplBase(const ::android::support::v4::app::RemoteInput_ImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::RemoteInput_Impl((jobject)0) {obj = x.obj;}
    RemoteInput_ImplBase(::android::support::v4::app::RemoteInput_ImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::RemoteInput_Impl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::RemoteInput_ImplBase& operator=(const ::android::support::v4::app::RemoteInput_ImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::RemoteInput_ImplBase& operator=(::android::support::v4::app::RemoteInput_ImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::Bundle getResultsFromIntent(const ::android::content::Intent&) const ;
    void addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>&, const ::android::content::Intent&, const ::android::os::Bundle&) const ;

};
}
}
}
}


