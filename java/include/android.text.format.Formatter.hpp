#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace format {
class Formatter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Formatter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Formatter(const ::android::text::format::Formatter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Formatter(::android::text::format::Formatter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::format::Formatter& operator=(const ::android::text::format::Formatter& x) {obj = x.obj; return *this;}
    ::android::text::format::Formatter& operator=(::android::text::format::Formatter&& x) {obj = std::move(x.obj); return *this;}
    
    Formatter();
    static ::java::lang::String formatFileSize(const ::android::content::Context&, int64_t);
    static ::java::lang::String formatShortFileSize(const ::android::content::Context&, int64_t);
    static ::java::lang::String formatIpAddress(int32_t);

};
}
}
}


