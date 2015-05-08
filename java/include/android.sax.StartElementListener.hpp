#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace xml { namespace sax { class Attributes; } } }

namespace android {
namespace sax {
class StartElementListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StartElementListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StartElementListener(const ::android::sax::StartElementListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StartElementListener(::android::sax::StartElementListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::sax::StartElementListener& operator=(const ::android::sax::StartElementListener& x) {obj = x.obj; return *this;}
    ::android::sax::StartElementListener& operator=(::android::sax::StartElementListener&& x) {obj = std::move(x.obj); return *this;}
    
    void start(const ::org::xml::sax::Attributes&) const ;

};
}
}


