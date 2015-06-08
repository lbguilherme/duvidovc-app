#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"


namespace android {
namespace webkit {
class SslErrorHandler : public virtual ::java::lang::Object,
                        public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SslErrorHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SslErrorHandler(const ::android::webkit::SslErrorHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    SslErrorHandler(::android::webkit::SslErrorHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::SslErrorHandler& operator=(const ::android::webkit::SslErrorHandler& x) {obj = x.obj; return *this;}
    ::android::webkit::SslErrorHandler& operator=(::android::webkit::SslErrorHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void proceed() const;
    void cancel() const;

};
}
}


