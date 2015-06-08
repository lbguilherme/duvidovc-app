#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }

namespace android {
namespace view {
class LayoutInflater_Filter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflater_Filter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflater_Filter(const ::android::view::LayoutInflater_Filter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutInflater_Filter(::android::view::LayoutInflater_Filter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::LayoutInflater_Filter& operator=(const ::android::view::LayoutInflater_Filter& x) {obj = x.obj; return *this;}
    ::android::view::LayoutInflater_Filter& operator=(::android::view::LayoutInflater_Filter&& x) {obj = std::move(x.obj); return *this;}
    
    bool onLoadClass(const ::java::lang::Class&) const;

};
}
}


