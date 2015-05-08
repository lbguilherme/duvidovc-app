#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace security { namespace auth { namespace callback { class Callback; } } } }

namespace javax {
namespace security {
namespace auth {
namespace callback {
class UnsupportedCallbackException : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnsupportedCallbackException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnsupportedCallbackException(const ::javax::security::auth::callback::UnsupportedCallbackException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    UnsupportedCallbackException(::javax::security::auth::callback::UnsupportedCallbackException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::callback::UnsupportedCallbackException& operator=(const ::javax::security::auth::callback::UnsupportedCallbackException& x) {obj = x.obj; return *this;}
    ::javax::security::auth::callback::UnsupportedCallbackException& operator=(::javax::security::auth::callback::UnsupportedCallbackException&& x) {obj = std::move(x.obj); return *this;}
    
    UnsupportedCallbackException(const ::javax::security::auth::callback::Callback&);
    UnsupportedCallbackException(const ::javax::security::auth::callback::Callback&, const ::java::lang::String&);
    ::javax::security::auth::callback::Callback getCallback() const ;

};
}
}
}
}


