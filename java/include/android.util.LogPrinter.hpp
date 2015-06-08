#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.Printer.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class LogPrinter : public virtual ::java::lang::Object,
                   public virtual ::android::util::Printer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LogPrinter(jobject _obj) : ::java::lang::Object(_obj), ::android::util::Printer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LogPrinter(const ::android::util::LogPrinter& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj;}
    LogPrinter(::android::util::LogPrinter&& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::LogPrinter& operator=(const ::android::util::LogPrinter& x) {obj = x.obj; return *this;}
    ::android::util::LogPrinter& operator=(::android::util::LogPrinter&& x) {obj = std::move(x.obj); return *this;}
    
    LogPrinter(int32_t, const ::java::lang::String&);
    void println(const ::java::lang::String&) const;

};
}
}


