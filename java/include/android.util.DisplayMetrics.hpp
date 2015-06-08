#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace util { class DisplayMetrics; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class DisplayMetrics : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DisplayMetrics(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DisplayMetrics(const ::android::util::DisplayMetrics& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DisplayMetrics(::android::util::DisplayMetrics&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::DisplayMetrics& operator=(const ::android::util::DisplayMetrics& x) {obj = x.obj; return *this;}
    ::android::util::DisplayMetrics& operator=(::android::util::DisplayMetrics&& x) {obj = std::move(x.obj); return *this;}
    
    DisplayMetrics();
    void setTo(const ::android::util::DisplayMetrics&) const;
    void setToDefaults() const;
    ::java::lang::String toString() const;

};
}
}


