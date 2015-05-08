#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.sax.EndElementListener.hpp"
#include "android.sax.StartElementListener.hpp"


namespace android {
namespace sax {
class ElementListener : public virtual ::java::lang::Object,
                        public virtual ::android::sax::EndElementListener,
                        public virtual ::android::sax::StartElementListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ElementListener(jobject _obj) : ::java::lang::Object(_obj), ::android::sax::EndElementListener(_obj), ::android::sax::StartElementListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ElementListener(const ::android::sax::ElementListener& x) : ::java::lang::Object((jobject)0), ::android::sax::EndElementListener((jobject)0), ::android::sax::StartElementListener((jobject)0) {obj = x.obj;}
    ElementListener(::android::sax::ElementListener&& x) : ::java::lang::Object((jobject)0), ::android::sax::EndElementListener((jobject)0), ::android::sax::StartElementListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::sax::ElementListener& operator=(const ::android::sax::ElementListener& x) {obj = x.obj; return *this;}
    ::android::sax::ElementListener& operator=(::android::sax::ElementListener&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


