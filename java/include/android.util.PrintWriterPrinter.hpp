#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.Printer.hpp"

namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class PrintWriterPrinter : public virtual ::java::lang::Object,
                           public virtual ::android::util::Printer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrintWriterPrinter(jobject _obj) : ::java::lang::Object(_obj), ::android::util::Printer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrintWriterPrinter(const ::android::util::PrintWriterPrinter& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj;}
    PrintWriterPrinter(::android::util::PrintWriterPrinter&& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::PrintWriterPrinter& operator=(const ::android::util::PrintWriterPrinter& x) {obj = x.obj; return *this;}
    ::android::util::PrintWriterPrinter& operator=(::android::util::PrintWriterPrinter&& x) {obj = std::move(x.obj); return *this;}
    
    PrintWriterPrinter(const ::java::io::PrintWriter&);
    void println(const ::java::lang::String&) const ;

};
}
}


