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
namespace w3c {
namespace dom {
namespace ls {
class LSInput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LSInput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LSInput(const ::org::w3c::dom::ls::LSInput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LSInput(::org::w3c::dom::ls::LSInput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ls::LSInput& operator=(const ::org::w3c::dom::ls::LSInput& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ls::LSInput& operator=(::org::w3c::dom::ls::LSInput&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::io::Reader getCharacterStream() const;
    void setCharacterStream(const ::java::io::Reader&) const;
    ::java::io::InputStream getByteStream() const;
    void setByteStream(const ::java::io::InputStream&) const;
    ::java::lang::String getStringData() const;
    void setStringData(const ::java::lang::String&) const;
    ::java::lang::String getSystemId() const;
    void setSystemId(const ::java::lang::String&) const;
    ::java::lang::String getPublicId() const;
    void setPublicId(const ::java::lang::String&) const;
    ::java::lang::String getBaseURI() const;
    void setBaseURI(const ::java::lang::String&) const;
    ::java::lang::String getEncoding() const;
    void setEncoding(const ::java::lang::String&) const;
    bool getCertifiedText() const;
    void setCertifiedText(bool) const;

};
}
}
}
}


