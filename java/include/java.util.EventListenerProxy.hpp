#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace java { namespace util { class EventListener; } }

namespace java {
namespace util {
class EventListenerProxy : public virtual ::java::lang::Object,
                           public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EventListenerProxy(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EventListenerProxy(const ::java::util::EventListenerProxy& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    EventListenerProxy(::java::util::EventListenerProxy&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::EventListenerProxy& operator=(const ::java::util::EventListenerProxy& x) {obj = x.obj; return *this;}
    ::java::util::EventListenerProxy& operator=(::java::util::EventListenerProxy&& x) {obj = std::move(x.obj); return *this;}
    
    EventListenerProxy(const ::java::util::EventListener&);
    ::java::util::EventListener getListener() const ;

};
}
}


