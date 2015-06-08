#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace io { class ObjectInput; } }
namespace java { namespace io { class ObjectOutput; } }

namespace java {
namespace io {
class Externalizable : public virtual ::java::lang::Object,
                       public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Externalizable(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Externalizable(const ::java::io::Externalizable& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Externalizable(::java::io::Externalizable&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::Externalizable& operator=(const ::java::io::Externalizable& x) {obj = x.obj; return *this;}
    ::java::io::Externalizable& operator=(::java::io::Externalizable&& x) {obj = std::move(x.obj); return *this;}
    
    void readExternal(const ::java::io::ObjectInput&) const;
    void writeExternal(const ::java::io::ObjectOutput&) const;

};
}
}


