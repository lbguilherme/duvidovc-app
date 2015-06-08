#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace support { namespace v4 { namespace print { class PrintHelper_OnPrintFinishCallback; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace print {
class PrintHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrintHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrintHelper(const ::android::support::v4::print::PrintHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PrintHelper(::android::support::v4::print::PrintHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::print::PrintHelper& operator=(const ::android::support::v4::print::PrintHelper& x) {obj = x.obj; return *this;}
    ::android::support::v4::print::PrintHelper& operator=(::android::support::v4::print::PrintHelper&& x) {obj = std::move(x.obj); return *this;}
    
    static bool systemSupportsPrint();
    PrintHelper(const ::android::content::Context&);
    void setScaleMode(int32_t) const;
    int32_t getScaleMode() const;
    void setColorMode(int32_t) const;
    int32_t getColorMode() const;
    void setOrientation(int32_t) const;
    int32_t getOrientation() const;
    void printBitmap(const ::java::lang::String&, const ::android::graphics::Bitmap&) const;
    void printBitmap(const ::java::lang::String&, const ::android::graphics::Bitmap&, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback&) const;
    void printBitmap(const ::java::lang::String&, const ::android::net::Uri&) const;
    void printBitmap(const ::java::lang::String&, const ::android::net::Uri&, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback&) const;

};
}
}
}
}

#include "android.support.v4.print.PrintHelper_OnPrintFinishCallback.hpp"
#include "android.support.v4.print.PrintHelper_PrintHelperKitkatImpl.hpp"
#include "android.support.v4.print.PrintHelper_PrintHelperStubImpl.hpp"
#include "android.support.v4.print.PrintHelper_PrintHelperVersionImpl.hpp"

