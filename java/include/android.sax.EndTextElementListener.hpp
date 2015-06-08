#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace sax {
class EndTextElementListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EndTextElementListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EndTextElementListener(const ::android::sax::EndTextElementListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EndTextElementListener(::android::sax::EndTextElementListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::sax::EndTextElementListener& operator=(const ::android::sax::EndTextElementListener& x) {obj = x.obj; return *this;}
    ::android::sax::EndTextElementListener& operator=(::android::sax::EndTextElementListener&& x) {obj = std::move(x.obj); return *this;}
    
    void end(const ::java::lang::String&) const;

};
}
}


