#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class ContactsContract_QuickContact : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_QuickContact(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_QuickContact(const ::android::provider::ContactsContract_QuickContact& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_QuickContact(::android::provider::ContactsContract_QuickContact&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_QuickContact& operator=(const ::android::provider::ContactsContract_QuickContact& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_QuickContact& operator=(::android::provider::ContactsContract_QuickContact&& x) {obj = std::move(x.obj); return *this;}
    
    ContactsContract_QuickContact();
    static void showQuickContact(const ::android::content::Context&, const ::android::view::View&, const ::android::net::Uri&, int32_t, const std::vector< ::java::lang::String>&);
    static void showQuickContact(const ::android::content::Context&, const ::android::graphics::Rect&, const ::android::net::Uri&, int32_t, const std::vector< ::java::lang::String>&);

};
}
}


