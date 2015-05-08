#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace net { class Uri; } }

namespace android {
namespace content {
class Entity_NamedContentValues : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Entity_NamedContentValues(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Entity_NamedContentValues(const ::android::content::Entity_NamedContentValues& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Entity_NamedContentValues(::android::content::Entity_NamedContentValues&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Entity_NamedContentValues& operator=(const ::android::content::Entity_NamedContentValues& x) {obj = x.obj; return *this;}
    ::android::content::Entity_NamedContentValues& operator=(::android::content::Entity_NamedContentValues&& x) {obj = std::move(x.obj); return *this;}
    
    Entity_NamedContentValues(const ::android::net::Uri&, const ::android::content::ContentValues&);

};
}
}


