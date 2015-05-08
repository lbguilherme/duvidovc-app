#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"


namespace android {
namespace provider {
class LiveFolders : public virtual ::java::lang::Object,
                    public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LiveFolders(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LiveFolders(const ::android::provider::LiveFolders& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    LiveFolders(::android::provider::LiveFolders&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::LiveFolders& operator=(const ::android::provider::LiveFolders& x) {obj = x.obj; return *this;}
    ::android::provider::LiveFolders& operator=(::android::provider::LiveFolders&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


