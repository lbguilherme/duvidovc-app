#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace beans { class PropertyChangeEvent; } }
namespace java { namespace beans { class PropertyChangeListener; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace beans {
class PropertyChangeSupport : public virtual ::java::lang::Object,
                              public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PropertyChangeSupport(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PropertyChangeSupport(const ::java::beans::PropertyChangeSupport& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    PropertyChangeSupport(::java::beans::PropertyChangeSupport&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::beans::PropertyChangeSupport& operator=(const ::java::beans::PropertyChangeSupport& x) {obj = x.obj; return *this;}
    ::java::beans::PropertyChangeSupport& operator=(::java::beans::PropertyChangeSupport&& x) {obj = std::move(x.obj); return *this;}
    
    PropertyChangeSupport(const ::java::lang::Object&);
    void firePropertyChange(const ::java::lang::String&, const ::java::lang::Object&, const ::java::lang::Object&) const;
    void fireIndexedPropertyChange(const ::java::lang::String&, int32_t, const ::java::lang::Object&, const ::java::lang::Object&) const;
    void removePropertyChangeListener(const ::java::lang::String&, const ::java::beans::PropertyChangeListener&) const;
    void addPropertyChangeListener(const ::java::lang::String&, const ::java::beans::PropertyChangeListener&) const;
    std::vector< ::java::beans::PropertyChangeListener> getPropertyChangeListeners(const ::java::lang::String&) const;
    void firePropertyChange(const ::java::lang::String&, bool, bool) const;
    void fireIndexedPropertyChange(const ::java::lang::String&, int32_t, bool, bool) const;
    void firePropertyChange(const ::java::lang::String&, int32_t, int32_t) const;
    void fireIndexedPropertyChange(const ::java::lang::String&, int32_t, int32_t, int32_t) const;
    bool hasListeners(const ::java::lang::String&) const;
    void removePropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;
    void addPropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;
    std::vector< ::java::beans::PropertyChangeListener> getPropertyChangeListeners() const;
    void firePropertyChange(const ::java::beans::PropertyChangeEvent&) const;

};
}
}


