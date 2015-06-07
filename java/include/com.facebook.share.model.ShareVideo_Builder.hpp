#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareMedia_Builder.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareMedia; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareMedia_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareVideo; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareVideo_Builder; } } } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareVideo_Builder : public virtual ::java::lang::Object,
                           public virtual ::com::facebook::share::model::ShareMedia_Builder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareVideo_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareMedia_Builder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareVideo_Builder(const ::com::facebook::share::model::ShareVideo_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareMedia_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj;}
    ShareVideo_Builder(::com::facebook::share::model::ShareVideo_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareMedia_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareVideo_Builder& operator=(const ::com::facebook::share::model::ShareVideo_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareVideo_Builder& operator=(::com::facebook::share::model::ShareVideo_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ShareVideo_Builder();
    ::com::facebook::share::model::ShareVideo_Builder setLocalUrl(const ::android::net::Uri&) const ;
    ::com::facebook::share::model::ShareVideo build() const ;
    ::com::facebook::share::model::ShareVideo_Builder readFrom(const ::com::facebook::share::model::ShareVideo&) const ;
    ::com::facebook::share::model::ShareVideo_Builder readFrom(const ::android::os::Parcel&) const ;
    ::com::facebook::share::model::ShareMedia_Builder readFrom(const ::com::facebook::share::model::ShareMedia&) const ;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const ;

};
}
}
}
}


