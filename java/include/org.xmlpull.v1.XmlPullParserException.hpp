#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace org {
namespace xmlpull {
namespace v1 {
class XmlPullParserException : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XmlPullParserException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XmlPullParserException(const ::org::xmlpull::v1::XmlPullParserException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    XmlPullParserException(::org::xmlpull::v1::XmlPullParserException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xmlpull::v1::XmlPullParserException& operator=(const ::org::xmlpull::v1::XmlPullParserException& x) {obj = x.obj; return *this;}
    ::org::xmlpull::v1::XmlPullParserException& operator=(::org::xmlpull::v1::XmlPullParserException&& x) {obj = std::move(x.obj); return *this;}
    
    XmlPullParserException(const ::java::lang::String&);
    XmlPullParserException(const ::java::lang::String&, const ::org::xmlpull::v1::XmlPullParser&, const ::java::lang::Throwable&);
    ::java::lang::Throwable getDetail() const ;
    int32_t getLineNumber() const ;
    int32_t getColumnNumber() const ;
    void printStackTrace() const ;

};
}
}
}


