#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.Printer.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuilder; } }

namespace android {
namespace util {
class StringBuilderPrinter : public virtual ::java::lang::Object,
                             public virtual ::android::util::Printer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringBuilderPrinter(jobject _obj) : ::java::lang::Object(_obj), ::android::util::Printer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringBuilderPrinter(const ::android::util::StringBuilderPrinter& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj;}
    StringBuilderPrinter(::android::util::StringBuilderPrinter&& x) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::StringBuilderPrinter& operator=(const ::android::util::StringBuilderPrinter& x) {obj = x.obj; return *this;}
    ::android::util::StringBuilderPrinter& operator=(::android::util::StringBuilderPrinter&& x) {obj = std::move(x.obj); return *this;}
    
    StringBuilderPrinter(const ::java::lang::StringBuilder&);
    void println(const ::java::lang::String&) const;

};
}
}


