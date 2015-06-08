#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace com { namespace facebook { namespace messenger { class ShareToMessengerParams; } } }
namespace com { namespace facebook { namespace messenger { class ShareToMessengerParamsBuilder; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace messenger {
class ShareToMessengerParamsBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareToMessengerParamsBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareToMessengerParamsBuilder(const ::com::facebook::messenger::ShareToMessengerParamsBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareToMessengerParamsBuilder(::com::facebook::messenger::ShareToMessengerParamsBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::messenger::ShareToMessengerParamsBuilder& operator=(const ::com::facebook::messenger::ShareToMessengerParamsBuilder& x) {obj = x.obj; return *this;}
    ::com::facebook::messenger::ShareToMessengerParamsBuilder& operator=(::com::facebook::messenger::ShareToMessengerParamsBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::net::Uri getUri() const;
    ::java::lang::String getMimeType() const;
    ::com::facebook::messenger::ShareToMessengerParamsBuilder setMetaData(const ::java::lang::String&) const;
    ::java::lang::String getMetaData() const;
    ::com::facebook::messenger::ShareToMessengerParamsBuilder setExternalUri(const ::android::net::Uri&) const;
    ::android::net::Uri getExternalUri() const;
    ::com::facebook::messenger::ShareToMessengerParams build() const;

};
}
}
}


