#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class Signature : public virtual ::java::lang::Object,
                  public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Signature(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Signature(const ::android::content::pm::Signature& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Signature(::android::content::pm::Signature&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::Signature& operator=(const ::android::content::pm::Signature& x) {obj = x.obj; return *this;}
    ::android::content::pm::Signature& operator=(::android::content::pm::Signature&& x) {obj = std::move(x.obj); return *this;}
    
    Signature(const std::vector< int8_t>&);
    Signature(const ::java::lang::String&);
    std::vector< uint16_t> toChars() const;
    std::vector< uint16_t> toChars(const std::vector< uint16_t>&, const std::vector< int32_t>&) const;
    ::java::lang::String toCharsString() const;
    std::vector< int8_t> toByteArray() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


