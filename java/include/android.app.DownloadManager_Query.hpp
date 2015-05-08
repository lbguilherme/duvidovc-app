#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class DownloadManager_Query; } }

namespace android {
namespace app {
class DownloadManager_Query : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DownloadManager_Query(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DownloadManager_Query(const ::android::app::DownloadManager_Query& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DownloadManager_Query(::android::app::DownloadManager_Query&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::DownloadManager_Query& operator=(const ::android::app::DownloadManager_Query& x) {obj = x.obj; return *this;}
    ::android::app::DownloadManager_Query& operator=(::android::app::DownloadManager_Query&& x) {obj = std::move(x.obj); return *this;}
    
    DownloadManager_Query();
    ::android::app::DownloadManager_Query setFilterById(const std::vector< int64_t>&) const ;
    ::android::app::DownloadManager_Query setFilterByStatus(int32_t) const ;

};
}
}


