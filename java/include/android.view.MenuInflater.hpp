#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class Menu; } }

namespace android {
namespace view {
class MenuInflater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuInflater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuInflater(const ::android::view::MenuInflater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MenuInflater(::android::view::MenuInflater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::MenuInflater& operator=(const ::android::view::MenuInflater& x) {obj = x.obj; return *this;}
    ::android::view::MenuInflater& operator=(::android::view::MenuInflater&& x) {obj = std::move(x.obj); return *this;}
    
    MenuInflater(const ::android::content::Context&);
    void inflate(int32_t, const ::android::view::Menu&) const ;

};
}
}


