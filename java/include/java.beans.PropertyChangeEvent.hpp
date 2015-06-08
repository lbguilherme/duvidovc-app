#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventObject.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace beans {
class PropertyChangeEvent : public virtual ::java::lang::Object,
                            public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PropertyChangeEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PropertyChangeEvent(const ::java::beans::PropertyChangeEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    PropertyChangeEvent(::java::beans::PropertyChangeEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::beans::PropertyChangeEvent& operator=(const ::java::beans::PropertyChangeEvent& x) {obj = x.obj; return *this;}
    ::java::beans::PropertyChangeEvent& operator=(::java::beans::PropertyChangeEvent&& x) {obj = std::move(x.obj); return *this;}
    
    PropertyChangeEvent(const ::java::lang::Object&, const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&);
    ::java::lang::String getPropertyName() const;
    void setPropagationId(const ::java::lang::Object&) const;
    ::java::lang::Object getPropagationId() const;
    ::java::lang::Object getOldValue() const;
    ::java::lang::Object getNewValue() const;

};
}
}


