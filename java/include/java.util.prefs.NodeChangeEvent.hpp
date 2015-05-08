#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.EventObject.hpp"

namespace java { namespace util { namespace prefs { class Preferences; } } }

namespace java {
namespace util {
namespace prefs {
class NodeChangeEvent : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable,
                        public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NodeChangeEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NodeChangeEvent(const ::java::util::prefs::NodeChangeEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    NodeChangeEvent(::java::util::prefs::NodeChangeEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::prefs::NodeChangeEvent& operator=(const ::java::util::prefs::NodeChangeEvent& x) {obj = x.obj; return *this;}
    ::java::util::prefs::NodeChangeEvent& operator=(::java::util::prefs::NodeChangeEvent&& x) {obj = std::move(x.obj); return *this;}
    
    NodeChangeEvent(const ::java::util::prefs::Preferences&, const ::java::util::prefs::Preferences&);
    ::java::util::prefs::Preferences getParent() const ;
    ::java::util::prefs::Preferences getChild() const ;

};
}
}
}


