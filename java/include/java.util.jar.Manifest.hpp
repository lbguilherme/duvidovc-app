#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { namespace jar { class Attributes; } } }

namespace java {
namespace util {
namespace jar {
class Manifest : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Manifest(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Manifest(const ::java::util::jar::Manifest& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Manifest(::java::util::jar::Manifest&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::Manifest& operator=(const ::java::util::jar::Manifest& x) {obj = x.obj; return *this;}
    ::java::util::jar::Manifest& operator=(::java::util::jar::Manifest&& x) {obj = std::move(x.obj); return *this;}
    
    Manifest();
    Manifest(const ::java::io::InputStream&);
    void clear() const;
    ::java::util::jar::Attributes getAttributes(const ::java::lang::String&) const;
    ::java::util::Map getEntries() const;
    ::java::util::jar::Attributes getMainAttributes() const;
    ::java::lang::Object clone() const;
    void write(const ::java::io::OutputStream&) const;
    void read(const ::java::io::InputStream&) const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;

};
}
}
}


