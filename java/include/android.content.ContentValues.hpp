#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Boolean; } }
namespace java { namespace lang { class Byte; } }
namespace java { namespace lang { class Double; } }
namespace java { namespace lang { class Float; } }
namespace java { namespace lang { class Integer; } }
namespace java { namespace lang { class Long; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Short; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace content {
class ContentValues : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentValues(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentValues(const ::android::content::ContentValues& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ContentValues(::android::content::ContentValues&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentValues& operator=(const ::android::content::ContentValues& x) {obj = x.obj; return *this;}
    ::android::content::ContentValues& operator=(::android::content::ContentValues&& x) {obj = std::move(x.obj); return *this;}
    
    ContentValues();
    ContentValues(int32_t);
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    void put(const ::java::lang::String&, const ::java::lang::String&) const ;
    void putAll(const ::android::content::ContentValues&) const ;
    void put(const ::java::lang::String&, const ::java::lang::Byte&) const ;
    void put(const ::java::lang::String&, const ::java::lang::Short&) const ;
    void put(const ::java::lang::String&, const ::java::lang::Integer&) const ;
    void put(const ::java::lang::String&, const ::java::lang::Long&) const ;
    void put(const ::java::lang::String&, const ::java::lang::Float&) const ;
    void put(const ::java::lang::String&, const ::java::lang::Double&) const ;
    void put(const ::java::lang::String&, const ::java::lang::Boolean&) const ;
    void put(const ::java::lang::String&, const std::vector< int8_t>&) const ;
    void putNull(const ::java::lang::String&) const ;
    int32_t size() const ;
    void remove(const ::java::lang::String&) const ;
    void clear() const ;
    bool containsKey(const ::java::lang::String&) const ;
    ::java::lang::Object get(const ::java::lang::String&) const ;
    ::java::lang::String getAsString(const ::java::lang::String&) const ;
    ::java::lang::Long getAsLong(const ::java::lang::String&) const ;
    ::java::lang::Integer getAsInteger(const ::java::lang::String&) const ;
    ::java::lang::Short getAsShort(const ::java::lang::String&) const ;
    ::java::lang::Byte getAsByte(const ::java::lang::String&) const ;
    ::java::lang::Double getAsDouble(const ::java::lang::String&) const ;
    ::java::lang::Float getAsFloat(const ::java::lang::String&) const ;
    ::java::lang::Boolean getAsBoolean(const ::java::lang::String&) const ;
    std::vector< int8_t> getAsByteArray(const ::java::lang::String&) const ;
    ::java::util::Set valueSet() const ;
    ::java::util::Set keySet() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}


