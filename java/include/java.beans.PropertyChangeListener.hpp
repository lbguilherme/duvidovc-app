#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace java { namespace beans { class PropertyChangeEvent; } }

namespace java {
namespace beans {
class PropertyChangeListener : public virtual ::java::lang::Object,
                               public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PropertyChangeListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PropertyChangeListener(const ::java::beans::PropertyChangeListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    PropertyChangeListener(::java::beans::PropertyChangeListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::beans::PropertyChangeListener& operator=(const ::java::beans::PropertyChangeListener& x) {obj = x.obj; return *this;}
    ::java::beans::PropertyChangeListener& operator=(::java::beans::PropertyChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void propertyChange(const ::java::beans::PropertyChangeEvent&) const ;

};
}
}


