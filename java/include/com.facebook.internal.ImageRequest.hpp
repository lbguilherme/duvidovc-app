#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace com { namespace facebook { namespace internal { class ImageRequest_Callback; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class ImageRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageRequest(const ::com::facebook::internal::ImageRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageRequest(::com::facebook::internal::ImageRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageRequest& operator=(const ::com::facebook::internal::ImageRequest& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageRequest& operator=(::com::facebook::internal::ImageRequest&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::net::Uri getProfilePictureUri(const ::java::lang::String&, int32_t, int32_t);
    ::android::content::Context getContext() const ;
    ::android::net::Uri getImageUri() const ;
    ::com::facebook::internal::ImageRequest_Callback getCallback() const ;
    bool isCachedRedirectAllowed() const ;
    ::java::lang::Object getCallerTag() const ;

};
}
}
}

#include "com.facebook.internal.ImageRequest_Builder.hpp"
#include "com.facebook.internal.ImageRequest_Callback.hpp"

