#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace microedition {
namespace khronos {
namespace opengles {
class GL : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GL(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GL(const ::javax::microedition::khronos::opengles::GL& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GL(::javax::microedition::khronos::opengles::GL&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::opengles::GL& operator=(const ::javax::microedition::khronos::opengles::GL& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::opengles::GL& operator=(::javax::microedition::khronos::opengles::GL&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


