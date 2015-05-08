#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class UserDictionary : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UserDictionary(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UserDictionary(const ::android::provider::UserDictionary& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UserDictionary(::android::provider::UserDictionary&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::UserDictionary& operator=(const ::android::provider::UserDictionary& x) {obj = x.obj; return *this;}
    ::android::provider::UserDictionary& operator=(::android::provider::UserDictionary&& x) {obj = std::move(x.obj); return *this;}
    
    UserDictionary();

};
}
}

#include "android.provider.UserDictionary_Words.hpp"

