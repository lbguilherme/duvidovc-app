#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class ObbInfo; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace res {
class ObbScanner : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObbScanner(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObbScanner(const ::android::content::res::ObbScanner& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ObbScanner(::android::content::res::ObbScanner&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::ObbScanner& operator=(const ::android::content::res::ObbScanner& x) {obj = x.obj; return *this;}
    ::android::content::res::ObbScanner& operator=(::android::content::res::ObbScanner&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::content::res::ObbInfo getObbInfo(const ::java::lang::String&);

};
}
}
}


