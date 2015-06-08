#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"

namespace android { namespace util { class JsonToken; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class JsonReader : public virtual ::java::lang::Object,
                   public virtual ::java::io::Closeable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JsonReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JsonReader(const ::android::util::JsonReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    JsonReader(::android::util::JsonReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::JsonReader& operator=(const ::android::util::JsonReader& x) {obj = x.obj; return *this;}
    ::android::util::JsonReader& operator=(::android::util::JsonReader&& x) {obj = std::move(x.obj); return *this;}
    
    JsonReader(const ::java::io::Reader&);
    void setLenient(bool) const;
    bool isLenient() const;
    void beginArray() const;
    void endArray() const;
    void beginObject() const;
    void endObject() const;
    bool hasNext() const;
    ::android::util::JsonToken peek() const;
    ::java::lang::String nextName() const;
    ::java::lang::String nextString() const;
    bool nextBoolean() const;
    void nextNull() const;
    double nextDouble() const;
    int64_t nextLong() const;
    int32_t nextInt() const;
    void close() const;
    void skipValue() const;
    ::java::lang::String toString() const;

};
}
}


