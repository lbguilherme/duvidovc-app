#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class SyncStateContract : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncStateContract(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncStateContract(const ::android::provider::SyncStateContract& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SyncStateContract(::android::provider::SyncStateContract&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::SyncStateContract& operator=(const ::android::provider::SyncStateContract& x) {obj = x.obj; return *this;}
    ::android::provider::SyncStateContract& operator=(::android::provider::SyncStateContract&& x) {obj = std::move(x.obj); return *this;}
    
    SyncStateContract();

};
}
}

#include "android.provider.SyncStateContract_Columns.hpp"
#include "android.provider.SyncStateContract_Constants.hpp"
#include "android.provider.SyncStateContract_Helpers.hpp"

