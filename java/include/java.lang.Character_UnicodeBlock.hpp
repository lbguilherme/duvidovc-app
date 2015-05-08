#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Character_Subset.hpp"

namespace java { namespace lang { class Character_UnicodeBlock; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Character_UnicodeBlock : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Character_Subset {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Character_UnicodeBlock(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Character_Subset(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Character_UnicodeBlock(const ::java::lang::Character_UnicodeBlock& x) : ::java::lang::Object((jobject)0), ::java::lang::Character_Subset((jobject)0) {obj = x.obj;}
    Character_UnicodeBlock(::java::lang::Character_UnicodeBlock&& x) : ::java::lang::Object((jobject)0), ::java::lang::Character_Subset((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Character_UnicodeBlock& operator=(const ::java::lang::Character_UnicodeBlock& x) {obj = x.obj; return *this;}
    ::java::lang::Character_UnicodeBlock& operator=(::java::lang::Character_UnicodeBlock&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::Character_UnicodeBlock forName(const ::java::lang::String&);
    static ::java::lang::Character_UnicodeBlock of(uint16_t);
    static ::java::lang::Character_UnicodeBlock of(int32_t);

};
}
}


