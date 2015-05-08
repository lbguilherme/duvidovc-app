#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.AndroidException.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class IntentSender_SendIntentException : public virtual ::java::lang::Object,
                                         public virtual ::android::util::AndroidException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentSender_SendIntentException(jobject _obj) : ::java::lang::Object(_obj), ::android::util::AndroidException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentSender_SendIntentException(const ::android::content::IntentSender_SendIntentException& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    IntentSender_SendIntentException(::android::content::IntentSender_SendIntentException&& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::IntentSender_SendIntentException& operator=(const ::android::content::IntentSender_SendIntentException& x) {obj = x.obj; return *this;}
    ::android::content::IntentSender_SendIntentException& operator=(::android::content::IntentSender_SendIntentException&& x) {obj = std::move(x.obj); return *this;}
    
    IntentSender_SendIntentException();
    IntentSender_SendIntentException(const ::java::lang::String&);
    IntentSender_SendIntentException(const ::java::lang::Exception&);

};
}
}


