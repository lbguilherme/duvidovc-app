#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace sax { class Element; } }
namespace android { namespace sax { class ElementListener; } }
namespace android { namespace sax { class EndElementListener; } }
namespace android { namespace sax { class EndTextElementListener; } }
namespace android { namespace sax { class StartElementListener; } }
namespace android { namespace sax { class TextElementListener; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace sax {
class Element : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Element(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Element(const ::android::sax::Element& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Element(::android::sax::Element&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::sax::Element& operator=(const ::android::sax::Element& x) {obj = x.obj; return *this;}
    ::android::sax::Element& operator=(::android::sax::Element&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::sax::Element getChild(const ::java::lang::String&) const;
    ::android::sax::Element getChild(const ::java::lang::String&, const ::java::lang::String&) const;
    ::android::sax::Element requireChild(const ::java::lang::String&) const;
    ::android::sax::Element requireChild(const ::java::lang::String&, const ::java::lang::String&) const;
    void setElementListener(const ::android::sax::ElementListener&) const;
    void setTextElementListener(const ::android::sax::TextElementListener&) const;
    void setStartElementListener(const ::android::sax::StartElementListener&) const;
    void setEndElementListener(const ::android::sax::EndElementListener&) const;
    void setEndTextElementListener(const ::android::sax::EndTextElementListener&) const;
    ::java::lang::String toString() const;

};
}
}


