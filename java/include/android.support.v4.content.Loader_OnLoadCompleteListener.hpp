#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace content { class Loader; } } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class Loader_OnLoadCompleteListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Loader_OnLoadCompleteListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Loader_OnLoadCompleteListener(const ::android::support::v4::content::Loader_OnLoadCompleteListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Loader_OnLoadCompleteListener(::android::support::v4::content::Loader_OnLoadCompleteListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::Loader_OnLoadCompleteListener& operator=(const ::android::support::v4::content::Loader_OnLoadCompleteListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::Loader_OnLoadCompleteListener& operator=(::android::support::v4::content::Loader_OnLoadCompleteListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onLoadComplete(const ::android::support::v4::content::Loader&, const ::java::lang::Object&) const ;

};
}
}
}
}


