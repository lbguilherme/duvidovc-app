#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class ClipboardManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClipboardManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClipboardManager(const ::android::text::ClipboardManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClipboardManager(::android::text::ClipboardManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::ClipboardManager& operator=(const ::android::text::ClipboardManager& x) {obj = x.obj; return *this;}
    ::android::text::ClipboardManager& operator=(::android::text::ClipboardManager&& x) {obj = std::move(x.obj); return *this;}
    
    ClipboardManager();
    ::java::lang::CharSequence getText() const ;
    void setText(const ::java::lang::CharSequence&) const ;
    bool hasText() const ;

};
}
}


