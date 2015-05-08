#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace sax {
class EndElementListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EndElementListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EndElementListener(const ::android::sax::EndElementListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EndElementListener(::android::sax::EndElementListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::sax::EndElementListener& operator=(const ::android::sax::EndElementListener& x) {obj = x.obj; return *this;}
    ::android::sax::EndElementListener& operator=(::android::sax::EndElementListener&& x) {obj = std::move(x.obj); return *this;}
    
    void end() const ;

};
}
}


