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
namespace app {
class PendingIntent_CanceledException : public virtual ::java::lang::Object,
                                        public virtual ::android::util::AndroidException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PendingIntent_CanceledException(jobject _obj) : ::java::lang::Object(_obj), ::android::util::AndroidException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PendingIntent_CanceledException(const ::android::app::PendingIntent_CanceledException& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    PendingIntent_CanceledException(::android::app::PendingIntent_CanceledException&& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::PendingIntent_CanceledException& operator=(const ::android::app::PendingIntent_CanceledException& x) {obj = x.obj; return *this;}
    ::android::app::PendingIntent_CanceledException& operator=(::android::app::PendingIntent_CanceledException&& x) {obj = std::move(x.obj); return *this;}
    
    PendingIntent_CanceledException();
    PendingIntent_CanceledException(const ::java::lang::String&);
    PendingIntent_CanceledException(const ::java::lang::Exception&);

};
}
}


