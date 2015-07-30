#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.IntentService.hpp"

namespace java { namespace lang { class String; } }

namespace vc {
namespace duvido {
namespace gcm {
class RegistrationIntentService : public virtual ::java::lang::Object,
                                  public virtual ::android::app::IntentService {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RegistrationIntentService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::IntentService(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RegistrationIntentService(const ::vc::duvido::gcm::RegistrationIntentService& x) : ::java::lang::Object((jobject)0), ::android::app::IntentService((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    RegistrationIntentService(::vc::duvido::gcm::RegistrationIntentService&& x) : ::java::lang::Object((jobject)0), ::android::app::IntentService((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::gcm::RegistrationIntentService& operator=(const ::vc::duvido::gcm::RegistrationIntentService& x) {obj = x.obj; return *this;}
    ::vc::duvido::gcm::RegistrationIntentService& operator=(::vc::duvido::gcm::RegistrationIntentService&& x) {obj = std::move(x.obj); return *this;}
    
    static void jniInitializeNative();
    RegistrationIntentService();
    void sendRegistrationToServer(const ::java::lang::String&) const;

};
}
}
}


