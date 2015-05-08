#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class DateSorter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateSorter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateSorter(const ::android::webkit::DateSorter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DateSorter(::android::webkit::DateSorter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::DateSorter& operator=(const ::android::webkit::DateSorter& x) {obj = x.obj; return *this;}
    ::android::webkit::DateSorter& operator=(::android::webkit::DateSorter&& x) {obj = std::move(x.obj); return *this;}
    
    DateSorter(const ::android::content::Context&);
    int32_t getIndex(int64_t) const ;
    ::java::lang::String getLabel(int32_t) const ;
    int64_t getBoundary(int32_t) const ;

};
}
}


