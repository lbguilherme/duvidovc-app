#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.AttributeSet.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"


namespace android {
namespace content {
namespace res {
class XmlResourceParser : public virtual ::java::lang::Object,
                          public virtual ::android::util::AttributeSet,
                          public virtual ::org::xmlpull::v1::XmlPullParser {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XmlResourceParser(jobject _obj) : ::java::lang::Object(_obj), ::android::util::AttributeSet(_obj), ::org::xmlpull::v1::XmlPullParser(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XmlResourceParser(const ::android::content::res::XmlResourceParser& x) : ::java::lang::Object((jobject)0), ::android::util::AttributeSet((jobject)0), ::org::xmlpull::v1::XmlPullParser((jobject)0) {obj = x.obj;}
    XmlResourceParser(::android::content::res::XmlResourceParser&& x) : ::java::lang::Object((jobject)0), ::android::util::AttributeSet((jobject)0), ::org::xmlpull::v1::XmlPullParser((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::XmlResourceParser& operator=(const ::android::content::res::XmlResourceParser& x) {obj = x.obj; return *this;}
    ::android::content::res::XmlResourceParser& operator=(::android::content::res::XmlResourceParser&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;

};
}
}
}


