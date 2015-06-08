#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace xmlpull {
namespace v1 {
class XmlPullParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XmlPullParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XmlPullParser(const ::org::xmlpull::v1::XmlPullParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XmlPullParser(::org::xmlpull::v1::XmlPullParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xmlpull::v1::XmlPullParser& operator=(const ::org::xmlpull::v1::XmlPullParser& x) {obj = x.obj; return *this;}
    ::org::xmlpull::v1::XmlPullParser& operator=(::org::xmlpull::v1::XmlPullParser&& x) {obj = std::move(x.obj); return *this;}
    
    void setFeature(const ::java::lang::String&, bool) const;
    bool getFeature(const ::java::lang::String&) const;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getProperty(const ::java::lang::String&) const;
    void setInput(const ::java::io::Reader&) const;
    void setInput(const ::java::io::InputStream&, const ::java::lang::String&) const;
    ::java::lang::String getInputEncoding() const;
    void defineEntityReplacementText(const ::java::lang::String&, const ::java::lang::String&) const;
    int32_t getNamespaceCount(int32_t) const;
    ::java::lang::String getNamespacePrefix(int32_t) const;
    ::java::lang::String getNamespaceUri(int32_t) const;
    ::java::lang::String getNamespace(const ::java::lang::String&) const;
    int32_t getDepth() const;
    ::java::lang::String getPositionDescription() const;
    int32_t getLineNumber() const;
    int32_t getColumnNumber() const;
    bool isWhitespace() const;
    ::java::lang::String getText() const;
    std::vector< uint16_t> getTextCharacters(const std::vector< int32_t>&) const;
    ::java::lang::String getNamespace() const;
    ::java::lang::String getName() const;
    ::java::lang::String getPrefix() const;
    bool isEmptyElementTag() const;
    int32_t getAttributeCount() const;
    ::java::lang::String getAttributeNamespace(int32_t) const;
    ::java::lang::String getAttributeName(int32_t) const;
    ::java::lang::String getAttributePrefix(int32_t) const;
    ::java::lang::String getAttributeType(int32_t) const;
    bool isAttributeDefault(int32_t) const;
    ::java::lang::String getAttributeValue(int32_t) const;
    ::java::lang::String getAttributeValue(const ::java::lang::String&, const ::java::lang::String&) const;
    int32_t getEventType() const;
    int32_t next() const;
    int32_t nextToken() const;
    void require(int32_t, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String nextText() const;
    int32_t nextTag() const;

};
}
}
}


