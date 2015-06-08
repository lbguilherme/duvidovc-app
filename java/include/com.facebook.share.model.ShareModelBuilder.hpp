#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.ShareBuilder.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareModelBuilder : public virtual ::java::lang::Object,
                          public virtual ::com::facebook::share::ShareBuilder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareModelBuilder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareModelBuilder(const ::com::facebook::share::model::ShareModelBuilder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0) {obj = x.obj;}
    ShareModelBuilder(::com::facebook::share::model::ShareModelBuilder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareModelBuilder& operator=(const ::com::facebook::share::model::ShareModelBuilder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareModelBuilder& operator=(::com::facebook::share::model::ShareModelBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::android::os::Parcel&) const;

};
}
}
}
}


