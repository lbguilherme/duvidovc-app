#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace java { namespace util { namespace prefs { class NodeChangeEvent; } } }

namespace java {
namespace util {
namespace prefs {
class NodeChangeListener : public virtual ::java::lang::Object,
                           public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NodeChangeListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NodeChangeListener(const ::java::util::prefs::NodeChangeListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    NodeChangeListener(::java::util::prefs::NodeChangeListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::prefs::NodeChangeListener& operator=(const ::java::util::prefs::NodeChangeListener& x) {obj = x.obj; return *this;}
    ::java::util::prefs::NodeChangeListener& operator=(::java::util::prefs::NodeChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void childAdded(const ::java::util::prefs::NodeChangeEvent&) const;
    void childRemoved(const ::java::util::prefs::NodeChangeEvent&) const;

};
}
}
}


