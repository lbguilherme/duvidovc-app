#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace content {
class ClipData_Item : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClipData_Item(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClipData_Item(const ::android::content::ClipData_Item& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClipData_Item(::android::content::ClipData_Item&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ClipData_Item& operator=(const ::android::content::ClipData_Item& x) {obj = x.obj; return *this;}
    ::android::content::ClipData_Item& operator=(::android::content::ClipData_Item&& x) {obj = std::move(x.obj); return *this;}
    
    ClipData_Item(const ::java::lang::CharSequence&);
    ClipData_Item(const ::android::content::Intent&);
    ClipData_Item(const ::android::net::Uri&);
    ClipData_Item(const ::java::lang::CharSequence&, const ::android::content::Intent&, const ::android::net::Uri&);
    ::java::lang::CharSequence getText() const;
    ::android::content::Intent getIntent() const;
    ::android::net::Uri getUri() const;
    ::java::lang::CharSequence coerceToText(const ::android::content::Context&) const;

};
}
}


