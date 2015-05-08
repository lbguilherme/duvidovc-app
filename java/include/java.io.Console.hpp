#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Flushable.hpp"

namespace java { namespace io { class Console; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class Console : public virtual ::java::lang::Object,
                public virtual ::java::io::Flushable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Console(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Flushable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Console(const ::java::io::Console& x) : ::java::lang::Object((jobject)0), ::java::io::Flushable((jobject)0) {obj = x.obj;}
    Console(::java::io::Console&& x) : ::java::lang::Object((jobject)0), ::java::io::Flushable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::Console& operator=(const ::java::io::Console& x) {obj = x.obj; return *this;}
    ::java::io::Console& operator=(::java::io::Console&& x) {obj = std::move(x.obj); return *this;}
    
    void flush() const ;
    ::java::io::Console format(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::Console printf(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::Reader reader() const ;
    ::java::lang::String readLine() const ;
    ::java::lang::String readLine(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    std::vector< uint16_t> readPassword() const ;
    std::vector< uint16_t> readPassword(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::PrintWriter writer() const ;

};
}
}


