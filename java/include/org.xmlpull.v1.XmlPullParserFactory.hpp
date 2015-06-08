#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParserFactory; } } }
namespace org { namespace xmlpull { namespace v1 { class XmlSerializer; } } }

namespace org {
namespace xmlpull {
namespace v1 {
class XmlPullParserFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XmlPullParserFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XmlPullParserFactory(const ::org::xmlpull::v1::XmlPullParserFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XmlPullParserFactory(::org::xmlpull::v1::XmlPullParserFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xmlpull::v1::XmlPullParserFactory& operator=(const ::org::xmlpull::v1::XmlPullParserFactory& x) {obj = x.obj; return *this;}
    ::org::xmlpull::v1::XmlPullParserFactory& operator=(::org::xmlpull::v1::XmlPullParserFactory&& x) {obj = std::move(x.obj); return *this;}
    
    void setFeature(const ::java::lang::String&, bool) const;
    bool getFeature(const ::java::lang::String&) const;
    void setNamespaceAware(bool) const;
    bool isNamespaceAware() const;
    void setValidating(bool) const;
    bool isValidating() const;
    ::org::xmlpull::v1::XmlPullParser newPullParser() const;
    ::org::xmlpull::v1::XmlSerializer newSerializer() const;
    static ::org::xmlpull::v1::XmlPullParserFactory newInstance();
    static ::org::xmlpull::v1::XmlPullParserFactory newInstance(const ::java::lang::String&, const ::java::lang::Class&);

};
}
}
}


