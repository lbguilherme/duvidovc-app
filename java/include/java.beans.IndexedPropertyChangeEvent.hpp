#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.beans.PropertyChangeEvent.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace beans {
class IndexedPropertyChangeEvent : public virtual ::java::lang::Object,
                                   public virtual ::java::beans::PropertyChangeEvent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IndexedPropertyChangeEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::beans::PropertyChangeEvent(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IndexedPropertyChangeEvent(const ::java::beans::IndexedPropertyChangeEvent& x) : ::java::lang::Object((jobject)0), ::java::beans::PropertyChangeEvent((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    IndexedPropertyChangeEvent(::java::beans::IndexedPropertyChangeEvent&& x) : ::java::lang::Object((jobject)0), ::java::beans::PropertyChangeEvent((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::beans::IndexedPropertyChangeEvent& operator=(const ::java::beans::IndexedPropertyChangeEvent& x) {obj = x.obj; return *this;}
    ::java::beans::IndexedPropertyChangeEvent& operator=(::java::beans::IndexedPropertyChangeEvent&& x) {obj = std::move(x.obj); return *this;}
    
    IndexedPropertyChangeEvent(const ::java::lang::Object&, const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&, int32_t);
    int32_t getIndex() const ;

};
}
}


