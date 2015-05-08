#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace content { namespace res { class XmlResourceParser; } } }
namespace android { namespace inputmethodservice { class Keyboard_Row; } }

namespace android {
namespace inputmethodservice {
class Keyboard_Key : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Keyboard_Key(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Keyboard_Key(const ::android::inputmethodservice::Keyboard_Key& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Keyboard_Key(::android::inputmethodservice::Keyboard_Key&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::Keyboard_Key& operator=(const ::android::inputmethodservice::Keyboard_Key& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::Keyboard_Key& operator=(::android::inputmethodservice::Keyboard_Key&& x) {obj = std::move(x.obj); return *this;}
    
    Keyboard_Key(const ::android::inputmethodservice::Keyboard_Row&);
    Keyboard_Key(const ::android::content::res::Resources&, const ::android::inputmethodservice::Keyboard_Row&, int32_t, int32_t, const ::android::content::res::XmlResourceParser&);
    void onPressed() const ;
    void onReleased(bool) const ;
    bool isInside(int32_t, int32_t) const ;
    int32_t squaredDistanceFrom(int32_t, int32_t) const ;
    std::vector< int32_t> getCurrentDrawableState() const ;

};
}
}


