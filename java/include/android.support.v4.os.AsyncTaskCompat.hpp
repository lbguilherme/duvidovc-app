#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class AsyncTask; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace os {
class AsyncTaskCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncTaskCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncTaskCompat(const ::android::support::v4::os::AsyncTaskCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AsyncTaskCompat(::android::support::v4::os::AsyncTaskCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::os::AsyncTaskCompat& operator=(const ::android::support::v4::os::AsyncTaskCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::os::AsyncTaskCompat& operator=(::android::support::v4::os::AsyncTaskCompat&& x) {obj = std::move(x.obj); return *this;}
    
    AsyncTaskCompat();
    static ::android::os::AsyncTask executeParallel(const ::android::os::AsyncTask&, const std::vector< ::java::lang::Object>&);

};
}
}
}
}


