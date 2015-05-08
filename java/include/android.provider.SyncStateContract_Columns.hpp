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
class SyncStateContract_Columns : public virtual ::java::lang::Object,
                                  public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncStateContract_Columns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncStateContract_Columns(const ::android::provider::SyncStateContract_Columns& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    SyncStateContract_Columns(::android::provider::SyncStateContract_Columns&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::SyncStateContract_Columns& operator=(const ::android::provider::SyncStateContract_Columns& x) {obj = x.obj; return *this;}
    ::android::provider::SyncStateContract_Columns& operator=(::android::provider::SyncStateContract_Columns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


