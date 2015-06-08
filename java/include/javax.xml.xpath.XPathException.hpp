#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace io { class PrintStream; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace javax {
namespace xml {
namespace xpath {
class XPathException : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathException(const ::javax::xml::xpath::XPathException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    XPathException(::javax::xml::xpath::XPathException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathException& operator=(const ::javax::xml::xpath::XPathException& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathException& operator=(::javax::xml::xpath::XPathException&& x) {obj = std::move(x.obj); return *this;}
    
    XPathException(const ::java::lang::String&);
    XPathException(const ::java::lang::Throwable&);
    ::java::lang::Throwable getCause() const;
    void printStackTrace(const ::java::io::PrintStream&) const;
    void printStackTrace() const;
    void printStackTrace(const ::java::io::PrintWriter&) const;

};
}
}
}


