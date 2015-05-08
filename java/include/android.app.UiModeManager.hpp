#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
class UiModeManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UiModeManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UiModeManager(const ::android::app::UiModeManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UiModeManager(::android::app::UiModeManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::UiModeManager& operator=(const ::android::app::UiModeManager& x) {obj = x.obj; return *this;}
    ::android::app::UiModeManager& operator=(::android::app::UiModeManager&& x) {obj = std::move(x.obj); return *this;}
    
    void enableCarMode(int32_t) const ;
    void disableCarMode(int32_t) const ;
    int32_t getCurrentModeType() const ;
    void setNightMode(int32_t) const ;
    int32_t getNightMode() const ;

};
}
}


