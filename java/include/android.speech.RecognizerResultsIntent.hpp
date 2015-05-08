#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace speech {
class RecognizerResultsIntent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RecognizerResultsIntent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RecognizerResultsIntent(const ::android::speech::RecognizerResultsIntent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RecognizerResultsIntent(::android::speech::RecognizerResultsIntent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::RecognizerResultsIntent& operator=(const ::android::speech::RecognizerResultsIntent& x) {obj = x.obj; return *this;}
    ::android::speech::RecognizerResultsIntent& operator=(::android::speech::RecognizerResultsIntent&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


