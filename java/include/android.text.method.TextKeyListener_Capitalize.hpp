#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace text { namespace method { class TextKeyListener_Capitalize; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace method {
class TextKeyListener_Capitalize : public virtual ::java::lang::Object,
                                   public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextKeyListener_Capitalize(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextKeyListener_Capitalize(const ::android::text::method::TextKeyListener_Capitalize& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    TextKeyListener_Capitalize(::android::text::method::TextKeyListener_Capitalize&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::TextKeyListener_Capitalize& operator=(const ::android::text::method::TextKeyListener_Capitalize& x) {obj = x.obj; return *this;}
    ::android::text::method::TextKeyListener_Capitalize& operator=(::android::text::method::TextKeyListener_Capitalize&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::text::method::TextKeyListener_Capitalize> values();
    static ::android::text::method::TextKeyListener_Capitalize valueOf(const ::java::lang::String&);

};
}
}
}


