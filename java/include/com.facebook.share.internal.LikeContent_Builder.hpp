#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareModelBuilder.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace internal { class LikeContent; } } } }
namespace com { namespace facebook { namespace share { namespace internal { class LikeContent_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeContent_Builder : public virtual ::java::lang::Object,
                            public virtual ::com::facebook::share::model::ShareModelBuilder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeContent_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeContent_Builder(const ::com::facebook::share::internal::LikeContent_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj;}
    LikeContent_Builder(::com::facebook::share::internal::LikeContent_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeContent_Builder& operator=(const ::com::facebook::share::internal::LikeContent_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeContent_Builder& operator=(::com::facebook::share::internal::LikeContent_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    LikeContent_Builder();
    ::com::facebook::share::internal::LikeContent_Builder setObjectId(const ::java::lang::String&) const;
    ::com::facebook::share::internal::LikeContent_Builder setObjectType(const ::java::lang::String&) const;
    ::com::facebook::share::internal::LikeContent build() const;
    ::com::facebook::share::internal::LikeContent_Builder readFrom(const ::com::facebook::share::internal::LikeContent&) const;
    ::com::facebook::share::internal::LikeContent_Builder readFrom(const ::android::os::Parcel&) const;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const;

};
}
}
}
}


