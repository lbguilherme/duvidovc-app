#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace security { namespace auth { namespace callback { class Callback; } } } }

namespace javax {
namespace security {
namespace auth {
namespace callback {
class CallbackHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallbackHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallbackHandler(const ::javax::security::auth::callback::CallbackHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CallbackHandler(::javax::security::auth::callback::CallbackHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::callback::CallbackHandler& operator=(const ::javax::security::auth::callback::CallbackHandler& x) {obj = x.obj; return *this;}
    ::javax::security::auth::callback::CallbackHandler& operator=(::javax::security::auth::callback::CallbackHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void handle(const std::vector< ::javax::security::auth::callback::Callback>&) const ;

};
}
}
}
}


