#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.Result.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class String; } }

namespace javax {
namespace xml {
namespace transform {
namespace stream {
class StreamResult : public virtual ::java::lang::Object,
                     public virtual ::javax::xml::transform::Result {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StreamResult(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::Result(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StreamResult(const ::javax::xml::transform::stream::StreamResult& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {obj = x.obj;}
    StreamResult(::javax::xml::transform::stream::StreamResult&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Result((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::stream::StreamResult& operator=(const ::javax::xml::transform::stream::StreamResult& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::stream::StreamResult& operator=(::javax::xml::transform::stream::StreamResult&& x) {obj = std::move(x.obj); return *this;}
    
    StreamResult();
    StreamResult(const ::java::io::OutputStream&);
    StreamResult(const ::java::io::Writer&);
    StreamResult(const ::java::lang::String&);
    StreamResult(const ::java::io::File&);
    void setOutputStream(const ::java::io::OutputStream&) const ;
    ::java::io::OutputStream getOutputStream() const ;
    void setWriter(const ::java::io::Writer&) const ;
    ::java::io::Writer getWriter() const ;
    void setSystemId(const ::java::lang::String&) const ;
    void setSystemId(const ::java::io::File&) const ;
    ::java::lang::String getSystemId() const ;

};
}
}
}
}


