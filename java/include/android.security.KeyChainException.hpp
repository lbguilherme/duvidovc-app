#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace security {
class KeyChainException : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyChainException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyChainException(const ::android::security::KeyChainException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    KeyChainException(::android::security::KeyChainException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::security::KeyChainException& operator=(const ::android::security::KeyChainException& x) {obj = x.obj; return *this;}
    ::android::security::KeyChainException& operator=(::android::security::KeyChainException&& x) {obj = std::move(x.obj); return *this;}
    
    KeyChainException();
    KeyChainException(const ::java::lang::String&);
    KeyChainException(const ::java::lang::String&, const ::java::lang::Throwable&);
    KeyChainException(const ::java::lang::Throwable&);

};
}
}


