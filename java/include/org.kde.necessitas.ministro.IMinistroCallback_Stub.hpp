#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Binder.hpp"
#include "org.kde.necessitas.ministro.IMinistroCallback.hpp"

namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class Parcel; } }
namespace org { namespace kde { namespace necessitas { namespace ministro { class IMinistroCallback; } } } }

namespace org {
namespace kde {
namespace necessitas {
namespace ministro {
class IMinistroCallback_Stub : public virtual ::java::lang::Object,
                               public virtual ::android::os::Binder,
                               public virtual ::org::kde::necessitas::ministro::IMinistroCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMinistroCallback_Stub(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Binder(_obj), ::android::os::IBinder(_obj), ::android::os::IInterface(_obj), ::org::kde::necessitas::ministro::IMinistroCallback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMinistroCallback_Stub(const ::org::kde::necessitas::ministro::IMinistroCallback_Stub& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::org::kde::necessitas::ministro::IMinistroCallback((jobject)0) {obj = x.obj;}
    IMinistroCallback_Stub(::org::kde::necessitas::ministro::IMinistroCallback_Stub&& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::org::kde::necessitas::ministro::IMinistroCallback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::kde::necessitas::ministro::IMinistroCallback_Stub& operator=(const ::org::kde::necessitas::ministro::IMinistroCallback_Stub& x) {obj = x.obj; return *this;}
    ::org::kde::necessitas::ministro::IMinistroCallback_Stub& operator=(::org::kde::necessitas::ministro::IMinistroCallback_Stub&& x) {obj = std::move(x.obj); return *this;}
    
    IMinistroCallback_Stub();
    static ::org::kde::necessitas::ministro::IMinistroCallback asInterface(const ::android::os::IBinder&);
    ::android::os::IBinder asBinder() const;
    bool onTransact(int32_t, const ::android::os::Parcel&, const ::android::os::Parcel&, int32_t) const;

};
}
}
}
}

#include "org.kde.necessitas.ministro.IMinistroCallback_Stub_Proxy.hpp"

