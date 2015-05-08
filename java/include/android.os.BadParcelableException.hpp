#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.AndroidRuntimeException.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class BadParcelableException : public virtual ::java::lang::Object,
                               public virtual ::android::util::AndroidRuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BadParcelableException(jobject _obj) : ::java::lang::Object(_obj), ::android::util::AndroidRuntimeException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BadParcelableException(const ::android::os::BadParcelableException& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    BadParcelableException(::android::os::BadParcelableException&& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::BadParcelableException& operator=(const ::android::os::BadParcelableException& x) {obj = x.obj; return *this;}
    ::android::os::BadParcelableException& operator=(::android::os::BadParcelableException&& x) {obj = std::move(x.obj); return *this;}
    
    BadParcelableException(const ::java::lang::String&);
    BadParcelableException(const ::java::lang::Exception&);

};
}
}


