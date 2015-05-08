#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace internal { class ImageResponse; } } }

namespace com {
namespace facebook {
namespace internal {
class ImageRequest_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageRequest_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageRequest_Callback(const ::com::facebook::internal::ImageRequest_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageRequest_Callback(::com::facebook::internal::ImageRequest_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageRequest_Callback& operator=(const ::com::facebook::internal::ImageRequest_Callback& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageRequest_Callback& operator=(::com::facebook::internal::ImageRequest_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void onCompleted(const ::com::facebook::internal::ImageResponse&) const ;

};
}
}
}


