#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class NamespaceSupport : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NamespaceSupport(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NamespaceSupport(const ::org::xml::sax::helpers::NamespaceSupport& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NamespaceSupport(::org::xml::sax::helpers::NamespaceSupport&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::NamespaceSupport& operator=(const ::org::xml::sax::helpers::NamespaceSupport& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::NamespaceSupport& operator=(::org::xml::sax::helpers::NamespaceSupport&& x) {obj = std::move(x.obj); return *this;}
    
    NamespaceSupport();
    void reset() const;
    void pushContext() const;
    void popContext() const;
    bool declarePrefix(const ::java::lang::String&, const ::java::lang::String&) const;
    std::vector< ::java::lang::String> processName(const ::java::lang::String&, const std::vector< ::java::lang::String>&, bool) const;
    ::java::lang::String getURI(const ::java::lang::String&) const;
    ::java::util::Enumeration getPrefixes() const;
    ::java::lang::String getPrefix(const ::java::lang::String&) const;
    ::java::util::Enumeration getPrefixes(const ::java::lang::String&) const;
    ::java::util::Enumeration getDeclaredPrefixes() const;
    void setNamespaceDeclUris(bool) const;
    bool isNamespaceDeclUris() const;

};
}
}
}
}


