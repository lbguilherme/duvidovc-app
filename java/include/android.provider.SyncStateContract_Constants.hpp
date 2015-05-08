#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.SyncStateContract_Columns.hpp"


namespace android {
namespace provider {
class SyncStateContract_Constants : public virtual ::java::lang::Object,
                                    public virtual ::android::provider::SyncStateContract_Columns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncStateContract_Constants(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::SyncStateContract_Columns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncStateContract_Constants(const ::android::provider::SyncStateContract_Constants& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::SyncStateContract_Columns((jobject)0) {obj = x.obj;}
    SyncStateContract_Constants(::android::provider::SyncStateContract_Constants&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::SyncStateContract_Columns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::SyncStateContract_Constants& operator=(const ::android::provider::SyncStateContract_Constants& x) {obj = x.obj; return *this;}
    ::android::provider::SyncStateContract_Constants& operator=(::android::provider::SyncStateContract_Constants&& x) {obj = std::move(x.obj); return *this;}
    
    SyncStateContract_Constants();

};
}
}


