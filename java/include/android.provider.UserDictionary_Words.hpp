#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class UserDictionary_Words : public virtual ::java::lang::Object,
                             public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UserDictionary_Words(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UserDictionary_Words(const ::android::provider::UserDictionary_Words& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    UserDictionary_Words(::android::provider::UserDictionary_Words&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::UserDictionary_Words& operator=(const ::android::provider::UserDictionary_Words& x) {obj = x.obj; return *this;}
    ::android::provider::UserDictionary_Words& operator=(::android::provider::UserDictionary_Words&& x) {obj = std::move(x.obj); return *this;}
    
    UserDictionary_Words();
    static void addWord(const ::android::content::Context&, const ::java::lang::String&, int32_t, int32_t);

};
}
}


