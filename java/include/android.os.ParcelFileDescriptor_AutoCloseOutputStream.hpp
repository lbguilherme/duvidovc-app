#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FileOutputStream.hpp"

namespace android { namespace os { class ParcelFileDescriptor; } }

namespace android {
namespace os {
class ParcelFileDescriptor_AutoCloseOutputStream : public virtual ::java::lang::Object,
                                                   public virtual ::java::io::FileOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParcelFileDescriptor_AutoCloseOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FileOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParcelFileDescriptor_AutoCloseOutputStream(const ::android::os::ParcelFileDescriptor_AutoCloseOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    ParcelFileDescriptor_AutoCloseOutputStream(::android::os::ParcelFileDescriptor_AutoCloseOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::ParcelFileDescriptor_AutoCloseOutputStream& operator=(const ::android::os::ParcelFileDescriptor_AutoCloseOutputStream& x) {obj = x.obj; return *this;}
    ::android::os::ParcelFileDescriptor_AutoCloseOutputStream& operator=(::android::os::ParcelFileDescriptor_AutoCloseOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ParcelFileDescriptor_AutoCloseOutputStream(const ::android::os::ParcelFileDescriptor&);
    void close() const ;

};
}
}


