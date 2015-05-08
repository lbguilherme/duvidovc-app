#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Iterable.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class TextUtils_StringSplitter : public virtual ::java::lang::Object,
                                 public virtual ::java::lang::Iterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextUtils_StringSplitter(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextUtils_StringSplitter(const ::android::text::TextUtils_StringSplitter& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0) {obj = x.obj;}
    TextUtils_StringSplitter(::android::text::TextUtils_StringSplitter&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::TextUtils_StringSplitter& operator=(const ::android::text::TextUtils_StringSplitter& x) {obj = x.obj; return *this;}
    ::android::text::TextUtils_StringSplitter& operator=(::android::text::TextUtils_StringSplitter&& x) {obj = std::move(x.obj); return *this;}
    
    void setString(const ::java::lang::String&) const ;

};
}
}


