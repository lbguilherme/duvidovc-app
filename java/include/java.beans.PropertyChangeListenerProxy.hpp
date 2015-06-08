#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.beans.PropertyChangeListener.hpp"
#include "java.util.EventListenerProxy.hpp"

namespace java { namespace beans { class PropertyChangeEvent; } }
namespace java { namespace beans { class PropertyChangeListener; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace beans {
class PropertyChangeListenerProxy : public virtual ::java::lang::Object,
                                    public virtual ::java::beans::PropertyChangeListener,
                                    public virtual ::java::util::EventListenerProxy {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PropertyChangeListenerProxy(jobject _obj) : ::java::lang::Object(_obj), ::java::beans::PropertyChangeListener(_obj), ::java::util::EventListener(_obj), ::java::util::EventListenerProxy(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PropertyChangeListenerProxy(const ::java::beans::PropertyChangeListenerProxy& x) : ::java::lang::Object((jobject)0), ::java::beans::PropertyChangeListener((jobject)0), ::java::util::EventListener((jobject)0), ::java::util::EventListenerProxy((jobject)0) {obj = x.obj;}
    PropertyChangeListenerProxy(::java::beans::PropertyChangeListenerProxy&& x) : ::java::lang::Object((jobject)0), ::java::beans::PropertyChangeListener((jobject)0), ::java::util::EventListener((jobject)0), ::java::util::EventListenerProxy((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::beans::PropertyChangeListenerProxy& operator=(const ::java::beans::PropertyChangeListenerProxy& x) {obj = x.obj; return *this;}
    ::java::beans::PropertyChangeListenerProxy& operator=(::java::beans::PropertyChangeListenerProxy&& x) {obj = std::move(x.obj); return *this;}
    
    PropertyChangeListenerProxy(const ::java::lang::String&, const ::java::beans::PropertyChangeListener&);
    ::java::lang::String getPropertyName() const;
    void propertyChange(const ::java::beans::PropertyChangeEvent&) const;

};
}
}


