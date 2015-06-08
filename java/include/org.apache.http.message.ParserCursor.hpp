#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace message {
class ParserCursor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParserCursor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParserCursor(const ::org::apache::http::message::ParserCursor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ParserCursor(::org::apache::http::message::ParserCursor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::ParserCursor& operator=(const ::org::apache::http::message::ParserCursor& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::ParserCursor& operator=(::org::apache::http::message::ParserCursor&& x) {obj = std::move(x.obj); return *this;}
    
    ParserCursor(int32_t, int32_t);
    int32_t getLowerBound() const;
    int32_t getUpperBound() const;
    int32_t getPos() const;
    void updatePos(int32_t) const;
    bool atEnd() const;
    ::java::lang::String toString() const;

};
}
}
}
}


