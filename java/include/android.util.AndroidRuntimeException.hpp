#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace util {
class AndroidRuntimeException : public virtual ::java::lang::Object,
                                public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidRuntimeException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidRuntimeException(const ::android::util::AndroidRuntimeException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AndroidRuntimeException(::android::util::AndroidRuntimeException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::AndroidRuntimeException& operator=(const ::android::util::AndroidRuntimeException& x) {obj = x.obj; return *this;}
    ::android::util::AndroidRuntimeException& operator=(::android::util::AndroidRuntimeException&& x) {obj = std::move(x.obj); return *this;}
    
    AndroidRuntimeException();
    AndroidRuntimeException(const ::java::lang::String&);
    AndroidRuntimeException(const ::java::lang::String&, const ::java::lang::Throwable&);
    AndroidRuntimeException(const ::java::lang::Exception&);

};
}
}


