#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class VoicemailContract : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VoicemailContract(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VoicemailContract(const ::android::provider::VoicemailContract& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VoicemailContract(::android::provider::VoicemailContract&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::VoicemailContract& operator=(const ::android::provider::VoicemailContract& x) {obj = x.obj; return *this;}
    ::android::provider::VoicemailContract& operator=(::android::provider::VoicemailContract&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.provider.VoicemailContract_Status.hpp"
#include "android.provider.VoicemailContract_Voicemails.hpp"

