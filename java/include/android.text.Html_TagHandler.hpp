#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Editable; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class XMLReader; } } }

namespace android {
namespace text {
class Html_TagHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Html_TagHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Html_TagHandler(const ::android::text::Html_TagHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Html_TagHandler(::android::text::Html_TagHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Html_TagHandler& operator=(const ::android::text::Html_TagHandler& x) {obj = x.obj; return *this;}
    ::android::text::Html_TagHandler& operator=(::android::text::Html_TagHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void handleTag(bool, const ::java::lang::String&, const ::android::text::Editable&, const ::org::xml::sax::XMLReader&) const ;

};
}
}


