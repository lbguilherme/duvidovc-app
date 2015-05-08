#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class ViewDebug_IntToString : public virtual ::java::lang::Object,
                              public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDebug_IntToString(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDebug_IntToString(const ::android::view::ViewDebug_IntToString& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    ViewDebug_IntToString(::android::view::ViewDebug_IntToString&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewDebug_IntToString& operator=(const ::android::view::ViewDebug_IntToString& x) {obj = x.obj; return *this;}
    ::android::view::ViewDebug_IntToString& operator=(::android::view::ViewDebug_IntToString&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t from() const ;
    ::java::lang::String to() const ;

};
}
}


