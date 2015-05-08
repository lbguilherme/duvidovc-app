#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace jar { class Pack200_Packer; } } }
namespace java { namespace util { namespace jar { class Pack200_Unpacker; } } }

namespace java {
namespace util {
namespace jar {
class Pack200 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pack200(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pack200(const ::java::util::jar::Pack200& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pack200(::java::util::jar::Pack200&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::Pack200& operator=(const ::java::util::jar::Pack200& x) {obj = x.obj; return *this;}
    ::java::util::jar::Pack200& operator=(::java::util::jar::Pack200&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::jar::Pack200_Packer newPacker();
    static ::java::util::jar::Pack200_Unpacker newUnpacker();

};
}
}
}

#include "java.util.jar.Pack200_Packer.hpp"
#include "java.util.jar.Pack200_Unpacker.hpp"

