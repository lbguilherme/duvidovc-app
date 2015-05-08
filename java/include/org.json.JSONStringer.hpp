#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace json { class JSONStringer; } }

namespace org {
namespace json {
class JSONStringer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JSONStringer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JSONStringer(const ::org::json::JSONStringer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JSONStringer(::org::json::JSONStringer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::json::JSONStringer& operator=(const ::org::json::JSONStringer& x) {obj = x.obj; return *this;}
    ::org::json::JSONStringer& operator=(::org::json::JSONStringer&& x) {obj = std::move(x.obj); return *this;}
    
    JSONStringer();
    ::org::json::JSONStringer array() const ;
    ::org::json::JSONStringer endArray() const ;
    ::org::json::JSONStringer object() const ;
    ::org::json::JSONStringer endObject() const ;
    ::org::json::JSONStringer value(const ::java::lang::Object&) const ;
    ::org::json::JSONStringer value(bool) const ;
    ::org::json::JSONStringer value(double) const ;
    ::org::json::JSONStringer value(int64_t) const ;
    ::org::json::JSONStringer key(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;

};
}
}


