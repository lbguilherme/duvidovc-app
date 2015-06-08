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
namespace java { namespace io { class File; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class DatagramSocket; } }
namespace java { namespace net { class Socket; } }

namespace android {
namespace os {
class ParcelFileDescriptor : public virtual ::java::lang::Object,
                             public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParcelFileDescriptor(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParcelFileDescriptor(const ::android::os::ParcelFileDescriptor& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ParcelFileDescriptor(::android::os::ParcelFileDescriptor&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::ParcelFileDescriptor& operator=(const ::android::os::ParcelFileDescriptor& x) {obj = x.obj; return *this;}
    ::android::os::ParcelFileDescriptor& operator=(::android::os::ParcelFileDescriptor&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::os::ParcelFileDescriptor open(const ::java::io::File&, int32_t);
    static ::android::os::ParcelFileDescriptor dup(const ::java::io::FileDescriptor&);
    ::android::os::ParcelFileDescriptor dup() const;
    static ::android::os::ParcelFileDescriptor fromFd(int32_t);
    static ::android::os::ParcelFileDescriptor adoptFd(int32_t);
    static ::android::os::ParcelFileDescriptor fromSocket(const ::java::net::Socket&);
    static ::android::os::ParcelFileDescriptor fromDatagramSocket(const ::java::net::DatagramSocket&);
    static std::vector< ::android::os::ParcelFileDescriptor> createPipe();
    ::java::io::FileDescriptor getFileDescriptor() const;
    int64_t getStatSize() const;
    int32_t getFd() const;
    int32_t detachFd() const;
    void close() const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}

#include "android.os.ParcelFileDescriptor_AutoCloseInputStream.hpp"
#include "android.os.ParcelFileDescriptor_AutoCloseOutputStream.hpp"

