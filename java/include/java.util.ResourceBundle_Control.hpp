#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class ResourceBundle; } }
namespace java { namespace util { class ResourceBundle_Control; } }

namespace java {
namespace util {
class ResourceBundle_Control : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResourceBundle_Control(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResourceBundle_Control(const ::java::util::ResourceBundle_Control& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ResourceBundle_Control(::java::util::ResourceBundle_Control&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ResourceBundle_Control& operator=(const ::java::util::ResourceBundle_Control& x) {obj = x.obj; return *this;}
    ::java::util::ResourceBundle_Control& operator=(::java::util::ResourceBundle_Control&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::ResourceBundle_Control getControl(const ::java::util::List&);
    static ::java::util::ResourceBundle_Control getNoFallbackControl(const ::java::util::List&);
    ::java::util::List getCandidateLocales(const ::java::lang::String&, const ::java::util::Locale&) const ;
    ::java::util::List getFormats(const ::java::lang::String&) const ;
    ::java::util::Locale getFallbackLocale(const ::java::lang::String&, const ::java::util::Locale&) const ;
    ::java::util::ResourceBundle newBundle(const ::java::lang::String&, const ::java::util::Locale&, const ::java::lang::String&, const ::java::lang::ClassLoader&, bool) const ;
    int64_t getTimeToLive(const ::java::lang::String&, const ::java::util::Locale&) const ;
    bool needsReload(const ::java::lang::String&, const ::java::util::Locale&, const ::java::lang::String&, const ::java::lang::ClassLoader&, const ::java::util::ResourceBundle&, int64_t) const ;
    ::java::lang::String toBundleName(const ::java::lang::String&, const ::java::util::Locale&) const ;
    ::java::lang::String toResourceName(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}


