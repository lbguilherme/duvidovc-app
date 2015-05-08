#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.ResourceBundle.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace util {
class PropertyResourceBundle : public virtual ::java::lang::Object,
                               public virtual ::java::util::ResourceBundle {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PropertyResourceBundle(jobject _obj) : ::java::lang::Object(_obj), ::java::util::ResourceBundle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PropertyResourceBundle(const ::java::util::PropertyResourceBundle& x) : ::java::lang::Object((jobject)0), ::java::util::ResourceBundle((jobject)0) {obj = x.obj;}
    PropertyResourceBundle(::java::util::PropertyResourceBundle&& x) : ::java::lang::Object((jobject)0), ::java::util::ResourceBundle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::PropertyResourceBundle& operator=(const ::java::util::PropertyResourceBundle& x) {obj = x.obj; return *this;}
    ::java::util::PropertyResourceBundle& operator=(::java::util::PropertyResourceBundle&& x) {obj = std::move(x.obj); return *this;}
    
    PropertyResourceBundle(const ::java::io::InputStream&);
    PropertyResourceBundle(const ::java::io::Reader&);
    ::java::util::Enumeration getKeys() const ;
    ::java::lang::Object handleGetObject(const ::java::lang::String&) const ;

};
}
}


