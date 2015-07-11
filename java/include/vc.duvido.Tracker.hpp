#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace vc {
namespace duvido {
class Tracker : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Tracker(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Tracker(const ::vc::duvido::Tracker& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Tracker(::vc::duvido::Tracker&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::Tracker& operator=(const ::vc::duvido::Tracker& x) {obj = x.obj; return *this;}
    ::vc::duvido::Tracker& operator=(::vc::duvido::Tracker&& x) {obj = std::move(x.obj); return *this;}
    
    Tracker();
    static void initialize(const ::android::content::Context&);
    static void flush();
    static void event(const ::java::lang::String&);
    static void event(const ::java::lang::String&, const ::java::lang::String&);

};
}
}


