#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"


namespace android {
namespace net {
class ParseException : public virtual ::java::lang::Object,
                       public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParseException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParseException(const ::android::net::ParseException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ParseException(::android::net::ParseException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::ParseException& operator=(const ::android::net::ParseException& x) {obj = x.obj; return *this;}
    ::android::net::ParseException& operator=(::android::net::ParseException&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


