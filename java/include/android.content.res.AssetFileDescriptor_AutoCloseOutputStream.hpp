#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.ParcelFileDescriptor_AutoCloseOutputStream.hpp"

namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }

namespace android {
namespace content {
namespace res {
class AssetFileDescriptor_AutoCloseOutputStream : public virtual ::java::lang::Object,
                                                  public virtual ::android::os::ParcelFileDescriptor_AutoCloseOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AssetFileDescriptor_AutoCloseOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::android::os::ParcelFileDescriptor_AutoCloseOutputStream(_obj), ::java::io::Closeable(_obj), ::java::io::FileOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AssetFileDescriptor_AutoCloseOutputStream(const ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream& x) : ::java::lang::Object((jobject)0), ::android::os::ParcelFileDescriptor_AutoCloseOutputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    AssetFileDescriptor_AutoCloseOutputStream(::android::content::res::AssetFileDescriptor_AutoCloseOutputStream&& x) : ::java::lang::Object((jobject)0), ::android::os::ParcelFileDescriptor_AutoCloseOutputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream& operator=(const ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream& x) {obj = x.obj; return *this;}
    ::android::content::res::AssetFileDescriptor_AutoCloseOutputStream& operator=(::android::content::res::AssetFileDescriptor_AutoCloseOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    AssetFileDescriptor_AutoCloseOutputStream(const ::android::content::res::AssetFileDescriptor&);
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(const std::vector< int8_t>&) const;
    void write(int32_t) const;

};
}
}
}


