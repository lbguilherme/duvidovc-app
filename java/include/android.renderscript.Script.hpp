#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class Allocation; } }
namespace android { namespace renderscript { class BaseObj; } }
namespace android { namespace renderscript { class FieldPacker; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Script : public virtual ::java::lang::Object,
               public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Script(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Script(const ::android::renderscript::Script& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Script(::android::renderscript::Script&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Script& operator=(const ::android::renderscript::Script& x) {obj = x.obj; return *this;}
    ::android::renderscript::Script& operator=(::android::renderscript::Script&& x) {obj = std::move(x.obj); return *this;}
    
    void bindAllocation(const ::android::renderscript::Allocation&, int32_t) const;
    void setVar(int32_t, float) const;
    void setVar(int32_t, double) const;
    void setVar(int32_t, int32_t) const;
    void setVar(int32_t, int64_t) const;
    void setVar(int32_t, bool) const;
    void setVar(int32_t, const ::android::renderscript::BaseObj&) const;
    void setVar(int32_t, const ::android::renderscript::FieldPacker&) const;
    void setTimeZone(const ::java::lang::String&) const;

};
}
}

#include "android.renderscript.Script_Builder.hpp"
#include "android.renderscript.Script_FieldBase.hpp"

