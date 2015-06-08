#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class Printer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Printer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Printer(const ::android::util::Printer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Printer(::android::util::Printer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Printer& operator=(const ::android::util::Printer& x) {obj = x.obj; return *this;}
    ::android::util::Printer& operator=(::android::util::Printer&& x) {obj = std::move(x.obj); return *this;}
    
    void println(const ::java::lang::String&) const;

};
}
}


