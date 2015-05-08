#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace com { namespace facebook { namespace messenger { class ShareToMessengerParamsBuilder; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace messenger {
class ShareToMessengerParams : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareToMessengerParams(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareToMessengerParams(const ::com::facebook::messenger::ShareToMessengerParams& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareToMessengerParams(::com::facebook::messenger::ShareToMessengerParams&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::messenger::ShareToMessengerParams& operator=(const ::com::facebook::messenger::ShareToMessengerParams& x) {obj = x.obj; return *this;}
    ::com::facebook::messenger::ShareToMessengerParams& operator=(::com::facebook::messenger::ShareToMessengerParams&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::messenger::ShareToMessengerParamsBuilder newBuilder(const ::android::net::Uri&, const ::java::lang::String&);

};
}
}
}


