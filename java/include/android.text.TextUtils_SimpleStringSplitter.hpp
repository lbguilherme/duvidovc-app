#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.TextUtils_StringSplitter.hpp"
#include "java.util.Iterator.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }

namespace android {
namespace text {
class TextUtils_SimpleStringSplitter : public virtual ::java::lang::Object,
                                       public virtual ::android::text::TextUtils_StringSplitter,
                                       public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextUtils_SimpleStringSplitter(jobject _obj) : ::java::lang::Object(_obj), ::android::text::TextUtils_StringSplitter(_obj), ::java::lang::Iterable(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextUtils_SimpleStringSplitter(const ::android::text::TextUtils_SimpleStringSplitter& x) : ::java::lang::Object((jobject)0), ::android::text::TextUtils_StringSplitter((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    TextUtils_SimpleStringSplitter(::android::text::TextUtils_SimpleStringSplitter&& x) : ::java::lang::Object((jobject)0), ::android::text::TextUtils_StringSplitter((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::TextUtils_SimpleStringSplitter& operator=(const ::android::text::TextUtils_SimpleStringSplitter& x) {obj = x.obj; return *this;}
    ::android::text::TextUtils_SimpleStringSplitter& operator=(::android::text::TextUtils_SimpleStringSplitter&& x) {obj = std::move(x.obj); return *this;}
    
    TextUtils_SimpleStringSplitter(uint16_t);
    void setString(const ::java::lang::String&) const;
    ::java::util::Iterator iterator() const;
    bool hasNext() const;
    ::java::lang::String next() const;
    void remove() const;

};
}
}


