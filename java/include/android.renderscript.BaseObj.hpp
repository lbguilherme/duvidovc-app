#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class BaseObj : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseObj(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseObj(const ::android::renderscript::BaseObj& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BaseObj(::android::renderscript::BaseObj&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::BaseObj& operator=(const ::android::renderscript::BaseObj& x) {obj = x.obj; return *this;}
    ::android::renderscript::BaseObj& operator=(::android::renderscript::BaseObj&& x) {obj = std::move(x.obj); return *this;}
    
    void setName(const ::java::lang::String&) const ;
    ::java::lang::String getName() const ;
    void destroy() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;

};
}
}


