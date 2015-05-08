#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.sax.EndTextElementListener.hpp"
#include "android.sax.StartElementListener.hpp"


namespace android {
namespace sax {
class TextElementListener : public virtual ::java::lang::Object,
                            public virtual ::android::sax::EndTextElementListener,
                            public virtual ::android::sax::StartElementListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextElementListener(jobject _obj) : ::java::lang::Object(_obj), ::android::sax::EndTextElementListener(_obj), ::android::sax::StartElementListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextElementListener(const ::android::sax::TextElementListener& x) : ::java::lang::Object((jobject)0), ::android::sax::EndTextElementListener((jobject)0), ::android::sax::StartElementListener((jobject)0) {obj = x.obj;}
    TextElementListener(::android::sax::TextElementListener&& x) : ::java::lang::Object((jobject)0), ::android::sax::EndTextElementListener((jobject)0), ::android::sax::StartElementListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::sax::TextElementListener& operator=(const ::android::sax::TextElementListener& x) {obj = x.obj; return *this;}
    ::android::sax::TextElementListener& operator=(::android::sax::TextElementListener&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


