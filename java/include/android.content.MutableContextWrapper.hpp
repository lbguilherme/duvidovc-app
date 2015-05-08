#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContextWrapper.hpp"

namespace android { namespace content { class Context; } }

namespace android {
namespace content {
class MutableContextWrapper : public virtual ::java::lang::Object,
                              public virtual ::android::content::ContextWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MutableContextWrapper(jobject _obj) : ::java::lang::Object(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MutableContextWrapper(const ::android::content::MutableContextWrapper& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    MutableContextWrapper(::android::content::MutableContextWrapper&& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::MutableContextWrapper& operator=(const ::android::content::MutableContextWrapper& x) {obj = x.obj; return *this;}
    ::android::content::MutableContextWrapper& operator=(::android::content::MutableContextWrapper&& x) {obj = std::move(x.obj); return *this;}
    
    MutableContextWrapper(const ::android::content::Context&);
    void setBaseContext(const ::android::content::Context&) const ;

};
}
}


