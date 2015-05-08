#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class NativeAppCallAttachmentStore_Attachment : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NativeAppCallAttachmentStore_Attachment(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NativeAppCallAttachmentStore_Attachment(const ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NativeAppCallAttachmentStore_Attachment(::com::facebook::internal::NativeAppCallAttachmentStore_Attachment&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment& operator=(const ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment& operator=(::com::facebook::internal::NativeAppCallAttachmentStore_Attachment&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAttachmentUrl() const ;

};
}
}
}


