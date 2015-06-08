#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Iterable.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class ServiceLoader; } }

namespace java {
namespace util {
class ServiceLoader : public virtual ::java::lang::Object,
                      public virtual ::java::lang::Iterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServiceLoader(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServiceLoader(const ::java::util::ServiceLoader& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0) {obj = x.obj;}
    ServiceLoader(::java::util::ServiceLoader&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ServiceLoader& operator=(const ::java::util::ServiceLoader& x) {obj = x.obj; return *this;}
    ::java::util::ServiceLoader& operator=(::java::util::ServiceLoader&& x) {obj = std::move(x.obj); return *this;}
    
    void reload() const;
    ::java::util::Iterator iterator() const;
    static ::java::util::ServiceLoader load(const ::java::lang::Class&, const ::java::lang::ClassLoader&);
    static ::java::util::ServiceLoader load(const ::java::lang::Class&);
    static ::java::util::ServiceLoader loadInstalled(const ::java::lang::Class&);
    ::java::lang::String toString() const;

};
}
}


