#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"

namespace android { namespace util { class JsonWriter; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class Number; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class JsonWriter : public virtual ::java::lang::Object,
                   public virtual ::java::io::Closeable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JsonWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JsonWriter(const ::android::util::JsonWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    JsonWriter(::android::util::JsonWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::JsonWriter& operator=(const ::android::util::JsonWriter& x) {obj = x.obj; return *this;}
    ::android::util::JsonWriter& operator=(::android::util::JsonWriter&& x) {obj = std::move(x.obj); return *this;}
    
    JsonWriter(const ::java::io::Writer&);
    void setIndent(const ::java::lang::String&) const ;
    void setLenient(bool) const ;
    bool isLenient() const ;
    ::android::util::JsonWriter beginArray() const ;
    ::android::util::JsonWriter endArray() const ;
    ::android::util::JsonWriter beginObject() const ;
    ::android::util::JsonWriter endObject() const ;
    ::android::util::JsonWriter name(const ::java::lang::String&) const ;
    ::android::util::JsonWriter value(const ::java::lang::String&) const ;
    ::android::util::JsonWriter nullValue() const ;
    ::android::util::JsonWriter value(bool) const ;
    ::android::util::JsonWriter value(double) const ;
    ::android::util::JsonWriter value(int64_t) const ;
    ::android::util::JsonWriter value(const ::java::lang::Number&) const ;
    void flush() const ;
    void close() const ;

};
}
}


