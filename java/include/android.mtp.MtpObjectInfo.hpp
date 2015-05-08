#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace mtp {
class MtpObjectInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MtpObjectInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MtpObjectInfo(const ::android::mtp::MtpObjectInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MtpObjectInfo(::android::mtp::MtpObjectInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::mtp::MtpObjectInfo& operator=(const ::android::mtp::MtpObjectInfo& x) {obj = x.obj; return *this;}
    ::android::mtp::MtpObjectInfo& operator=(::android::mtp::MtpObjectInfo&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getObjectHandle() const ;
    int32_t getStorageId() const ;
    int32_t getFormat() const ;
    int32_t getProtectionStatus() const ;
    int32_t getCompressedSize() const ;
    int32_t getThumbFormat() const ;
    int32_t getThumbCompressedSize() const ;
    int32_t getThumbPixWidth() const ;
    int32_t getThumbPixHeight() const ;
    int32_t getImagePixWidth() const ;
    int32_t getImagePixHeight() const ;
    int32_t getImagePixDepth() const ;
    int32_t getParent() const ;
    int32_t getAssociationType() const ;
    int32_t getAssociationDesc() const ;
    int32_t getSequenceNumber() const ;
    ::java::lang::String getName() const ;
    int64_t getDateCreated() const ;
    int64_t getDateModified() const ;
    ::java::lang::String getKeywords() const ;

};
}
}


