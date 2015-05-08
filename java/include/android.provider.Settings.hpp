#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class Settings : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Settings(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Settings(const ::android::provider::Settings& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Settings(::android::provider::Settings&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Settings& operator=(const ::android::provider::Settings& x) {obj = x.obj; return *this;}
    ::android::provider::Settings& operator=(::android::provider::Settings&& x) {obj = std::move(x.obj); return *this;}
    
    Settings();

};
}
}

#include "android.provider.Settings_NameValueTable.hpp"
#include "android.provider.Settings_Secure.hpp"
#include "android.provider.Settings_SettingNotFoundException.hpp"
#include "android.provider.Settings_System.hpp"

