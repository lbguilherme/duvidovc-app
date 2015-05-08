#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace security {
namespace auth {
class DestroyFailedException : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DestroyFailedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DestroyFailedException(const ::javax::security::auth::DestroyFailedException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    DestroyFailedException(::javax::security::auth::DestroyFailedException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::DestroyFailedException& operator=(const ::javax::security::auth::DestroyFailedException& x) {obj = x.obj; return *this;}
    ::javax::security::auth::DestroyFailedException& operator=(::javax::security::auth::DestroyFailedException&& x) {obj = std::move(x.obj); return *this;}
    
    DestroyFailedException();
    DestroyFailedException(const ::java::lang::String&);

};
}
}
}


