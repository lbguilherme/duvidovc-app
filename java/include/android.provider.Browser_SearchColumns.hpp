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
class Browser_SearchColumns : public virtual ::java::lang::Object,
                              public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Browser_SearchColumns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Browser_SearchColumns(const ::android::provider::Browser_SearchColumns& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    Browser_SearchColumns(::android::provider::Browser_SearchColumns&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Browser_SearchColumns& operator=(const ::android::provider::Browser_SearchColumns& x) {obj = x.obj; return *this;}
    ::android::provider::Browser_SearchColumns& operator=(::android::provider::Browser_SearchColumns&& x) {obj = std::move(x.obj); return *this;}
    
    Browser_SearchColumns();

};
}
}


