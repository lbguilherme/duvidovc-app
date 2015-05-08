#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class ContentProvider_PipeDataWriter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentProvider_PipeDataWriter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentProvider_PipeDataWriter(const ::android::content::ContentProvider_PipeDataWriter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentProvider_PipeDataWriter(::android::content::ContentProvider_PipeDataWriter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentProvider_PipeDataWriter& operator=(const ::android::content::ContentProvider_PipeDataWriter& x) {obj = x.obj; return *this;}
    ::android::content::ContentProvider_PipeDataWriter& operator=(::android::content::ContentProvider_PipeDataWriter&& x) {obj = std::move(x.obj); return *this;}
    
    void writeDataToPipe(const ::android::os::ParcelFileDescriptor&, const ::android::net::Uri&, const ::java::lang::String&, const ::android::os::Bundle&, const ::java::lang::Object&) const ;

};
}
}


