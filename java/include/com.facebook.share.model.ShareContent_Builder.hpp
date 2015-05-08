#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareModelBuilder.hpp"

namespace android { namespace net { class Uri; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareContent_Builder : public virtual ::java::lang::Object,
                             public virtual ::com::facebook::share::model::ShareModelBuilder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareContent_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareContent_Builder(const ::com::facebook::share::model::ShareContent_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj;}
    ShareContent_Builder(::com::facebook::share::model::ShareContent_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareContent_Builder& operator=(const ::com::facebook::share::model::ShareContent_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareContent_Builder& operator=(::com::facebook::share::model::ShareContent_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ShareContent_Builder();
    ::com::facebook::share::model::ShareContent_Builder setContentUrl(const ::android::net::Uri&) const ;
    ::com::facebook::share::model::ShareContent_Builder setPeopleIds(const ::java::util::List&) const ;
    ::com::facebook::share::model::ShareContent_Builder setPlaceId(const ::java::lang::String&) const ;
    ::com::facebook::share::model::ShareContent_Builder setRef(const ::java::lang::String&) const ;
    ::com::facebook::share::model::ShareContent_Builder readFrom(const ::com::facebook::share::model::ShareContent&) const ;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const ;

};
}
}
}
}


