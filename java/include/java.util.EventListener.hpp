#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace util {
class EventListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EventListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EventListener(const ::java::util::EventListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EventListener(::java::util::EventListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::EventListener& operator=(const ::java::util::EventListener& x) {obj = x.obj; return *this;}
    ::java::util::EventListener& operator=(::java::util::EventListener&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


