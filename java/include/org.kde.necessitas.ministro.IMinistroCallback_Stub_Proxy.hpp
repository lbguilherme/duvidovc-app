#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.kde.necessitas.ministro.IMinistroCallback.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace kde {
namespace necessitas {
namespace ministro {
class IMinistroCallback_Stub_Proxy : public virtual ::java::lang::Object,
                                     public virtual ::org::kde::necessitas::ministro::IMinistroCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMinistroCallback_Stub_Proxy(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj), ::org::kde::necessitas::ministro::IMinistroCallback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMinistroCallback_Stub_Proxy(const ::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0), ::org::kde::necessitas::ministro::IMinistroCallback((jobject)0) {obj = x.obj;}
    IMinistroCallback_Stub_Proxy(::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0), ::org::kde::necessitas::ministro::IMinistroCallback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy& operator=(const ::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy& x) {obj = x.obj; return *this;}
    ::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy& operator=(::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::IBinder asBinder() const;
    ::java::lang::String getInterfaceDescriptor() const;
    void loaderReady(const ::android::os::Bundle&) const;

};
}
}
}
}


