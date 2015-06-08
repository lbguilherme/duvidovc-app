#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace beans { class PropertyChangeListener; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace util { class SortedMap; } }
namespace java { namespace util { namespace jar { class JarFile; } } }
namespace java { namespace util { namespace jar { class JarInputStream; } } }

namespace java {
namespace util {
namespace jar {
class Pack200_Packer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pack200_Packer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pack200_Packer(const ::java::util::jar::Pack200_Packer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pack200_Packer(::java::util::jar::Pack200_Packer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::Pack200_Packer& operator=(const ::java::util::jar::Pack200_Packer& x) {obj = x.obj; return *this;}
    ::java::util::jar::Pack200_Packer& operator=(::java::util::jar::Pack200_Packer&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::SortedMap properties() const;
    void pack(const ::java::util::jar::JarFile&, const ::java::io::OutputStream&) const;
    void pack(const ::java::util::jar::JarInputStream&, const ::java::io::OutputStream&) const;
    void addPropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;
    void removePropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;

};
}
}
}


