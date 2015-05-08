#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.Flushable.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class IOException; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class PrintStream; } }
namespace java { namespace lang { class Appendable; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Formatter; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace util {
class Formatter : public virtual ::java::lang::Object,
                  public virtual ::java::io::Closeable,
                  public virtual ::java::io::Flushable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Formatter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Formatter(const ::java::util::Formatter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {obj = x.obj;}
    Formatter(::java::util::Formatter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Formatter& operator=(const ::java::util::Formatter& x) {obj = x.obj; return *this;}
    ::java::util::Formatter& operator=(::java::util::Formatter&& x) {obj = std::move(x.obj); return *this;}
    
    Formatter();
    Formatter(const ::java::lang::Appendable&);
    Formatter(const ::java::util::Locale&);
    Formatter(const ::java::lang::Appendable&, const ::java::util::Locale&);
    Formatter(const ::java::lang::String&);
    Formatter(const ::java::lang::String&, const ::java::lang::String&);
    Formatter(const ::java::lang::String&, const ::java::lang::String&, const ::java::util::Locale&);
    Formatter(const ::java::io::File&);
    Formatter(const ::java::io::File&, const ::java::lang::String&);
    Formatter(const ::java::io::File&, const ::java::lang::String&, const ::java::util::Locale&);
    Formatter(const ::java::io::OutputStream&);
    Formatter(const ::java::io::OutputStream&, const ::java::lang::String&);
    Formatter(const ::java::io::OutputStream&, const ::java::lang::String&, const ::java::util::Locale&);
    Formatter(const ::java::io::PrintStream&);
    ::java::util::Locale locale() const ;
    ::java::lang::Appendable out() const ;
    ::java::lang::String toString() const ;
    void flush() const ;
    void close() const ;
    ::java::io::IOException ioException() const ;
    ::java::util::Formatter format(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::util::Formatter format(const ::java::util::Locale&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;

};
}
}

#include "java.util.Formatter_BigDecimalLayoutForm.hpp"

