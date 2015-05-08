#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FileInputStream.hpp"

namespace android { namespace os { class ParcelFileDescriptor; } }

namespace android {
namespace os {
class ParcelFileDescriptor_AutoCloseInputStream : public virtual ::java::lang::Object,
                                                  public virtual ::java::io::FileInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParcelFileDescriptor_AutoCloseInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FileInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParcelFileDescriptor_AutoCloseInputStream(const ::android::os::ParcelFileDescriptor_AutoCloseInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    ParcelFileDescriptor_AutoCloseInputStream(::android::os::ParcelFileDescriptor_AutoCloseInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::ParcelFileDescriptor_AutoCloseInputStream& operator=(const ::android::os::ParcelFileDescriptor_AutoCloseInputStream& x) {obj = x.obj; return *this;}
    ::android::os::ParcelFileDescriptor_AutoCloseInputStream& operator=(::android::os::ParcelFileDescriptor_AutoCloseInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ParcelFileDescriptor_AutoCloseInputStream(const ::android::os::ParcelFileDescriptor&);
    void close() const ;

};
}
}


