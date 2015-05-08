#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace logging { class Level; } } }

namespace java {
namespace util {
namespace logging {
class Level : public virtual ::java::lang::Object,
              public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Level(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Level(const ::java::util::logging::Level& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Level(::java::util::logging::Level&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::Level& operator=(const ::java::util::logging::Level& x) {obj = x.obj; return *this;}
    ::java::util::logging::Level& operator=(::java::util::logging::Level&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::logging::Level parse(const ::java::lang::String&);
    ::java::lang::String getName() const ;
    ::java::lang::String getResourceBundleName() const ;
    int32_t intValue() const ;
    ::java::lang::String getLocalizedName() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}
}


