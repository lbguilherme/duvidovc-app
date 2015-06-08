#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace util { class Property; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class Property : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Property(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Property(const ::android::util::Property& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Property(::android::util::Property&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Property& operator=(const ::android::util::Property& x) {obj = x.obj; return *this;}
    ::android::util::Property& operator=(::android::util::Property&& x) {obj = std::move(x.obj); return *this;}
    
    Property(const ::java::lang::Class&, const ::java::lang::String&);
    static ::android::util::Property of(const ::java::lang::Class&, const ::java::lang::Class&, const ::java::lang::String&);
    bool isReadOnly() const;
    void set(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    ::java::lang::String getName() const;
    ::java::lang::Class getType() const;

};
}
}


