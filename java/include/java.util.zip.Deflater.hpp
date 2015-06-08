#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace util {
namespace zip {
class Deflater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Deflater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Deflater(const ::java::util::zip::Deflater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Deflater(::java::util::zip::Deflater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::Deflater& operator=(const ::java::util::zip::Deflater& x) {obj = x.obj; return *this;}
    ::java::util::zip::Deflater& operator=(::java::util::zip::Deflater&& x) {obj = std::move(x.obj); return *this;}
    
    Deflater();
    Deflater(int32_t);
    Deflater(int32_t, bool);
    int32_t deflate(const std::vector< int8_t>&) const;
    int32_t deflate(const std::vector< int8_t>&, int32_t, int32_t) const;
    void end() const;
    void finish() const;
    bool finished() const;
    int32_t getAdler() const;
    int32_t getTotalIn() const;
    int32_t getTotalOut() const;
    bool needsInput() const;
    void reset() const;
    void setDictionary(const std::vector< int8_t>&) const;
    void setDictionary(const std::vector< int8_t>&, int32_t, int32_t) const;
    void setInput(const std::vector< int8_t>&) const;
    void setInput(const std::vector< int8_t>&, int32_t, int32_t) const;
    void setLevel(int32_t) const;
    void setStrategy(int32_t) const;
    int64_t getBytesRead() const;
    int64_t getBytesWritten() const;

};
}
}
}


