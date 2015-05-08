#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace view {
class ViewGroup_LayoutParams : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroup_LayoutParams(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroup_LayoutParams(const ::android::view::ViewGroup_LayoutParams& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewGroup_LayoutParams(::android::view::ViewGroup_LayoutParams&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewGroup_LayoutParams& operator=(const ::android::view::ViewGroup_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::view::ViewGroup_LayoutParams& operator=(::android::view::ViewGroup_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    ViewGroup_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ViewGroup_LayoutParams(int32_t, int32_t);

};
}
}


