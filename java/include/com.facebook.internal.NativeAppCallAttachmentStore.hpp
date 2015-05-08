#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace com { namespace facebook { namespace internal { class NativeAppCallAttachmentStore_Attachment; } } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class UUID; } }

namespace com {
namespace facebook {
namespace internal {
class NativeAppCallAttachmentStore : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NativeAppCallAttachmentStore(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NativeAppCallAttachmentStore(const ::com::facebook::internal::NativeAppCallAttachmentStore& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NativeAppCallAttachmentStore(::com::facebook::internal::NativeAppCallAttachmentStore&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::NativeAppCallAttachmentStore& operator=(const ::com::facebook::internal::NativeAppCallAttachmentStore& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::NativeAppCallAttachmentStore& operator=(::com::facebook::internal::NativeAppCallAttachmentStore&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment createAttachment(const ::java::util::UUID&, const ::android::graphics::Bitmap&);
    static ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment createAttachment(const ::java::util::UUID&, const ::android::net::Uri&);
    static void addAttachments(const ::java::util::Collection&);
    static void cleanupAttachmentsForCall(const ::java::util::UUID&);
    static ::java::io::File openAttachment(const ::java::util::UUID&, const ::java::lang::String&);
    static void cleanupAllAttachments();

};
}
}
}

#include "com.facebook.internal.NativeAppCallAttachmentStore_Attachment.hpp"

