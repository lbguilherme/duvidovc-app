#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Map_Entry.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class JsonUtil_JSONObjectEntry : public virtual ::java::lang::Object,
                                 public virtual ::java::util::Map_Entry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JsonUtil_JSONObjectEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Map_Entry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JsonUtil_JSONObjectEntry(const ::com::facebook::internal::JsonUtil_JSONObjectEntry& x) : ::java::lang::Object((jobject)0), ::java::util::Map_Entry((jobject)0) {obj = x.obj;}
    JsonUtil_JSONObjectEntry(::com::facebook::internal::JsonUtil_JSONObjectEntry&& x) : ::java::lang::Object((jobject)0), ::java::util::Map_Entry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::JsonUtil_JSONObjectEntry& operator=(const ::com::facebook::internal::JsonUtil_JSONObjectEntry& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::JsonUtil_JSONObjectEntry& operator=(::com::facebook::internal::JsonUtil_JSONObjectEntry&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getKey() const;
    ::java::lang::Object getValue() const;
    ::java::lang::Object setValue(const ::java::lang::Object&) const;

};
}
}
}


