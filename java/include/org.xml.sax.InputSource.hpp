#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace xml {
namespace sax {
class InputSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputSource(const ::org::xml::sax::InputSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputSource(::org::xml::sax::InputSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::InputSource& operator=(const ::org::xml::sax::InputSource& x) {obj = x.obj; return *this;}
    ::org::xml::sax::InputSource& operator=(::org::xml::sax::InputSource&& x) {obj = std::move(x.obj); return *this;}
    
    InputSource();
    InputSource(const ::java::lang::String&);
    InputSource(const ::java::io::InputStream&);
    InputSource(const ::java::io::Reader&);
    void setPublicId(const ::java::lang::String&) const;
    ::java::lang::String getPublicId() const;
    void setSystemId(const ::java::lang::String&) const;
    ::java::lang::String getSystemId() const;
    void setByteStream(const ::java::io::InputStream&) const;
    ::java::io::InputStream getByteStream() const;
    void setEncoding(const ::java::lang::String&) const;
    ::java::lang::String getEncoding() const;
    void setCharacterStream(const ::java::io::Reader&) const;
    ::java::io::Reader getCharacterStream() const;

};
}
}
}


