#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace database {
class Observable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Observable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Observable(const ::android::database::Observable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Observable(::android::database::Observable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::Observable& operator=(const ::android::database::Observable& x) {obj = x.obj; return *this;}
    ::android::database::Observable& operator=(::android::database::Observable&& x) {obj = std::move(x.obj); return *this;}
    
    Observable();
    void registerObserver(const ::java::lang::Object&) const;
    void unregisterObserver(const ::java::lang::Object&) const;
    void unregisterAll() const;

};
}
}


