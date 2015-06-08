#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class Allocation; } }
namespace android { namespace renderscript { class Mesh_Primitive; } }

namespace android {
namespace renderscript {
class Mesh : public virtual ::java::lang::Object,
             public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Mesh(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Mesh(const ::android::renderscript::Mesh& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Mesh(::android::renderscript::Mesh&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Mesh& operator=(const ::android::renderscript::Mesh& x) {obj = x.obj; return *this;}
    ::android::renderscript::Mesh& operator=(::android::renderscript::Mesh&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getVertexAllocationCount() const;
    ::android::renderscript::Allocation getVertexAllocation(int32_t) const;
    int32_t getPrimitiveCount() const;
    ::android::renderscript::Allocation getIndexSetAllocation(int32_t) const;
    ::android::renderscript::Mesh_Primitive getPrimitive(int32_t) const;

};
}
}

#include "android.renderscript.Mesh_AllocationBuilder.hpp"
#include "android.renderscript.Mesh_Builder.hpp"
#include "android.renderscript.Mesh_Primitive.hpp"
#include "android.renderscript.Mesh_TriangleMeshBuilder.hpp"

