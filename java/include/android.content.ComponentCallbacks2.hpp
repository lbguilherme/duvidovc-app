#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ComponentCallbacks.hpp"


namespace android {
namespace content {
class ComponentCallbacks2 : public virtual ::java::lang::Object,
                            public virtual ::android::content::ComponentCallbacks {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComponentCallbacks2(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComponentCallbacks2(const ::android::content::ComponentCallbacks2& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0) {obj = x.obj;}
    ComponentCallbacks2(::android::content::ComponentCallbacks2&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ComponentCallbacks2& operator=(const ::android::content::ComponentCallbacks2& x) {obj = x.obj; return *this;}
    ::android::content::ComponentCallbacks2& operator=(::android::content::ComponentCallbacks2&& x) {obj = std::move(x.obj); return *this;}
    
    void onTrimMemory(int32_t) const;

};
}
}


