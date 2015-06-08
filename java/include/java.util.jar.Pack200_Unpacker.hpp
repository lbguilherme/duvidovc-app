#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace beans { class PropertyChangeListener; } }
namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace util { class SortedMap; } }
namespace java { namespace util { namespace jar { class JarOutputStream; } } }

namespace java {
namespace util {
namespace jar {
class Pack200_Unpacker : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pack200_Unpacker(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pack200_Unpacker(const ::java::util::jar::Pack200_Unpacker& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pack200_Unpacker(::java::util::jar::Pack200_Unpacker&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::Pack200_Unpacker& operator=(const ::java::util::jar::Pack200_Unpacker& x) {obj = x.obj; return *this;}
    ::java::util::jar::Pack200_Unpacker& operator=(::java::util::jar::Pack200_Unpacker&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::SortedMap properties() const;
    void unpack(const ::java::io::InputStream&, const ::java::util::jar::JarOutputStream&) const;
    void unpack(const ::java::io::File&, const ::java::util::jar::JarOutputStream&) const;
    void addPropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;
    void removePropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;

};
}
}
}


