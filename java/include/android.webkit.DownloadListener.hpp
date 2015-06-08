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
class DownloadListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DownloadListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DownloadListener(const ::android::webkit::DownloadListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DownloadListener(::android::webkit::DownloadListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::DownloadListener& operator=(const ::android::webkit::DownloadListener& x) {obj = x.obj; return *this;}
    ::android::webkit::DownloadListener& operator=(::android::webkit::DownloadListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDownloadStart(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, int64_t) const;

};
}
}


