#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class MimeTypeMap; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class MimeTypeMap : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MimeTypeMap(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MimeTypeMap(const ::android::webkit::MimeTypeMap& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MimeTypeMap(::android::webkit::MimeTypeMap&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::MimeTypeMap& operator=(const ::android::webkit::MimeTypeMap& x) {obj = x.obj; return *this;}
    ::android::webkit::MimeTypeMap& operator=(::android::webkit::MimeTypeMap&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getFileExtensionFromUrl(const ::java::lang::String&);
    bool hasMimeType(const ::java::lang::String&) const;
    ::java::lang::String getMimeTypeFromExtension(const ::java::lang::String&) const;
    bool hasExtension(const ::java::lang::String&) const;
    ::java::lang::String getExtensionFromMimeType(const ::java::lang::String&) const;
    static ::android::webkit::MimeTypeMap getSingleton();

};
}
}


