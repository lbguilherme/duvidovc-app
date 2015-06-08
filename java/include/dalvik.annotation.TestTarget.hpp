#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace dalvik {
namespace annotation {
class TestTarget : public virtual ::java::lang::Object,
                   public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestTarget(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestTarget(const ::dalvik::annotation::TestTarget& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    TestTarget(::dalvik::annotation::TestTarget&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::annotation::TestTarget& operator=(const ::dalvik::annotation::TestTarget& x) {obj = x.obj; return *this;}
    ::dalvik::annotation::TestTarget& operator=(::dalvik::annotation::TestTarget&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String methodName() const;
    ::java::lang::String conceptName() const;
    std::vector< ::java::lang::Class> methodArgs() const;

};
}
}


