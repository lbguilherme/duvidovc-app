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
class Random : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Random(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Random(const ::java::util::Random& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Random(::java::util::Random&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Random& operator=(const ::java::util::Random& x) {obj = x.obj; return *this;}
    ::java::util::Random& operator=(::java::util::Random&& x) {obj = std::move(x.obj); return *this;}
    
    Random();
    Random(int64_t);
    bool nextBoolean() const ;
    void nextBytes(const std::vector< int8_t>&) const ;
    double nextDouble() const ;
    float nextFloat() const ;
    double nextGaussian() const ;
    int32_t nextInt() const ;
    int32_t nextInt(int32_t) const ;
    int64_t nextLong() const ;
    void setSeed(int64_t) const ;

};
}
}


