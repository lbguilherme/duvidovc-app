#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class HttpAuthHandler : public virtual ::java::lang::Object,
                        public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpAuthHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpAuthHandler(const ::android::webkit::HttpAuthHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    HttpAuthHandler(::android::webkit::HttpAuthHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::HttpAuthHandler& operator=(const ::android::webkit::HttpAuthHandler& x) {obj = x.obj; return *this;}
    ::android::webkit::HttpAuthHandler& operator=(::android::webkit::HttpAuthHandler&& x) {obj = std::move(x.obj); return *this;}
    
    bool useHttpAuthUsernamePassword() const ;
    void cancel() const ;
    void proceed(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}


