#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.print.PrintHelper_PrintHelperVersionImpl.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace support { namespace v4 { namespace print { class PrintHelper_OnPrintFinishCallback; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace print {
class PrintHelper_PrintHelperKitkatImpl : public virtual ::java::lang::Object,
                                          public virtual ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrintHelper_PrintHelperKitkatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrintHelper_PrintHelperKitkatImpl(const ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl((jobject)0) {obj = x.obj;}
    PrintHelper_PrintHelperKitkatImpl(::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl& operator=(const ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl& operator=(::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setScaleMode(int32_t) const;
    int32_t getScaleMode() const;
    void setColorMode(int32_t) const;
    int32_t getColorMode() const;
    void setOrientation(int32_t) const;
    int32_t getOrientation() const;
    void printBitmap(const ::java::lang::String&, const ::android::graphics::Bitmap&, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback&) const;
    void printBitmap(const ::java::lang::String&, const ::android::net::Uri&, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback&) const;

};
}
}
}
}


