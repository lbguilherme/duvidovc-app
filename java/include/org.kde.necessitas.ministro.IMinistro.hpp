#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.IInterface.hpp"

namespace android { namespace os { class Bundle; } }
namespace org { namespace kde { namespace necessitas { namespace ministro { class IMinistroCallback; } } } }

namespace org {
namespace kde {
namespace necessitas {
namespace ministro {
class IMinistro : public virtual ::java::lang::Object,
                  public virtual ::android::os::IInterface {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMinistro(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMinistro(const ::org::kde::necessitas::ministro::IMinistro& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj;}
    IMinistro(::org::kde::necessitas::ministro::IMinistro&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::kde::necessitas::ministro::IMinistro& operator=(const ::org::kde::necessitas::ministro::IMinistro& x) {obj = x.obj; return *this;}
    ::org::kde::necessitas::ministro::IMinistro& operator=(::org::kde::necessitas::ministro::IMinistro&& x) {obj = std::move(x.obj); return *this;}
    
    void requestLoader(const ::org::kde::necessitas::ministro::IMinistroCallback&, const ::android::os::Bundle&) const;

};
}
}
}
}

#include "org.kde.necessitas.ministro.IMinistro_Stub.hpp"
#include "org.kde.necessitas.ministro.IMinistro_Stub_Proxy.hpp"

