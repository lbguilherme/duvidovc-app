#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.ResourceBundle.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace util {
class ListResourceBundle : public virtual ::java::lang::Object,
                           public virtual ::java::util::ResourceBundle {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListResourceBundle(jobject _obj) : ::java::lang::Object(_obj), ::java::util::ResourceBundle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListResourceBundle(const ::java::util::ListResourceBundle& x) : ::java::lang::Object((jobject)0), ::java::util::ResourceBundle((jobject)0) {obj = x.obj;}
    ListResourceBundle(::java::util::ListResourceBundle&& x) : ::java::lang::Object((jobject)0), ::java::util::ResourceBundle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ListResourceBundle& operator=(const ::java::util::ListResourceBundle& x) {obj = x.obj; return *this;}
    ::java::util::ListResourceBundle& operator=(::java::util::ListResourceBundle&& x) {obj = std::move(x.obj); return *this;}
    
    ListResourceBundle();
    ::java::util::Enumeration getKeys() const;
    ::java::lang::Object handleGetObject(const ::java::lang::String&) const;

};
}
}


