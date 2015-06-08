#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace util {
class Rfc822Token : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Rfc822Token(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Rfc822Token(const ::android::text::util::Rfc822Token& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Rfc822Token(::android::text::util::Rfc822Token&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::util::Rfc822Token& operator=(const ::android::text::util::Rfc822Token& x) {obj = x.obj; return *this;}
    ::android::text::util::Rfc822Token& operator=(::android::text::util::Rfc822Token&& x) {obj = std::move(x.obj); return *this;}
    
    Rfc822Token(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getName() const;
    ::java::lang::String getAddress() const;
    ::java::lang::String getComment() const;
    void setName(const ::java::lang::String&) const;
    void setAddress(const ::java::lang::String&) const;
    void setComment(const ::java::lang::String&) const;
    ::java::lang::String toString() const;
    static ::java::lang::String quoteNameIfNecessary(const ::java::lang::String&);
    static ::java::lang::String quoteName(const ::java::lang::String&);
    static ::java::lang::String quoteComment(const ::java::lang::String&);
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;

};
}
}
}


