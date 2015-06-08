#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"

namespace java { namespace lang { namespace annotation { class RetentionPolicy; } } }

namespace java {
namespace lang {
namespace annotation {
class Retention : public virtual ::java::lang::Object,
                  public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Retention(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Retention(const ::java::lang::annotation::Retention& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    Retention(::java::lang::annotation::Retention&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::Retention& operator=(const ::java::lang::annotation::Retention& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::Retention& operator=(::java::lang::annotation::Retention&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::annotation::RetentionPolicy value() const;

};
}
}
}


