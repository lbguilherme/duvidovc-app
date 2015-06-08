#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.reflect.AnnotatedElement.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Package; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace annotation { class Annotation; } } }
namespace java { namespace net { class URL; } }

namespace java {
namespace lang {
class Package : public virtual ::java::lang::Object,
                public virtual ::java::lang::reflect::AnnotatedElement {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Package(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::reflect::AnnotatedElement(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Package(const ::java::lang::Package& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0) {obj = x.obj;}
    Package(::java::lang::Package&& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Package& operator=(const ::java::lang::Package& x) {obj = x.obj; return *this;}
    ::java::lang::Package& operator=(::java::lang::Package&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::annotation::Annotation getAnnotation(const ::java::lang::Class&) const;
    std::vector< ::java::lang::annotation::Annotation> getAnnotations() const;
    std::vector< ::java::lang::annotation::Annotation> getDeclaredAnnotations() const;
    bool isAnnotationPresent(const ::java::lang::Class&) const;
    ::java::lang::String getImplementationTitle() const;
    ::java::lang::String getImplementationVendor() const;
    ::java::lang::String getImplementationVersion() const;
    ::java::lang::String getName() const;
    static ::java::lang::Package getPackage(const ::java::lang::String&);
    static std::vector< ::java::lang::Package> getPackages();
    ::java::lang::String getSpecificationTitle() const;
    ::java::lang::String getSpecificationVendor() const;
    ::java::lang::String getSpecificationVersion() const;
    int32_t hashCode() const;
    bool isCompatibleWith(const ::java::lang::String&) const;
    bool isSealed() const;
    bool isSealed(const ::java::net::URL&) const;
    ::java::lang::String toString() const;

};
}
}


