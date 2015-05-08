#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"


namespace java {
namespace nio {
namespace channels {
class Channel : public virtual ::java::lang::Object,
                public virtual ::java::io::Closeable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Channel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Channel(const ::java::nio::channels::Channel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    Channel(::java::nio::channels::Channel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::Channel& operator=(const ::java::nio::channels::Channel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::Channel& operator=(::java::nio::channels::Channel&& x) {obj = std::move(x.obj); return *this;}
    
    bool isOpen() const ;
    void close() const ;

};
}
}
}


