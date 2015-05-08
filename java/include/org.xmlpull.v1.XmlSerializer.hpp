#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class Boolean; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xmlpull { namespace v1 { class XmlSerializer; } } }

namespace org {
namespace xmlpull {
namespace v1 {
class XmlSerializer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XmlSerializer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XmlSerializer(const ::org::xmlpull::v1::XmlSerializer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XmlSerializer(::org::xmlpull::v1::XmlSerializer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xmlpull::v1::XmlSerializer& operator=(const ::org::xmlpull::v1::XmlSerializer& x) {obj = x.obj; return *this;}
    ::org::xmlpull::v1::XmlSerializer& operator=(::org::xmlpull::v1::XmlSerializer&& x) {obj = std::move(x.obj); return *this;}
    
    void setFeature(const ::java::lang::String&, bool) const ;
    bool getFeature(const ::java::lang::String&) const ;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object getProperty(const ::java::lang::String&) const ;
    void setOutput(const ::java::io::OutputStream&, const ::java::lang::String&) const ;
    void setOutput(const ::java::io::Writer&) const ;
    void startDocument(const ::java::lang::String&, const ::java::lang::Boolean&) const ;
    void endDocument() const ;
    void setPrefix(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getPrefix(const ::java::lang::String&, bool) const ;
    int32_t getDepth() const ;
    ::java::lang::String getNamespace() const ;
    ::java::lang::String getName() const ;
    ::org::xmlpull::v1::XmlSerializer startTag(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::xmlpull::v1::XmlSerializer attribute(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::xmlpull::v1::XmlSerializer endTag(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::xmlpull::v1::XmlSerializer text(const ::java::lang::String&) const ;
    ::org::xmlpull::v1::XmlSerializer text(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void cdsect(const ::java::lang::String&) const ;
    void entityRef(const ::java::lang::String&) const ;
    void processingInstruction(const ::java::lang::String&) const ;
    void comment(const ::java::lang::String&) const ;
    void docdecl(const ::java::lang::String&) const ;
    void ignorableWhitespace(const ::java::lang::String&) const ;
    void flush() const ;

};
}
}
}


