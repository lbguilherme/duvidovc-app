#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace annotation { class RetentionPolicy; } } }

namespace java {
namespace lang {
namespace annotation {
class RetentionPolicy : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RetentionPolicy(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RetentionPolicy(const ::java::lang::annotation::RetentionPolicy& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    RetentionPolicy(::java::lang::annotation::RetentionPolicy&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::RetentionPolicy& operator=(const ::java::lang::annotation::RetentionPolicy& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::RetentionPolicy& operator=(::java::lang::annotation::RetentionPolicy&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::lang::annotation::RetentionPolicy> values();
    static ::java::lang::annotation::RetentionPolicy valueOf(const ::java::lang::String&);

};
}
}
}


