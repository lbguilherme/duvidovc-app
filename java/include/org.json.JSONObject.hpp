#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Number; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class Map; } }
namespace org { namespace json { class JSONArray; } }
namespace org { namespace json { class JSONObject; } }
namespace org { namespace json { class JSONTokener; } }

namespace org {
namespace json {
class JSONObject : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JSONObject(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JSONObject(const ::org::json::JSONObject& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JSONObject(::org::json::JSONObject&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::json::JSONObject& operator=(const ::org::json::JSONObject& x) {obj = x.obj; return *this;}
    ::org::json::JSONObject& operator=(::org::json::JSONObject&& x) {obj = std::move(x.obj); return *this;}
    
    JSONObject();
    JSONObject(const ::java::util::Map&);
    JSONObject(const ::org::json::JSONTokener&);
    JSONObject(const ::java::lang::String&);
    JSONObject(const ::org::json::JSONObject&, const std::vector< ::java::lang::String>&);
    int32_t length() const ;
    ::org::json::JSONObject put(const ::java::lang::String&, bool) const ;
    ::org::json::JSONObject put(const ::java::lang::String&, double) const ;
    ::org::json::JSONObject put(const ::java::lang::String&, int32_t) const ;
    ::org::json::JSONObject put(const ::java::lang::String&, int64_t) const ;
    ::org::json::JSONObject put(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::org::json::JSONObject putOpt(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::org::json::JSONObject accumulate(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object remove(const ::java::lang::String&) const ;
    bool isNull(const ::java::lang::String&) const ;
    bool has(const ::java::lang::String&) const ;
    ::java::lang::Object get(const ::java::lang::String&) const ;
    ::java::lang::Object opt(const ::java::lang::String&) const ;
    bool getBoolean(const ::java::lang::String&) const ;
    bool optBoolean(const ::java::lang::String&) const ;
    bool optBoolean(const ::java::lang::String&, bool) const ;
    double getDouble(const ::java::lang::String&) const ;
    double optDouble(const ::java::lang::String&) const ;
    double optDouble(const ::java::lang::String&, double) const ;
    int32_t getInt(const ::java::lang::String&) const ;
    int32_t optInt(const ::java::lang::String&) const ;
    int32_t optInt(const ::java::lang::String&, int32_t) const ;
    int64_t getLong(const ::java::lang::String&) const ;
    int64_t optLong(const ::java::lang::String&) const ;
    int64_t optLong(const ::java::lang::String&, int64_t) const ;
    ::java::lang::String getString(const ::java::lang::String&) const ;
    ::java::lang::String optString(const ::java::lang::String&) const ;
    ::java::lang::String optString(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::json::JSONArray getJSONArray(const ::java::lang::String&) const ;
    ::org::json::JSONArray optJSONArray(const ::java::lang::String&) const ;
    ::org::json::JSONObject getJSONObject(const ::java::lang::String&) const ;
    ::org::json::JSONObject optJSONObject(const ::java::lang::String&) const ;
    ::org::json::JSONArray toJSONArray(const ::org::json::JSONArray&) const ;
    ::java::util::Iterator keys() const ;
    ::org::json::JSONArray names() const ;
    ::java::lang::String toString() const ;
    ::java::lang::String toString(int32_t) const ;
    static ::java::lang::String numberToString(const ::java::lang::Number&);
    static ::java::lang::String quote(const ::java::lang::String&);

};
}
}


