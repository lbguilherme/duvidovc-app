#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.OpenableColumns.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class VoicemailContract_Voicemails : public virtual ::java::lang::Object,
                                     public virtual ::android::provider::BaseColumns,
                                     public virtual ::android::provider::OpenableColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VoicemailContract_Voicemails(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::OpenableColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VoicemailContract_Voicemails(const ::android::provider::VoicemailContract_Voicemails& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::OpenableColumns((jobject)0) {obj = x.obj;}
    VoicemailContract_Voicemails(::android::provider::VoicemailContract_Voicemails&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::OpenableColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::VoicemailContract_Voicemails& operator=(const ::android::provider::VoicemailContract_Voicemails& x) {obj = x.obj; return *this;}
    ::android::provider::VoicemailContract_Voicemails& operator=(::android::provider::VoicemailContract_Voicemails&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::net::Uri buildSourceUri(const ::java::lang::String&);

};
}
}


