#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace content { namespace res { class XmlResourceParser; } } }
namespace android { namespace inputmethodservice { class Keyboard; } }

namespace android {
namespace inputmethodservice {
class Keyboard_Row : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Keyboard_Row(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Keyboard_Row(const ::android::inputmethodservice::Keyboard_Row& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Keyboard_Row(::android::inputmethodservice::Keyboard_Row&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::Keyboard_Row& operator=(const ::android::inputmethodservice::Keyboard_Row& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::Keyboard_Row& operator=(::android::inputmethodservice::Keyboard_Row&& x) {obj = std::move(x.obj); return *this;}
    
    Keyboard_Row(const ::android::inputmethodservice::Keyboard&);
    Keyboard_Row(const ::android::content::res::Resources&, const ::android::inputmethodservice::Keyboard&, const ::android::content::res::XmlResourceParser&);

};
}
}


