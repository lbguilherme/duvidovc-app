#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.IInterface.hpp"

namespace android { namespace os { class Bundle; } }

namespace org {
namespace kde {
namespace necessitas {
namespace ministro {
class IMinistroCallback : public virtual ::java::lang::Object,
                          public virtual ::android::os::IInterface {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMinistroCallback(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMinistroCallback(const ::org::kde::necessitas::ministro::IMinistroCallback& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj;}
    IMinistroCallback(::org::kde::necessitas::ministro::IMinistroCallback&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::kde::necessitas::ministro::IMinistroCallback& operator=(const ::org::kde::necessitas::ministro::IMinistroCallback& x) {obj = x.obj; return *this;}
    ::org::kde::necessitas::ministro::IMinistroCallback& operator=(::org::kde::necessitas::ministro::IMinistroCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void loaderReady(const ::android::os::Bundle&) const;

};
}
}
}
}

#include "org.kde.necessitas.ministro.IMinistroCallback_Stub.hpp"
#include "org.kde.necessitas.ministro.IMinistroCallback_Stub_Proxy.hpp"

