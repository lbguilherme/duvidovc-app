#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebStorage_Origin : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebStorage_Origin(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebStorage_Origin(const ::android::webkit::WebStorage_Origin& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebStorage_Origin(::android::webkit::WebStorage_Origin&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebStorage_Origin& operator=(const ::android::webkit::WebStorage_Origin& x) {obj = x.obj; return *this;}
    ::android::webkit::WebStorage_Origin& operator=(::android::webkit::WebStorage_Origin&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getOrigin() const;
    int64_t getQuota() const;
    int64_t getUsage() const;

};
}
}


