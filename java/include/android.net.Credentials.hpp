#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace net {
class Credentials : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Credentials(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Credentials(const ::android::net::Credentials& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Credentials(::android::net::Credentials&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::Credentials& operator=(const ::android::net::Credentials& x) {obj = x.obj; return *this;}
    ::android::net::Credentials& operator=(::android::net::Credentials&& x) {obj = std::move(x.obj); return *this;}
    
    Credentials(int32_t, int32_t, int32_t);
    int32_t getPid() const;
    int32_t getUid() const;
    int32_t getGid() const;

};
}
}


