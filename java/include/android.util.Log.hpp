#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace util {
class Log : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Log(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Log(const ::android::util::Log& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Log(::android::util::Log&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Log& operator=(const ::android::util::Log& x) {obj = x.obj; return *this;}
    ::android::util::Log& operator=(::android::util::Log&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t v(const ::java::lang::String&, const ::java::lang::String&);
    static int32_t v(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    static int32_t d(const ::java::lang::String&, const ::java::lang::String&);
    static int32_t d(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    static int32_t i(const ::java::lang::String&, const ::java::lang::String&);
    static int32_t i(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    static int32_t w(const ::java::lang::String&, const ::java::lang::String&);
    static int32_t w(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    static bool isLoggable(const ::java::lang::String&, int32_t);
    static int32_t w(const ::java::lang::String&, const ::java::lang::Throwable&);
    static int32_t e(const ::java::lang::String&, const ::java::lang::String&);
    static int32_t e(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    static int32_t wtf(const ::java::lang::String&, const ::java::lang::String&);
    static int32_t wtf(const ::java::lang::String&, const ::java::lang::Throwable&);
    static int32_t wtf(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    static ::java::lang::String getStackTraceString(const ::java::lang::Throwable&);
    static int32_t println(int32_t, const ::java::lang::String&, const ::java::lang::String&);

};
}
}


