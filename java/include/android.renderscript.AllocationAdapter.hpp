#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.Allocation.hpp"

namespace android { namespace renderscript { class Allocation; } }
namespace android { namespace renderscript { class AllocationAdapter; } }
namespace android { namespace renderscript { class RenderScript; } }
namespace android { namespace renderscript { class Type_CubemapFace; } }

namespace android {
namespace renderscript {
class AllocationAdapter : public virtual ::java::lang::Object,
                          public virtual ::android::renderscript::Allocation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AllocationAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::Allocation(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AllocationAdapter(const ::android::renderscript::AllocationAdapter& x) : ::java::lang::Object((jobject)0), ::android::renderscript::Allocation((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    AllocationAdapter(::android::renderscript::AllocationAdapter&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::Allocation((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::AllocationAdapter& operator=(const ::android::renderscript::AllocationAdapter& x) {obj = x.obj; return *this;}
    ::android::renderscript::AllocationAdapter& operator=(::android::renderscript::AllocationAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    void setLOD(int32_t) const ;
    void setFace(const ::android::renderscript::Type_CubemapFace&) const ;
    void setY(int32_t) const ;
    void setZ(int32_t) const ;
    static ::android::renderscript::AllocationAdapter create1D(const ::android::renderscript::RenderScript&, const ::android::renderscript::Allocation&);
    static ::android::renderscript::AllocationAdapter create2D(const ::android::renderscript::RenderScript&, const ::android::renderscript::Allocation&);
    void resize(int32_t) const ;

};
}
}


