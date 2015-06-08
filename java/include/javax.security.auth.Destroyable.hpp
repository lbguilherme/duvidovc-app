#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace security {
namespace auth {
class Destroyable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Destroyable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Destroyable(const ::javax::security::auth::Destroyable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Destroyable(::javax::security::auth::Destroyable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::Destroyable& operator=(const ::javax::security::auth::Destroyable& x) {obj = x.obj; return *this;}
    ::javax::security::auth::Destroyable& operator=(::javax::security::auth::Destroyable&& x) {obj = std::move(x.obj); return *this;}
    
    void destroy() const;
    bool isDestroyed() const;

};
}
}
}


