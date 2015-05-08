#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace json { class JSONException; } }

namespace org {
namespace json {
class JSONTokener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JSONTokener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JSONTokener(const ::org::json::JSONTokener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JSONTokener(::org::json::JSONTokener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::json::JSONTokener& operator=(const ::org::json::JSONTokener& x) {obj = x.obj; return *this;}
    ::org::json::JSONTokener& operator=(::org::json::JSONTokener&& x) {obj = std::move(x.obj); return *this;}
    
    JSONTokener(const ::java::lang::String&);
    ::java::lang::Object nextValue() const ;
    ::java::lang::String nextString(uint16_t) const ;
    ::org::json::JSONException syntaxError(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;
    bool more() const ;
    uint16_t next() const ;
    uint16_t next(uint16_t) const ;
    uint16_t nextClean() const ;
    ::java::lang::String next(int32_t) const ;
    ::java::lang::String nextTo(const ::java::lang::String&) const ;
    ::java::lang::String nextTo(uint16_t) const ;
    void skipPast(const ::java::lang::String&) const ;
    uint16_t skipTo(uint16_t) const ;
    void back() const ;
    static int32_t dehexchar(uint16_t);

};
}
}


