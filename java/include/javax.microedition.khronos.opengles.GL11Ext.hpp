#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.microedition.khronos.opengles.GL.hpp"

namespace java { namespace nio { class Buffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }
namespace java { namespace nio { class ShortBuffer; } }

namespace javax {
namespace microedition {
namespace khronos {
namespace opengles {
class GL11Ext : public virtual ::java::lang::Object,
                public virtual ::javax::microedition::khronos::opengles::GL {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GL11Ext(jobject _obj) : ::java::lang::Object(_obj), ::javax::microedition::khronos::opengles::GL(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GL11Ext(const ::javax::microedition::khronos::opengles::GL11Ext& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj;}
    GL11Ext(::javax::microedition::khronos::opengles::GL11Ext&& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::opengles::GL((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::opengles::GL11Ext& operator=(const ::javax::microedition::khronos::opengles::GL11Ext& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::opengles::GL11Ext& operator=(::javax::microedition::khronos::opengles::GL11Ext&& x) {obj = std::move(x.obj); return *this;}
    
    void glTexParameterfv(int32_t, int32_t, const std::vector< float>&, int32_t) const ;
    void glCurrentPaletteMatrixOES(int32_t) const ;
    void glDrawTexfOES(float, float, float, float, float) const ;
    void glDrawTexfvOES(const std::vector< float>&, int32_t) const ;
    void glDrawTexfvOES(const ::java::nio::FloatBuffer&) const ;
    void glDrawTexiOES(int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void glDrawTexivOES(const std::vector< int32_t>&, int32_t) const ;
    void glDrawTexivOES(const ::java::nio::IntBuffer&) const ;
    void glDrawTexsOES(int16_t, int16_t, int16_t, int16_t, int16_t) const ;
    void glDrawTexsvOES(const std::vector< int16_t>&, int32_t) const ;
    void glDrawTexsvOES(const ::java::nio::ShortBuffer&) const ;
    void glDrawTexxOES(int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void glDrawTexxvOES(const std::vector< int32_t>&, int32_t) const ;
    void glDrawTexxvOES(const ::java::nio::IntBuffer&) const ;
    void glEnable(int32_t) const ;
    void glEnableClientState(int32_t) const ;
    void glLoadPaletteFromModelViewMatrixOES() const ;
    void glMatrixIndexPointerOES(int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const ;
    void glMatrixIndexPointerOES(int32_t, int32_t, int32_t, int32_t) const ;
    void glWeightPointerOES(int32_t, int32_t, int32_t, const ::java::nio::Buffer&) const ;
    void glWeightPointerOES(int32_t, int32_t, int32_t, int32_t) const ;

};
}
}
}
}


