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
namespace javax { namespace xml { namespace transform { class SourceLocator; } } }

namespace javax {
namespace xml {
namespace transform {
class TransformerException : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransformerException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransformerException(const ::javax::xml::transform::TransformerException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    TransformerException(::javax::xml::transform::TransformerException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::TransformerException& operator=(const ::javax::xml::transform::TransformerException& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::TransformerException& operator=(::javax::xml::transform::TransformerException&& x) {obj = std::move(x.obj); return *this;}
    
    TransformerException(const ::java::lang::String&);
    TransformerException(const ::java::lang::Throwable&);
    TransformerException(const ::java::lang::String&, const ::java::lang::Throwable&);
    TransformerException(const ::java::lang::String&, const ::javax::xml::transform::SourceLocator&);
    TransformerException(const ::java::lang::String&, const ::javax::xml::transform::SourceLocator&, const ::java::lang::Throwable&);
    ::javax::xml::transform::SourceLocator getLocator() const ;
    void setLocator(const ::javax::xml::transform::SourceLocator&) const ;
    ::java::lang::Throwable getException() const ;
    ::java::lang::Throwable getCause() const ;
    ::java::lang::Throwable initCause(const ::java::lang::Throwable&) const ;
    ::java::lang::String getMessageAndLocation() const ;
    ::java::lang::String getLocationAsString() const ;
    void printStackTrace() const ;
    void printStackTrace(const ::java::io::PrintStream&) const ;
    void printStackTrace(const ::java::io::PrintWriter&) const ;

};
}
}
}


