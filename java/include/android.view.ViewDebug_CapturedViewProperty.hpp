#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"


namespace android {
namespace view {
class ViewDebug_CapturedViewProperty : public virtual ::java::lang::Object,
                                       public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDebug_CapturedViewProperty(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDebug_CapturedViewProperty(const ::android::view::ViewDebug_CapturedViewProperty& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    ViewDebug_CapturedViewProperty(::android::view::ViewDebug_CapturedViewProperty&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewDebug_CapturedViewProperty& operator=(const ::android::view::ViewDebug_CapturedViewProperty& x) {obj = x.obj; return *this;}
    ::android::view::ViewDebug_CapturedViewProperty& operator=(::android::view::ViewDebug_CapturedViewProperty&& x) {obj = std::move(x.obj); return *this;}
    
    bool retrieveReturn() const ;

};
}
}


