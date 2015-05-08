#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace org { namespace json { class JSONArray; } }
namespace org { namespace json { class JSONObject; } }
namespace org { namespace json { class JSONTokener; } }

namespace org {
namespace json {
class JSONArray : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JSONArray(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JSONArray(const ::org::json::JSONArray& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JSONArray(::org::json::JSONArray&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::json::JSONArray& operator=(const ::org::json::JSONArray& x) {obj = x.obj; return *this;}
    ::org::json::JSONArray& operator=(::org::json::JSONArray&& x) {obj = std::move(x.obj); return *this;}
    
    JSONArray();
    JSONArray(const ::java::util::Collection&);
    JSONArray(const ::org::json::JSONTokener&);
    JSONArray(const ::java::lang::String&);
    int32_t length() const ;
    ::org::json::JSONArray put(bool) const ;
    ::org::json::JSONArray put(double) const ;
    ::org::json::JSONArray put(int32_t) const ;
    ::org::json::JSONArray put(int64_t) const ;
    ::org::json::JSONArray put(const ::java::lang::Object&) const ;
    ::org::json::JSONArray put(int32_t, bool) const ;
    ::org::json::JSONArray put(int32_t, double) const ;
    ::org::json::JSONArray put(int32_t, int32_t) const ;
    ::org::json::JSONArray put(int32_t, int64_t) const ;
    ::org::json::JSONArray put(int32_t, const ::java::lang::Object&) const ;
    bool isNull(int32_t) const ;
    ::java::lang::Object get(int32_t) const ;
    ::java::lang::Object opt(int32_t) const ;
    bool getBoolean(int32_t) const ;
    bool optBoolean(int32_t) const ;
    bool optBoolean(int32_t, bool) const ;
    double getDouble(int32_t) const ;
    double optDouble(int32_t) const ;
    double optDouble(int32_t, double) const ;
    int32_t getInt(int32_t) const ;
    int32_t optInt(int32_t) const ;
    int32_t optInt(int32_t, int32_t) const ;
    int64_t getLong(int32_t) const ;
    int64_t optLong(int32_t) const ;
    int64_t optLong(int32_t, int64_t) const ;
    ::java::lang::String getString(int32_t) const ;
    ::java::lang::String optString(int32_t) const ;
    ::java::lang::String optString(int32_t, const ::java::lang::String&) const ;
    ::org::json::JSONArray getJSONArray(int32_t) const ;
    ::org::json::JSONArray optJSONArray(int32_t) const ;
    ::org::json::JSONObject getJSONObject(int32_t) const ;
    ::org::json::JSONObject optJSONObject(int32_t) const ;
    ::org::json::JSONObject toJSONObject(const ::org::json::JSONArray&) const ;
    ::java::lang::String join(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;
    ::java::lang::String toString(int32_t) const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;

};
}
}


