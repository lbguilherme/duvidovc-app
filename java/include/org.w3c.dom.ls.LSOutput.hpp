#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace w3c {
namespace dom {
namespace ls {
class LSOutput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LSOutput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LSOutput(const ::org::w3c::dom::ls::LSOutput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LSOutput(::org::w3c::dom::ls::LSOutput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ls::LSOutput& operator=(const ::org::w3c::dom::ls::LSOutput& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ls::LSOutput& operator=(::org::w3c::dom::ls::LSOutput&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::io::Writer getCharacterStream() const;
    void setCharacterStream(const ::java::io::Writer&) const;
    ::java::io::OutputStream getByteStream() const;
    void setByteStream(const ::java::io::OutputStream&) const;
    ::java::lang::String getSystemId() const;
    void setSystemId(const ::java::lang::String&) const;
    ::java::lang::String getEncoding() const;
    void setEncoding(const ::java::lang::String&) const;

};
}
}
}
}


