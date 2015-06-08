#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.microedition.khronos.opengles.GL.hpp"

namespace java { namespace nio { class IntBuffer; } }

namespace javax {
namespace microedition {
namespace khronos {
namespace opengles {
class GL10Ext : public virtual ::java::lang::Object,
                public virtual ::javax::microedition::khronos::opengles::GL {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GL10Ext(jobject _obj) : ::java::lang::Object(_obj), ::javax::microedition::khronos::opengles::GL(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GL10Ext(const ::javax::microedition::khronos::opengles::GL10Ext& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj;}
    GL10Ext(::javax::microedition::khronos::opengles::GL10Ext&& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::opengles::GL10Ext& operator=(const ::javax::microedition::khronos::opengles::GL10Ext& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::opengles::GL10Ext& operator=(::javax::microedition::khronos::opengles::GL10Ext&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t glQueryMatrixxOES(const std::vector< int32_t>&, int32_t, const std::vector< int32_t>&, int32_t) const;
    int32_t glQueryMatrixxOES(const ::java::nio::IntBuffer&, const ::java::nio::IntBuffer&) const;

};
}
}
}
}


