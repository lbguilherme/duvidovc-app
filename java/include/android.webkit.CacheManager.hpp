#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class CacheManager_CacheResult; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace webkit {
class CacheManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CacheManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CacheManager(const ::android::webkit::CacheManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CacheManager(::android::webkit::CacheManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::CacheManager& operator=(const ::android::webkit::CacheManager& x) {obj = x.obj; return *this;}
    ::android::webkit::CacheManager& operator=(::android::webkit::CacheManager&& x) {obj = std::move(x.obj); return *this;}
    
    CacheManager();
    static ::java::io::File getCacheFileBaseDir();
    static bool cacheDisabled();
    static bool startCacheTransaction();
    static bool endCacheTransaction();
    static ::android::webkit::CacheManager_CacheResult getCacheFile(const ::java::lang::String&, const ::java::util::Map&);
    static void saveCacheFile(const ::java::lang::String&, const ::android::webkit::CacheManager_CacheResult&);

};
}
}

#include "android.webkit.CacheManager_CacheResult.hpp"

