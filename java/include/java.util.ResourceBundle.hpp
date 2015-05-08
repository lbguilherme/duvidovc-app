#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class ResourceBundle; } }
namespace java { namespace util { class ResourceBundle_Control; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace util {
class ResourceBundle : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResourceBundle(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResourceBundle(const ::java::util::ResourceBundle& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ResourceBundle(::java::util::ResourceBundle&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ResourceBundle& operator=(const ::java::util::ResourceBundle& x) {obj = x.obj; return *this;}
    ::java::util::ResourceBundle& operator=(::java::util::ResourceBundle&& x) {obj = std::move(x.obj); return *this;}
    
    ResourceBundle();
    static ::java::util::ResourceBundle getBundle(const ::java::lang::String&);
    static ::java::util::ResourceBundle getBundle(const ::java::lang::String&, const ::java::util::Locale&);
    static ::java::util::ResourceBundle getBundle(const ::java::lang::String&, const ::java::util::Locale&, const ::java::lang::ClassLoader&);
    static ::java::util::ResourceBundle getBundle(const ::java::lang::String&, const ::java::util::ResourceBundle_Control&);
    static ::java::util::ResourceBundle getBundle(const ::java::lang::String&, const ::java::util::Locale&, const ::java::util::ResourceBundle_Control&);
    static ::java::util::ResourceBundle getBundle(const ::java::lang::String&, const ::java::util::Locale&, const ::java::lang::ClassLoader&, const ::java::util::ResourceBundle_Control&);
    ::java::util::Enumeration getKeys() const ;
    ::java::util::Locale getLocale() const ;
    ::java::lang::Object getObject(const ::java::lang::String&) const ;
    ::java::lang::String getString(const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getStringArray(const ::java::lang::String&) const ;
    static void clearCache();
    static void clearCache(const ::java::lang::ClassLoader&);
    bool containsKey(const ::java::lang::String&) const ;
    ::java::util::Set keySet() const ;

};
}
}

#include "java.util.ResourceBundle_Control.hpp"

