#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace net { class Uri_Builder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class Uri_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Uri_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Uri_Builder(const ::android::net::Uri_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Uri_Builder(::android::net::Uri_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::Uri_Builder& operator=(const ::android::net::Uri_Builder& x) {obj = x.obj; return *this;}
    ::android::net::Uri_Builder& operator=(::android::net::Uri_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    Uri_Builder();
    ::android::net::Uri_Builder scheme(const ::java::lang::String&) const;
    ::android::net::Uri_Builder opaquePart(const ::java::lang::String&) const;
    ::android::net::Uri_Builder encodedOpaquePart(const ::java::lang::String&) const;
    ::android::net::Uri_Builder authority(const ::java::lang::String&) const;
    ::android::net::Uri_Builder encodedAuthority(const ::java::lang::String&) const;
    ::android::net::Uri_Builder path(const ::java::lang::String&) const;
    ::android::net::Uri_Builder encodedPath(const ::java::lang::String&) const;
    ::android::net::Uri_Builder appendPath(const ::java::lang::String&) const;
    ::android::net::Uri_Builder appendEncodedPath(const ::java::lang::String&) const;
    ::android::net::Uri_Builder query(const ::java::lang::String&) const;
    ::android::net::Uri_Builder encodedQuery(const ::java::lang::String&) const;
    ::android::net::Uri_Builder fragment(const ::java::lang::String&) const;
    ::android::net::Uri_Builder encodedFragment(const ::java::lang::String&) const;
    ::android::net::Uri_Builder appendQueryParameter(const ::java::lang::String&, const ::java::lang::String&) const;
    ::android::net::Uri_Builder clearQuery() const;
    ::android::net::Uri build() const;
    ::java::lang::String toString() const;

};
}
}


