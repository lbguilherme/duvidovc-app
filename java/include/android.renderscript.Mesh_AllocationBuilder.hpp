#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Allocation; } }
namespace android { namespace renderscript { class Mesh; } }
namespace android { namespace renderscript { class Mesh_AllocationBuilder; } }
namespace android { namespace renderscript { class Mesh_Primitive; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class Mesh_AllocationBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Mesh_AllocationBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Mesh_AllocationBuilder(const ::android::renderscript::Mesh_AllocationBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Mesh_AllocationBuilder(::android::renderscript::Mesh_AllocationBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Mesh_AllocationBuilder& operator=(const ::android::renderscript::Mesh_AllocationBuilder& x) {obj = x.obj; return *this;}
    ::android::renderscript::Mesh_AllocationBuilder& operator=(::android::renderscript::Mesh_AllocationBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    Mesh_AllocationBuilder(const ::android::renderscript::RenderScript&);
    int32_t getCurrentVertexTypeIndex() const;
    int32_t getCurrentIndexSetIndex() const;
    ::android::renderscript::Mesh_AllocationBuilder addVertexAllocation(const ::android::renderscript::Allocation&) const;
    ::android::renderscript::Mesh_AllocationBuilder addIndexSetAllocation(const ::android::renderscript::Allocation&, const ::android::renderscript::Mesh_Primitive&) const;
    ::android::renderscript::Mesh_AllocationBuilder addIndexSetType(const ::android::renderscript::Mesh_Primitive&) const;
    ::android::renderscript::Mesh create() const;

};
}
}


