#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace io { class ObjectStreamClass; } }
namespace java { namespace io { class ObjectStreamField; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class ObjectStreamClass : public virtual ::java::lang::Object,
                          public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectStreamClass(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectStreamClass(const ::java::io::ObjectStreamClass& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    ObjectStreamClass(::java::io::ObjectStreamClass&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectStreamClass& operator=(const ::java::io::ObjectStreamClass& x) {obj = x.obj; return *this;}
    ::java::io::ObjectStreamClass& operator=(::java::io::ObjectStreamClass&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Class forClass() const ;
    ::java::io::ObjectStreamField getField(const ::java::lang::String&) const ;
    std::vector< ::java::io::ObjectStreamField> getFields() const ;
    ::java::lang::String getName() const ;
    int64_t getSerialVersionUID() const ;
    static ::java::io::ObjectStreamClass lookup(const ::java::lang::Class&);
    static ::java::io::ObjectStreamClass lookupAny(const ::java::lang::Class&);
    ::java::lang::String toString() const ;

};
}
}


