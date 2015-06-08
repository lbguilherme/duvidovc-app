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
class Inflater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Inflater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Inflater(const ::java::util::zip::Inflater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Inflater(::java::util::zip::Inflater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::Inflater& operator=(const ::java::util::zip::Inflater& x) {obj = x.obj; return *this;}
    ::java::util::zip::Inflater& operator=(::java::util::zip::Inflater&& x) {obj = std::move(x.obj); return *this;}
    
    Inflater();
    Inflater(bool);
    void end() const;
    bool finished() const;
    int32_t getAdler() const;
    int64_t getBytesRead() const;
    int64_t getBytesWritten() const;
    int32_t getRemaining() const;
    int32_t getTotalIn() const;
    int32_t getTotalOut() const;
    int32_t inflate(const std::vector< int8_t>&) const;
    int32_t inflate(const std::vector< int8_t>&, int32_t, int32_t) const;
    bool needsDictionary() const;
    bool needsInput() const;
    void reset() const;
    void setDictionary(const std::vector< int8_t>&) const;
    void setDictionary(const std::vector< int8_t>&, int32_t, int32_t) const;
    void setInput(const std::vector< int8_t>&) const;
    void setInput(const std::vector< int8_t>&, int32_t, int32_t) const;

};
}
}
}


