#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class KeyCharacterMap_KeyData : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyCharacterMap_KeyData(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyCharacterMap_KeyData(const ::android::view::KeyCharacterMap_KeyData& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyCharacterMap_KeyData(::android::view::KeyCharacterMap_KeyData&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::KeyCharacterMap_KeyData& operator=(const ::android::view::KeyCharacterMap_KeyData& x) {obj = x.obj; return *this;}
    ::android::view::KeyCharacterMap_KeyData& operator=(::android::view::KeyCharacterMap_KeyData&& x) {obj = std::move(x.obj); return *this;}
    
    KeyCharacterMap_KeyData();

};
}
}


