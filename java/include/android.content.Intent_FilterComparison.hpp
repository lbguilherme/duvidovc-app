#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace content {
class Intent_FilterComparison : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Intent_FilterComparison(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Intent_FilterComparison(const ::android::content::Intent_FilterComparison& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Intent_FilterComparison(::android::content::Intent_FilterComparison&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Intent_FilterComparison& operator=(const ::android::content::Intent_FilterComparison& x) {obj = x.obj; return *this;}
    ::android::content::Intent_FilterComparison& operator=(::android::content::Intent_FilterComparison&& x) {obj = std::move(x.obj); return *this;}
    
    Intent_FilterComparison(const ::android::content::Intent&);
    ::android::content::Intent getIntent() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;

};
}
}


