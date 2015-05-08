#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class StateSet : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StateSet(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StateSet(const ::android::util::StateSet& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StateSet(::android::util::StateSet&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::StateSet& operator=(const ::android::util::StateSet& x) {obj = x.obj; return *this;}
    ::android::util::StateSet& operator=(::android::util::StateSet&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isWildCard(const std::vector< int32_t>&);
    static bool stateSetMatches(const std::vector< int32_t>&, const std::vector< int32_t>&);
    static bool stateSetMatches(const std::vector< int32_t>&, int32_t);
    static std::vector< int32_t> trimStateSet(const std::vector< int32_t>&, int32_t);
    static ::java::lang::String dump(const std::vector< int32_t>&);

};
}
}


