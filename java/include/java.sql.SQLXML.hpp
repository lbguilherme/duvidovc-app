#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace transform { class Result; } } }
namespace javax { namespace xml { namespace transform { class Source; } } }

namespace java {
namespace sql {
class SQLXML : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLXML(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLXML(const ::java::sql::SQLXML& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLXML(::java::sql::SQLXML&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLXML& operator=(const ::java::sql::SQLXML& x) {obj = x.obj; return *this;}
    ::java::sql::SQLXML& operator=(::java::sql::SQLXML&& x) {obj = std::move(x.obj); return *this;}
    
    void free() const ;
    ::java::io::InputStream getBinaryStream() const ;
    ::java::io::OutputStream setBinaryStream() const ;
    ::java::io::Reader getCharacterStream() const ;
    ::java::io::Writer setCharacterStream() const ;
    ::java::lang::String getString() const ;
    void setString(const ::java::lang::String&) const ;
    ::javax::xml::transform::Source getSource(const ::java::lang::Class&) const ;
    ::javax::xml::transform::Result setResult(const ::java::lang::Class&) const ;

};
}
}


