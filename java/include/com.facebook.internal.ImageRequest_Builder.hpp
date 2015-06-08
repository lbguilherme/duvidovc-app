#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace com { namespace facebook { namespace internal { class ImageRequest; } } }
namespace com { namespace facebook { namespace internal { class ImageRequest_Builder; } } }
namespace com { namespace facebook { namespace internal { class ImageRequest_Callback; } } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class ImageRequest_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageRequest_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageRequest_Builder(const ::com::facebook::internal::ImageRequest_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageRequest_Builder(::com::facebook::internal::ImageRequest_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageRequest_Builder& operator=(const ::com::facebook::internal::ImageRequest_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageRequest_Builder& operator=(::com::facebook::internal::ImageRequest_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ImageRequest_Builder(const ::android::content::Context&, const ::android::net::Uri&);
    ::com::facebook::internal::ImageRequest_Builder setCallback(const ::com::facebook::internal::ImageRequest_Callback&) const;
    ::com::facebook::internal::ImageRequest_Builder setCallerTag(const ::java::lang::Object&) const;
    ::com::facebook::internal::ImageRequest_Builder setAllowCachedRedirects(bool) const;
    ::com::facebook::internal::ImageRequest build() const;

};
}
}
}


