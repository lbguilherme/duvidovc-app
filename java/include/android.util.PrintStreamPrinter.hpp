#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.Printer.hpp"

namespace java { namespace io { class PrintStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class PrintStreamPrinter : public virtual ::java::lang::Object,
                           public virtual ::android::util::Printer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrintStreamPrinter(jobject _obj) : ::java::lang::Object(_obj), ::android::util::Printer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrintStreamPrinter(const ::android::util::PrintStreamPrinter& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj;}
    PrintStreamPrinter(::android::util::PrintStreamPrinter&& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::PrintStreamPrinter& operator=(const ::android::util::PrintStreamPrinter& x) {obj = x.obj; return *this;}
    ::android::util::PrintStreamPrinter& operator=(::android::util::PrintStreamPrinter&& x) {obj = std::move(x.obj); return *this;}
    
    PrintStreamPrinter(const ::java::io::PrintStream&);
    void println(const ::java::lang::String&) const ;

};
}
}


