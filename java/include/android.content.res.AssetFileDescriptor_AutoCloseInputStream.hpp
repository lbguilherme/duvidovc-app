#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.ParcelFileDescriptor_AutoCloseInputStream.hpp"

namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }

namespace android {
namespace content {
namespace res {
class AssetFileDescriptor_AutoCloseInputStream : public virtual ::java::lang::Object,
                                                 public virtual ::android::os::ParcelFileDescriptor_AutoCloseInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AssetFileDescriptor_AutoCloseInputStream(jobject _obj) : ::java::lang::Object(_obj), ::android::os::ParcelFileDescriptor_AutoCloseInputStream(_obj), ::java::io::Closeable(_obj), ::java::io::FileInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AssetFileDescriptor_AutoCloseInputStream(const ::android::content::res::AssetFileDescriptor_AutoCloseInputStream& x) : ::java::lang::Object((jobject)0), ::android::os::ParcelFileDescriptor_AutoCloseInputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    AssetFileDescriptor_AutoCloseInputStream(::android::content::res::AssetFileDescriptor_AutoCloseInputStream&& x) : ::java::lang::Object((jobject)0), ::android::os::ParcelFileDescriptor_AutoCloseInputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::AssetFileDescriptor_AutoCloseInputStream& operator=(const ::android::content::res::AssetFileDescriptor_AutoCloseInputStream& x) {obj = x.obj; return *this;}
    ::android::content::res::AssetFileDescriptor_AutoCloseInputStream& operator=(::android::content::res::AssetFileDescriptor_AutoCloseInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    AssetFileDescriptor_AutoCloseInputStream(const ::android::content::res::AssetFileDescriptor&);
    int32_t available() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t read(const std::vector< int8_t>&) const;
    int64_t skip(int64_t) const;
    void mark(int32_t) const;
    bool markSupported() const;
    void reset() const;

};
}
}
}


