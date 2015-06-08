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
namespace datatype {
class DatatypeConfigurationException : public virtual ::java::lang::Object,
                                       public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatatypeConfigurationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatatypeConfigurationException(const ::javax::xml::datatype::DatatypeConfigurationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    DatatypeConfigurationException(::javax::xml::datatype::DatatypeConfigurationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::datatype::DatatypeConfigurationException& operator=(const ::javax::xml::datatype::DatatypeConfigurationException& x) {obj = x.obj; return *this;}
    ::javax::xml::datatype::DatatypeConfigurationException& operator=(::javax::xml::datatype::DatatypeConfigurationException&& x) {obj = std::move(x.obj); return *this;}
    
    DatatypeConfigurationException();
    DatatypeConfigurationException(const ::java::lang::String&);
    DatatypeConfigurationException(const ::java::lang::String&, const ::java::lang::Throwable&);
    DatatypeConfigurationException(const ::java::lang::Throwable&);
    void printStackTrace() const;
    void printStackTrace(const ::java::io::PrintStream&) const;
    void printStackTrace(const ::java::io::PrintWriter&) const;

};
}
}
}


