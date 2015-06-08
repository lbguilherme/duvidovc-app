#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace content {
class Entity : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Entity(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Entity(const ::android::content::Entity& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Entity(::android::content::Entity&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Entity& operator=(const ::android::content::Entity& x) {obj = x.obj; return *this;}
    ::android::content::Entity& operator=(::android::content::Entity&& x) {obj = std::move(x.obj); return *this;}
    
    Entity(const ::android::content::ContentValues&);
    ::android::content::ContentValues getEntityValues() const;
    ::java::util::ArrayList getSubValues() const;
    void addSubValue(const ::android::net::Uri&, const ::android::content::ContentValues&) const;
    ::java::lang::String toString() const;

};
}
}

#include "android.content.Entity_NamedContentValues.hpp"

