#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace com { namespace facebook { namespace internal { class ImageRequest; } } }
namespace java { namespace lang { class Exception; } }

namespace com {
namespace facebook {
namespace internal {
class ImageResponse : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageResponse(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageResponse(const ::com::facebook::internal::ImageResponse& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageResponse(::com::facebook::internal::ImageResponse&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageResponse& operator=(const ::com::facebook::internal::ImageResponse& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageResponse& operator=(::com::facebook::internal::ImageResponse&& x) {obj = std::move(x.obj); return *this;}
    
    ::com::facebook::internal::ImageRequest getRequest() const;
    ::java::lang::Exception getError() const;
    ::android::graphics::Bitmap getBitmap() const;
    bool isCachedRedirect() const;

};
}
}
}


