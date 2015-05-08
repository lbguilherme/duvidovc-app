#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class Xml_Encoding; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }
namespace org { namespace xmlpull { namespace v1 { class XmlSerializer; } } }

namespace android {
namespace util {
class Xml : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Xml(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Xml(const ::android::util::Xml& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Xml(::android::util::Xml&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Xml& operator=(const ::android::util::Xml& x) {obj = x.obj; return *this;}
    ::android::util::Xml& operator=(::android::util::Xml&& x) {obj = std::move(x.obj); return *this;}
    
    static void parse(const ::java::lang::String&, const ::org::xml::sax::ContentHandler&);
    static void parse(const ::java::io::Reader&, const ::org::xml::sax::ContentHandler&);
    static void parse(const ::java::io::InputStream&, const ::android::util::Xml_Encoding&, const ::org::xml::sax::ContentHandler&);
    static ::org::xmlpull::v1::XmlPullParser newPullParser();
    static ::org::xmlpull::v1::XmlSerializer newSerializer();
    static ::android::util::Xml_Encoding findEncodingByName(const ::java::lang::String&);
    static ::android::util::AttributeSet asAttributeSet(const ::org::xmlpull::v1::XmlPullParser&);

};
}
}

#include "android.util.Xml_Encoding.hpp"

