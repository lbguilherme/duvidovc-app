#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace bolts {
class Capture : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Capture(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Capture(const ::bolts::Capture& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Capture(::bolts::Capture&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::Capture& operator=(const ::bolts::Capture& x) {obj = x.obj; return *this;}
    ::bolts::Capture& operator=(::bolts::Capture&& x) {obj = std::move(x.obj); return *this;}
    
    Capture();
    Capture(const ::java::lang::Object&);
    ::java::lang::Object get() const ;
    void set(const ::java::lang::Object&) const ;

};
}


