#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace internal {
class GraphUtil : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphUtil(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphUtil(const ::com::facebook::internal::GraphUtil& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphUtil(::com::facebook::internal::GraphUtil&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::GraphUtil& operator=(const ::com::facebook::internal::GraphUtil& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::GraphUtil& operator=(::com::facebook::internal::GraphUtil&& x) {obj = std::move(x.obj); return *this;}
    
    GraphUtil();
    static ::org::json::JSONObject createOpenGraphActionForPost(const ::java::lang::String&);
    static ::org::json::JSONObject createOpenGraphObjectForPost(const ::java::lang::String&);
    static ::org::json::JSONObject createOpenGraphObjectForPost(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::org::json::JSONObject&, const ::java::lang::String&);
    static bool isOpenGraphObjectForPost(const ::org::json::JSONObject&);

};
}
}
}


