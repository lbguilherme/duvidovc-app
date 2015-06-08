#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Allocation; } }
namespace android { namespace renderscript { class Element; } }
namespace android { namespace renderscript { class Type; } }

namespace android {
namespace renderscript {
class Script_FieldBase : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Script_FieldBase(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Script_FieldBase(const ::android::renderscript::Script_FieldBase& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Script_FieldBase(::android::renderscript::Script_FieldBase&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Script_FieldBase& operator=(const ::android::renderscript::Script_FieldBase& x) {obj = x.obj; return *this;}
    ::android::renderscript::Script_FieldBase& operator=(::android::renderscript::Script_FieldBase&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::renderscript::Element getElement() const;
    ::android::renderscript::Type getType() const;
    ::android::renderscript::Allocation getAllocation() const;
    void updateAllocation() const;

};
}
}


