#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"


namespace java {
namespace util {
namespace concurrent {
namespace locks {
class AbstractOwnableSynchronizer : public virtual ::java::lang::Object,
                                    public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractOwnableSynchronizer(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractOwnableSynchronizer(const ::java::util::concurrent::locks::AbstractOwnableSynchronizer& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AbstractOwnableSynchronizer(::java::util::concurrent::locks::AbstractOwnableSynchronizer&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::AbstractOwnableSynchronizer& operator=(const ::java::util::concurrent::locks::AbstractOwnableSynchronizer& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::AbstractOwnableSynchronizer& operator=(::java::util::concurrent::locks::AbstractOwnableSynchronizer&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


