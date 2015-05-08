#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.io.Closeable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class DropBoxManager_Entry : public virtual ::java::lang::Object,
                             public virtual ::android::os::Parcelable,
                             public virtual ::java::io::Closeable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DropBoxManager_Entry(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DropBoxManager_Entry(const ::android::os::DropBoxManager_Entry& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    DropBoxManager_Entry(::android::os::DropBoxManager_Entry&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::DropBoxManager_Entry& operator=(const ::android::os::DropBoxManager_Entry& x) {obj = x.obj; return *this;}
    ::android::os::DropBoxManager_Entry& operator=(::android::os::DropBoxManager_Entry&& x) {obj = std::move(x.obj); return *this;}
    
    DropBoxManager_Entry(const ::java::lang::String&, int64_t);
    DropBoxManager_Entry(const ::java::lang::String&, int64_t, const ::java::lang::String&);
    DropBoxManager_Entry(const ::java::lang::String&, int64_t, const std::vector< int8_t>&, int32_t);
    DropBoxManager_Entry(const ::java::lang::String&, int64_t, const ::android::os::ParcelFileDescriptor&, int32_t);
    DropBoxManager_Entry(const ::java::lang::String&, int64_t, const ::java::io::File&, int32_t);
    void close() const ;
    ::java::lang::String getTag() const ;
    int64_t getTimeMillis() const ;
    int32_t getFlags() const ;
    ::java::lang::String getText(int32_t) const ;
    ::java::io::InputStream getInputStream() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}


