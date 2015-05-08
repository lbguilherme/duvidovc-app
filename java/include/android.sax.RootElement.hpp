#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.sax.Element.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }

namespace android {
namespace sax {
class RootElement : public virtual ::java::lang::Object,
                    public virtual ::android::sax::Element {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RootElement(jobject _obj) : ::java::lang::Object(_obj), ::android::sax::Element(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RootElement(const ::android::sax::RootElement& x) : ::java::lang::Object((jobject)0), ::android::sax::Element((jobject)0) {obj = x.obj;}
    RootElement(::android::sax::RootElement&& x) : ::java::lang::Object((jobject)0), ::android::sax::Element((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::sax::RootElement& operator=(const ::android::sax::RootElement& x) {obj = x.obj; return *this;}
    ::android::sax::RootElement& operator=(::android::sax::RootElement&& x) {obj = std::move(x.obj); return *this;}
    
    RootElement(const ::java::lang::String&, const ::java::lang::String&);
    RootElement(const ::java::lang::String&);
    ::org::xml::sax::ContentHandler getContentHandler() const ;

};
}
}


