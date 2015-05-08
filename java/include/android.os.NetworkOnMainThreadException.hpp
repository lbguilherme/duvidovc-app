#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"


namespace android {
namespace os {
class NetworkOnMainThreadException : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetworkOnMainThreadException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetworkOnMainThreadException(const ::android::os::NetworkOnMainThreadException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    NetworkOnMainThreadException(::android::os::NetworkOnMainThreadException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::NetworkOnMainThreadException& operator=(const ::android::os::NetworkOnMainThreadException& x) {obj = x.obj; return *this;}
    ::android::os::NetworkOnMainThreadException& operator=(::android::os::NetworkOnMainThreadException&& x) {obj = std::move(x.obj); return *this;}
    
    NetworkOnMainThreadException();

};
}
}


