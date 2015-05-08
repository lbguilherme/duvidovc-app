#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.Source.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class String; } }

namespace javax {
namespace xml {
namespace transform {
namespace stream {
class StreamSource : public virtual ::java::lang::Object,
                     public virtual ::javax::xml::transform::Source {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StreamSource(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::Source(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StreamSource(const ::javax::xml::transform::stream::StreamSource& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {obj = x.obj;}
    StreamSource(::javax::xml::transform::stream::StreamSource&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::stream::StreamSource& operator=(const ::javax::xml::transform::stream::StreamSource& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::stream::StreamSource& operator=(::javax::xml::transform::stream::StreamSource&& x) {obj = std::move(x.obj); return *this;}
    
    StreamSource();
    StreamSource(const ::java::io::InputStream&);
    StreamSource(const ::java::io::InputStream&, const ::java::lang::String&);
    StreamSource(const ::java::io::Reader&);
    StreamSource(const ::java::io::Reader&, const ::java::lang::String&);
    StreamSource(const ::java::lang::String&);
    StreamSource(const ::java::io::File&);
    void setInputStream(const ::java::io::InputStream&) const ;
    ::java::io::InputStream getInputStream() const ;
    void setReader(const ::java::io::Reader&) const ;
    ::java::io::Reader getReader() const ;
    void setPublicId(const ::java::lang::String&) const ;
    ::java::lang::String getPublicId() const ;
    void setSystemId(const ::java::lang::String&) const ;
    ::java::lang::String getSystemId() const ;
    void setSystemId(const ::java::io::File&) const ;

};
}
}
}
}


