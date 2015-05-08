#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class View_MeasureSpec : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_MeasureSpec(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_MeasureSpec(const ::android::view::View_MeasureSpec& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_MeasureSpec(::android::view::View_MeasureSpec&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_MeasureSpec& operator=(const ::android::view::View_MeasureSpec& x) {obj = x.obj; return *this;}
    ::android::view::View_MeasureSpec& operator=(::android::view::View_MeasureSpec&& x) {obj = std::move(x.obj); return *this;}
    
    View_MeasureSpec();
    static int32_t makeMeasureSpec(int32_t, int32_t);
    static int32_t getMode(int32_t);
    static int32_t getSize(int32_t);
    static ::java::lang::String toString(int32_t);

};
}
}


