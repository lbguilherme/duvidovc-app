#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.DataInput.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace io {
class ObjectInput : public virtual ::java::lang::Object,
                    public virtual ::java::io::DataInput {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectInput(jobject _obj) : ::java::lang::Object(_obj), ::java::io::DataInput(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectInput(const ::java::io::ObjectInput& x) : ::java::lang::Object((jobject)0), ::java::io::DataInput((jobject)0) {obj = x.obj;}
    ObjectInput(::java::io::ObjectInput&& x) : ::java::lang::Object((jobject)0), ::java::io::DataInput((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectInput& operator=(const ::java::io::ObjectInput& x) {obj = x.obj; return *this;}
    ::java::io::ObjectInput& operator=(::java::io::ObjectInput&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t available() const;
    void close() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&) const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    ::java::lang::Object readObject() const;
    int64_t skip(int64_t) const;

};
}
}


