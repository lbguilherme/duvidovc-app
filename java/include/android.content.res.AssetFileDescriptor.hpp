#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class FileInputStream; } }
namespace java { namespace io { class FileOutputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace res {
class AssetFileDescriptor : public virtual ::java::lang::Object,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AssetFileDescriptor(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AssetFileDescriptor(const ::android::content::res::AssetFileDescriptor& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    AssetFileDescriptor(::android::content::res::AssetFileDescriptor&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::AssetFileDescriptor& operator=(const ::android::content::res::AssetFileDescriptor& x) {obj = x.obj; return *this;}
    ::android::content::res::AssetFileDescriptor& operator=(::android::content::res::AssetFileDescriptor&& x) {obj = std::move(x.obj); return *this;}
    
    AssetFileDescriptor(const ::android::os::ParcelFileDescriptor&, int64_t, int64_t);
    ::android::os::ParcelFileDescriptor getParcelFileDescriptor() const ;
    ::java::io::FileDescriptor getFileDescriptor() const ;
    int64_t getStartOffset() const ;
    int64_t getLength() const ;
    int64_t getDeclaredLength() const ;
    void close() const ;
    ::java::io::FileInputStream createInputStream() const ;
    ::java::io::FileOutputStream createOutputStream() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}

#include "android.content.res.AssetFileDescriptor_AutoCloseInputStream.hpp"
#include "android.content.res.AssetFileDescriptor_AutoCloseOutputStream.hpp"

