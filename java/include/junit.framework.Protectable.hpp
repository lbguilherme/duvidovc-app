#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace junit {
namespace framework {
class Protectable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Protectable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Protectable(const ::junit::framework::Protectable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Protectable(::junit::framework::Protectable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::Protectable& operator=(const ::junit::framework::Protectable& x) {obj = x.obj; return *this;}
    ::junit::framework::Protectable& operator=(::junit::framework::Protectable&& x) {obj = std::move(x.obj); return *this;}
    
    void protect() const;

};
}
}


