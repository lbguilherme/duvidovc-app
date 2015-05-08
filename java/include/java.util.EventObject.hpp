#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace util {
class EventObject : public virtual ::java::lang::Object,
                    public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EventObject(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EventObject(const ::java::util::EventObject& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    EventObject(::java::util::EventObject&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::EventObject& operator=(const ::java::util::EventObject& x) {obj = x.obj; return *this;}
    ::java::util::EventObject& operator=(::java::util::EventObject&& x) {obj = std::move(x.obj); return *this;}
    
    EventObject(const ::java::lang::Object&);
    ::java::lang::Object getSource() const ;
    ::java::lang::String toString() const ;

};
}
}


