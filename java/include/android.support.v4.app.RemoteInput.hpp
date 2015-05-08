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
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class RemoteInput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteInput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteInput(const ::android::support::v4::app::RemoteInput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RemoteInput(::android::support::v4::app::RemoteInput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::RemoteInput& operator=(const ::android::support::v4::app::RemoteInput& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::RemoteInput& operator=(::android::support::v4::app::RemoteInput&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getResultKey() const ;
    ::java::lang::CharSequence getLabel() const ;
    std::vector< ::java::lang::CharSequence> getChoices() const ;
    bool getAllowFreeFormInput() const ;
    ::android::os::Bundle getExtras() const ;
    static ::android::os::Bundle getResultsFromIntent(const ::android::content::Intent&);
    static void addResultsToIntent(const std::vector< ::android::support::v4::app::RemoteInput>&, const ::android::content::Intent&, const ::android::os::Bundle&);

};
}
}
}
}

#include "android.support.v4.app.RemoteInput_Builder.hpp"
#include "android.support.v4.app.RemoteInput_Impl.hpp"
#include "android.support.v4.app.RemoteInput_ImplApi20.hpp"
#include "android.support.v4.app.RemoteInput_ImplBase.hpp"
#include "android.support.v4.app.RemoteInput_ImplJellybean.hpp"

