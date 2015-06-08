#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace namespace_ { class QName; } } }

namespace javax {
namespace xml {
namespace namespace_ {
class QName : public virtual ::java::lang::Object,
              public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit QName(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    QName(const ::javax::xml::namespace_::QName& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    QName(::javax::xml::namespace_::QName&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::namespace_::QName& operator=(const ::javax::xml::namespace_::QName& x) {obj = x.obj; return *this;}
    ::javax::xml::namespace_::QName& operator=(::javax::xml::namespace_::QName&& x) {obj = std::move(x.obj); return *this;}
    
    QName(const ::java::lang::String&, const ::java::lang::String&);
    QName(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    QName(const ::java::lang::String&);
    ::java::lang::String getNamespaceURI() const;
    ::java::lang::String getLocalPart() const;
    ::java::lang::String getPrefix() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    static ::javax::xml::namespace_::QName valueOf(const ::java::lang::String&);

};
}
}
}


