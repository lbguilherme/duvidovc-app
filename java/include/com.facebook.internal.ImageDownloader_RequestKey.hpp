#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class ImageDownloader_RequestKey : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageDownloader_RequestKey(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageDownloader_RequestKey(const ::com::facebook::internal::ImageDownloader_RequestKey& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageDownloader_RequestKey(::com::facebook::internal::ImageDownloader_RequestKey&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageDownloader_RequestKey& operator=(const ::com::facebook::internal::ImageDownloader_RequestKey& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageDownloader_RequestKey& operator=(::com::facebook::internal::ImageDownloader_RequestKey&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;

};
}
}
}


