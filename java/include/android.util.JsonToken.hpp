#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace util { class JsonToken; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class JsonToken : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JsonToken(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JsonToken(const ::android::util::JsonToken& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    JsonToken(::android::util::JsonToken&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::JsonToken& operator=(const ::android::util::JsonToken& x) {obj = x.obj; return *this;}
    ::android::util::JsonToken& operator=(::android::util::JsonToken&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::util::JsonToken> values();
    static ::android::util::JsonToken valueOf(const ::java::lang::String&);

};
}
}


