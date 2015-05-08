#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"

namespace java { namespace lang { class Class; } }

namespace dalvik {
namespace annotation {
class TestTargetClass : public virtual ::java::lang::Object,
                        public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestTargetClass(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestTargetClass(const ::dalvik::annotation::TestTargetClass& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    TestTargetClass(::dalvik::annotation::TestTargetClass&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::annotation::TestTargetClass& operator=(const ::dalvik::annotation::TestTargetClass& x) {obj = x.obj; return *this;}
    ::dalvik::annotation::TestTargetClass& operator=(::dalvik::annotation::TestTargetClass&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Class value() const ;

};
}
}


