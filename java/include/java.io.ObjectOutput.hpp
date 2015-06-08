#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.DataOutput.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace io {
class ObjectOutput : public virtual ::java::lang::Object,
                     public virtual ::java::io::DataOutput {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectOutput(jobject _obj) : ::java::lang::Object(_obj), ::java::io::DataOutput(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectOutput(const ::java::io::ObjectOutput& x) : ::java::lang::Object((jobject)0), ::java::io::DataOutput((jobject)0) {obj = x.obj;}
    ObjectOutput(::java::io::ObjectOutput&& x) : ::java::lang::Object((jobject)0), ::java::io::DataOutput((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectOutput& operator=(const ::java::io::ObjectOutput& x) {obj = x.obj; return *this;}
    ::java::io::ObjectOutput& operator=(::java::io::ObjectOutput&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const;
    void flush() const;
    void write(const std::vector< int8_t>&) const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(int32_t) const;
    void writeObject(const ::java::lang::Object&) const;

};
}
}


