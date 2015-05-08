#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }

namespace javax {
namespace xml {
namespace namespace_ {
class NamespaceContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NamespaceContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NamespaceContext(const ::javax::xml::namespace_::NamespaceContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NamespaceContext(::javax::xml::namespace_::NamespaceContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::namespace_::NamespaceContext& operator=(const ::javax::xml::namespace_::NamespaceContext& x) {obj = x.obj; return *this;}
    ::javax::xml::namespace_::NamespaceContext& operator=(::javax::xml::namespace_::NamespaceContext&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getNamespaceURI(const ::java::lang::String&) const ;
    ::java::lang::String getPrefix(const ::java::lang::String&) const ;
    ::java::util::Iterator getPrefixes(const ::java::lang::String&) const ;

};
}
}
}


